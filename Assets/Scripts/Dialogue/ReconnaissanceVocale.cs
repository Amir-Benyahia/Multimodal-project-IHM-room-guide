using UnityEngine;

// Entree vocale : un bouton micro ("appuyer pour parler").
// Le texte reconnu est envoye au GestionnaireDialogue, comme une question tapee.
// Utilise le plugin Speech to Text de yasirkula (Assets/Plugins/SpeechToText) :
// SFSpeechRecognizer sur iOS, SpeechRecognizer sur Android.
public class ReconnaissanceVocale : MonoBehaviour, ISpeechToTextListener
{
    [Header("References (trouvees automatiquement si vides)")]
    public GestionnaireDialogue dialogue;
    public SyntheseVocale synthese;

    [Header("Reglages")]
    public string langue = "fr-FR";
    [Tooltip("Reconnaissance sur le telephone, sans internet (moins precise)")]
    public bool horsLigne = false;
    public bool afficherBoutonMicro = true;

    private bool initialise;
    private bool enEcoute;
    private string texteEnCours = "";
    private float niveauVoix;

    void Awake()
    {
        if (dialogue == null)
            dialogue = GetComponent<GestionnaireDialogue>();

        if (dialogue == null)
            dialogue = FindFirstObjectByType<GestionnaireDialogue>();

        if (synthese == null)
            synthese = FindFirstObjectByType<SyntheseVocale>();
    }

    void Start()
    {
        initialise = SpeechToText.Initialize(langue);

        if (!initialise)
            Debug.LogWarning("Reconnaissance vocale : langue " + langue + " non disponible");
    }

    // ---------- Commandes ----------

    public void BasculerEcoute()
    {
        if (enEcoute)
            Arreter();
        else
            Ecouter();
    }

    public void Ecouter()
    {
        if (enEcoute || SpeechToText.IsBusy())
            return;

        if (!initialise || !SpeechToText.IsServiceAvailable(horsLigne))
        {
            texteEnCours = "Reconnaissance vocale indisponible sur cet appareil.";
            return;
        }

        // Ne pas s'ecouter soi-meme
        if (synthese != null)
            synthese.Arreter();

        SpeechToText.RequestPermissionAsync(permission =>
        {
            if (permission != SpeechToText.Permission.Granted)
            {
                texteEnCours = "Autorisez le micro dans les Réglages.";
                SpeechToText.OpenSettings();
                return;
            }

            enEcoute = SpeechToText.Start(this, true, horsLigne);
            texteEnCours = enEcoute ? "" : "Impossible de démarrer l'écoute.";
        });
    }

    // Termine l'ecoute et traite ce qui a deja ete dit
    public void Arreter()
    {
        if (enEcoute)
            SpeechToText.ForceStop();
    }

    // ---------- Retours du plugin ----------

    void ISpeechToTextListener.OnReadyForSpeech()
    {
        texteEnCours = "Je vous écoute...";
    }

    void ISpeechToTextListener.OnBeginningOfSpeech()
    {
    }

    void ISpeechToTextListener.OnVoiceLevelChanged(float niveau)
    {
        niveauVoix = niveau;
    }

    void ISpeechToTextListener.OnPartialResultReceived(string texte)
    {
        texteEnCours = texte;
    }

    void ISpeechToTextListener.OnResultReceived(string texte, int? codeErreur)
    {
        enEcoute = false;
        niveauVoix = 0f;
        Debug.Log("Micro : \"" + texte + "\"" + (codeErreur.HasValue ? " (erreur " + codeErreur + ")" : ""));

        // 0 : ecoute annulee volontairement
        if (codeErreur == 0)
        {
            texteEnCours = "";
            return;
        }

        if (!string.IsNullOrWhiteSpace(texte))
        {
            texteEnCours = texte;

            if (dialogue != null)
                dialogue.TraiterPhrase(texte);
            return;
        }

        // 9 (Android) : l'appli Google n'a pas acces au micro
        if (codeErreur == 9)
        {
            texteEnCours = "Autorisez le micro pour l'application Google.";
            SpeechToText.OpenGoogleAppSettings();
            return;
        }

        // 6 ou rien reconnu : l'utilisateur n'a pas parle
        texteEnCours = "Je n'ai rien entendu, réessayez.";
    }

    void OnDisable()
    {
        if (enEcoute)
            SpeechToText.Cancel();
    }

    // ---------- Bouton micro ----------

    void OnGUI()
    {
        if (!afficherBoutonMicro)
            return;

        // L'interface tourne avec le telephone (portrait / paysage)
        OrientationUI.Appliquer();
        float largeur = OrientationUI.Largeur;
        float hauteur = OrientationUI.Hauteur;
        Rect zone = new Rect(largeur / 2f - 110f, hauteur - 150f, 220f, 70f);

        GUIStyle style = new GUIStyle(GUI.skin.button) { fontSize = 22, fontStyle = FontStyle.Bold };
        Color avant = GUI.backgroundColor;
        GUI.backgroundColor = enEcoute ? Color.Lerp(Color.red, Color.yellow, niveauVoix) : Color.white;

        string libelle = enEcoute ? "Stop" : "Parler";
#if UNITY_EDITOR
        libelle += " (simulé)";
#endif
        if (GUI.Button(zone, libelle, style))
            BasculerEcoute();

        GUI.backgroundColor = avant;

        if (!string.IsNullOrEmpty(texteEnCours))
        {
            GUIStyle styleTexte = new GUIStyle(GUI.skin.box) { fontSize = 18, wordWrap = true };
            // En paysage, on laisse la place a droite pour le panneau du mode test
            float marge = largeur > hauteur ? 270f : 20f;
            GUI.Box(new Rect(20f, zone.y - 70f, largeur - 20f - marge, 60f), texteEnCours, styleTexte);
        }
    }
}
