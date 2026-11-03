#import <AVFoundation/AVFoundation.h>

// Synthese vocale iOS, appelee depuis SyntheseVocale.cs

static AVSpeechSynthesizer *synth = nil;

extern "C" {

void _TTS_Dire(const char *texte)
{
    if (texte == NULL)
        return;

    if (synth == nil)
        synth = [[AVSpeechSynthesizer alloc] init];

    // Apres la reconnaissance vocale, iOS laisse l'audio en mode enregistrement :
    // sans ces lignes, la reponse peut etre muette ou sortir dans l'ecouteur.
    AVAudioSession *session = [AVAudioSession sharedInstance];
    [session setCategory:AVAudioSessionCategoryPlayback
                    mode:AVAudioSessionModeSpokenAudio
                 options:AVAudioSessionCategoryOptionDuckOthers
                   error:nil];
    [session setActive:YES error:nil];

    [synth stopSpeakingAtBoundary:AVSpeechBoundaryImmediate];

    AVSpeechUtterance *phrase = [AVSpeechUtterance speechUtteranceWithString:[NSString stringWithUTF8String:texte]];
    phrase.voice = [AVSpeechSynthesisVoice voiceWithLanguage:@"fr-FR"];
    [synth speakUtterance:phrase];
}

void _TTS_Arreter()
{
    if (synth != nil)
        [synth stopSpeakingAtBoundary:AVSpeechBoundaryImmediate];
}

}
