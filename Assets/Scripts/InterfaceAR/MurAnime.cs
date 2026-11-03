using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using TMPro;

// "Le mur s'anime" : quand le projecteur est reconnu, des objets 3D sont poses sur le mur
// du fond et au sol, autour de lui : panneau de la salle, chemin vers la sortie,
// zone ou s'affiche l'image, reperes (interrupteur, extincteur...).
// Ils apparaissent quand on pose la question ("ou est la sortie ?", "ou sont les lumieres ?")
// et disparaissent apres quelques secondes ou a la question suivante.
// Les positions viennent de equipements.json (bloc "salle"), en metres, mesurees depuis le projecteur.
// On suppose que l'utilisateur est face au mur quand le projecteur est detecte.
// Bouton "Regler" : on touche a l'ecran la porte, l'interrupteur... pour corriger leurs positions
// (le point touche est projete sur le mur). Les reglages sont gardes sur le telephone.
public class MurAnime : MonoBehaviour
{
    [Header("References (trouvees automatiquement si vides)")]
    public InterfaceAR3D interfaceAR;
    public GestionnaireDialogue dialogue;
    public GestionEquipements gestion;

    [Tooltip("Combien de secondes les objets restent affiches apres la question")]
    public float duree = 25f;

    [Tooltip("Taille des etiquettes posees sur le mur (plus loin que le projecteur, donc plus grandes)")]
    public float tailleEtiquettes = 1.3f;

    // Taille des etiquettes, agrandie quand le projecteur est loin
    private float Taille => tailleEtiquettes * Mathf.Max(1f, interfaceAR.Echelle * 0.6f);

    public static readonly Color Vert = new Color(0.2f, 0.83f, 0.6f);

    private Salle salle;
    private Transform mur;
    private Transform panneauSalle;
    private Transform groupeSortie;
    private Transform groupeImage;
    private Transform groupeReperes;
    private Transform cheminSortie;
    private Vector3[] chemin;
    private Renderer zoneImage;
    private LineRenderer ondeActive;
    private float cacherA = -1f;
    private float pulsationSalleJusqua;
    private bool reglagesCharges;

    // Reglage en cours : index du repere a toucher (-1 = pas de reglage)
    private int reglage = -1;

    private readonly List<Transform> chevrons = new List<Transform>();
    private readonly List<TextMeshPro> flechesSortie = new List<TextMeshPro>();
    private readonly Dictionary<string, LineRenderer> ondes = new Dictionary<string, LineRenderer>();

    void Awake()
    {
        if (interfaceAR == null)
            interfaceAR = GetComponent<InterfaceAR3D>();

        if (interfaceAR == null)
            interfaceAR = FindFirstObjectByType<InterfaceAR3D>();

        if (dialogue == null)
            dialogue = FindFirstObjectByType<GestionnaireDialogue>();

        if (gestion == null)
            gestion = FindFirstObjectByType<GestionEquipements>();
    }

    void OnEnable()
    {
        if (interfaceAR != null)
            interfaceAR.ContenuConstruit += Construire;
    }

    void OnDisable()
    {
        if (interfaceAR != null)
            interfaceAR.ContenuConstruit -= Construire;
    }

    void Start()
    {
        if (dialogue != null)
            dialogue.IntentionTraitee += SurIntention;
    }

    void OnDestroy()
    {
        if (dialogue != null)
            dialogue.IntentionTraitee -= SurIntention;
    }

    // ---------- Reperes dans la salle ----------

    private float HauteurProjecteur => salle.hauteurProjecteur > 0f ? salle.hauteurProjecteur : 2.4f;

    // Le mur est juste derriere le projecteur
    private float ZMur => interfaceAR.tailleBoite.z / 2f;

    private float Sol => -HauteurProjecteur + 0.01f;

    // x : vers la droite le long du mur, y : hauteur depuis le sol, avance : distance devant le mur
    private Vector3 SurMur(float x, float y, float avance = 0f)
    {
        return new Vector3(x, y - HauteurProjecteur, ZMur - 0.01f - avance);
    }

    private Vector3 Centre(RepereSalle r)
    {
        return SurMur(r.x, r.y, r.avance);
    }

    private static Color Couleur(RepereSalle r)
    {
        return r.couleur == "orange" ? FormesAR.Orange : FormesAR.Turquoise;
    }

    private static Color Transparent(Color c, float a)
    {
        return new Color(c.r, c.g, c.b, a);
    }

    // ---------- Construction (a chaque fois que le projecteur est place) ----------

    private void Construire()
    {
        salle = gestion != null ? gestion.Salle : null;
        if (salle == null || interfaceAR.Ancre == null)
            return;

        if (!reglagesCharges)
        {
            ChargerReglages();
            reglagesCharges = true;
        }

        // Sur l'ancre (taille reelle), pas sur le contenu de l'interface qui est agrandi
        if (mur != null)
            Destroy(mur.gameObject);
        mur = FormesAR.Vide("Mur", interfaceAR.Ancre).transform;
        chevrons.Clear();
        flechesSortie.Clear();
        ondes.Clear();
        ondeActive = null;
        chemin = null;

        panneauSalle = ConstruirePanneauSalle();
        groupeSortie = ConstruireSortie();
        groupeImage = ConstruireImage();
        groupeReperes = ConstruireReperes();

        Cacher();

        if (reglage >= 0)
            ToutMontrer();
    }

    // Panneau "Salle 111" pose a plat sur le mur, toujours visible
    private Transform ConstruirePanneauSalle()
    {
        if (string.IsNullOrEmpty(salle.nom))
            return null;

        Transform p = FormesAR.Vide("PanneauSalle", mur).transform;
        p.localPosition = SurMur(salle.panneauX, salle.panneauY);
        p.localScale = Vector3.one * Taille;

        FormesAR.Panneau("Fond", p, new Vector2(0.62f, 0.2f), FormesAR.Turquoise);
        FormesAR.TexteUneLigne("Nom", p, salle.nom, 0.6f, Color.white, new Vector3(0, 0.03f, -0.005f), 0.58f).fontStyle = FontStyles.Bold;

        if (!string.IsNullOrEmpty(salle.sousTitre))
            FormesAR.TexteUneLigne("SousTitre", p, salle.sousTitre, 0.32f, new Color(0.71f, 0.94f, 0.9f), new Vector3(0, -0.055f, -0.005f), 0.58f);

        return p;
    }

    // Panneau SORTIE sur le mur + fleche jusqu'a la porte + cadre vert + chemin au sol
    private Transform ConstruireSortie()
    {
        RepereSalle porte = salle.Repere("SORTIE");
        if (porte == null)
            return null;

        Transform g = FormesAR.Vide("Sortie", mur).transform;
        Vector3 c = Centre(porte);

        // La porte : voile vert et cadre lumineux
        Voile(g, "Voile", c, porte.largeur, porte.hauteur, Transparent(Vert, 0.18f));
        Rectangle(g, "Cadre", c, porte.largeur + 0.08f, porte.hauteur + 0.08f, Vert, 0.03f);

        // Le panneau, a gauche au-dessus de la porte
        float hautPorte = porte.y + porte.hauteur / 2f;
        Vector3 pPanneau = SurMur(porte.x - porte.largeur / 2f - 0.6f, hautPorte + 0.25f);

        Transform panneau = FormesAR.Vide("Panneau", g).transform;
        panneau.localPosition = pPanneau;
        panneau.localScale = Vector3.one * Taille;
        FormesAR.Panneau("Fond", panneau, new Vector2(0.62f, 0.2f), Vert);
        FormesAR.TexteUneLigne("Texte", panneau, "SORTIE", 0.75f, Color.white, new Vector3(-0.07f, 0f, -0.005f), 0.4f).fontStyle = FontStyles.Bold;

        for (int i = 0; i < 3; i++)
        {
            TextMeshPro f = FormesAR.Texte("Chevron", panneau, "›", 0.8f, Vert, new Vector3(0.17f + i * 0.045f, 0.01f, -0.005f), 0.1f);
            f.fontStyle = FontStyles.Bold;
            flechesSortie.Add(f);
        }

        // Fleche murale : du panneau jusqu'au-dessus de la porte, puis vers le bas
        Vector3 a = pPanneau + new Vector3(0.31f * Taille + 0.05f, 0f, 0f);
        Vector3 b = new Vector3(c.x, pPanneau.y, c.z);
        Vector3 d = new Vector3(c.x, SurMur(0f, hautPorte + 0.1f).y, c.z);

        LineRenderer lueur = FormesAR.Ligne("Lueur", g, Transparent(Vert, 0.25f), 0.09f);
        LineRenderer trait = FormesAR.Ligne("Fleche", g, Vert, 0.035f);
        lueur.positionCount = trait.positionCount = 3;
        foreach (LineRenderer l in new[] { lueur, trait })
        {
            l.SetPosition(0, a);
            l.SetPosition(1, b);
            l.SetPosition(2, d + new Vector3(0f, 0.06f, 0f));
        }

        GameObject pointe = FormesAR.Cone("Pointe", g, 0.07f, 0.12f, Vert);
        pointe.transform.localPosition = d + new Vector3(0f, 0.12f, 0f);
        pointe.transform.localRotation = Quaternion.Euler(180f, 0f, 0f);

        // Le chemin au sol est trace quand on pose la question (il part de l'utilisateur)
        cheminSortie = FormesAR.Vide("Chemin", g).transform;

        return g;
    }

    // Zone de l'image sur le mur + ce qui la cache (ecran, tableau) + zone d'ombre au sol
    private Transform ConstruireImage()
    {
        RepereSalle image = salle.Repere("IMAGE");
        if (image == null)
            return null;

        Transform g = FormesAR.Vide("Image", mur).transform;
        Vector3 c = Centre(image);
        Color t = FormesAR.Turquoise;
        float l = image.largeur;
        float h = image.hauteur;

        zoneImage = Voile(g, "Zone", c, l, h, Transparent(t, 0.12f)).GetComponent<Renderer>();
        Rectangle(g, "Contour", c, l, h, Transparent(t, 0.5f), 0.01f);

        // Coins lumineux
        float k = Mathf.Min(0.25f, Mathf.Min(l, h) / 3f);
        for (int i = 0; i < 4; i++)
        {
            float sx = i % 2 == 0 ? -1f : 1f;
            float sy = i < 2 ? 1f : -1f;
            Vector3 coin = c + new Vector3(sx * l / 2f, sy * h / 2f, 0f);

            LineRenderer angle = FormesAR.Ligne("Coin", g, t, 0.035f);
            angle.positionCount = 3;
            angle.SetPosition(0, coin + new Vector3(0f, -sy * k, 0f));
            angle.SetPosition(1, coin);
            angle.SetPosition(2, coin + new Vector3(-sx * k, 0f, 0f));
        }

        // Sous l'image : au-dessus, il y a deja l'interface du projecteur
        Etiquette(g, c + new Vector3(0f, -h / 2f - 0.1f, -0.02f), "L'image s'affiche ici", t, false);

        // Ce qui est devant l'image
        foreach (string id in new[] { "ECRAN", "TABLEAU" })
        {
            RepereSalle r = salle.Repere(id);
            if (r != null)
                Rectangle(g, "Devant " + id, Centre(r), r.largeur + 0.06f, r.hauteur + 0.06f, FormesAR.Orange, 0.025f);
        }

        // Zone d'ombre au sol, juste devant le mur
        Vector3 s = new Vector3(c.x, Sol, ZMur - 0.45f);
        GameObject sol = Voile(g, "Ombre", s, l, 0.8f, Transparent(FormesAR.Orange, 0.18f));
        sol.transform.localRotation = Quaternion.Euler(90f, 0f, 0f);
        LineRenderer bord = Rectangle(g, "BordOmbre", s, l, 0.8f, FormesAR.Orange, 0.02f);
        bord.transform.localRotation = Quaternion.Euler(90f, 0f, 0f);

        Etiquette(g, s + new Vector3(0f, 0.3f, -0.45f), "Ici, vous faites de l'ombre", FormesAR.Orange, true);

        return g;
    }

    // Reperes : cercle ou cadre + etiquette pour chaque objet de la salle
    private Transform ConstruireReperes()
    {
        if (salle.reperes == null)
            return null;

        Transform g = FormesAR.Vide("Reperes", mur).transform;

        foreach (RepereSalle r in salle.reperes)
        {
            // La porte et l'image ont leur propre affichage
            if (r.id == "SORTIE" || r.id == "IMAGE")
                continue;

            Color couleur = Couleur(r);
            Transform p = FormesAR.Vide(r.id, g).transform;
            p.localPosition = Centre(r);

            LineRenderer onde;
            bool grand = r.largeur > 0.4f || r.hauteur > 0.4f;

            if (grand)
            {
                Rectangle(p, "Cadre", Vector3.zero, r.largeur + 0.06f, r.hauteur + 0.06f, Transparent(couleur, 0.7f), 0.02f);
                onde = Rectangle(p, "Onde", Vector3.zero, r.largeur + 0.06f, r.hauteur + 0.06f, couleur, 0.025f);
            }
            else
            {
                float rayon = Mathf.Max(r.largeur, r.hauteur) / 2f + 0.08f;
                FormesAR.Cercle("Cercle", p, rayon, Transparent(couleur, 0.8f), 0.015f, true);
                onde = FormesAR.Cercle("Onde", p, rayon, couleur, 0.025f, true);
            }

            onde.gameObject.SetActive(false);
            ondes[r.id] = onde;

            float haut = r.hauteur / 2f + (grand ? 0.03f : 0.08f);
            Etiquette(p, new Vector3(0f, haut + 0.1f * Taille, -0.02f), r.libelle, couleur, true);
        }

        return g;
    }

    // ---------- Petites formes ----------

    private static LineRenderer Rectangle(Transform parent, string nom, Vector3 centre, float largeur, float hauteur,
                                          Color couleur, float epaisseur)
    {
        LineRenderer r = FormesAR.Ligne(nom, parent, couleur, epaisseur, true);
        r.transform.localPosition = centre;
        r.positionCount = 4;
        r.SetPosition(0, new Vector3(-largeur / 2f, -hauteur / 2f, 0f));
        r.SetPosition(1, new Vector3(largeur / 2f, -hauteur / 2f, 0f));
        r.SetPosition(2, new Vector3(largeur / 2f, hauteur / 2f, 0f));
        r.SetPosition(3, new Vector3(-largeur / 2f, hauteur / 2f, 0f));
        return r;
    }

    // Surface transparente (sans collider)
    private static GameObject Voile(Transform parent, string nom, Vector3 centre, float largeur, float hauteur, Color couleur)
    {
        GameObject q = FormesAR.Primitive(PrimitiveType.Quad, nom, parent, centre, new Vector3(largeur, hauteur, 1f), couleur);
        Destroy(q.GetComponent<Collider>());
        return q;
    }

    private void Etiquette(Transform parent, Vector3 position, string texte, Color couleur, bool tourneVersUtilisateur)
    {
        if (string.IsNullOrEmpty(texte))
            return;

        Transform e = FormesAR.Vide("Etiquette", parent).transform;
        e.localPosition = position;
        e.localScale = Vector3.one * Taille;

        float largeur = Mathf.Clamp(0.08f + texte.Length * 0.026f, 0.25f, 0.8f);
        FormesAR.Panneau("Fond", e, new Vector2(largeur, 0.1f), couleur);
        FormesAR.TexteUneLigne("Texte", e, texte, 0.42f, Color.white, new Vector3(0f, 0f, -0.005f), largeur - 0.03f).fontStyle = FontStyles.Bold;

        if (tourneVersUtilisateur)
            interfaceAR.Suivre(e, false);
    }

    // Chemin en pointilles au sol, de devant l'utilisateur jusqu'a la porte de sortie
    private void TracerChemin()
    {
        RepereSalle porte = salle.Repere("SORTIE");
        Camera cam = interfaceAR.CameraAR;
        if (porte == null || cam == null || cheminSortie == null)
            return;

        foreach (Transform enfant in cheminSortie)
            Destroy(enfant.gameObject);
        chevrons.Clear();

        Vector3 avant = cam.transform.forward;
        avant.y = 0f;
        avant = avant.sqrMagnitude > 0.001f ? avant.normalized : Vector3.forward;

        Vector3 depart = interfaceAR.Ancre.InverseTransformPoint(cam.transform.position + avant * 0.8f);
        depart.y = Sol;

        Vector3 arrivee = SurMur(porte.x, 0f, 0.45f);
        arrivee.y = Sol;

        // On avance d'abord dans l'allee, puis on tourne vers la porte
        Vector3 c1 = new Vector3(depart.x, Sol, Mathf.Lerp(depart.z, arrivee.z, 0.6f));
        Vector3 c2 = new Vector3(Mathf.Lerp(depart.x, arrivee.x, 0.6f), Sol, arrivee.z);

        const int n = 48;
        chemin = new Vector3[n];
        for (int i = 0; i < n; i++)
            chemin[i] = Bezier(depart, c1, c2, arrivee, i / (n - 1f));

        LineRenderer lueur = FormesAR.Ligne("Lueur", cheminSortie, Transparent(Vert, 0.22f), 0.22f);
        lueur.positionCount = n;
        lueur.SetPositions(chemin);

        for (int i = 0; i + 1 < n; i += 2)
        {
            LineRenderer tiret = FormesAR.Ligne("Tiret", cheminSortie, Vert, 0.035f);
            tiret.positionCount = 2;
            tiret.SetPosition(0, chemin[i]);
            tiret.SetPosition(1, chemin[i + 1]);
        }

        // Chevrons blancs qui avancent vers la porte
        for (int k = 0; k < 5; k++)
        {
            LineRenderer v = FormesAR.Ligne("Chevron", cheminSortie, Color.white, 0.03f);
            v.positionCount = 3;
            v.SetPosition(0, new Vector3(-0.09f, 0f, -0.07f));
            v.SetPosition(1, new Vector3(0f, 0f, 0.02f));
            v.SetPosition(2, new Vector3(0.09f, 0f, -0.07f));
            chevrons.Add(v.transform);
        }
    }

    private static Vector3 Bezier(Vector3 a, Vector3 b, Vector3 c, Vector3 d, float t)
    {
        float u = 1f - t;
        return u * u * u * a + 3f * u * u * t * b + 3f * u * t * t * c + t * t * t * d;
    }

    // ---------- Reactions aux questions ----------

    private void SurIntention(InterpreteurCommandes.Intention intention)
    {
        if (mur == null || reglage >= 0)
            return;

        Cacher();

        switch (intention)
        {
            case InterpreteurCommandes.Intention.SORTIE:
                MontrerSortie();
                break;

            case InterpreteurCommandes.Intention.ZONE_IMAGE:
                Montrer(groupeImage);
                break;

            case InterpreteurCommandes.Intention.LUMIERE:
            case InterpreteurCommandes.Intention.SECURITE:
            case InterpreteurCommandes.Intention.REPERES:
                Montrer(groupeReperes);
                RepereSalle r = salle.RepereDeQuestion(intention.ToString());
                MettreEnAvant(r != null ? r.id : null);

                // En cas d'urgence, on montre aussi le chemin vers la sortie
                if (intention == InterpreteurCommandes.Intention.SECURITE)
                    MontrerSortie();
                break;

            case InterpreteurCommandes.Intention.SALLE:
                Montrer(groupeReperes);
                pulsationSalleJusqua = Time.time + 3f;
                break;

            default:
                // Autre question (allumer, brancher...) : le mur se fait discret
                return;
        }

        cacherA = Time.time + duree;
    }

    private void MontrerSortie()
    {
        Montrer(groupeSortie);
        TracerChemin();
    }

    private static void Montrer(Transform groupe)
    {
        if (groupe != null)
            groupe.gameObject.SetActive(true);
    }

    private void MettreEnAvant(string id)
    {
        ondeActive = null;
        foreach (KeyValuePair<string, LineRenderer> kv in ondes)
        {
            bool actif = kv.Key == id;
            kv.Value.gameObject.SetActive(actif);
            if (actif)
                ondeActive = kv.Value;
        }
    }

    private void Cacher()
    {
        foreach (Transform g in new[] { groupeSortie, groupeImage, groupeReperes })
            if (g != null)
                g.gameObject.SetActive(false);

        MettreEnAvant(null);
        cacherA = -1f;
    }

    // ---------- Reglage des reperes en touchant l'ecran ----------

    private void ToutMontrer()
    {
        Montrer(groupeSortie);
        Montrer(groupeImage);
        Montrer(groupeReperes);
        TracerChemin();
        cacherA = -1f;
    }

    private void DemarrerReglage()
    {
        if (salle == null || salle.reperes == null || salle.reperes.Count == 0)
            return;

        reglage = 0;
        interfaceAR.ToucherCapture = ToucherReglage;
        ToutMontrer();
    }

    private void TerminerReglage()
    {
        reglage = -1;
        if (interfaceAR != null && interfaceAR.ToucherCapture == ToucherReglage)
            interfaceAR.ToucherCapture = null;
        Cacher();
    }

    private void Passer()
    {
        reglage++;
        if (reglage >= salle.reperes.Count)
            TerminerReglage();
    }

    // Le point touche est projete sur le mur (plan juste derriere le projecteur)
    private bool ToucherReglage(Vector2 ecran)
    {
        if (reglage < 0 || interfaceAR.Ancre == null || interfaceAR.CameraAR == null)
            return false;

        Transform ancre = interfaceAR.Ancre;
        Ray rayon = interfaceAR.CameraAR.ScreenPointToRay(ecran);
        Vector3 o = ancre.InverseTransformPoint(rayon.origin);
        Vector3 d = ancre.InverseTransformDirection(rayon.direction);

        RepereSalle r = salle.reperes[reglage];
        float zCible = ZMur - r.avance;

        // On ne vise pas le mur (vers l'arriere ou parallele) : on ignore ce toucher
        if (d.z < 0.05f || o.z > zCible)
            return true;

        Vector3 p = o + d * ((zCible - o.z) / d.z);
        r.x = p.x;
        r.y = p.y + HauteurProjecteur;
        Sauver(r);

        Passer();
        Construire();
        return true;
    }

    private static string Cle(RepereSalle r)
    {
        return "MurAnime_" + r.id;
    }

    private static void Sauver(RepereSalle r)
    {
        PlayerPrefs.SetString(Cle(r), r.x.ToString(CultureInfo.InvariantCulture) + ";" + r.y.ToString(CultureInfo.InvariantCulture));
        PlayerPrefs.Save();
    }

    // Les positions touchees lors d'un reglage precedent remplacent celles du JSON
    private void ChargerReglages()
    {
        if (salle.reperes == null)
            return;

        foreach (RepereSalle r in salle.reperes)
        {
            string[] v = PlayerPrefs.GetString(Cle(r), "").Split(';');
            if (v.Length == 2 &&
                float.TryParse(v[0], NumberStyles.Float, CultureInfo.InvariantCulture, out float x) &&
                float.TryParse(v[1], NumberStyles.Float, CultureInfo.InvariantCulture, out float y))
            {
                r.x = x;
                r.y = y;
            }
        }
    }

    // Boutons 2D a gauche (sous "Recaler") et consigne du reglage
    void OnGUI()
    {
        if (interfaceAR == null || !interfaceAR.EstPlace || salle == null)
        {
            if (reglage >= 0)
                TerminerReglage();
            return;
        }

        OrientationUI.Appliquer();
        float largeur = OrientationUI.Largeur;
        GUIStyle styleBouton = new GUIStyle(GUI.skin.button) { fontSize = 16, fontStyle = FontStyle.Bold };

        if (reglage < 0)
        {
            if (GUI.Button(new Rect(10f, 92f, 120f, 40f), "Régler", styleBouton))
                DemarrerReglage();
            return;
        }

        if (GUI.Button(new Rect(10f, 92f, 120f, 40f), "Passer", styleBouton))
            Passer();

        if (reglage >= 0 && GUI.Button(new Rect(10f, 140f, 120f, 40f), "Terminer", styleBouton))
            TerminerReglage();

        if (reglage < 0)
            return;

        RepereSalle r = salle.reperes[reglage];
        GUIStyle style = new GUIStyle(GUI.skin.box) { fontSize = 18, fontStyle = FontStyle.Bold, wordWrap = true };
        float l = Mathf.Min(largeur - 40f, 380f);
        GUI.Box(new Rect((largeur - l) / 2f, 260f, l, 64f),
            "Réglage " + (reglage + 1) + "/" + salle.reperes.Count + "\nTouchez le centre de : " + r.libelle, style);
    }

    // ---------- Animations ----------

    void Update()
    {
        if (mur == null)
            return;

        float t = Time.time;

        if (cacherA > 0f && t > cacherA && reglage < 0)
            Cacher();

        // Les chevrons du panneau SORTIE clignotent l'un apres l'autre
        for (int i = 0; i < flechesSortie.Count; i++)
        {
            float a = 0.25f + 0.75f * (0.5f + 0.5f * Mathf.Sin(t * 5f - i * 0.9f));
            flechesSortie[i].color = Transparent(Vert, a);
        }

        // Les chevrons du chemin avancent vers la porte
        if (chemin != null && chevrons.Count > 0)
        {
            int n = chemin.Length;
            for (int k = 0; k < chevrons.Count; k++)
            {
                float f = (t * 0.25f + k / (float)chevrons.Count) % 1f;
                float position = f * (n - 1);
                int i = Mathf.Min(n - 2, Mathf.FloorToInt(position));
                Vector3 direction = chemin[i + 1] - chemin[i];

                chevrons[k].localPosition = Vector3.Lerp(chemin[i], chemin[i + 1], position - i) + new Vector3(0f, 0.02f, 0f);
                if (direction.sqrMagnitude > 0.000001f)
                    chevrons[k].localRotation = Quaternion.LookRotation(direction, Vector3.up);
            }
        }

        // La zone de l'image "respire"
        if (zoneImage != null && zoneImage.gameObject.activeInHierarchy)
            zoneImage.material.color = Transparent(FormesAR.Turquoise, 0.1f + 0.08f * Mathf.Sin(t * 2.5f));

        // Onde autour du repere demande (interrupteur, extincteur...)
        if (ondeActive != null)
        {
            float f = (t * 0.8f) % 1f;
            ondeActive.transform.localScale = Vector3.one * (1f + 0.6f * f);
            Color c = ondeActive.startColor;
            c.a = 1f - f;
            ondeActive.startColor = ondeActive.endColor = c;
        }

        // Le panneau de la salle pulse quand on demande ou on est
        if (panneauSalle != null)
        {
            float s = t < pulsationSalleJusqua ? 1f + 0.08f * Mathf.Abs(Mathf.Sin(t * 6f)) : 1f;
            panneauSalle.localScale = Vector3.one * (s * Taille);
        }
    }
}
