using System;
using System.Collections.Generic;
using System.Text;

// Transforme une phrase (texte reconnu a l'oral ou tape) en intention.
// Chaque intention a des expressions avec un poids ; on additionne les poids
// trouves dans la phrase et la meilleure intention gagne. Les mots sont reconnus
// meme conjugues ("allum" -> allume, allumer, allumage) ou un peu deformes par
// la reconnaissance vocale ("telecomande"). La negation ("ne ... pas", "plus",
// "rien") transforme une demande en probleme : "il s'allume pas" -> PAS_ALLUME.
public static class InterpreteurCommandes
{
    public enum Intention
    {
        INCONNUE,
        STOP,
        REPETER,
        AIDE,
        BONJOUR,
        MERCI,
        IDENTIFIER,
        UTILISER,
        ALLUMER,
        ETEINDRE,
        BRANCHER,
        TELECOMMANDE,
        SON,
        NETTETE,
        TAILLE_IMAGE,
        COUPER_IMAGE,
        CARACTERISTIQUES,
        PROBLEME,
        PAS_ALLUME,
        PAS_IMAGE,
        PAS_SON,
        GUIDE,
        SUIVANT,
        PRECEDENT,
        QUITTER_GUIDE,

        // Questions sur la salle (reponses et objets 3D sur le mur : MurAnime)
        SORTIE,
        ZONE_IMAGE,
        LUMIERE,
        SECURITE,
        SALLE,
        REPERES
    }

    private struct Expression
    {
        public string texte;
        public float poids;
        public bool multiMots;

        public Expression(string t, float p)
        {
            texte = t;
            poids = p;
            multiMots = t.Contains(" ");
        }
    }

    private class Regle
    {
        public Intention intention;
        public List<Expression> expressions = new List<Expression>();

        public Regle(Intention i, float poids, params string[] textes)
        {
            intention = i;
            Ajouter(poids, textes);
        }

        public Regle Ajouter(float poids, params string[] textes)
        {
            foreach (string t in textes)
                expressions.Add(new Expression(t, poids));
            return this;
        }
    }

    // Expressions ecrites sans accents et en minuscules (voir Normaliser).
    // Un mot seul de 4 lettres ou plus est une racine : "allum" trouve "allumer", "allumage"...
    private static readonly Regle[] regles =
    {
        new Regle(Intention.STOP, 3f, "stop", "tais toi", "taisez vous", "silence", "chut", "arrete de parler", "ca suffit"),
        new Regle(Intention.REPETER, 3f, "repet", "redis", "encore une fois", "j ai pas compris", "je n ai pas compris",
            "pardon"),
        new Regle(Intention.AIDE, 3f, "aide", "aidez moi", "que puis je dire", "que peux tu", "qu est ce que je peux dire",
            "quoi dire", "que sais tu faire", "tu sers a quoi", "comment ca marche l appli", "options"),
        new Regle(Intention.BONJOUR, 2f, "bonjour", "salut", "hello", "coucou", "bonsoir"),
        new Regle(Intention.MERCI, 2f, "merci", "super", "parfait", "genial", "d accord"),

        // Guide pas a pas (QUITTER_GUIDE avant GUIDE : "quitter le guide" doit quitter)
        new Regle(Intention.QUITTER_GUIDE, 4f, "quitt", "termin", "fin du guide", "arrete le guide", "sortir du guide",
            "ferme le guide", "arreter le guide"),
        new Regle(Intention.GUIDE, 3f, "guide", "tutoriel", "montre moi comment", "accompagne")
            .Ajouter(4f, "pas a pas", "etape par etape"),
        new Regle(Intention.SUIVANT, 3f, "suivant", "suivante", "ensuite", "apres", "c est fait", "c est bon", "ok", "okay",
            "continue", "continuer", "j ai fait", "j ai fini", "voila"),
        new Regle(Intention.PRECEDENT, 3f, "precedent", "precedente", "retour", "revenir", "en arriere", "reviens"),

        new Regle(Intention.IDENTIFIER, 3f, "c est quoi", "qu est ce que c est", "qu est ce", "quel est cet", "quel est ce",
                "c est qui", "identifi", "a quoi ca sert", "a quoi sert", "sert a quoi", "description", "decri",
                "c est quel appareil", "quel appareil", "quel objet", "ca s appelle", "nom")
            .Ajouter(1f, "quoi", "ca"),
        new Regle(Intention.UTILISER, 3f, "comment l utiliser", "comment je peux l utiliser", "comment on l utilise",
                "comment ca marche", "comment ca fonctionne", "comment il marche", "comment il fonctionne",
                "mode d emploi", "notice", "tuto", "explique", "comment faire", "comment on fait",
                "premiere fois", "par ou commencer", "etapes")
            .Ajouter(2f, "utilis", "servir", "fonctionn", "marche", "manipul", "projeter", "presentation", "diaporama", "cours"),
        new Regle(Intention.ALLUMER, 3f, "allum", "demarr", "mettre en marche", "lancer le projecteur", "power")
            .Ajouter(1f, "lanc", "activ", "ouvr"),
        new Regle(Intention.ETEINDRE, 3f, "etein", "eteign", "eteindre", "couper le projecteur", "arreter le projecteur",
                "mettre en veille", "veille")
            .Ajouter(1f, "arret", "fermer"),
        new Regle(Intention.BRANCHER, 3f, "branch", "hdmi", "cable", "ordinateur", "ordi", "pc", "laptop", "mac",
                "connect", "reli", "afficher mon ecran", "projeter mon ecran", "partager mon ecran", "mon ecran",
                "usb", "adaptateur", "source", "entree")
            .Ajouter(1f, "ecran", "affich"),
        new Regle(Intention.TELECOMMANDE, 3f, "telecommande", "telecomande", "zapette", "manette", "boutons", "bouton"),
        new Regle(Intention.SON, 3f, "son", "volume", "haut parleur", "audio", "entend", "plus fort", "moins fort",
            "baisser", "monter le", "musique", "bruit"),
        new Regle(Intention.NETTETE, 3f, "flou", "net", "nettete", "mise au point", "focus", "pas clair", "trouble"),
        new Regle(Intention.TAILLE_IMAGE, 3f, "taille", "agrandir", "trop petit", "trop petite", "trop grand", "trop grande", "plus grand", "plus petit", "retrecir", "zoom",
            "deborde", "decale", "deform", "trapez", "centrer", "position de l image", "format"),
        new Regle(Intention.COUPER_IMAGE, 3f, "a v mute", "av mute", "mute", "cacher l image", "couper l image",
            "masquer", "ecran noir volontairement", "pause", "figer", "freeze", "geler"),
        new Regle(Intention.CARACTERISTIQUES, 3f, "resolution", "luminosite", "lumens", "modele", "marque", "caracteristique",
            "specification", "fiche technique", "focale", "puissance", "pixels", "combien", "taille de l image max",
            "distance", "lampe", "laser"),
        new Regle(Intention.PROBLEME, 3f, "marche pas", "fonctionne pas", "probleme", "panne", "bug", "bloque",
            "souci", "erreur", "cass", "ne repond", "rien ne se passe", "clignot", "voyant rouge",
            "orange", "chauffe", "surchauffe"),

        // La salle ("repere" seul est evite : trop proche de "repete")
        new Regle(Intention.SORTIE, 4f, "sortie", "sortir", "sors", "evacu", "par ou on sort", "la porte", "partir")
            .Ajouter(5f, "quitter la salle", "issue de secours", "ou est la porte", "porte de sortie"),
        new Regle(Intention.ZONE_IMAGE, 5f, "ou s affiche", "ou va s afficher", "ou est l image", "ou va l image",
                "ou projette", "ou se projette", "ou est projete", "ou est projetee", "sur quel mur", "quel mur",
                "ou regarder", "ou apparait", "zone de l image", "zone d affichage", "image s affiche")
            .Ajouter(3f, "ombre"),
        new Regle(Intention.LUMIERE, 5f, "lumiere", "interrupteur", "eclairage")
            .Ajouter(3f, "la lumiere", "sombre", "il fait noir"),
        new Regle(Intention.SECURITE, 5f, "extincteur", "incendie", "feu", "securite", "urgence", "alarme"),
        new Regle(Intention.SALLE, 5f, "quelle salle", "quel salle", "ou suis je", "ou je suis", "ou on est", "on est ou",
            "ou sommes nous", "nom de la salle", "numero de la salle", "numero de salle", "cette salle", "batiment"),
        new Regle(Intention.REPERES, 5f, "montre moi la salle", "montre la salle", "visit", "les reperes", "des reperes", "un repere", "faire le tour",
            "dans la salle", "presente la salle", "presente moi la salle", "autour de moi")
    };

    private static readonly HashSet<string> motsNegation = new HashSet<string>
    {
        "pas", "plus", "rien", "aucun", "aucune", "jamais", "ne", "n", "sans"
    };

    private static readonly HashSet<string> plusComparatif = new HashSet<string>
    {
        "fort", "grand", "grande", "petit", "petite", "gros", "net", "clair", "lumineux", "de", "d"
    };

    public static Intention Interpreter(string phrase)
    {
        return Interpreter(phrase, out _);
    }

    // confiance : le score de l'intention gagnante (0 = rien reconnu)
    public static Intention Interpreter(string phrase, out float confiance)
    {
        confiance = 0f;
        string texte = Normaliser(phrase);
        if (texte.Length == 0)
            return Intention.INCONNUE;

        string[] mots = texte.Split(' ');
        string texteEspace = " " + texte + " ";

        bool negation = false;
        for (int i = 0; i < mots.Length; i++)
        {
            if (!motsNegation.Contains(mots[i]))
                continue;

            // "plus fort", "plus grand" : ce n'est pas une negation
            if (mots[i] == "plus" && i + 1 < mots.Length && plusComparatif.Contains(mots[i + 1]))
                continue;

            negation = true;
        }

        Dictionary<Intention, float> scores = new Dictionary<Intention, float>();

        foreach (Regle regle in regles)
        {
            float score = 0f;

            foreach (Expression e in regle.expressions)
            {
                if (Trouve(e, mots, texteEspace))
                    score += e.poids;
            }

            scores[regle.intention] = score;
        }

        // La negation transforme une demande en probleme
        if (negation)
        {
            if (scores[Intention.ALLUMER] > 0f)
                Ajouter(scores, Intention.PAS_ALLUME, scores[Intention.ALLUMER] + 2f);

            if (scores[Intention.SON] > 0f)
                Ajouter(scores, Intention.PAS_SON, scores[Intention.SON] + 2f);

            if (Contient(mots, "image", "affich", "ecran", "projette", "projeter", "voit", "vois", "apparai") && scores[Intention.SON] == 0f)
                Ajouter(scores, Intention.PAS_IMAGE, 5f);

            if (scores[Intention.UTILISER] > 0f || scores[Intention.BRANCHER] > 0f)
                Ajouter(scores, Intention.PROBLEME, 2f);

            // "c'est pas fait", "pas encore" : on ne passe pas a l'etape suivante
            scores[Intention.SUIVANT] = 0f;

            // "l'image ne s'affiche pas" : c'est une panne, pas "ou est l'image"
            scores[Intention.ZONE_IMAGE] = 0f;
        }

        // "sortir du guide" : on quitte le guide, on ne cherche pas la sortie
        if (Contient(mots, "guide"))
            scores[Intention.SORTIE] = 0f;

        // "il n'y a pas d'image" / "ecran noir" meme sans autre mot
        if (texteEspace.Contains(" ecran noir ") || texteEspace.Contains(" ecran bleu ") || texteEspace.Contains(" pas d image "))
            Ajouter(scores, Intention.PAS_IMAGE, 5f);

        Intention meilleure = Intention.INCONNUE;
        foreach (KeyValuePair<Intention, float> kv in scores)
        {
            if (kv.Value > confiance)
            {
                confiance = kv.Value;
                meilleure = kv.Key;
            }
        }

        // En dessous de ce seuil, on n'a trouve que des mots faibles ("ca", "quoi")
        return confiance >= 2f ? meilleure : Intention.INCONNUE;
    }

    private static void Ajouter(Dictionary<Intention, float> scores, Intention i, float valeur)
    {
        scores.TryGetValue(i, out float actuel);
        scores[i] = actuel + valeur;
    }

    private static bool Contient(string[] mots, params string[] racines)
    {
        foreach (string m in mots)
            foreach (string r in racines)
                if (m.StartsWith(r, StringComparison.Ordinal))
                    return true;
        return false;
    }

    private static bool Trouve(Expression e, string[] mots, string texteEspace)
    {
        // Plusieurs mots : on cherche l'expression telle quelle
        if (e.multiMots)
            return texteEspace.Contains(" " + e.texte + " ");

        foreach (string m in mots)
        {
            if (m == e.texte || m == e.texte + "s")
                return true;

            // Racine : "allum" -> "allumer", "allumage"
            if (e.texte.Length >= 4 && m.StartsWith(e.texte, StringComparison.Ordinal))
                return true;

            // Petite faute de la reconnaissance vocale : une lettre de difference
            if (e.texte.Length >= 6 && m.Length >= 5 && Math.Abs(m.Length - e.texte.Length) <= 1 &&
                Distance(m, e.texte) <= 1)
                return true;
        }

        return false;
    }

    // Distance de Levenshtein (nombre de lettres a changer)
    private static int Distance(string a, string b)
    {
        int[,] d = new int[a.Length + 1, b.Length + 1];

        for (int i = 0; i <= a.Length; i++) d[i, 0] = i;
        for (int j = 0; j <= b.Length; j++) d[0, j] = j;

        for (int i = 1; i <= a.Length; i++)
        {
            for (int j = 1; j <= b.Length; j++)
            {
                int cout = a[i - 1] == b[j - 1] ? 0 : 1;
                d[i, j] = Math.Min(Math.Min(d[i - 1, j] + 1, d[i, j - 1] + 1), d[i - 1, j - 1] + cout);
            }
        }

        return d[a.Length, b.Length];
    }

    // Minuscules, sans accents, ponctuation et apostrophes remplacees par des espaces
    public static string Normaliser(string phrase)
    {
        if (string.IsNullOrEmpty(phrase))
            return "";

        StringBuilder sb = new StringBuilder(phrase.Length);
        bool dernierEspace = false;

        foreach (char c in phrase.ToLowerInvariant())
        {
            char r = SansAccent(c);

            if (!char.IsLetterOrDigit(r))
                r = ' ';

            if (r == ' ')
            {
                if (dernierEspace)
                    continue;
                dernierEspace = true;
            }
            else
            {
                dernierEspace = false;
            }

            sb.Append(r);
        }

        return sb.ToString().Trim();
    }

    private static char SansAccent(char c)
    {
        switch (c)
        {
            case 'à': case 'â': case 'ä': return 'a';
            case 'é': case 'è': case 'ê': case 'ë': return 'e';
            case 'î': case 'ï': return 'i';
            case 'ô': case 'ö': return 'o';
            case 'ù': case 'û': case 'ü': return 'u';
            case 'ç': return 'c';
            case 'ÿ': return 'y';
            default: return c;
        }
    }
}
