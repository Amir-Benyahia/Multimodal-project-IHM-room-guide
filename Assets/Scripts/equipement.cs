
using System;
using System.Collections.Generic;

[Serializable]
public class Equipement
{
    public string id;
    public string nom;
    public string description;
    public string utilisation;
}

[Serializable]
public class ListeEquipements
{
    public List<Equipement> equipements;
}