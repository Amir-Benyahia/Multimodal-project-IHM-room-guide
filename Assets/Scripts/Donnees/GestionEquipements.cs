
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
    }

    // La salle (reponses et reperes du mur), ou null si absente du JSON
    public Salle Salle => baseDonnees != null ? baseDonnees.salle : null;

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