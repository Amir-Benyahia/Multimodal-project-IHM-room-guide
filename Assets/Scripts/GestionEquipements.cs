
using UnityEngine;

public class GestionEquipements : MonoBehaviour
{
    // Fichier JSON à glisser dans l'Inspector
    public TextAsset fichierJSON;

    private ListeEquipements baseDonnees;

    void Awake()
    {
        if (fichierJSON == null)
        {
            Debug.LogError("Aucun fichier JSON assigné !");
            return;
        }

        baseDonnees =
            JsonUtility.FromJson<ListeEquipements>(
                fichierJSON.text
            );

        Debug.Log("JSON chargé avec succès !");

        // Test de recherche
        Equipement objet = Rechercher("CASQUE_VR_01");

        if (objet != null)
        {
            Debug.Log("Nom : " + objet.nom);
            Debug.Log("Description : " + objet.description);
            Debug.Log("Utilisation : " + objet.utilisation);
        }
        else
        {
            Debug.LogError("Équipement introuvable !");
        }
    }

    public Equipement Rechercher(string id)
    {
        if (baseDonnees == null ||
            baseDonnees.equipements == null)
            return null;

        return baseDonnees.equipements.Find(
            e => e.id == id
        );
    }
}