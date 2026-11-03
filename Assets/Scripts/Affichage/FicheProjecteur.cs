
using UnityEngine;

public class FicheProjecteur : MonoBehaviour
{
    [Header("Fenetre d'informations")]
    public GameObject panelDetails;

    void Start()
    {
        // La fiche est cachee au demarrage
        if (panelDetails != null)
            panelDetails.SetActive(false);
    }

    // Appele quand on clique sur Plus de details
    public void OuvrirFiche()
    {
        if (panelDetails != null)
            panelDetails.SetActive(true);
    }

    // Appele quand on clique sur Fermer
    public void FermerFiche()
    {
        if (panelDetails != null)
            panelDetails.SetActive(false);
    }
}
