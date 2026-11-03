
using UnityEngine;
#if UNITY_IOS && !UNITY_EDITOR
using System.Runtime.InteropServices;
#endif
#if UNITY_ANDROID && !UNITY_EDITOR
using UnityEngine.Android;
#endif
#if UNITY_EDITOR_OSX
using System.Diagnostics;
using System.IO;
#endif

// Synthese vocale : lit une phrase a voix haute.
// - iOS : AVSpeechSynthesizer (Assets/Plugins/iOS/SyntheseVocale.mm)
// - Android : TextToSpeech, appele en JNI
// - Editeur Unity sur Mac : commande "say" de macOS (pour tester sans telephone)
// - Ailleurs : la phrase est seulement ecrite dans la Console
public class SyntheseVocale : MonoBehaviour
{
#if UNITY_IOS && !UNITY_EDITOR
    [DllImport("__Internal")] private static extern void _TTS_Dire(string texte);
    [DllImport("__Internal")] private static extern void _TTS_Arreter();

    public void Dire(string texte) { _TTS_Dire(texte); }
    public void Arreter() { _TTS_Arreter(); }

#elif UNITY_ANDROID && !UNITY_EDITOR
    private AndroidJavaObject tts;
    private bool pret;

    void Start()
    {
        tts = new AndroidJavaObject("android.speech.tts.TextToSpeech",
            AndroidApplication.currentActivity, new InitTTS(this));
    }

    private class InitTTS : AndroidJavaProxy
    {
        private readonly SyntheseVocale parent;

        public InitTTS(SyntheseVocale p) : base("android.speech.tts.TextToSpeech$OnInitListener")
        {
            parent = p;
        }

        // Appele par Android (pas sur le thread Unity) : ne pas toucher aux objets Unity ici
        void onInit(int status)
        {
            if (status != 0) // 0 = TextToSpeech.SUCCESS
                return;

            AndroidJavaObject fr = new AndroidJavaClass("java.util.Locale").GetStatic<AndroidJavaObject>("FRANCE");
            parent.tts.Call<int>("setLanguage", fr);
            parent.pret = true;
        }
    }

    public void Dire(string texte)
    {
        if (!pret)
            return;

        // 0 = QUEUE_FLUSH : coupe la phrase en cours
        tts.Call<int>("speak", texte, 0, new AndroidJavaObject("android.os.Bundle"), "reponse");
    }

    public void Arreter()
    {
        if (pret)
            tts.Call<int>("stop");
    }

    void OnDestroy()
    {
        if (tts != null)
            tts.Call("shutdown");
    }

#elif UNITY_EDITOR_OSX
    [Tooltip("Voix macOS a utiliser (Thomas = francais). Liste : say -v '?' dans le Terminal")]
    public string voixMac = "Thomas";

    private Process processus;

    public void Dire(string texte)
    {
        Arreter();

        // On passe par un fichier pour ne pas avoir de souci avec les apostrophes
        string fichier = Path.Combine(Application.temporaryCachePath, "synthese.txt");
        File.WriteAllText(fichier, texte);

        ProcessStartInfo info = new ProcessStartInfo("/usr/bin/say", "-v " + voixMac + " -f \"" + fichier + "\"")
        {
            UseShellExecute = false,
            CreateNoWindow = true
        };

        processus = Process.Start(info);
    }

    public void Arreter()
    {
        if (processus != null && !processus.HasExited)
            processus.Kill();

        processus = null;
    }

    void OnDestroy()
    {
        Arreter();
    }

#else
    public void Dire(string texte) { UnityEngine.Debug.Log("[Voix] " + texte); }
    public void Arreter() { }
#endif
}
