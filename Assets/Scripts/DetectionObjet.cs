
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.Collections;

public class DetectionObjet : MonoBehaviour
{
    [Header("Camera AR")]
    public ARCameraManager cameraAR;

    [Header("Reconnaissance IA")]
    public ReconnaissanceIA reconnaissanceIA;

    private float prochainScan = 0f;

    private const int largeur = 224;
    private const int hauteur = 224;

    void Start()
    {
        Debug.Log("Detection d'objets activee !");

        if (cameraAR == null || reconnaissanceIA == null)
        {
            Debug.LogError("Camera AR ou IA non connectee !");
        }
    }

    void Update()
    {
        if (Time.time < prochainScan)
            return;

        prochainScan = Time.time + 1f;

        if (cameraAR == null || reconnaissanceIA == null)
            return;

        if (cameraAR.TryAcquireLatestCpuImage(out XRCpuImage image))
        {
            try
            {
                // Convertir l'image en RGB 224 x 224
                var parametres = new XRCpuImage.ConversionParams
                {
                    inputRect = new RectInt(
                        0, 0, image.width, image.height
                    ),
                    outputDimensions = new Vector2Int(
                        largeur, hauteur
                    ),
                    outputFormat = TextureFormat.RGB24,
                    transformation = XRCpuImage.Transformation.None
                };

                int taille = image.GetConvertedDataSize(parametres);

                using (NativeArray<byte> donnees =
                    new NativeArray<byte>(
                        taille, Allocator.Temp))
                {
                    image.Convert(parametres, donnees);

                    float[] pixels = new float[
                        largeur * hauteur * 3
                    ];

                    for (int i = 0; i < pixels.Length; i++)
                    {
                        pixels[i] = donnees[i];
                    }

                    // Envoyer l'image au modele IA
                    reconnaissanceIA.AnalyserImage(pixels);
                }
            }
            finally
            {
                image.Dispose();
            }
        }
    }
}
