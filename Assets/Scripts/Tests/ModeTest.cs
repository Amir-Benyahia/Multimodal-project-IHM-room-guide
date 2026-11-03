using UnityEngine;

// Mode test : fait comme si le projecteur etait detecte, pour tester sans lui (chez soi).
// Un bouton "Test" en haut a droite l'active. On touche ensuite un objet a l'ecran
// (une boite, une lampe...) pour y poser l'interface 3D. "Replacer" la deplace.
public class ModeTest : MonoBehaviour
{
    public GestionnaireDialogue dialogue;
    public InterfaceAR3D interfaceAR;
    public string idSimule = "PROJECTEUR_EPSON_01";
    public bool afficherBouton = true;

    private bool actif;
    private float prochainSignal;

    public bool Actif => actif;

    void Awake()
    {
        if (dialogue == null)
            dialogue = FindFirstObjectByType<GestionnaireDialogue>();

        if (interfaceAR == null)
            interfaceAR = FindFirstObjectByType<InterfaceAR3D>();
    }

    public void Activer(bool valeur)
    {
        actif = valeur;

        if (interfaceAR == null)
            return;

        if (actif)
        {
            interfaceAR.AttendrePlacement(idSimule);
            Signaler();
        }
        else
        {
            interfaceAR.Retirer();
        }
    }

    public void Replacer()
    {
        if (interfaceAR != null)
        {
            interfaceAR.Retirer();
            interfaceAR.AttendrePlacement(idSimule);
        }
    }

    void Update()
    {
        // Le "projecteur" reste detecte tant que le mode test est actif
        if (actif && Time.time >= prochainSignal)
            Signaler();
    }

    private void Signaler()
    {
        prochainSignal = Time.time + 1f;

        if (dialogue != null)
            dialogue.ObjetDetecte(idSimule);
    }

    // Inclinaison de la camera AR par rapport a la verticale : doit etre proche de 0
    // quand on tient le telephone droit (sinon la camera AR est mal orientee)
    private string Diagnostic()
    {
        Camera cam = interfaceAR != null ? interfaceAR.CameraAR : null;
        if (cam == null)
            return "";

        Vector3 avant = cam.transform.forward;
        Vector3 hautMonde = Vector3.ProjectOnPlane(Vector3.up, avant);
        float roulis = Vector3.SignedAngle(hautMonde, cam.transform.up, avant);
        return "Inclinaison caméra : " + roulis.ToString("F0") + "°  correction : " + CorrectionCameraAR.Correction.ToString("F0") + "°\n" +
               "Toucher : " + interfaceAR.DernierToucher;
    }

    void OnGUI()
    {
        if (!afficherBouton)
            return;

        OrientationUI.Appliquer();
        float largeur = OrientationUI.Largeur;

        GUIStyle style = new GUIStyle(GUI.skin.button) { fontSize = 16, fontStyle = FontStyle.Bold };
        Color avant = GUI.backgroundColor;

        GUI.backgroundColor = actif ? new Color(1f, 0.71f, 0.28f) : Color.white;
        if (GUI.Button(new Rect(largeur - 130f, 40f, 120f, 44f), actif ? "Test : ON" : "Test : OFF", style))
            Activer(!actif);

        GUI.backgroundColor = avant;

        if (actif)
        {
            if (GUI.Button(new Rect(largeur - 130f, 92f, 120f, 40f), "Replacer", style))
                Replacer();

            GUIStyle styleInfo = new GUIStyle(GUI.skin.box) { fontSize = 12, wordWrap = true };
            GUI.Box(new Rect(largeur - 250f, 140f, 240f, 64f),
                "Touchez un objet pour y poser l'interface.\n" + Diagnostic(), styleInfo);
        }
    }
}
