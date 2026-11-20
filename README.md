# Salle IHM – Room Guide

Application mobile de réalité augmentée (Unity, iOS et Android) qui aide un utilisateur à se servir de la salle 111 (bâtiment E). On vise le vidéoprojecteur Epson avec le téléphone : l'application le reconnaît, pose une interface 3D dessus et répond aux questions posées à la voix (« comment l'allumer ? », « où est la sortie ? »...), à l'oral et à l'écran.

Projet du cours TIM (interaction multimodale), Master 2, Université Côte d'Azur, 2026.

**Équipe et répartition :**
- Détection du projecteur : BACHA Hiba
- Reconnaissance vocale : BENYAHIA Amir
- QR code et objets 3D autour du projecteur : ENNOUNI Mourtada et EL JAGHAOUI Abdelhafid

**Matériel :** Pixel 6a (Android), iPhone (iOS), vidéoprojecteur Epson EB-575W.

## Fonctionnalités

| Boucle | Entrée | Sortie |
|---|---|---|
| 1. Reconnaissance visuelle | Caméra AR + modèle IA (ONNX) | Texte « projecteur détecté », interface 3D ancrée sur le projecteur |
| 2. Dialogue vocal | Micro (reconnaissance vocale) ou toucher d'un bouton 3D | Réponse dite à voix haute + texte à l'écran, guide pas à pas |
| 3. Mur animé | Question sur la salle (« où est la sortie ? ») | Objets 3D sur le mur : chemin vers la sortie, zone de l'image projetée, repères |

- **Fusion** : la phrase (« comment l'allumer ? ») est combinée avec le dernier objet vu par la caméra (souvenir de 10 s).
- **Fission** : chaque réponse est à la fois parlée (synthèse vocale) et affichée (texte + objets 3D).

## Prérequis

**Logiciels**
- **Unity Hub** + **Unity 6000.3.23f1** (Unity 6.3). À l'installation de cette version dans Unity Hub, cocher les modules :
  - *Android Build Support* (avec *OpenJDK* et *Android SDK & NDK Tools*) pour Android ;
  - *iOS Build Support* pour iPhone.
- **Git** pour cloner le dépôt.
- Pour iPhone uniquement : un **Mac** avec **Xcode** (version récente, depuis l'App Store) et un **identifiant Apple** (un compte gratuit suffit).

**Téléphone**
- Android : téléphone compatible ARCore (Android 10 / API 29 minimum), avec l'application *Google* et *Services Google Play pour la RA* à jour. Testé sur Pixel 6a.
- iPhone : compatible ARKit, iOS 15 minimum. Testé sur iPhone.
- Une connexion internet est conseillée (la reconnaissance vocale passe par le service du téléphone).

**Dépendances** (rien à installer à la main)
- Les packages Unity sont téléchargés automatiquement depuis `Packages/manifest.json` : AR Foundation 6.3.5, ARCore XR Plugin 6.3.5, ARKit XR Plugin 6.3.5, Inference Engine 2.6.1 (`com.unity.ai.inference`), URP 17.3, TextMeshPro, Input System.
- Le plugin [Unity Speech to Text](https://github.com/yasirkula/UnitySpeechToText) (yasirkula, MIT) est déjà inclus dans `Assets/Plugins/SpeechToText`.
- Le modèle IA est déjà inclus : `Assets/ModelsIA/projecteur_epson _v2.onnx`.

## Installation

1. Cloner le dépôt :
   ```bash
   git clone https://github.com/Amir-Benyahia/Multimodal-project-IHM-room-guide.git
   ```
2. Dans Unity Hub : *Add* > *Add project from disk* > choisir le dossier cloné. Vérifier que la version **6000.3.23f1** est sélectionnée, puis ouvrir.
3. Le premier import télécharge les packages et prend plusieurs minutes. S'il y a des erreurs rouges dans la console au premier lancement, fermer puis rouvrir Unity.
4. Ouvrir la scène `Assets/Scenes/SampleScene.unity` (double-clic dans la fenêtre *Project*).

## Tester dans l'éditeur Unity (sans téléphone)

1. Ouvrir `SampleScene` et cliquer sur **Play**.
2. Le panneau **TEST DU DIALOGUE** (en haut à gauche) permet de tester le dialogue :
   - cliquer sur **Simuler : projecteur détecté** (l'objet reste « vu » pendant 10 s) ;
   - taper une question dans le champ puis **Envoyer** (ou Entrée), ou cliquer sur une phrase d'exemple ;
   - la réponse s'affiche dans le panneau et dans la console (*Window > General > Console*).
3. Le bouton **Parler (simulé)** n'utilise pas de vrai micro dans l'éditeur : la voix et la caméra AR ne fonctionnent que sur téléphone.

## Installer sur Android

1. Sur le téléphone : activer les *Options pour les développeurs* (taper 7 fois sur *Numéro de build* dans *Paramètres > À propos du téléphone*), puis activer le **Débogage USB**.
2. Brancher le téléphone en USB et accepter l'autorisation de débogage sur le téléphone.
3. Dans Unity : *File > Build Profiles* > **Android** > *Switch Platform* (quelques minutes).
4. Vérifier (déjà réglé) :
   - *Edit > Project Settings > XR Plug-in Management*, onglet Android : **ARCore** coché ;
   - *Player Settings* : Scripting Backend **IL2CPP**, architecture **ARM64**.
5. Dans *Build Profiles*, choisir le téléphone dans *Run Device*, puis **Build And Run**. Choisir un nom pour le fichier `.apk` (par exemple dans un dossier `Builds/`, ignoré par git).
6. L'application s'ouvre sur le téléphone. Accepter les autorisations **caméra** et **micro**.
   Si la reconnaissance vocale ne répond pas, l'application ouvre les réglages de l'application *Google* : y autoriser le micro.

## Installer sur iPhone

1. Dans Unity : *File > Build Profiles* > **iOS** > *Switch Platform*.
2. Vérifier (déjà réglé) : *Edit > Project Settings > XR Plug-in Management*, onglet iOS : **ARKit** coché.
3. Cliquer sur **Build** et choisir un **dossier vide dédié** (par exemple `~/BuildiOS`).
   **Attention** : ne jamais choisir le dossier du projet ni un dossier qui contient d'autres fichiers : Unity vide le dossier de sortie.
4. Ouvrir `Unity-iPhone.xcodeproj` (dans le dossier de build) avec Xcode.
5. Sélectionner la cible **Unity-iPhone** > onglet **Signing & Capabilities** :
   - cocher *Automatically manage signing* ;
   - *Team* : choisir son identifiant Apple (*Add an Account…* si besoin) ;
   - *Bundle Identifier* : mettre un identifiant unique (par exemple `com.votrenom.roomguide`).
6. Brancher l'iPhone, le choisir en haut de Xcode, puis cliquer sur le bouton **Run** (triangle en haut à gauche).
7. Sur l'iPhone, la première fois :
   - activer le **Mode développeur** (*Réglages > Confidentialité et sécurité > Mode développeur*, puis redémarrer) ;
   - faire confiance au développeur (*Réglages > Général > VPN et gestion de l'appareil*).
8. Lancer l'application et accepter les autorisations **caméra**, **micro** et **reconnaissance vocale**.

## Utiliser l'application (dans la salle 111)

1. **Reconnaître le projecteur** : viser le projecteur Epson EB-575W, à quelques mètres. Le texte en haut indique « Recherche du projecteur... », puis « projecteur détecté » avec le score quand il dépasse **75 %**.
2. **Ancrer l'interface 3D** : toucher le projecteur à l'écran. Une interface 3D s'ancre dessus avec des boutons ronds : **Allumer**, **Brancher**, **Guide**, **Salle (111)**, **Télécommande**, **Panne**. Toucher un bouton donne la même réponse que si on posait la question à voix haute. Le bouton 2D **Recaler** (à gauche) permet de reposer l'interface.
3. **Parler** : appuyer sur **Parler** (en bas), dire sa question ; l'écoute s'arrête toute seule à la fin de la phrase (ou appuyer sur **Stop**). La phrase reconnue s'affiche au-dessus du bouton, la réponse est dite à voix haute et affichée en sous-titre 3D. Exemples :
   - sur le projecteur : « C'est quoi ? », « Comment l'allumer ? », « Comment brancher mon ordinateur ? », « Comment couper l'image ? »
   - en cas de problème : « Il n'y a pas d'image », « L'image est floue », « Il n'y a pas de son », « Ça ne marche pas »
   - guide pas à pas : « Guide-moi », puis « suivant », « précédent », « quitter »
   - sur la salle : « Où est la sortie ? », « Où va s'afficher l'image ? », « Où sont les lumières ? », « Où est l'extincteur ? », « Montre-moi la salle »
   - autres : « Répète », « Stop », « Aide »
4. **Mur animé** : les questions sur la salle font apparaître des objets 3D sur le mur (panneau de la salle, flèches vers la porte de sortie, zone où s'affiche l'image, repères). Ils disparaissent après quelques secondes.
5. **Régler les repères** (une seule fois) : bouton **Régler** à gauche, puis toucher à l'écran le centre de chaque repère demandé (porte, interrupteur, extincteur...). **Passer** saute un repère, **Terminer** arrête. Les positions sont gardées sur le téléphone.

### Tester sans le projecteur (chez soi)

1. Lancer l'application sur le téléphone.
2. Toucher le bouton **Test : OFF** en haut à droite (il passe à **Test : ON**) : le projecteur est considéré comme détecté.
3. Toucher un objet réel à l'écran (une boîte, une lampe...) : l'interface 3D s'y ancre comme sur le projecteur. **Replacer** permet de la déplacer.
4. Poser ensuite les questions à la voix ou toucher les boutons 3D, comme dans la salle.
5. Le panneau **TEST DU DIALOGUE** est aussi disponible sur le téléphone pour taper une question au clavier.

## Organisation du code

```
Assets/
├── Scripts/
│   ├── Detection/    reconnaissance du projecteur (IA ONNX) et QR codes
│   ├── Dialogue/     micro, compréhension des phrases, synthèse vocale
│   ├── InterfaceAR/  interface 3D, guide pas à pas, mur animé
│   ├── Donnees/      lecture de equipements.json
│   ├── Affichage/    interface 2D et orientation de l'écran
│   └── Tests/        mode test sans projecteur
├── Ressources/equipements.json   équipements, réponses et repères de la salle
├── ModelsIA/                      modèle de reconnaissance (projecteur_epson _v2.onnx)
├── PhotosEntrainement/            photos utilisées pour entraîner le modèle
├── Plugins/SpeechToText/          plugin de reconnaissance vocale (yasirkula)
└── Plugins/iOS/SyntheseVocale.mm  synthèse vocale iOS (AVSpeechSynthesizer)
```

- `GestionnaireDialogue` est créé automatiquement au lancement et ajoute les autres composants (micro, synthèse vocale, interface 3D, mur animé, mode test).
- `InterpreteurCommandes` transforme une phrase en intention par mots-clés pondérés (tolère les conjugaisons, les fautes de la reconnaissance vocale et la négation).
- Le modèle IA (MobileNetV2 réentraîné, entrée 224 × 224) est exécuté sur le téléphone avec Inference Engine.
- Pour changer les textes ou les positions des repères : modifier `Assets/Ressources/equipements.json`.

## Limites connues

- Reconnaissance moins fiable à distance ; le modèle est entraîné pour un seul projecteur précis.
- Les repères du mur animé sont mesurés pour la salle 111 ; ailleurs, il faut les placer avec « Régler » ou dans le JSON.
- La reconnaissance vocale utilise par défaut le service en ligne du téléphone (une connexion internet est conseillée).

Pistes d'amélioration : plus de photos d'entraînement, reconnaître d'autres équipements, assistant vocal plus flexible.

## Ressources et citations

- Cours TIM – Interaction multimodale, Hui-Yin Wu (Inria) : [CM1](https://www-sop.inria.fr/members/Hui-Yin.Wu/course/TIM/CM1-newintro/), [CM2 Fusion](https://www-sop.inria.fr/members/Hui-Yin.Wu/course/TIM/CM2-mfusion/), [CM3 Fission](https://www-sop.inria.fr/members/Hui-Yin.Wu/course/TIM/CM3-fission/), [CM4 Navigation](https://www-sop.inria.fr/members/Hui-Yin.Wu/course/TIM/CM4-mn/).
- [Unity 6](https://unity.com/) et [AR Foundation](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@6.3/manual/index.html), [ARCore](https://developers.google.com/ar), [ARKit](https://developer.apple.com/augmented-reality/arkit/).
- [Unity Inference Engine](https://docs.unity3d.com/Packages/com.unity.ai.inference@2.6/manual/index.html) et le format [ONNX](https://onnx.ai/).
- Modèle MobileNetV2 (Sandler et al., *MobileNetV2: Inverted Residuals and Linear Bottlenecks*, CVPR 2018), réentraîné avec [TensorFlow](https://www.tensorflow.org/) sur Google Colab à partir de nos photos.
- [Unity Speech to Text](https://github.com/yasirkula/UnitySpeechToText), Süleyman Yasir Kula, licence MIT.
- Synthèse vocale : [Android TextToSpeech](https://developer.android.com/reference/android/speech/tts/TextToSpeech) et [AVSpeechSynthesizer](https://developer.apple.com/documentation/avfaudio/avspeechsynthesizer) (iOS).
- Documentation du vidéoprojecteur Epson de la salle (fonctionnement, télécommande, A/V Mute).

## Utilisation de l'IA générative

Un assistant IA a servi d'aide à l'écriture et au débogage des scripts (voix, AR), aux maquettes de l'interface et à la préparation des supports. Le modèle de reconnaissance visuelle est entraîné par l'équipe sur le jeu de photos du projet.
