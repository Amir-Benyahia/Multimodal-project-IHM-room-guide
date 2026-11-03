
using System;
using System.Collections.Generic;

[Serializable]
public class Equipement
{
    public string id;
    public string nom;
    public string description;
    public string utilisation;

    // Reponses donnees a l'oral selon la question posee
    public List<ReponseVocale> reponses;

    // Guide pas a pas ("comment l'utiliser", "guide")
    public List<EtapeGuide> guide;

    public string ReponsePour(string intention)
    {
        return ReponsePour(intention, 0);
    }

    // fois : combien de fois la question a deja ete posee.
    // La 1re fois on donne "texte", ensuite on alterne avec les "variantes".
    public string ReponsePour(string intention, int fois)
    {
        return ReponseVocale.Choisir(reponses, intention, fois);
    }
}

[Serializable]
public class ReponseVocale
{
    // Nom de l'intention (voir InterpreteurCommandes.Intention)
    public string intention;
    public string texte;

    // Autres facons de dire la meme chose, pour ne pas repeter mot pour mot
    public List<string> variantes;

    // fois : combien de fois la question a deja ete posee.
    // La 1re fois on donne "texte", ensuite on alterne avec les "variantes".
    public static string Choisir(List<ReponseVocale> reponses, string intention, int fois)
    {
        if (reponses == null)
            return null;

        ReponseVocale r = reponses.Find(x => x.intention == intention);
        if (r == null)
            return null;

        int nombre = 1 + (r.variantes != null ? r.variantes.Count : 0);
        int i = fois % nombre;
        return i == 0 ? r.texte : r.variantes[i - 1];
    }
}

[Serializable]
public class EtapeGuide
{
    public string titre;
    public string texte;

    // Partie de l'appareil a montrer en 3D : POWER, HDMI, SOURCE, OBJECTIF (vide = aucune)
    public string repere;
}

// La salle autour du projecteur : reponses aux questions sur la salle
// et positions des reperes poses sur le mur en 3D (voir MurAnime)
[Serializable]
public class Salle
{
    public string nom;
    public string sousTitre;

    // Hauteur du projecteur au-dessus du sol (m)
    public float hauteurProjecteur;

    // Position du panneau de la salle sur le mur (m, meme repere que les reperes)
    public float panneauX;
    public float panneauY;

    public List<ReponseVocale> reponses;
    public List<RepereSalle> reperes;

    public string ReponsePour(string intention, int fois)
    {
        return ReponseVocale.Choisir(reponses, intention, fois);
    }

    public RepereSalle Repere(string id)
    {
        return reperes != null ? reperes.Find(r => r.id == id) : null;
    }

    // Le repere mis en avant quand on pose cette question (ex. LUMIERE -> interrupteur)
    public RepereSalle RepereDeQuestion(string intention)
    {
        return reperes != null ? reperes.Find(r => r.intention == intention) : null;
    }
}

// Un objet reel de la salle. Mesures en metres, depuis le projecteur, face au mur :
// x = decalage vers la droite le long du mur (negatif = a gauche),
// y = hauteur du centre de l'objet au-dessus du sol,
// avance = distance devant le mur (0 = colle au mur).
[Serializable]
public class RepereSalle
{
    public string id;
    public string libelle;
    public float x;
    public float y;
    public float largeur;
    public float hauteur;
    public float avance;

    // "orange" pour un repere de securite, sinon turquoise
    public string couleur;

    // Question qui met ce repere en avant (LUMIERE, SECURITE...), vide sinon
    public string intention;
}

[Serializable]
public class ListeEquipements
{
    public List<Equipement> equipements;
    public Salle salle;
}
