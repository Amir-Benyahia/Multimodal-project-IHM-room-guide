
using UnityEngine;

public class ScannerQR : MonoBehaviour
{
    public GestionEquipements gestion;
    public AffichageEquipement affichage;

    public void TraiterQRCode(string id)
    {
        Equipement objet = gestion.Rechercher(id);

        if (objet != null)
        {
            affichage.Afficher(objet);
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