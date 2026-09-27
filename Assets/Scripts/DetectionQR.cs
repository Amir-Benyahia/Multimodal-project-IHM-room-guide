
using UnityEngine;
using UnityEngine.UI;
using ZXing;
using ZXing.Common;
using System;
using System.Collections.Generic;

public class DetectionQR : MonoBehaviour
{
    [Header("Webcam")]
    public RawImage affichageWebcam;

    [Header("Gestion des QR codes")]
    public ScannerQR scannerQR;

    private WebCamTexture webcam;
    private BarcodeReaderGeneric lecteur;

    private float prochainScan = 0f;
    private string dernierCode = "";

    void Start()
    {
        // Vérifier la webcam
        if (WebCamTexture.devices.Length == 0)
        {
            Debug.LogError("Aucune webcam détectée !");
            return;
        }

        // Démarrer la webcam
        webcam = new WebCamTexture(
            WebCamTexture.devices[0].name,
            640,
            480,
            30
        );

        if (affichageWebcam != null)
        {
            affichageWebcam.texture = webcam;
        }

        webcam.Play();

        // Initialiser ZXing
        lecteur = new BarcodeReaderGeneric();

        lecteur.Options = new DecodingOptions
        {
            PossibleFormats = new List<BarcodeFormat>
            {
                BarcodeFormat.QR_CODE
            },

            TryHarder = true
        };

        Debug.Log("Scanner QR activé !");
    }

    void Update()
    {
        // Vérifier que la webcam fonctionne
        if (webcam == null ||
            !webcam.isPlaying ||
            webcam.width <= 16 ||
            !webcam.didUpdateThisFrame)
        {
            return;
        }

        // Scanner toutes les 0,5 seconde
        if (Time.time < prochainScan)
        {
            return;
        }

        prochainScan = Time.time + 0.5f;

        try
        {
            // Récupérer les pixels
            Color32[] pixels = webcam.GetPixels32();

            // Convertir les pixels en RGB
            byte[] rgb = new byte[pixels.Length * 3];

            for (int i = 0; i < pixels.Length; i++)
            {
                rgb[i * 3] = pixels[i].r;
                rgb[i * 3 + 1] = pixels[i].g;
                rgb[i * 3 + 2] = pixels[i].b;
            }

            // Créer l'image pour ZXing
            var source = new RGBLuminanceSource(
                rgb,
                webcam.width,
                webcam.height,
                RGBLuminanceSource.BitmapFormat.RGB24
            );

            // Détecter le QR code
            var resultat = lecteur.Decode(source);

            if (resultat != null)
            {
                string id = resultat.Text.Trim();

                if (id != dernierCode)
                {
                    dernierCode = id;

                    Debug.Log(
                        "QR Code détecté : " + id
                    );

                    // Afficher automatiquement
                    // les informations du JSON
                    if (scannerQR != null)
                    {
                        scannerQR.TraiterQRCode(id);
                    }
                    else
                    {
                        Debug.LogError(
                            "ScannerQR non connecté !"
                        );
                    }
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogWarning(
                "Erreur pendant le scan : " +
                e.Message
            );
        }
    }

    // Permet de scanner à nouveau
    // le même QR code
    public void ReinitialiserScan()
    {
        dernierCode = "";
        prochainScan = 0f;
    }

    void OnDestroy()
    {
        if (webcam != null && webcam.isPlaying)
        {
            webcam.Stop();
        }
    }
}