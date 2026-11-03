
using UnityEngine;
using UnityEngine.UI;

public class WebcamQR : MonoBehaviour
{
    public RawImage affichageWebcam;

    private WebCamTexture webcam;

    void Start()
    {
        if (WebCamTexture.devices.Length == 0)
        {
            Debug.LogError("Aucune webcam détectée !");
            return;
        }

        webcam = new WebCamTexture(
            WebCamTexture.devices[0].name,
            640,
            480,
            30
        );

        affichageWebcam.texture = webcam;
        webcam.Play();

        Debug.Log("Webcam démarrée !");
    }

    void OnDestroy()
    {
        if (webcam != null && webcam.isPlaying)
        {
            webcam.Stop();
        }
    }
}