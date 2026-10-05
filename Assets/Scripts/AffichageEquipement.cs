using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;

public class AffichageEquipement : MonoBehaviour
{
    public GameObject ficheEquipement;

    public TMP_Text texteNom;
    public TMP_Text texteDescription;
    public TMP_Text texteUtilisation;

    private float tempsAffichage = 0f;

    void Start()
    {
        if (ficheEquipement != null)
        {
            ficheEquipement.SetActive(false);
        }
    }

    public void Afficher(Equipement objet)
    {
        if (objet == null)
            return;

        if (texteNom != null)
            texteNom.text = objet.nom;

        if (texteDescription != null)
            texteDescription.text = "<b>Description :</b>\n" + objet.description;

        if (texteUtilisation != null)
            texteUtilisation.text = "<b>Utilisation :</b>\n" + objet.utilisation;

        if (ficheEquipement != null)
        {
            ficheEquipement.SetActive(true);
            // S'assure que la fiche est au premier plan absolu
            ficheEquipement.transform.SetAsLastSibling();
        }

        tempsAffichage = Time.time;
        Debug.Log("[AffichageEquipement] Fiche affichée à l'écran pour : " + objet.nom);
    }

    void Update()
    {
        // Toucher l'écran ou cliquer pour fermer la fiche après un court délai de lecture (0.8s)
        if (ficheEquipement != null && ficheEquipement.activeSelf && Time.time - tempsAffichage > 0.8f)
        {
            bool clickDetected = false;

            // Souris (PC / Mac)
            if (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame)
            {
                clickDetected = true;
            }

            // Écran tactile (iPhone / Mobile)
            if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame)
            {
                clickDetected = true;
            }

            if (clickDetected)
            {
                Fermer();
            }
        }
    }

    public void Fermer()
    {
        if (ficheEquipement != null)
        {
            ficheEquipement.SetActive(false);
            Debug.Log("[AffichageEquipement] Fiche fermée.");
        }
    }
}