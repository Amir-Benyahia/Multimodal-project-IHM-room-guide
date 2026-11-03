using UnityEngine;
using UnityEngine.InputSystem;

// L'ecran reste en portrait (comme l'app Appareil photo de l'iPhone), mais
// l'interface 2D tourne pour rester lisible quand on met le telephone a l'horizontale.
// On lit la gravite avec l'accelerometre pour savoir comment le telephone est tenu.
// Bloquer l'ecran en portrait evite aussi que la camera AR soit tournee de 90 degres.
public class OrientationUI : MonoBehaviour
{
    // Angle de l'interface : 0 (portrait), 90 ou -90 (paysage), 180 (tete en bas)
    public static float Angle { get; private set; }

    // Taille de l'ecran "vu par l'utilisateur", en unites de l'interface
    public static float Largeur { get; private set; } = 400f;
    public static float Hauteur { get; private set; } = 900f;

    private static Matrix4x4 matrice = Matrix4x4.identity;
    private static float angleCible;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    private static void Creer()
    {
        Screen.orientation = ScreenOrientation.Portrait;

        GameObject go = new GameObject("OrientationUI");
        DontDestroyOnLoad(go);
        go.AddComponent<OrientationUI>();
    }

    void Start()
    {
        if (Accelerometer.current != null)
            InputSystem.EnableDevice(Accelerometer.current);
    }

    void Update()
    {
        if (Accelerometer.current != null)
        {
            Vector3 g = Accelerometer.current.acceleration.ReadValue();

            // Telephone a plat : on garde l'orientation precedente
            if (new Vector2(g.x, g.y).magnitude > 0.5f)
            {
                float brut = Mathf.Atan2(-g.x, -g.y) * Mathf.Rad2Deg;
                float arrondi = Mathf.Round(brut / 90f) * 90f;

                // On ne change que si on est franchement dans la nouvelle position
                if (Mathf.Abs(Mathf.DeltaAngle(brut, arrondi)) < 30f)
                    angleCible = arrondi == -180f ? 180f : arrondi;
            }
        }

        // Rotation animee
        Angle = Mathf.MoveTowardsAngle(Angle, angleCible, 540f * Time.unscaledDeltaTime);

        // L'interface fait 1100 unites de haut en portrait, quel que soit l'ecran
        float echelle = Mathf.Max(1f, Mathf.Max(Screen.width, Screen.height) / 1100f);
        bool paysage = Mathf.Abs(Mathf.DeltaAngle(angleCible, 90f)) < 1f || Mathf.Abs(Mathf.DeltaAngle(angleCible, -90f)) < 1f;

        Largeur = (paysage ? Screen.height : Screen.width) / echelle;
        Hauteur = (paysage ? Screen.width : Screen.height) / echelle;

        matrice = Matrix4x4.TRS(new Vector3(Screen.width / 2f, Screen.height / 2f, 0f), Quaternion.Euler(0, 0, Angle), Vector3.one)
                  * Matrix4x4.Scale(new Vector3(echelle, echelle, 1f))
                  * Matrix4x4.Translate(new Vector3(-Largeur / 2f, -Hauteur / 2f, 0f));
    }

    // A appeler au debut de chaque OnGUI : l'interface est ensuite dessinee
    // dans un ecran de taille Largeur x Hauteur, toujours "a l'endroit"
    public static void Appliquer()
    {
        GUI.matrix = matrice;
    }

    // Convertit un point touche (pixels, origine en bas a gauche) en coordonnees de l'interface
    public static Vector2 VersInterface(Vector2 ecran)
    {
        Vector3 gui = new Vector3(ecran.x, Screen.height - ecran.y, 0f);
        Vector3 p = matrice.inverse.MultiplyPoint3x4(gui);
        return new Vector2(p.x, p.y);
    }
}
