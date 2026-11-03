using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.XR;
using UnityEngine.XR.ARFoundation;

// Sur l'iPhone, la pose de la camera AR peut arriver tournee de 90 degres
// (dans le sens du capteur photo, pas de l'ecran) : les objets 3D paraissent penches.
// On compare l'inclinaison de la camera AR a celle du telephone (accelerometre)
// et on corrige l'ecart, qui est toujours un multiple de 90 degres.
// Ajoute automatiquement sur la camera AR par InterfaceAR3D.
// S'execute apres le suivi de la camera (ordre 0) et avant InterfaceAR3D (ordre 100).
[DefaultExecutionOrder(50)]
public class CorrectionCameraAR : MonoBehaviour
{
    // Correction appliquee, en degres (0 si la camera est deja droite)
    public static float Correction { get; private set; }

    private TrackedPoseDriver suivi;
    private Quaternion derniereEcrite;
    private bool aEcrit;
    private float candidat;
    private int confirmations;

    void Start()
    {
        suivi = GetComponent<TrackedPoseDriver>();

        // Le suivi ne met plus la camera a jour juste avant l'affichage :
        // sinon il effacerait la correction
        if (suivi != null)
            suivi.updateType = TrackedPoseDriver.UpdateType.Update;
    }

    void Update()
    {
        Corriger();
    }

    void LateUpdate()
    {
        Corriger();
    }

    private void Corriger()
    {
        if (suivi == null || !suivi.enabled)
            return;

        // Deja corrigee depuis la derniere mise a jour du suivi
        if (aEcrit && transform.localRotation == derniereEcrite)
            return;

        Mesurer();

        if (Correction != 0f)
            transform.localRotation = transform.localRotation * Quaternion.AngleAxis(-Correction, Vector3.forward);

        derniereEcrite = transform.localRotation;
        aEcrit = true;
    }

    // Ecart entre l'inclinaison de la camera AR (avant correction) et celle du telephone
    private void Mesurer()
    {
        if (Accelerometer.current == null || ARSession.state != ARSessionState.SessionTracking)
            return;

        Vector3 g = Accelerometer.current.acceleration.ReadValue();
        Vector3 avant = transform.forward;

        // Seulement quand le telephone est tenu a peu pres debout
        if (new Vector2(g.x, g.y).magnitude < 0.6f || Mathf.Abs(avant.y) > 0.7f)
            return;

        float roulisTelephone = Mathf.Atan2(-g.x, -g.y) * Mathf.Rad2Deg;
        float roulisCamera = Vector3.SignedAngle(Vector3.ProjectOnPlane(Vector3.up, avant), transform.up, avant);

        float ecart = Mathf.DeltaAngle(roulisTelephone, roulisCamera);
        float arrondi = Mathf.Round(ecart / 90f) * 90f;

        // Mesure pas assez nette (telephone en mouvement)
        if (Mathf.Abs(ecart - arrondi) > 20f)
            return;

        if (arrondi == -180f)
            arrondi = 180f;

        if (arrondi == Correction)
        {
            confirmations = 0;
            return;
        }

        // On change la correction seulement si l'ecart se confirme sur plusieurs images
        if (arrondi == candidat)
        {
            confirmations++;
        }
        else
        {
            candidat = arrondi;
            confirmations = 1;
        }

        if (confirmations >= 15)
        {
            Correction = arrondi;
            confirmations = 0;
        }
    }
}
