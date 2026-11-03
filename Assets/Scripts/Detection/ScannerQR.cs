
using UnityEngine;

public class ScannerQR : MonoBehaviour
{
    public GestionEquipements gestion;
    public AffichageEquipement affichage;
    public GestionnaireDialogue dialogue;

    void Start()
    {
        if (dialogue == null)
            dialogue = FindFirstObjectByType<GestionnaireDialogue>();
    }

    public void TraiterQRCode(string id)
    {
        Equipement objet = gestion.Rechercher(id);

        if (objet != null)
        {
            affichage.Afficher(objet);

            if (dialogue != null)
                dialogue.ObjetDetecte(id);
            Debug.Log("QR Code reconnu : " + id);
        }
        else
        {
            Debug.LogWarning(
                "Équipement inconnu : " + id
            );
        }
    }
}