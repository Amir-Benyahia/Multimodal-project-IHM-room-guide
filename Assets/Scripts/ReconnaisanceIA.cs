
using UnityEngine;
using Unity.InferenceEngine;
using TMPro;

public class ReconnaissanceIA : MonoBehaviour
{
    [Header("Modele IA")]
    public ModelAsset modeleIA;

    [Header("Affichage telephone")]
    public TMP_Text texteDetection;

    private Model modele;
    private Worker worker;

    void Start()
    {
        if (modeleIA == null)
        {
            Debug.LogError("Aucun modele IA connecte !");
            return;
        }

        modele = ModelLoader.Load(modeleIA);
        worker = new Worker(modele, BackendType.CPU);

        if (texteDetection != null)
            texteDetection.text = "Recherche du projecteur...";

        Debug.Log("Modele Projecteur Epson charge !");
    }

    public void AnalyserImage(float[] pixels)
    {
        if (worker == null)
            return;

        using (Tensor<float> entree = new Tensor<float>(
            new TensorShape(1, 224, 224, 3),
            pixels))
        {
            worker.Schedule(entree);

            Tensor<float> sortie = worker.PeekOutput() as Tensor<float>;

            using (Tensor<float> resultat = sortie.ReadbackAndClone())
            {
                float probabilite = resultat[0];

                Debug.Log(
                    "Score Projecteur Epson : " +
                    (probabilite * 100f).ToString("F1") + "%"
                );

                if (probabilite > 0.9f)
                {
                    if (texteDetection != null)
                    {
                        texteDetection.text =
                            "PROJECTEUR EPSON DETECTE !\n" +
                            (probabilite * 100f).ToString("F1") + "%";

                        texteDetection.color = Color.green;
                    }

                    Debug.Log("PROJECTEUR EPSON DETECTE !");
                }
                else
                {
                    if (texteDetection != null)
                    {
                        texteDetection.text =
                            "Projecteur non reconnu";

                        texteDetection.color = Color.white;
                    }
                }
            }
        }
    }

    void OnDestroy()
    {
        worker?.Dispose();
    }
}
