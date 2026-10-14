
using UnityEngine;

public class TestAffichage : MonoBehaviour
{
    public GestionEquipements gestion;
    public AffichageEquipement affichage;

    void Start()
    {
        Equipement objet =
            gestion.Rechercher("CAMERA_01");

        if (objet != null)
        {
            affichage.Afficher(objet);
        }
    }
}