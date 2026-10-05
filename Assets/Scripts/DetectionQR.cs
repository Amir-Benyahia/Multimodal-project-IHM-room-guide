using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.Collections;
using ZXing;
using ZXing.Common;
using System;
using System.Collections.Generic;

public class DetectionQR : MonoBehaviour
{
    [Header("AR Foundation")]
    public ARCameraManager cameraManager;

    [Header("Gestion des QR codes")]
    public ScannerQR scannerQR;

    [Header("Webcam (Fallback sans AR)")]
    public RawImage affichageWebcam;

    private WebCamTexture webcam;
    private BarcodeReaderGeneric lecteur;

    private float prochainScan = 0f;
    private float dernierScanTime = 0f;
    private string dernierCode = "";
    private bool scanEnCours = false;

    void Start()
    {
        if (scannerQR == null)
        {
            scannerQR = FindFirstObjectByType<ScannerQR>();
        }

        // Initialisation de ZXing pour la lecture des QR Codes
        lecteur = new BarcodeReaderGeneric
        {
            Options = new DecodingOptions
            {
                PossibleFormats = new List<BarcodeFormat> { BarcodeFormat.QR_CODE },
                TryHarder = true,
                TryInverted = true
            }
        };

#if UNITY_EDITOR
        // Dans l'éditeur Unity (PC / Mac) : allumer la webcam de l'ordinateur
        DemarrerWebcam();
#else
        // Sur smartphone (iPhone / Android) : activer la caméra ARKit Réalité Augmentée
        DemarrerAR();
#endif
    }

    void DemarrerAR()
    {
        if (affichageWebcam != null)
        {
            affichageWebcam.gameObject.SetActive(false);
        }

        if (cameraManager == null)
        {
            cameraManager = FindFirstObjectByType<ARCameraManager>();
        }

        if (cameraManager != null)
        {
            cameraManager.frameReceived += OnCameraFrameReceived;
            Debug.Log("Mode AR Camera initialisé pour le scan automatique des QR codes !");
        }
        else
        {
            Debug.LogWarning("ARCameraManager introuvable, bascule sur la Webcam.");
            DemarrerWebcam();
        }
    }

    void DemarrerWebcam()
    {
        if (WebCamTexture.devices.Length > 0)
        {
            string nomWebcam = WebCamTexture.devices[0].name;
            webcam = new WebCamTexture(nomWebcam, 1280, 720, 30);

            if (affichageWebcam != null)
            {
                affichageWebcam.gameObject.SetActive(true);
                affichageWebcam.texture = webcam;
            }

            webcam.Play();
            Debug.Log("Webcam ordinateur démarrée dans l'éditeur Unity : " + nomWebcam);
        }
        else
        {
            Debug.LogWarning("Aucune webcam détectée sur cet ordinateur. Utilisez les boutons de simulation.");
            if (affichageWebcam != null)
            {
                affichageWebcam.gameObject.SetActive(false);
            }
        }
    }

    void OnDestroy()
    {
        if (cameraManager != null)
        {
            cameraManager.frameReceived -= OnCameraFrameReceived;
        }

        if (webcam != null && webcam.isPlaying)
        {
            webcam.Stop();
        }
    }

    private volatile string codeDetecteEnAttente = null;

    void Update()
    {
        // 1. Déclenchement sur le thread principal de Unity (obligatoire pour modifier l'interface)
        if (!string.IsNullOrEmpty(codeDetecteEnAttente))
        {
            string id = codeDetecteEnAttente;
            codeDetecteEnAttente = null;

            if (id != dernierCode || Time.time - dernierScanTime > 3f)
            {
                dernierCode = id;
                dernierScanTime = Time.time;
                Debug.Log("[DetectionQR] QR Code validé sur le thread principal : " + id);

                if (scannerQR != null)
                {
                    scannerQR.TraiterQRCode(id);
                }
            }
        }

        // Réinitialise le code en mémoire si on ne le voit plus depuis 3 secondes
        if (!string.IsNullOrEmpty(dernierCode) && Time.time - dernierScanTime > 3f)
        {
            dernierCode = "";
        }

        // Mode Webcam classique (dans l'éditeur Unity sur PC/Mac)
        if (webcam != null && webcam.isPlaying && webcam.didUpdateThisFrame && Time.time >= prochainScan)
        {
            prochainScan = Time.time + 0.35f;
            ScannerWebcam();
        }
    }

    private byte[] yuvBuffer;

    void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
    {
        if (Time.time < prochainScan)
            return;

        if (cameraManager == null || !cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
            return;

        prochainScan = Time.time + 0.2f; // Scan 5 fois par seconde

        try
        {
            var plane = image.GetPlane(0);
            int width = image.width;
            int height = image.height;
            int stride = plane.rowStride;
            int length = plane.data.Length;

            if (yuvBuffer == null || yuvBuffer.Length < length)
            {
                yuvBuffer = new byte[length];
            }

            // Copie directe et rapide du plan de luminance Y
            plane.data.CopyTo(yuvBuffer);

            // Libère immédiatement la ressource native AR
            image.Dispose();

            // Création de la source de luminance YUV directe (ultra rapide, pas de conversion de couleur)
            var source = new PlanarYUVLuminanceSource(yuvBuffer, stride, height, 0, 0, width, height, false);
            var resultat = lecteur.Decode(source);

            // Si pas trouvé dans l'orientation brute, tester avec rotation à 90° (mode portrait du téléphone)
            if (resultat == null && source.RotateSupported)
            {
                resultat = lecteur.Decode(source.rotateCounterClockwise());
            }

            if (resultat != null && !string.IsNullOrEmpty(resultat.Text))
            {
                string id = resultat.Text.Trim();
                if (id != dernierCode || Time.time - dernierScanTime > 3f)
                {
                    dernierCode = id;
                    dernierScanTime = Time.time;
                    Debug.Log("QR Code reconnu par la caméra AR : " + id);

                    if (scannerQR != null)
                    {
                        scannerQR.TraiterQRCode(id);
                    }
                }
            }
        }
        catch (Exception ex)
        {
            Debug.LogWarning("Erreur traitement AR frame : " + ex.Message);
            image.Dispose();
        }
    }

    void OnGUI()
    {
        // Bandeau d'état visuel en haut de l'écran pour confirmer que le scan est bien actif sur le téléphone
        GUIStyle style = new GUIStyle(GUI.skin.box);
        style.fontSize = 24;
        style.alignment = TextAnchor.MiddleCenter;
        style.normal.textColor = Color.white;

        string statut = !string.IsNullOrEmpty(dernierCode)
            ? "✅ Code détecté : " + dernierCode
            : "📷 Scan AR actif - Visez un QR Code";

        GUI.Box(new Rect(20, 50, Screen.width - 40, 65), statut, style);
    }

    private byte[] rgbBuffer;

    void ScannerWebcam()
    {
        try
        {
            Color32[] pixels = webcam.GetPixels32();
            if (pixels == null || pixels.Length == 0)
                return;

            int tailleRequise = pixels.Length * 3;
            if (rgbBuffer == null || rgbBuffer.Length != tailleRequise)
            {
                rgbBuffer = new byte[tailleRequise];
            }

            for (int i = 0; i < pixels.Length; i++)
            {
                rgbBuffer[i * 3] = pixels[i].r;
                rgbBuffer[i * 3 + 1] = pixels[i].g;
                rgbBuffer[i * 3 + 2] = pixels[i].b;
            }

            var source = new RGBLuminanceSource(
                rgbBuffer,
                webcam.width,
                webcam.height,
                RGBLuminanceSource.BitmapFormat.RGB24
            );

            var resultat = lecteur.Decode(source);
            if (resultat != null && !string.IsNullOrEmpty(resultat.Text))
            {
                string id = resultat.Text.Trim();
                dernierScanTime = Time.time;

                if (id != dernierCode)
                {
                    dernierCode = id;
                    Debug.Log("QR Code détecté (Webcam) : " + id);

                    if (scannerQR != null)
                    {
                        scannerQR.TraiterQRCode(id);
                    }
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogWarning("Erreur scan webcam : " + e.Message);
        }
    }

    public void ReinitialiserScan()
    {
        dernierCode = "";
        prochainScan = 0f;
    }
}