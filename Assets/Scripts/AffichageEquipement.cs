
using UnityEngine;
using TMPro;

public class AffichageEquipement : MonoBehaviour
{
    public GameObject ficheEquipement;

    public TMP_Text texteNom;
    public TMP_Text texteDescription;
    public TMP_Text texteUtilisation;

    public void Afficher(Equipement objet)
    {
        if (objet == null)
            return;

        texteNom.text = objet.nom;
        texteDescription.text = objet.description;
        texteUtilisation.text = objet.utilisation;

        ficheEquipement.SetActive(true);
    }

    public void Fermer()
    {
        ficheEquipement.SetActive(false);
    }
}