using System.Collections.Generic;
using UnityEngine;
using TMPro;

// Guide pas a pas en 3D : "comment l'utiliser" ou "guide" le lance.
// Chaque etape est dite a voix haute, affichee sur un panneau 3D au-dessus de l'appareil,
// et la partie a utiliser (Power, HDMI...) est montree par une fleche et des anneaux.
// On avance avec "suivant" (ou le bouton 3D), on recule avec "precedent", on quitte avec "quitter".
// Les etapes viennent de equipements.json (liste "guide" de l'equipement).
public class GuideEtapes : MonoBehaviour
{
    public InterfaceAR3D interfaceAR;

    private List<EtapeGuide> etapes;
    private int index = -1;
    private Transform racine;

    public bool Actif => etapes != null && index >= 0;

    void Awake()
    {
        if (interfaceAR == null)
            interfaceAR = GetComponent<InterfaceAR3D>();

        if (interfaceAR == null)
            interfaceAR = FindFirstObjectByType<InterfaceAR3D>();
    }

    void OnEnable()
    {
        if (interfaceAR != null)
            interfaceAR.ContenuConstruit += Afficher;
    }

    void OnDisable()
    {
        if (interfaceAR != null)
            interfaceAR.ContenuConstruit -= Afficher;
    }

    // ---------- Commandes (appelees par GestionnaireDialogue) ----------

    // Renvoie la phrase a dire, ou null si l'equipement n'a pas de guide
    public string Demarrer(Equipement objet)
    {
        if (objet == null || objet.guide == null || objet.guide.Count == 0)
            return null;

        etapes = objet.guide;
        index = 0;
        Afficher();
        return Annonce();
    }

    // Renvoie la phrase a dire, ou null si ce n'est pas une commande du guide
    public string Traiter(InterpreteurCommandes.Intention intention)
    {
        if (!Actif)
            return null;

        switch (intention)
        {
            case InterpreteurCommandes.Intention.SUIVANT:
                if (index >= etapes.Count - 1)
                    return Quitter(true);
                index++;
                break;

            case InterpreteurCommandes.Intention.PRECEDENT:
                if (index == 0)
                    return "C'est la première étape. " + etapes[0].texte;
                index--;
                break;

            case InterpreteurCommandes.Intention.GUIDE:
            case InterpreteurCommandes.Intention.UTILISER:
                index = 0;
                break;

            case InterpreteurCommandes.Intention.QUITTER_GUIDE:
                return Quitter(false);

            default:
                return null;
        }

        Afficher();
        return Annonce();
    }

    private string Annonce()
    {
        EtapeGuide e = etapes[index];
        string texte = "Étape " + (index + 1) + " sur " + etapes.Count + ". " + e.texte;

        if (index == 0)
            texte += " Dites suivant quand c'est fait.";
        else if (index == etapes.Count - 1)
            texte += " Dites suivant pour terminer.";

        return texte;
    }

    private string Quitter(bool fini)
    {
        etapes = null;
        index = -1;
        Effacer();

        if (interfaceAR != null)
            interfaceAR.AfficherMenu(true);

        return fini ? "Bravo, c'est terminé ! Posez-moi une question si besoin." : "D'accord, je ferme le guide.";
    }

    // ---------- Affichage 3D ----------

    private void Effacer()
    {
        if (racine != null)
            Destroy(racine.gameObject);
        racine = null;
    }

    // Reconstruit le panneau de l'etape en cours (aussi quand l'interface est replacee)
    private void Afficher()
    {
        Effacer();

        if (!Actif || interfaceAR == null || interfaceAR.Contenu == null)
            return;

        interfaceAR.AfficherMenu(false);

        Transform contenu = interfaceAR.Contenu;
        float taille = interfaceAR.tailleElements;
        Color o = FormesAR.Orange;
        Color t = FormesAR.Turquoise;
        EtapeGuide e = etapes[index];
        bool derniere = index == etapes.Count - 1;

        racine = FormesAR.Vide("Guide", contenu).transform;

        // Panneau de l'etape, a la place de l'etiquette
        float yPanneau = interfaceAR.HauteurEtiquette + 0.04f;
        Transform panneau = FormesAR.Vide("Panneau", racine).transform;
        panneau.localPosition = new Vector3(0, yPanneau, 0);
        panneau.localScale = Vector3.one * taille;
        FormesAR.Panneau("Fond", panneau, new Vector2(0.54f, 0.24f), o);

        FormesAR.Texte("Numero", panneau, "ÉTAPE " + (index + 1) + " / " + etapes.Count, 0.17f, o,
            new Vector3(0, 0.09f, -0.005f), 0.5f).fontStyle = FontStyles.Bold;
        FormesAR.TexteUneLigne("Titre", panneau, e.titre, 0.34f, Color.white,
            new Vector3(0, 0.055f, -0.005f), 0.5f).fontStyle = FontStyles.Bold;

        TextMeshPro texte = FormesAR.Texte("Texte", panneau, e.texte, 0.17f, new Color(0.85f, 0.95f, 0.93f),
            new Vector3(0, -0.025f, -0.005f), 0.5f);
        texte.enableAutoSizing = true;
        texte.fontSizeMin = 0.1f;
        texte.fontSizeMax = 0.17f;
        texte.rectTransform.sizeDelta = new Vector2(0.5f, 0.11f);

        // Points de progression
        for (int i = 0; i < etapes.Count; i++)
        {
            float x = (i - (etapes.Count - 1) / 2f) * 0.03f;
            Color c = i == index ? o : (i < index ? t : new Color(0.4f, 0.45f, 0.5f));
            GameObject point = FormesAR.Primitive(PrimitiveType.Sphere, "Point", panneau,
                new Vector3(x, -0.1f, -0.006f), Vector3.one * (i == index ? 0.016f : 0.011f), c);
            Destroy(point.GetComponent<Collider>());
        }

        interfaceAR.Suivre(panneau, false);

        // Boutons Retour / Suivant sous le panneau (ils tournent avec lui)
        if (index > 0)
            PlacerBouton(interfaceAR.CreerBouton(panneau, "Retour", "<", "précédent", t), -0.17f);

        PlacerBouton(interfaceAR.CreerBouton(panneau, derniere ? "Terminer" : "Suivant", derniere ? "OK" : ">", "suivant", o), 0.17f);

        // La partie de l'appareil a utiliser
        if (interfaceAR.PositionRepere(e.repere, out Vector3 repere))
            ConstruireRepere(repere, new Vector3(0, yPanneau - 0.13f * taille, 0));
    }

    // Le panneau a deja la taille des elements : le bouton garde sa taille d'origine
    private static void PlacerBouton(Transform bouton, float x)
    {
        bouton.localScale = Vector3.one;
        bouton.localPosition = new Vector3(x, -0.2f, 0);
    }

    private void ConstruireRepere(Vector3 position, Vector3 depart)
    {
        Color o = FormesAR.Orange;
        Transform repere = FormesAR.Vide("Repere", racine).transform;
        repere.localPosition = position;

        Transform anneaux = FormesAR.Vide("Anneaux", repere).transform;
        FormesAR.Cercle("A1", anneaux, 0.03f, o, 0.004f, true);
        FormesAR.Cercle("A2", anneaux, 0.05f, new Color(o.r, o.g, o.b, 0.5f), 0.003f, true);
        FormesAR.Cercle("A3", anneaux, 0.07f, new Color(o.r, o.g, o.b, 0.25f), 0.003f, true);
        interfaceAR.Suivre(anneaux, false);

        Transform fleche = FormesAR.Fleche("Fleche", repere, o, 1.2f).transform;
        fleche.localPosition = new Vector3(0, 0.07f, 0);
        interfaceAR.Suivre(fleche, true);

        // Trait en pointilles du panneau vers la partie a utiliser
        const int tirets = 10;
        for (int i = 0; i < tirets; i++)
        {
            LineRenderer l = FormesAR.Ligne("Tiret", racine, new Color(o.r, o.g, o.b, 0.7f), 0.003f);
            l.positionCount = 2;
            l.SetPosition(0, Vector3.Lerp(depart, position + new Vector3(0, 0.14f, 0), i / (float)tirets));
            l.SetPosition(1, Vector3.Lerp(depart, position + new Vector3(0, 0.14f, 0), (i + 0.5f) / tirets));
        }
    }
}
