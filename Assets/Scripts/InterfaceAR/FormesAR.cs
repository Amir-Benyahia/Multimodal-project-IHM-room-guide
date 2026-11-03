using System.Collections.Generic;
using UnityEngine;
using TMPro;

// Petites fonctions pour fabriquer les objets 3D de l'interface AR par code
// (pas de prefab ni de materiau a regler dans l'editeur).
public static class FormesAR
{
    public static readonly Color Turquoise = new Color(0.49f, 0.89f, 0.83f);
    public static readonly Color Orange = new Color(1f, 0.71f, 0.28f);
    public static readonly Color FondSombre = new Color(0.05f, 0.06f, 0.08f, 0.88f);

    private static Shader shaderLumineux;

    // Materiau "lumineux" : non eclaire, transparent, toujours inclus dans le build
    public static Material Materiau(Color couleur)
    {
        if (shaderLumineux == null)
            shaderLumineux = Shader.Find("Sprites/Default") ?? Shader.Find("UI/Default");

        Material m = new Material(shaderLumineux);
        m.color = couleur;
        return m;
    }

    public static GameObject Vide(string nom, Transform parent)
    {
        GameObject go = new GameObject(nom);
        go.transform.SetParent(parent, false);
        return go;
    }

    public static GameObject Primitive(PrimitiveType type, string nom, Transform parent,
                                       Vector3 position, Vector3 taille, Color couleur)
    {
        GameObject go = GameObject.CreatePrimitive(type);
        go.name = nom;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = position;
        go.transform.localScale = taille;
        go.GetComponent<Renderer>().material = Materiau(couleur);
        return go;
    }

    public static LineRenderer Ligne(string nom, Transform parent, Color couleur, float largeur, bool boucle = false)
    {
        LineRenderer l = Vide(nom, parent).AddComponent<LineRenderer>();
        l.useWorldSpace = false;
        l.loop = boucle;
        l.widthMultiplier = largeur;
        l.material = Materiau(couleur);
        l.startColor = l.endColor = couleur;
        l.numCapVertices = 2;
        l.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        return l;
    }

    // Les 12 aretes d'une boite (un LineRenderer par arete)
    public static GameObject BoiteFilaire(string nom, Transform parent, Vector3 taille, Color couleur, float largeur)
    {
        GameObject boite = Vide(nom, parent);
        Vector3 d = taille / 2f;

        Vector3[] coins =
        {
            new Vector3(-d.x, -d.y, -d.z), new Vector3(d.x, -d.y, -d.z),
            new Vector3(d.x, -d.y, d.z), new Vector3(-d.x, -d.y, d.z),
            new Vector3(-d.x, d.y, -d.z), new Vector3(d.x, d.y, -d.z),
            new Vector3(d.x, d.y, d.z), new Vector3(-d.x, d.y, d.z)
        };

        int[,] aretes =
        {
            {0,1},{1,2},{2,3},{3,0},
            {4,5},{5,6},{6,7},{7,4},
            {0,4},{1,5},{2,6},{3,7}
        };

        for (int i = 0; i < 12; i++)
        {
            LineRenderer l = Ligne("Arete", boite.transform, couleur, largeur);
            l.positionCount = 2;
            l.SetPosition(0, coins[aretes[i, 0]]);
            l.SetPosition(1, coins[aretes[i, 1]]);
        }

        return boite;
    }

    // Cercle horizontal (plan XZ), ou vertical face a la camera (plan XY)
    public static LineRenderer Cercle(string nom, Transform parent, float rayon, Color couleur, float largeur,
                                      bool vertical = false, int segments = 64)
    {
        LineRenderer l = Ligne(nom, parent, couleur, largeur, true);
        l.positionCount = segments;

        for (int i = 0; i < segments; i++)
        {
            float a = i * Mathf.PI * 2f / segments;
            float x = Mathf.Cos(a) * rayon;
            float y = Mathf.Sin(a) * rayon;
            l.SetPosition(i, vertical ? new Vector3(x, y, 0f) : new Vector3(x, 0f, y));
        }

        return l;
    }

    // Arc de cercle horizontal, de "debut" a "fin" degres
    public static LineRenderer Arc(string nom, Transform parent, float rayon, float debut, float fin,
                                   Color couleur, float largeur, int segments = 8)
    {
        LineRenderer l = Ligne(nom, parent, couleur, largeur);
        l.positionCount = segments + 1;

        for (int i = 0; i <= segments; i++)
        {
            float a = Mathf.Lerp(debut, fin, (float)i / segments) * Mathf.Deg2Rad;
            l.SetPosition(i, new Vector3(Mathf.Cos(a) * rayon, 0f, Mathf.Sin(a) * rayon));
        }

        return l;
    }

    // Disque plat face a la camera (cylindre aplati), sans collider
    public static GameObject Disque(string nom, Transform parent, float diametre, Color couleur, float decalage = 0f)
    {
        GameObject d = Primitive(PrimitiveType.Cylinder, nom, parent,
            new Vector3(0, 0, decalage), new Vector3(diametre, 0.002f, diametre), couleur);
        d.transform.localRotation = Quaternion.Euler(90f, 0, 0);
        Object.Destroy(d.GetComponent<Collider>());
        return d;
    }

    // Panneau avec une epaisseur visible (fond sombre + bord colore)
    public static GameObject Panneau(string nom, Transform parent, Vector2 taille, Color bord)
    {
        GameObject p = Vide(nom, parent);

        GameObject tranche = Primitive(PrimitiveType.Cube, "Tranche", p.transform,
            new Vector3(0.006f, -0.006f, 0.008f), new Vector3(taille.x + 0.01f, taille.y + 0.01f, 0.012f), new Color(bord.r * 0.5f, bord.g * 0.5f, bord.b * 0.5f, 1f));
        Object.Destroy(tranche.GetComponent<Collider>());

        GameObject cadre = Primitive(PrimitiveType.Cube, "Cadre", p.transform,
            new Vector3(0, 0, 0.002f), new Vector3(taille.x + 0.008f, taille.y + 0.008f, 0.004f), bord);
        Object.Destroy(cadre.GetComponent<Collider>());

        GameObject fond = Primitive(PrimitiveType.Cube, "Fond", p.transform,
            Vector3.zero, new Vector3(taille.x, taille.y, 0.004f), new Color(0.06f, 0.07f, 0.09f, 1f));
        Object.Destroy(fond.GetComponent<Collider>());

        return p;
    }

    // Texte 3D (TextMeshPro, pas d'interface 2D)
    public static TextMeshPro Texte(string nom, Transform parent, string texte, float taille, Color couleur,
                                    Vector3 position, float largeurZone = 0.5f)
    {
        TextMeshPro t = Vide(nom, parent).AddComponent<TextMeshPro>();
        t.text = texte;
        t.fontSize = taille;
        t.color = couleur;
        t.alignment = TextAlignmentOptions.Center;
        t.textWrappingMode = TextWrappingModes.Normal;
        t.rectTransform.sizeDelta = new Vector2(largeurZone, 0.2f);
        t.transform.localPosition = position;
        return t;
    }

    // Texte sur une seule ligne, reduit automatiquement s'il est trop long pour la zone
    public static TextMeshPro TexteUneLigne(string nom, Transform parent, string texte, float tailleMax, Color couleur,
                                            Vector3 position, float largeurZone)
    {
        TextMeshPro t = Texte(nom, parent, texte, tailleMax, couleur, position, largeurZone);
        t.textWrappingMode = TextWrappingModes.NoWrap;
        t.enableAutoSizing = true;
        t.fontSizeMin = tailleMax * 0.4f;
        t.fontSizeMax = tailleMax;
        t.rectTransform.sizeDelta = new Vector2(largeurZone, tailleMax * 0.15f);
        return t;
    }

    // Cone (pointe vers +Y), pour les fleches 3D
    public static GameObject Cone(string nom, Transform parent, float rayon, float hauteur, Color couleur, int segments = 24)
    {
        GameObject go = Vide(nom, parent);
        Mesh mesh = new Mesh();

        List<Vector3> sommets = new List<Vector3> { new Vector3(0, hauteur, 0), Vector3.zero };
        for (int i = 0; i <= segments; i++)
        {
            float a = i * Mathf.PI * 2f / segments;
            sommets.Add(new Vector3(Mathf.Cos(a) * rayon, 0, Mathf.Sin(a) * rayon));
        }

        List<int> triangles = new List<int>();
        for (int i = 0; i < segments; i++)
        {
            triangles.AddRange(new[] { 0, i + 3, i + 2 });   // cote
            triangles.AddRange(new[] { 1, i + 2, i + 3 });   // base
        }

        mesh.SetVertices(sommets);
        mesh.SetTriangles(triangles, 0);
        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        go.AddComponent<MeshFilter>().mesh = mesh;
        go.AddComponent<MeshRenderer>().material = Materiau(couleur);
        return go;
    }

    // Fleche 3D qui pointe vers le bas (tige + cone)
    public static GameObject Fleche(string nom, Transform parent, Color couleur, float echelle = 1f)
    {
        GameObject fleche = Vide(nom, parent);

        GameObject tige = Primitive(PrimitiveType.Cylinder, "Tige", fleche.transform,
            new Vector3(0, 0.07f, 0) * echelle, new Vector3(0.025f, 0.045f, 0.025f) * echelle, couleur);
        Object.Destroy(tige.GetComponent<Collider>());

        GameObject pointe = Cone("Pointe", fleche.transform, 0.035f * echelle, 0.06f * echelle, couleur);
        pointe.transform.localPosition = new Vector3(0, 0.025f, 0) * echelle;
        pointe.transform.localRotation = Quaternion.Euler(180f, 0, 0);

        return fleche;
    }

    // Petit "ding" genere par code (pas de fichier son)
    public static AudioClip Ding()
    {
        const int frequence = 44100;
        int n = frequence / 4;
        float[] echantillons = new float[n];

        for (int i = 0; i < n; i++)
        {
            float t = (float)i / frequence;
            float enveloppe = Mathf.Exp(-t * 14f);
            echantillons[i] = enveloppe * 0.35f *
                (Mathf.Sin(2 * Mathf.PI * 1318f * t) + 0.5f * Mathf.Sin(2 * Mathf.PI * 1976f * t));
        }

        AudioClip clip = AudioClip.Create("Ding", n, 1, frequence, false);
        clip.SetData(echantillons, 0);
        return clip;
    }
}
