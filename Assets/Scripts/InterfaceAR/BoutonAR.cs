using System.Collections.Generic;
using UnityEngine;

// Un bouton 3D pose dans la salle : le toucher revient a dire la phrase
public class BoutonAR : MonoBehaviour
{
    public string phrase;

    // Boutons visibles, pour les trouver pres du doigt (InterfaceAR3D)
    public static readonly List<BoutonAR> Tous = new List<BoutonAR>();

    private Vector3 tailleDeBase;
    private float debutAppui = -10f;

    void Awake()
    {
        tailleDeBase = transform.localScale;
    }

    void OnEnable()
    {
        Tous.Add(this);
    }

    void OnDisable()
    {
        Tous.Remove(this);
    }

    // Petit "rebond" pour montrer que l'appui est pris en compte
    public void Appuyer()
    {
        debutAppui = Time.time;
    }

    void Update()
    {
        float t = (Time.time - debutAppui) / 0.3f;
        float s = t < 1f ? 1f - 0.3f * Mathf.Sin(t * Mathf.PI) : 1f;
        transform.localScale = tailleDeBase * s;
    }
}
