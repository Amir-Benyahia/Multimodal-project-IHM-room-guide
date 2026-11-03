
using System;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

// Le "cerveau" de l'interaction vocale.
// Fusion : on combine l'intention de la phrase ("comment l'allumer ?")
// avec l'objet vu recemment par la camera (IA ou QR code).
// Fission : la reponse est dite a voix haute ET affichee a l'ecran.
public class GestionnaireDialogue : MonoBehaviour
{
    [Header("References (trouvees automatiquement si vides)")]
    public GestionEquipements gestion;
    public SyntheseVocale synthese;

    [Header("Affichage de la reponse (optionnel)")]
    public TMP_Text texteReponse;

    [Header("Fusion")]
    [Tooltip("Pendant combien de secondes on se souvient du dernier objet vu")]
    public float dureeMemoire = 10f;

    [Header("Test sans projecteur")]
    [Tooltip("Affiche un panneau de test (simulation de detection + questions tapees)")]
    public bool afficherPanneauTest = true;
    public string idSimulation = "PROJECTEUR_EPSON_01";

    // Prevenu a chaque reponse (pour brancher d'autres sorties plus tard)
    public event Action<string> ReponseDonnee;

    // Prevenu a chaque detection d'un equipement (camera, QR code ou mode test)
    public event Action<string> ObjetVu;

    // Prevenu quand une question portant sur l'objet vu est comprise (pour les guides 3D)
    public event Action<InterpreteurCommandes.Intention> IntentionTraitee;

    private const string MessageAide =
        "Visez un équipement avec la caméra, puis demandez par exemple : " +
        "c'est quoi, comment l'allumer, comment brancher mon ordinateur, ça ne marche pas, ou où est la sortie.";

    private string idObjetCourant;
    private float tempsObjetCourant = -1000f;
    private string derniereReponse;
    private string dernierePhrase;
    private GuideEtapes guide;
    private InterfaceAR3D interface3D;

    // Nombre de fois ou chaque question a ete posee (pour varier les reponses)
    private readonly Dictionary<string, int> compteur = new Dictionary<string, int>();

    // Cree le gestionnaire au lancement s'il n'est pas deja dans la scene :
    // aucun reglage n'est necessaire pour tester.
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void CreerSiAbsent()
    {
        if (FindFirstObjectByType<GestionnaireDialogue>() == null)
            new GameObject("GestionnaireDialogue").AddComponent<GestionnaireDialogue>();
    }

    void Awake()
    {
        if (gestion == null)
            gestion = FindFirstObjectByType<GestionEquipements>();

        if (synthese == null)
            synthese = FindFirstObjectByType<SyntheseVocale>();

        if (synthese == null)
            synthese = gameObject.AddComponent<SyntheseVocale>();

        // Bouton micro (entree vocale)
        if (FindFirstObjectByType<ReconnaissanceVocale>() == null)
            gameObject.AddComponent<ReconnaissanceVocale>();

        // Interface 3D ancree sur l'appareil, et mode test sur telephone
        if (FindFirstObjectByType<InterfaceAR3D>() == null)
            gameObject.AddComponent<InterfaceAR3D>();

        if (FindFirstObjectByType<ModeTest>() == null)
            gameObject.AddComponent<ModeTest>();

        // Guide pas a pas et mur anime, a cote de l'interface 3D
        interface3D = FindFirstObjectByType<InterfaceAR3D>();

        guide = FindFirstObjectByType<GuideEtapes>();
        if (guide == null)
            guide = interface3D.gameObject.AddComponent<GuideEtapes>();

        if (FindFirstObjectByType<MurAnime>() == null)
            interface3D.gameObject.AddComponent<MurAnime>();

        // Le panneau de questions tapees ne sert que dans l'editeur
        if (!Application.isEditor)
            afficherPanneauTest = false;
    }

    // ---------- Entrees ----------

    // Appele par ReconnaissanceIA ou ScannerQR quand un equipement est vu
    public void ObjetDetecte(string id)
    {
        bool nouveau = id != idObjetCourant || ObjetCourant() == null;

        idObjetCourant = id;
        tempsObjetCourant = Time.time;

        ObjetVu?.Invoke(id);

        if (!nouveau)
            return;

        Equipement objet = gestion != null ? gestion.Rechercher(id) : null;
        string nom = objet != null ? objet.nom : id;

        Afficher(nom + " détecté. Posez votre question.");

#if (UNITY_IOS || UNITY_ANDROID) && !UNITY_EDITOR
        // Petit retour haptique a la detection
        Handheld.Vibrate();
#endif
    }

    // Appele avec le texte reconnu a l'oral (ou tape dans le panneau de test)
    public void TraiterPhrase(string phrase)
    {
        dernierePhrase = phrase;
        InterpreteurCommandes.Intention intention = InterpreteurCommandes.Interpreter(phrase);
        Debug.Log("Phrase : \"" + phrase + "\" -> " + intention);

        switch (intention)
        {
            case InterpreteurCommandes.Intention.STOP:
                synthese.Arreter();
                Afficher("(silence)");
                return;

            case InterpreteurCommandes.Intention.REPETER:
                Repondre(derniereReponse ?? "Je n'ai encore rien dit.", false);
                return;

            case InterpreteurCommandes.Intention.AIDE:
                Repondre(MessageAide);
                return;

            case InterpreteurCommandes.Intention.BONJOUR:
                Repondre("Bonjour ! Visez un équipement avec la caméra et posez-moi votre question.");
                return;

            case InterpreteurCommandes.Intention.MERCI:
                Repondre("Avec plaisir !");
                return;
        }

        // Commandes du guide pas a pas (meme si l'appareil n'est plus a l'ecran)
        string etape = guide != null ? guide.Traiter(intention) : null;
        if (etape != null)
        {
            Repondre(etape);
            return;
        }

        if (intention == InterpreteurCommandes.Intention.SUIVANT ||
            intention == InterpreteurCommandes.Intention.PRECEDENT ||
            intention == InterpreteurCommandes.Intention.QUITTER_GUIDE)
        {
            Repondre("Aucun guide en cours. Pour être guidé pas à pas, dites : guide.");
            return;
        }

        // Questions sur la salle : la reponse ne depend pas de l'objet vu
        if (QuestionSurLaSalle(intention))
        {
            RepondreSalle(intention);
            return;
        }

        Equipement objet = ObjetCourant();

        if (intention == InterpreteurCommandes.Intention.INCONNUE)
        {
            PasCompris(phrase);
            return;
        }

        if (objet == null)
        {
            Repondre("Je ne vois pas d'équipement. Visez-le avec la caméra, puis reposez votre question.");
            return;
        }

        IntentionTraitee?.Invoke(intention);

        // "Comment l'utiliser" : on guide etape par etape quand l'appareil a un guide
        if ((intention == InterpreteurCommandes.Intention.GUIDE || intention == InterpreteurCommandes.Intention.UTILISER) &&
            guide != null)
        {
            string debut = guide.Demarrer(objet);
            if (debut != null)
            {
                Repondre(debut);
                return;
            }
        }

        if (intention == InterpreteurCommandes.Intention.IDENTIFIER)
        {
            switch (Compter("IDENTIFIER") % 3)
            {
                case 0:
                    Repondre("C'est : " + objet.nom + ". " + Phrase(objet.description) + " " + Phrase(objet.utilisation));
                    break;
                case 1:
                    Repondre("Vous regardez le " + objet.nom + ". " + Phrase(objet.utilisation));
                    break;
                default:
                    Repondre("C'est le " + objet.nom + ". Demandez-moi comment l'utiliser, ou dites guide.");
                    break;
            }
            return;
        }

        string texte = Choisir(objet, intention.ToString());

        // Pas de reponse precise : on se rabat sur une reponse proche
        if (texte == null)
        {
            switch (intention)
            {
                case InterpreteurCommandes.Intention.PAS_ALLUME:
                case InterpreteurCommandes.Intention.PAS_IMAGE:
                case InterpreteurCommandes.Intention.PAS_SON:
                    texte = Choisir(objet, "PROBLEME");
                    break;

                case InterpreteurCommandes.Intention.ETEINDRE:
                    texte = Choisir(objet, "ALLUMER");
                    break;

                case InterpreteurCommandes.Intention.UTILISER:
                case InterpreteurCommandes.Intention.GUIDE:
                    texte = Choisir(objet, "UTILISER") ?? Phrase(objet.utilisation);
                    break;
            }
        }

        Repondre(texte ?? "Je n'ai pas encore cette information pour : " + objet.nom + ". " +
                 "Vous pouvez demander comment l'utiliser, ou dire ce qui ne marche pas.");
    }

    private static bool QuestionSurLaSalle(InterpreteurCommandes.Intention intention)
    {
        switch (intention)
        {
            case InterpreteurCommandes.Intention.SORTIE:
            case InterpreteurCommandes.Intention.ZONE_IMAGE:
            case InterpreteurCommandes.Intention.LUMIERE:
            case InterpreteurCommandes.Intention.SECURITE:
            case InterpreteurCommandes.Intention.SALLE:
            case InterpreteurCommandes.Intention.REPERES:
                return true;
            default:
                return false;
        }
    }

    // Reponse de la salle (equipements.json, bloc "salle") + objets 3D sur le mur si le projecteur est place
    private void RepondreSalle(InterpreteurCommandes.Intention intention)
    {
        Salle salle = gestion != null ? gestion.Salle : null;
        string cle = intention.ToString();
        string texte = salle != null ? salle.ReponsePour(cle, Compter(cle)) : null;

        if (texte == null)
        {
            Repondre("Je n'ai pas encore cette information sur la salle.");
            return;
        }

        if (interface3D != null && interface3D.EstPlace)
            IntentionTraitee?.Invoke(intention);
        else if (intention != InterpreteurCommandes.Intention.SALLE)
            texte += " Visez le projecteur avec la caméra pour le voir en 3D sur le mur.";

        Repondre(texte);
    }

    private static readonly string[] debutsIncompris =
    {
        "Je n'ai pas compris",
        "Désolé, je n'ai pas saisi",
        "Pardon, pouvez-vous reformuler"
    };

    private static readonly string[] exemples =
    {
        "comment l'allumer ?",
        "comment brancher mon ordinateur ?",
        "guide-moi pas à pas",
        "l'image est floue",
        "il n'y a pas de son",
        "où est la sortie ?",
        "c'est quoi ?",
        "où sont les lumières ?"
    };

    // Appele quand la phrase n'a pas ete comprise : on dit ce qu'on a entendu
    // et on propose un exemple different a chaque fois
    public void PasCompris(string entendu = null)
    {
        int n = Compter("INCONNUE");
        string debut = debutsIncompris[n % debutsIncompris.Length];

        if (!string.IsNullOrWhiteSpace(entendu))
            debut += " : « " + entendu.Trim() + " »";

        if (ObjetCourant() == null)
        {
            Repondre(debut + ". Visez d'abord un équipement avec la caméra.");
            return;
        }

        Repondre(debut + ". Essayez par exemple : " + exemples[n % exemples.Length]);
    }

    // Reponse de l'equipement, differente si la question a deja ete posee
    private string Choisir(Equipement objet, string intention)
    {
        return objet.ReponsePour(intention, Compter(intention));
    }

    private int Compter(string cle)
    {
        compteur.TryGetValue(cle, out int n);
        compteur[cle] = n + 1;
        return n;
    }

    // ---------- Fusion ----------

    // L'objet vu il y a moins de dureeMemoire secondes, sinon null
    public Equipement ObjetCourant()
    {
        if (string.IsNullOrEmpty(idObjetCourant) || gestion == null)
            return null;

        if (Time.time - tempsObjetCourant > dureeMemoire)
            return null;

        return gestion.Rechercher(idObjetCourant);
    }

    // ---------- Sorties (fission) ----------

    private void Repondre(string texte, bool memoriser = true)
    {
        if (memoriser)
            derniereReponse = texte;

        Afficher(texte);
        synthese.Dire(texte);
        ReponseDonnee?.Invoke(texte);
    }

    private void Afficher(string texte)
    {
        Debug.Log("Room Guide : " + texte);
        dernierAffichage = texte;

        if (texteReponse != null)
            texteReponse.text = texte;
    }

    private static string Phrase(string s)
    {
        if (string.IsNullOrEmpty(s))
            return "";

        s = s.Trim();
        return s.EndsWith(".") ? s : s + ".";
    }

    // ---------- Panneau de test ----------

    private string dernierAffichage = "";
    private string saisie = "";

    private static readonly string[] phrasesExemple =
    {
        "C'est quoi ?",
        "Comment on l'allume ?",
        "Comment je branche mon ordinateur ?",
        "Ça marche pas",
        "Quelle est la résolution ?",
        "Où est la sortie ?",
        "Où va s'afficher l'image ?",
        "Où sont les lumières ?",
        "Répète"
    };

    void OnGUI()
    {
        if (!afficherPanneauTest)
            return;

        // Agrandir le panneau sur les ecrans de telephone
        float echelle = Mathf.Max(1f, Screen.height / 900f);
        GUI.matrix = Matrix4x4.Scale(new Vector3(echelle, echelle, 1f));

        GUILayout.BeginArea(new Rect(10, 10, 420, 600), GUI.skin.box);
        GUILayout.Label("TEST DU DIALOGUE");

        Equipement objet = ObjetCourant();
        if (objet != null)
        {
            float reste = dureeMemoire - (Time.time - tempsObjetCourant);
            GUILayout.Label("Objet vu : " + objet.nom + " (encore " + reste.ToString("F0") + " s)");
        }
        else
        {
            GUILayout.Label("Objet vu : aucun");
        }

        if (GUILayout.Button("Simuler : projecteur détecté"))
            ObjetDetecte(idSimulation);

        GUILayout.Space(6);
        GUILayout.Label("Question (comme si elle était dite à l'oral) :");

        bool entree = Event.current.type == EventType.KeyDown &&
                      (Event.current.keyCode == KeyCode.Return || Event.current.keyCode == KeyCode.KeypadEnter);

        saisie = GUILayout.TextField(saisie);

        if ((GUILayout.Button("Envoyer") || entree) && !string.IsNullOrWhiteSpace(saisie))
        {
            TraiterPhrase(saisie);
            saisie = "";
        }

        GUILayout.Space(6);
        foreach (string p in phrasesExemple)
        {
            if (GUILayout.Button(p))
                TraiterPhrase(p);
        }

        GUILayout.Space(6);
        if (!string.IsNullOrEmpty(dernierePhrase))
            GUILayout.Label("Vous : " + dernierePhrase);
        GUILayout.Label("Réponse : " + dernierAffichage);

        GUILayout.EndArea();
    }
}
