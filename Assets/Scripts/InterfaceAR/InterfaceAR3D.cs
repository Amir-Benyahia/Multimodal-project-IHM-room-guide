using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.XR.CoreUtils;
using TMPro;

// Interface AR en 3D, ancree sur le projecteur.
// Quand le projecteur est reconnu, on demande a l'utilisateur de le toucher a l'ecran :
// l'ancre est posee a l'endroit touche, et on construit autour : boite 3D, anneau avec menu, etiquette, sphere "assistant",
// points d'interet. Les reponses vocales declenchent des guides 3D (fleche Power, cable HDMI).
[DefaultExecutionOrder(100)]
public class InterfaceAR3D : MonoBehaviour
{
    [Header("References (trouvees automatiquement si vides)")]
    public GestionnaireDialogue dialogue;
    public GestionEquipements gestion;

    [Header("Placement")]
    [Tooltip("Distance de l'ancre si aucune surface n'est trouvee au centre de l'ecran (m)")]
    public float distanceParDefaut = 1.5f;
    [Tooltip("Distance minimale de l'ancre : evite une interface qui remplit l'ecran (m)")]
    public float distanceMin = 0.9f;
    [Tooltip("Hauteur du telephone tenu en main (m), pour estimer la distance du projecteur fixe en hauteur")]
    public float hauteurTelephone = 1.4f;

    [Header("Projecteur (en metres, repere de l'ancre : x a droite, y en haut, -z vers l'utilisateur)")]
    public Vector3 tailleBoite = new Vector3(0.40f, 0.17f, 0.38f);
    public Vector3 positionObjectif = new Vector3(-0.11f, 0f, -0.19f);
    public Vector3 positionPower = new Vector3(0.12f, 0.03f, -0.19f);
    public Vector3 positionHDMI = new Vector3(0.20f, 0f, 0.12f);
    public Vector3 positionSource = new Vector3(0.06f, 0.03f, -0.19f);
    public float rayonAnneau = 0.38f;

    [Header("Apparence")]
    [Tooltip("Taille des boutons, etiquettes et bulles (1 = taille d'origine)")]
    public float tailleElements = 0.7f;

    private Camera cam;
    private ARRaycastManager raycastManager;
    private readonly List<ARRaycastHit> resultats = new List<ARRaycastHit>();

    private Transform ancre;
    private Transform contenu;
    private string idAncre;
    private string idEnAttente;

    // Agrandissement de l'interface quand le projecteur est loin (reste lisible)
    private float echelle = 1f;
    private float apparition;
    private float prochainSignal;

    private Transform anneau;
    private Transform orbe;
    private Transform guideAllumer;
    private Transform guideBrancher;
    private TextMeshPro consigne;
    private Transform sousTitre;
    private TextMeshPro texteSousTitre;
    private float sousTitreJusqua;
    private GuideEtapes guide;
    private Transform etiquette;
    private readonly List<Transform> menu = new List<Transform>();
    private readonly List<Transform> faceCamera = new List<Transform>();
    private readonly List<Transform> flottants = new List<Transform>();

    private LineRenderer cable;
    private Transform impulsionCable;
    private bool attentePriseHDMI;
    private bool prisePlacee;

    private float parleJusqua;
    private AudioSource audioSource;
    private AudioClip ding;

    private const TrackableType Surfaces =
        TrackableType.PlaneWithinPolygon | TrackableType.PlaneEstimated |
        TrackableType.FeaturePoint | TrackableType.Depth;

    public bool EstPlace => ancre != null;
    public bool AttendPlacement => idEnAttente != null;
    public float Echelle => echelle;
    public Transform Ancre => ancre;

    // Si renseigne, recoit les touchers de l'ecran en premier (reglage des reperes du mur).
    // Renvoie true si le toucher est utilise.
    public Func<Vector2, bool> ToucherCapture;
    public Camera CameraAR => cam;

    // Pour le guide pas a pas (GuideEtapes)
    public Transform Contenu => contenu;
    public float HauteurEtiquette => tailleBoite.y / 2f + 0.17f;
    public event Action ContenuConstruit;

    // Pour le diagnostic du mode test : le dernier bouton 3D touche
    public string DernierToucher { get; private set; } = "aucun";

    void Awake()
    {
        if (dialogue == null)
            dialogue = GetComponent<GestionnaireDialogue>();

        if (dialogue == null)
            dialogue = FindFirstObjectByType<GestionnaireDialogue>();

        if (gestion == null)
            gestion = FindFirstObjectByType<GestionEquipements>();

        audioSource = gameObject.AddComponent<AudioSource>();
        audioSource.playOnAwake = false;
        ding = FormesAR.Ding();
    }

    void Start()
    {
        XROrigin origine = FindFirstObjectByType<XROrigin>();

        if (origine != null)
        {
            cam = origine.Camera;

            // Necessaires pour viser une surface et poser une ancre
            raycastManager = origine.GetComponent<ARRaycastManager>();
            if (raycastManager == null)
                raycastManager = origine.gameObject.AddComponent<ARRaycastManager>();

            if (origine.GetComponent<ARAnchorManager>() == null)
                origine.gameObject.AddComponent<ARAnchorManager>();
        }

        if (cam == null)
            cam = Camera.main;

        // Corrige la camera AR si elle arrive tournee de 90 degres (iPhone)
        if (cam != null && cam.GetComponent<CorrectionCameraAR>() == null)
            cam.gameObject.AddComponent<CorrectionCameraAR>();

        if (dialogue != null)
        {
            dialogue.ObjetVu += SurObjetVu;
            dialogue.IntentionTraitee += SurIntention;
            dialogue.ReponseDonnee += SurReponse;
        }
    }

    void OnDestroy()
    {
        if (dialogue != null)
        {
            dialogue.ObjetVu -= SurObjetVu;
            dialogue.IntentionTraitee -= SurIntention;
            dialogue.ReponseDonnee -= SurReponse;
        }
    }

    // ---------- Ancrage ----------

    private void SurObjetVu(string id)
    {
        if (ancre == null && idEnAttente == null)
            AttendrePlacement(id);
    }

    // Le projecteur est reconnu, mais l'IA ne dit pas ou il est dans l'image :
    // on attend que l'utilisateur le touche a l'ecran
    public void AttendrePlacement(string id)
    {
        idEnAttente = id;
    }

    private static bool ARActif()
    {
        return ARSession.state == ARSessionState.SessionTracking;
    }

    // Pose l'ancre a l'endroit vise par le centre de l'ecran
    public void Placer(string id)
    {
        Placer(id, new Vector2(Screen.width / 2f, Screen.height / 2f));
    }

    // Pose l'ancre sur l'appareil, a l'endroit touche de l'ecran
    public void Placer(string id, Vector2 ecran)
    {
        if (cam == null)
            return;

        Retirer();
        idEnAttente = null;

        Ray rayon = cam.ScreenPointToRay(ecran);
        float estimation = DistanceParHauteur(rayon.direction);
        float distance = estimation > 0f ? estimation : distanceParDefaut;

        if (ARActif() && raycastManager != null && raycastManager.Raycast(ecran, resultats, Surfaces))
        {
            // Le point touche est la surface avant de l'appareil : on recule d'une demi-boite
            float mesure = Vector3.Distance(rayon.origin, resultats[0].pose.position) + tailleBoite.z / 2f;

            // Beaucoup plus pres que prevu : on a touche un objet devant (ecran, tableau), pas le projecteur
            if (estimation < 0f || mesure > estimation * 0.6f)
                distance = mesure;
        }

        // Surface trop proche (un meuble devant soi) : on recule l'interface
        distance = Mathf.Max(distance, distanceMin);
        Vector3 position = rayon.origin + rayon.direction * distance;

        // Plus le projecteur est loin, plus l'interface est grande, pour rester lisible
        echelle = Mathf.Clamp(distance / 1.3f, 1f, 4f);

        // L'interface regarde l'utilisateur (rotation horizontale seulement)
        Vector3 avant = position - rayon.origin;
        avant.y = 0f;
        if (avant.sqrMagnitude < 0.001f)
            avant = Vector3.forward;

        ancre = new GameObject("AncreProjecteur").transform;
        ancre.SetPositionAndRotation(position, Quaternion.LookRotation(avant.normalized));

        if (ARActif())
            ancre.gameObject.AddComponent<ARAnchor>();

        idAncre = id;
        Construire(id);

        apparition = 0f;
        audioSource.PlayOneShot(ding);

        ContenuConstruit?.Invoke();
    }

    // Le projecteur est fixe en hauteur : si on le vise vers le haut, la difference de hauteur
    // avec le telephone donne sa distance. -1 si on ne vise pas assez vers le haut.
    private float DistanceParHauteur(Vector3 direction)
    {
        Salle salle = gestion != null ? gestion.Salle : null;
        float hauteurProjecteur = salle != null && salle.hauteurProjecteur > 0f ? salle.hauteurProjecteur : 2.4f;
        float ecart = hauteurProjecteur - hauteurTelephone;

        if (ecart <= 0.2f || direction.y < 0.2f)
            return -1f;

        return Mathf.Clamp(ecart / direction.y, 1f, 10f);
    }

    public void Retirer()
    {
        if (ancre != null)
            Destroy(ancre.gameObject);

        ancre = null;
        contenu = null;
        etiquette = null;
        menu.Clear();
        faceCamera.Clear();
        flottants.Clear();
        cable = null;
        impulsionCable = null;
        attentePriseHDMI = false;
        prisePlacee = false;
    }

    // ---------- Construction des objets 3D ----------

    private void Construire(string id)
    {
        Color t = FormesAR.Turquoise;
        contenu = FormesAR.Vide("Contenu", ancre).transform;
        contenu.localScale = Vector3.zero;

        Equipement objet = gestion != null ? gestion.Rechercher(id) : null;
        string nom = objet != null ? objet.nom : id;

        // Pas de cadre autour de l'appareil : il ne tombe jamais pile dessus et cache l'appareil.
        // Seuls l'etiquette et les boutons (en anneau sous l'appareil) sont affiches.
        float yAnneau = -tailleBoite.y / 2f - 0.05f;
        anneau = FormesAR.Vide("Anneau", contenu).transform;
        anneau.localPosition = new Vector3(0, yAnneau, 0);

        // Etiquette avec epaisseur, au-dessus
        float yEtiquette = tailleBoite.y / 2f + 0.17f;

        etiquette = FormesAR.Vide("Etiquette", contenu).transform;
        etiquette.localPosition = new Vector3(0, yEtiquette, 0);
        etiquette.localScale = Vector3.one * tailleElements;
        FormesAR.Panneau("Panneau", etiquette, new Vector2(0.5f, 0.12f), t);
        FormesAR.TexteUneLigne("Nom", etiquette, nom, 0.4f, Color.white, new Vector3(0, 0.02f, -0.005f), 0.46f).fontStyle = FontStyles.Bold;
        FormesAR.Texte("Type", etiquette, "Équipement reconnu", 0.22f, new Color(0.71f, 0.94f, 0.9f), new Vector3(0, -0.035f, -0.005f), 0.46f);
        faceCamera.Add(etiquette);

        // Menu en anneau : 5 boutons devant l'appareil
        AjouterBouton("Allumer", "ON", "Comment on l'allume ?", t, -165f, yAnneau);
        AjouterBouton("Brancher", "PC", "Comment je branche mon ordinateur ?", t, -135f, yAnneau);
        AjouterBouton("Guide", "1·2·3", "Guide-moi pas à pas", FormesAR.Orange, -105f, yAnneau);
        AjouterBouton("Salle", "111", "Montre-moi la salle", MurAnime.Vert, -75f, yAnneau);
        AjouterBouton("Télécommande", "TÉL", "Où est la télécommande ?", t, -45f, yAnneau);
        AjouterBouton("Panne", "!", "Ça ne marche pas", FormesAR.Orange, -15f, yAnneau);

        // Sphere "assistant vocal" a cote de l'appareil
        orbe = FormesAR.Vide("Assistant", contenu).transform;
        orbe.localPosition = new Vector3(-rayonAnneau - 0.1f, 0.06f, -0.1f);
        GameObject sphere = FormesAR.Primitive(PrimitiveType.Sphere, "Sphere", orbe, Vector3.zero, Vector3.one * 0.07f, t);
        Destroy(sphere.GetComponent<Collider>());
        GameObject reflet = FormesAR.Primitive(PrimitiveType.Sphere, "Reflet", orbe,
            new Vector3(-0.012f, 0.012f, -0.03f), Vector3.one * 0.022f, new Color(0.9f, 0.98f, 0.97f));
        Destroy(reflet.GetComponent<Collider>());
        Transform halo = FormesAR.Vide("Halo", orbe).transform;
        FormesAR.Cercle("Onde1", halo, 0.055f, new Color(t.r, t.g, t.b, 0.5f), 0.003f, true);
        FormesAR.Cercle("Onde2", halo, 0.075f, new Color(t.r, t.g, t.b, 0.25f), 0.003f, true);
        faceCamera.Add(halo);

        consigne = FormesAR.Texte("Consigne", orbe, "", 0.22f, Color.white, new Vector3(0, -0.08f, 0), 0.3f);
        faceCamera.Add(consigne.transform);

        // Sous-titre : la reponse de l'app, sous le menu
        sousTitre = FormesAR.Vide("SousTitre", contenu).transform;
        sousTitre.localPosition = new Vector3(0, yAnneau - 0.12f, -rayonAnneau);
        sousTitre.localScale = Vector3.one * tailleElements;
        FormesAR.Panneau("Panneau", sousTitre, new Vector2(0.62f, 0.15f), t);
        texteSousTitre = FormesAR.Texte("Texte", sousTitre, "", 0.2f, Color.white, new Vector3(0, 0, -0.005f), 0.58f);
        texteSousTitre.enableAutoSizing = true;
        texteSousTitre.fontSizeMin = 0.09f;
        texteSousTitre.fontSizeMax = 0.2f;
        texteSousTitre.rectTransform.sizeDelta = new Vector2(0.58f, 0.13f);
        sousTitre.gameObject.SetActive(false);
        faceCamera.Add(sousTitre);

        // Guides (caches tant qu'on ne pose pas la question)
        guideAllumer = ConstruireGuideAllumer();
        guideAllumer.gameObject.SetActive(false);

        guideBrancher = FormesAR.Vide("GuideBrancher", contenu).transform;
        guideBrancher.gameObject.SetActive(false);
    }

    private void AjouterBouton(string libelle, string symbole, string phrase, Color couleur, float angle, float y)
    {
        float a = angle * Mathf.Deg2Rad;
        Transform support = CreerBouton(contenu, libelle, symbole, phrase, couleur);
        support.localPosition = new Vector3(Mathf.Cos(a) * rayonAnneau, y + 0.06f, Mathf.Sin(a) * rayonAnneau);
        menu.Add(support);
    }

    // Bouton 3D rond : on le touche, ou on dit sa phrase
    public Transform CreerBouton(Transform parent, string libelle, string symbole, string phrase, Color couleur)
    {
        Transform support = FormesAR.Vide("Bouton " + libelle, parent).transform;
        support.localScale = Vector3.one * tailleElements;

        FormesAR.Disque("Bord", support, 0.1f, couleur, 0.003f);

        // Le disque sombre porte le collider : c'est lui qu'on touche
        GameObject disque = FormesAR.Primitive(PrimitiveType.Cylinder, "Disque", support,
            Vector3.zero, new Vector3(0.092f, 0.004f, 0.092f), new Color(0.06f, 0.07f, 0.09f, 1f));
        disque.transform.localRotation = Quaternion.Euler(90f, 0, 0);
        disque.AddComponent<BoutonAR>().phrase = phrase;

        FormesAR.TexteUneLigne("Symbole", support, symbole, 0.3f, couleur, new Vector3(0, 0, -0.006f), 0.08f).fontStyle = FontStyles.Bold;
        FormesAR.Texte("Libelle", support, libelle, 0.2f, Color.white, new Vector3(0, -0.07f, 0), 0.2f);

        faceCamera.Add(support);
        flottants.Add(support);
        return support;
    }

    // Cache le menu et l'etiquette pendant le guide pas a pas
    public void AfficherMenu(bool visible)
    {
        foreach (Transform t in menu)
            if (t != null)
                t.gameObject.SetActive(visible);

        if (etiquette != null)
            etiquette.gameObject.SetActive(visible);

        if (!visible && guideAllumer != null)
        {
            guideAllumer.gameObject.SetActive(false);
            guideBrancher.gameObject.SetActive(false);
        }
    }

    // Position d'une partie de l'appareil (repere du contenu, qui est agrandi : on divise), pour le guide
    public bool PositionRepere(string repere, out Vector3 position)
    {
        switch (repere)
        {
            case "POWER": position = positionPower / echelle; return true;
            case "HDMI": position = positionHDMI / echelle; return true;
            case "SOURCE": position = positionSource / echelle; return true;
            case "OBJECTIF": position = positionObjectif / echelle; return true;
            default: position = Vector3.zero; return false;
        }
    }

    // L'objet se tourne vers l'utilisateur (et flotte doucement)
    public void Suivre(Transform t, bool flotte)
    {
        faceCamera.Add(t);
        if (flotte)
            flottants.Add(t);
    }

    private Transform ConstruireGuideAllumer()
    {
        Color o = FormesAR.Orange;
        Transform guide = FormesAR.Vide("GuideAllumer", contenu).transform;
        guide.localPosition = positionPower / echelle;

        // Anneaux autour du bouton
        Transform anneaux = FormesAR.Vide("Anneaux", guide).transform;
        FormesAR.Cercle("A1", anneaux, 0.03f, o, 0.004f, true);
        FormesAR.Cercle("A2", anneaux, 0.05f, new Color(o.r, o.g, o.b, 0.5f), 0.003f, true);
        FormesAR.Cercle("A3", anneaux, 0.07f, new Color(o.r, o.g, o.b, 0.25f), 0.003f, true);
        faceCamera.Add(anneaux);

        // Fleche qui pointe le bouton
        Transform fleche = FormesAR.Fleche("Fleche", guide, o, 1.2f).transform;
        fleche.localPosition = new Vector3(0, 0.07f, 0);
        flottants.Add(fleche);

        // Bulle "etape 1"
        Transform bulle = FormesAR.Vide("Bulle", guide).transform;
        bulle.localPosition = new Vector3(0.24f, 0.16f, 0f);
        bulle.localScale = Vector3.one * tailleElements;
        FormesAR.Panneau("Panneau", bulle, new Vector2(0.3f, 0.1f), o);
        FormesAR.Texte("Etape", bulle, "ÉTAPE 1", 0.16f, o, new Vector3(0, 0.03f, -0.005f), 0.28f).fontStyle = FontStyles.Bold;
        FormesAR.Texte("Texte", bulle, "Appuyez sur Power", 0.26f, Color.white, new Vector3(0, -0.012f, -0.005f), 0.28f).fontStyle = FontStyles.Bold;
        faceCamera.Add(bulle);

        return guide;
    }

    private void ConstruireCable(Vector3 cibleMonde)
    {
        foreach (Transform enfant in guideBrancher)
            Destroy(enfant.gameObject);

        Color t = FormesAR.Turquoise;
        Vector3 depart = positionHDMI / echelle;
        Vector3 arrivee = contenu.InverseTransformPoint(cibleMonde);

        // Courbe de Bezier : le cable part vers l'arriere puis descend vers la prise
        Vector3 c1 = depart + new Vector3(0.25f, 0f, 0.1f);
        Vector3 c2 = arrivee + new Vector3(0f, 0.5f, 0f);

        cable = FormesAR.Ligne("Cable", guideBrancher, t, 0.012f);
        LineRenderer lueur = FormesAR.Ligne("Lueur", guideBrancher, new Color(t.r, t.g, t.b, 0.2f), 0.035f);
        const int n = 40;
        cable.positionCount = lueur.positionCount = n;

        for (int i = 0; i < n; i++)
        {
            Vector3 p = Bezier(depart, c1, c2, arrivee, i / (n - 1f));
            cable.SetPosition(i, p);
            lueur.SetPosition(i, p);
        }

        GameObject bille = FormesAR.Primitive(PrimitiveType.Sphere, "Impulsion", guideBrancher, depart, Vector3.one * 0.03f, Color.white);
        Destroy(bille.GetComponent<Collider>());
        impulsionCable = bille.transform;

        // Repere au-dessus de la prise
        Transform prise = FormesAR.Vide("Prise", guideBrancher).transform;
        prise.localPosition = arrivee;
        FormesAR.Cercle("Cercle1", prise, 0.06f, FormesAR.Orange, 0.005f);
        FormesAR.Cercle("Cercle2", prise, 0.1f, new Color(1f, 0.71f, 0.28f, 0.4f), 0.003f);

        Transform fleche = FormesAR.Fleche("Fleche", prise, FormesAR.Orange, 1.4f).transform;
        fleche.localPosition = new Vector3(0, 0.08f, 0);
        flottants.Add(fleche);

        Transform bulle = FormesAR.Vide("Bulle", prise).transform;
        bulle.localPosition = new Vector3(0, 0.38f, 0);
        bulle.localScale = Vector3.one * tailleElements;
        FormesAR.Panneau("Panneau", bulle, new Vector2(0.34f, 0.1f), FormesAR.Orange);
        FormesAR.Texte("Etape", bulle, "PRISE HDMI", 0.16f, FormesAR.Orange, new Vector3(0, 0.03f, -0.005f), 0.32f).fontStyle = FontStyles.Bold;
        FormesAR.Texte("Texte", bulle, "Branchez votre PC ici", 0.26f, Color.white, new Vector3(0, -0.012f, -0.005f), 0.32f).fontStyle = FontStyles.Bold;
        faceCamera.Add(bulle);

        prisePlacee = true;
    }

    private static Vector3 Bezier(Vector3 a, Vector3 b, Vector3 c, Vector3 d, float t)
    {
        float u = 1f - t;
        return u * u * u * a + 3f * u * u * t * b + 3f * u * t * t * c + t * t * t * d;
    }

    // ---------- Reactions au dialogue ----------

    private void SurIntention(InterpreteurCommandes.Intention intention)
    {
        if (ancre == null)
            return;

        attentePriseHDMI = false;
        consigne.text = "";
        bool power = intention == InterpreteurCommandes.Intention.ALLUMER ||
                     intention == InterpreteurCommandes.Intention.ETEINDRE ||
                     intention == InterpreteurCommandes.Intention.PAS_ALLUME;
        bool hdmi = intention == InterpreteurCommandes.Intention.BRANCHER ||
                    intention == InterpreteurCommandes.Intention.PAS_IMAGE;

        guideAllumer.gameObject.SetActive(power);
        guideBrancher.gameObject.SetActive(hdmi);

        // La position de la prise HDMI est inconnue : on la demande une fois
        if (hdmi && !prisePlacee)
        {
            attentePriseHDMI = true;
            consigne.text = "Touchez l'endroit\nde la prise HDMI";
        }
    }

    private void SurReponse(string texte)
    {
        parleJusqua = Time.time + Mathf.Clamp(texte.Length * 0.06f, 1f, 12f);

        if (guide == null)
            guide = FindFirstObjectByType<GuideEtapes>();

        // Pendant le guide, le texte est deja sur le panneau de l'etape
        if (sousTitre == null || (guide != null && guide.Actif))
        {
            if (sousTitre != null)
                sousTitre.gameObject.SetActive(false);
            return;
        }

        texteSousTitre.text = texte;
        sousTitre.gameObject.SetActive(true);
        sousTitreJusqua = parleJusqua + 3f;
    }

    // ---------- Chaque image ----------

    void Update()
    {
        GererToucher();

        if (ancre == null || cam == null)
            return;

        float temps = Time.time;

        // Apparition avec un petit rebond
        if (apparition < 1f)
        {
            apparition = Mathf.Min(1f, apparition + Time.deltaTime / 0.6f);
            float s = 1f + 2.2f * Mathf.Pow(apparition - 1f, 3f) + 1.2f * Mathf.Pow(apparition - 1f, 2f);
            contenu.localScale = Vector3.one * (s * echelle);
        }

        anneau.Rotate(0f, 15f * Time.deltaTime, 0f, Space.Self);

        if (sousTitre != null && sousTitre.gameObject.activeSelf && temps > sousTitreJusqua)
            sousTitre.gameObject.SetActive(false);

        // Les panneaux et boutons se tournent vers l'utilisateur
        foreach (Transform t in faceCamera)
        {
            if (t == null)
                continue;

            Vector3 direction = t.position - cam.transform.position;
            direction.y = 0f;
            if (direction.sqrMagnitude > 0.0001f)
                t.rotation = Quaternion.LookRotation(direction);
        }

        // Leger flottement
        for (int i = 0; i < flottants.Count; i++)
        {
            if (flottants[i] == null)
                continue;

            Vector3 p = flottants[i].localPosition;
            p.y += Mathf.Sin(temps * 2.4f + i) * 0.0004f;
            flottants[i].localPosition = p;
        }

        // L'assistant respire, et "parle" quand l'app parle
        float pulsation = temps < parleJusqua ? 1f + 0.18f * Mathf.Abs(Mathf.Sin(temps * 9f)) : 1f + 0.04f * Mathf.Sin(temps * 2f);
        orbe.localScale = Vector3.one * (pulsation * tailleElements);
        orbe.localPosition = new Vector3(orbe.localPosition.x, 0.06f + Mathf.Sin(temps * 1.5f) * 0.015f, orbe.localPosition.z);

        // Une impulsion lumineuse parcourt le cable
        if (impulsionCable != null && cable != null && guideBrancher.gameObject.activeSelf)
        {
            float f = (temps * 0.5f) % 1f;
            int index = Mathf.Min(cable.positionCount - 1, Mathf.FloorToInt(f * (cable.positionCount - 1)));
            impulsionCable.localPosition = cable.GetPosition(index);
        }

        // Tant que l'appareil est a l'ecran, le dialogue sait de quoi on parle
        if (temps >= prochainSignal && dialogue != null && EstVisible())
        {
            prochainSignal = temps + 1f;
            dialogue.ObjetDetecte(idAncre);
        }
    }

    private bool EstVisible()
    {
        Vector3 v = cam.WorldToViewportPoint(ancre.position);
        return v.z > 0f && v.x > -0.1f && v.x < 1.1f && v.y > -0.1f && v.y < 1.1f;
    }

    // ---------- Toucher l'ecran ----------

    private void GererToucher()
    {
        if (cam == null || !Appui(out Vector2 position))
            return;

        // Reglage des reperes du mur en cours (MurAnime)
        if (ToucherCapture != null && ToucherCapture(position))
            return;

        // Projecteur reconnu : le toucher pose l'interface a cet endroit
        if (idEnAttente != null)
        {
            DernierToucher = "placement (" + position.x.ToString("F0") + ", " + position.y.ToString("F0") + ")";
            Placer(idEnAttente, position);
            return;
        }

        Ray rayon = cam.ScreenPointToRay(position);

        BoutonAR bouton = null;
        if (Physics.Raycast(rayon, out RaycastHit hit, 20f))
            bouton = hit.collider.GetComponent<BoutonAR>();

        // Le doigt est un peu a cote : on prend le bouton le plus proche a l'ecran
        if (bouton == null)
            bouton = BoutonProche(position);

        if (bouton != null)
        {
            DernierToucher = bouton.phrase;
            bouton.Appuyer();
            audioSource.PlayOneShot(ding, 0.5f);

            if (dialogue != null)
                dialogue.TraiterPhrase(bouton.phrase);
            return;
        }

        DernierToucher = "rien (" + position.x.ToString("F0") + ", " + position.y.ToString("F0") + ")";

        if (attentePriseHDMI && ancre != null)
        {
            Vector3 cible = rayon.origin + rayon.direction * Vector3.Distance(cam.transform.position, ancre.position);

            if (ARActif() && raycastManager != null && raycastManager.Raycast(position, resultats, Surfaces))
                cible = resultats[0].pose.position;

            attentePriseHDMI = false;
            consigne.text = "";
            ConstruireCable(cible);
            guideBrancher.gameObject.SetActive(true);
        }
    }

    private BoutonAR BoutonProche(Vector2 position)
    {
        BoutonAR meilleur = null;
        float meilleureDistance = float.MaxValue;

        foreach (BoutonAR b in BoutonAR.Tous)
        {
            if (b == null || !b.gameObject.activeInHierarchy)
                continue;

            Vector3 centre = cam.WorldToScreenPoint(b.transform.position);
            if (centre.z <= 0f)
                continue;

            // Rayon du bouton a l'ecran, avec de la marge pour le doigt
            float rayonMonde = 0.05f * b.transform.parent.lossyScale.x;
            Vector3 bord = cam.WorldToScreenPoint(b.transform.position + cam.transform.right * rayonMonde);
            float rayon = Mathf.Max(Vector2.Distance(centre, bord) * 1.4f, Screen.height * 0.025f);

            float distance = Vector2.Distance(position, centre);
            if (distance < rayon && distance < meilleureDistance)
            {
                meilleur = b;
                meilleureDistance = distance;
            }
        }

        return meilleur;
    }

    private static bool Appui(out Vector2 position)
    {
        position = Vector2.zero;

        // Ne pas reagir aux appuis sur les boutons 2D (micro, mode test)
        if (GUIUtility.hotControl != 0)
            return false;

        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame)
        {
            position = Touchscreen.current.primaryTouch.position.ReadValue();
            return !ZoneBoutons2D(position);
        }

        if (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame)
        {
            position = Mouse.current.position.ReadValue();
            return !ZoneBoutons2D(position);
        }

        return false;
    }

    // Bas de l'interface (bouton micro) et coin haut droit (mode test) : reserves a l'interface 2D.
    // L'interface tourne avec le telephone, donc on raisonne dans ses coordonnees.
    private static bool ZoneBoutons2D(Vector2 ecran)
    {
        Vector2 p = OrientationUI.VersInterface(ecran);
        float largeur = OrientationUI.Largeur;
        float hauteur = OrientationUI.Hauteur;

        bool boutonMicro = p.y > hauteur - 170f && Mathf.Abs(p.x - largeur / 2f) < 130f;
        bool boutonsTest = p.y < 140f && p.x > largeur - 140f;
        bool boutonsGauche = p.y < 250f && p.x < 150f;   // Recaler, Regler, Passer, Terminer
        return boutonMicro || boutonsTest || boutonsGauche;
    }

    // ---------- Interface 2D : consigne de placement et bouton "Recaler" ----------

    void OnGUI()
    {
        if (idEnAttente == null && ancre == null)
            return;

        OrientationUI.Appliquer();
        float largeur = OrientationUI.Largeur;

        if (idEnAttente != null)
        {
            // Bandeau qui clignote doucement pour attirer l'oeil
            float a = 0.75f + 0.25f * Mathf.Sin(Time.time * 4f);
            Color avant = GUI.color;
            GUI.color = new Color(1f, 1f, 1f, a);

            GUIStyle style = new GUIStyle(GUI.skin.box) { fontSize = 18, fontStyle = FontStyle.Bold, wordWrap = true };
            float l = Mathf.Min(largeur - 40f, 380f);
            GUI.Box(new Rect((largeur - l) / 2f, 220f, l, 64f),
                "Projecteur reconnu !\nTouchez-le sur l'écran", style);

            GUI.color = avant;
            return;
        }

        GUIStyle styleBouton = new GUIStyle(GUI.skin.button) { fontSize = 16, fontStyle = FontStyle.Bold };
        if (GUI.Button(new Rect(10f, 40f, 120f, 44f), "Recaler", styleBouton))
        {
            string id = idAncre;
            Retirer();
            AttendrePlacement(id);
        }
    }
}
