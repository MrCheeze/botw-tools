-------- Event timeline: Demo109_2 --------
actors: 13
clips: 71
oneshots: 0
cuts: 8
duration: 1930.0
subtimelines: ['Demo109_2_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C06
start time: 0.0
x4: 0
params: (none)

Cut: C07
start time: 45.0
x4: 0
params: (none)

Cut: C08
start time: 225.0
x4: 0
params: (none)

Cut: C17
start time: 289.0
x4: 0
params: (none)

Cut: C18
start time: 353.0
x4: 0
params: (none)

Cut: C12
start time: 1075.0
x4: 0
params: (none)

Cut: C13
start time: 1325.0
x4: 0
params: (none)

Cut: C16
start time: 1510.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn', 'Demo_FadeOut']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Sun_A_01[0]
x36: 1
actions: ['Demo_SunMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Moon_A_01[0]
x36: 1
actions: ['Demo_MoonMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: WorldManagerControl[0]
x36: 5
actions: ['Demo_SetWind', 'Demo_SetDirectionalLight', 'Demo_EventCloudShadowOff', 'Demo_EventSetCharAmbientScale', 'Demo_EventSetCharMainLightScale']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting', 'Demo_OverwriteNear']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall', 'Demo_RumbleMiddle']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: TwnObj_Village_Korok_DekuTree_A_01[0]
x36: 1
actions: ['Demo_PlayASForDemo', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_PlayerMasterSwordEquip', 'Demo_PlayASForTimelineWithSword']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Npc_kokiri006[1]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_kokiri005[2]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_kokiri003[1]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_kokiri004[1]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 1930.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 1930.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 1930.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.11999999731779099, WindDirY: 0.0, WindDirZ: 0.03999999910593033,
                 WindPower: 2.0}
[      0.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#5, xc=1)
               duration: 45.0
               {IsWaitFinish: true, angleX: -54.0, angleY: 80.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#11, xc=2)
               duration: 1930.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#12, xc=3)
               duration: 225.0
               {Bscale: 0.6000000238418579, Gscale: 0.6000000238418579, IsWaitFinish: true, Rscale: 0.6000000238418579}
[      0.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#15, xc=4)
               duration: 225.0
               {Bscale: 1.0, Gscale: 1.0, IsWaitFinish: true, Rscale: 1.0}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 45.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 285.0, ApertureEnd: 285.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 6.760000228881836, FocalLengthEnd: 6.760000228881836,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
               duration: 45.0
               {FocusDistEnd: 6.5, FocusDistStart: 6.5, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#31, xc=2)
               duration: 45.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#51, xc=0)
               duration: 45.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_PlayerMasterSwordEquip (#58, xc=1)
               duration: 45.0
               {IsWaitFinish: true}
[     10.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 15.0
               {Color: 0, DispMode: Auto, Frame: 2, IsWaitFinish: true}
[     25.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     45.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#5, xc=1)
[     45.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[     45.0] L GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
[     45.0] L GameRomCamera[0] - Demo_OverwriteNear (#31, xc=2)
[     45.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#51, xc=0)
[     45.0] L GameROMPlayer[0] - Demo_PlayerMasterSwordEquip (#58, xc=1)
[     45.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#6, xc=1)
               duration: 180.0
               {IsWaitFinish: true, angleX: -54.0, angleY: -80.0}
[     45.0] E GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 11.0, ApertureEnd: 11.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.7999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: false, EndFrame: -1.0, FocalLength: 6.099999904632568, FocalLengthEnd: 6.099999904632568,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: true, OverwriteAtDist: 20.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[     45.0] E GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
               duration: 180.0
               {FocusDistEnd: 6.5, FocusDistStart: 6.5, IsWaitFinish: true}
[     45.0] E GameRomCamera[0] - Demo_OverwriteNear (#32, xc=2)
               duration: 180.0
               {IsWaitFinish: true, Near: 0.5}
[     45.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#52, xc=0)
               duration: 180.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    225.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#6, xc=1)
[    225.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#12, xc=3)
[    225.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#15, xc=4)
[    225.0] L GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
[    225.0] L GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
[    225.0] L GameRomCamera[0] - Demo_OverwriteNear (#32, xc=2)
[    225.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#52, xc=0)
[    225.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#7, xc=1)
               duration: 128.0
               {IsWaitFinish: true, angleX: -34.599998474121094, angleY: -15.800000190734863}
[    225.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#13, xc=3)
               duration: 128.0
               {Bscale: 0.44999998807907104, Gscale: 0.44999998807907104, IsWaitFinish: true, Rscale: 0.44999998807907104}
[    225.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#16, xc=4)
               duration: 128.0
               {Bscale: 1.7999999523162842, Gscale: 1.7999999523162842, IsWaitFinish: true, Rscale: 1.7999999523162842}
[    225.0] E GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
               duration: 64.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false,
                 EndFrame: -1.0, FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true,
                 OverwriteAt: false, OverwriteAtDist: 20.0, SceneName: C08-0, StartFrame: 0.0, TargetActor: -1,
                 TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    225.0] E GameRomCamera[0] - Demo_OverwriteNear (#33, xc=2)
               duration: 850.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[    225.0] E GameROMPlayer[0] - Demo_PlayASForTimelineWithSword (#53, xc=0)
               duration: 64.0
               {ASName: Demo109_2-C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsHold: true, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    250.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#37, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    260.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#37, xc=0)
[    267.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#38, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    277.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#38, xc=0)
[    289.0] L GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
[    289.0] L GameROMPlayer[0] - Demo_PlayASForTimelineWithSword (#53, xc=0)
[    289.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 64.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false,
                 EndFrame: -1.0, FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true,
                 OverwriteAt: false, OverwriteAtDist: 20.0, SceneName: C17-0, StartFrame: 0.0, TargetActor: -1,
                 TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    289.0] E GameROMPlayer[0] - Demo_PlayASForTimelineWithSword (#54, xc=0)
               duration: 64.0
               {ASName: Demo109_2-C17-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsHold: true, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    302.0] E EventControllerRumble[0] - Demo_RumbleSmall (#39, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    312.0] L EventControllerRumble[0] - Demo_RumbleSmall (#39, xc=0)
[    320.0] E EventControllerRumble[0] - Demo_RumbleSmall (#40, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    330.0] L EventControllerRumble[0] - Demo_RumbleSmall (#40, xc=0)
[    332.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#41, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    342.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#41, xc=0)
[    353.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#7, xc=1)
[    353.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#13, xc=3)
[    353.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#16, xc=4)
[    353.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[    353.0] L GameROMPlayer[0] - Demo_PlayASForTimelineWithSword (#54, xc=0)
[    353.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#8, xc=1)
               duration: 722.0
               {IsWaitFinish: true, angleX: -54.0, angleY: -74.0}
[    353.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#14, xc=3)
               duration: 1577.0
               {Bscale: 0.6000000238418579, Gscale: 0.6000000238418579, IsWaitFinish: true, Rscale: 0.6000000238418579}
[    353.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#17, xc=4)
               duration: 1577.0
               {Bscale: 1.0, Gscale: 1.0, IsWaitFinish: true, Rscale: 1.0}
[    353.0] E GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
               duration: 722.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false,
                 EndFrame: -1.0, FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true,
                 OverwriteAt: false, OverwriteAtDist: 20.0, SceneName: C18-0, StartFrame: 0.0, TargetActor: -1,
                 TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    353.0] E TwnObj_Village_Korok_DekuTree_A_01[0] - Demo_PlayASForDemo (#47, xc=0)
               duration: 722.0
               {ASName: C18-TwnObj_Village_Korok_DekuTree_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: -1.0, SeqBank: 0, TargetIndex: -1}
[    353.0] E GameROMPlayer[0] - Demo_PlayASForTimelineWithSword (#55, xc=0)
               duration: 722.0
               {ASName: Demo109_2-C18-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsHold: true, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    353.0] E Npc_kokiri006[1] - Demo_PlayASForTimeline (#59, xc=0)
               duration: 722.0
               {ASName: C18-UMii_Korogu_M-F-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    353.0] E Npc_kokiri005[2] - Demo_PlayASForTimeline (#62, xc=0)
               duration: 722.0
               {ASName: C18-UMii_Korogu_M-G-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    353.0] E Npc_kokiri003[1] - Demo_PlayASForTimeline (#65, xc=0)
               duration: 722.0
               {ASName: C18-UMii_Korogu_M-H-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    353.0] E Npc_kokiri004[1] - Demo_PlayASForTimeline (#68, xc=0)
               duration: 722.0
               {ASName: C18-UMii_Korogu_M-I-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    410.0] E EventControllerRumble[0] - Demo_RumbleSmall (#42, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    420.0] L EventControllerRumble[0] - Demo_RumbleSmall (#42, xc=0)
[    451.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#43, xc=0)
               duration: 226.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo109_2_Text007}
[    677.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#43, xc=0)
[    692.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#44, xc=0)
               duration: 374.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo109_2_Text008}
[   1066.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#44, xc=0)
[   1075.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#8, xc=1)
[   1075.0] L GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
[   1075.0] L GameRomCamera[0] - Demo_OverwriteNear (#33, xc=2)
[   1075.0] L TwnObj_Village_Korok_DekuTree_A_01[0] - Demo_PlayASForDemo (#47, xc=0)
[   1075.0] L GameROMPlayer[0] - Demo_PlayASForTimelineWithSword (#55, xc=0)
[   1075.0] L Npc_kokiri006[1] - Demo_PlayASForTimeline (#59, xc=0)
[   1075.0] L Npc_kokiri005[2] - Demo_PlayASForTimeline (#62, xc=0)
[   1075.0] L Npc_kokiri003[1] - Demo_PlayASForTimeline (#65, xc=0)
[   1075.0] L Npc_kokiri004[1] - Demo_PlayASForTimeline (#68, xc=0)
[   1075.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#9, xc=1)
               duration: 250.0
               {IsWaitFinish: true, angleX: -54.0, angleY: -80.0}
[   1075.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 250.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: true,
                 OverwriteAtDist: 20.0, SceneName: C12-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1075.0] E GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
               duration: 250.0
               {FocusDistEnd: 35.0, FocusDistStart: 35.0, IsWaitFinish: true}
[   1075.0] E GameRomCamera[0] - Demo_OverwriteNear (#34, xc=2)
               duration: 250.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[   1075.0] E TwnObj_Village_Korok_DekuTree_A_01[0] - Demo_PlayASForTimeline (#48, xc=0)
               duration: 250.0
               {ASName: C12-TwnObj_Village_Korok_DekuTree_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1076.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#45, xc=0)
               duration: 434.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo109_2_Text009}
[   1325.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#9, xc=1)
[   1325.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[   1325.0] L GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
[   1325.0] L GameRomCamera[0] - Demo_OverwriteNear (#34, xc=2)
[   1325.0] L TwnObj_Village_Korok_DekuTree_A_01[0] - Demo_PlayASForTimeline (#48, xc=0)
[   1325.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#10, xc=1)
               duration: 605.0
               {IsWaitFinish: true, angleX: -54.0, angleY: -72.0}
[   1325.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 185.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: true,
                 OverwriteAtDist: 30.0, SceneName: C13-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1325.0] E GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
               duration: 185.0
               {FocusDistEnd: 22.0, FocusDistStart: 22.0, IsWaitFinish: true}
[   1325.0] E GameRomCamera[0] - Demo_OverwriteNear (#35, xc=2)
               duration: 185.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[   1325.0] E TwnObj_Village_Korok_DekuTree_A_01[0] - Demo_PlayASForTimeline (#49, xc=0)
               duration: 185.0
               {ASName: C13-TwnObj_Village_Korok_DekuTree_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1325.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#56, xc=0)
               duration: 185.0
               {ASName: C13-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1325.0] E Npc_kokiri006[1] - Demo_PlayASForTimeline (#60, xc=0)
               duration: 185.0
               {ASName: C13-UMii_Korogu_M-F-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1325.0] E Npc_kokiri005[2] - Demo_PlayASForTimeline (#63, xc=0)
               duration: 185.0
               {ASName: C13-UMii_Korogu_M-G-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1325.0] E Npc_kokiri003[1] - Demo_PlayASForTimeline (#66, xc=0)
               duration: 185.0
               {ASName: C13-UMii_Korogu_M-H-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1325.0] E Npc_kokiri004[1] - Demo_PlayASForTimeline (#69, xc=0)
               duration: 185.0
               {ASName: C13-UMii_Korogu_M-I-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1510.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[   1510.0] L GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
[   1510.0] L GameRomCamera[0] - Demo_OverwriteNear (#35, xc=2)
[   1510.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#45, xc=0)
[   1510.0] L TwnObj_Village_Korok_DekuTree_A_01[0] - Demo_PlayASForTimeline (#49, xc=0)
[   1510.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#56, xc=0)
[   1510.0] L Npc_kokiri006[1] - Demo_PlayASForTimeline (#60, xc=0)
[   1510.0] L Npc_kokiri005[2] - Demo_PlayASForTimeline (#63, xc=0)
[   1510.0] L Npc_kokiri003[1] - Demo_PlayASForTimeline (#66, xc=0)
[   1510.0] L Npc_kokiri004[1] - Demo_PlayASForTimeline (#69, xc=0)
[   1510.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 420.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: true,
                 OverwriteAtDist: 30.0, SceneName: C16-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1510.0] E GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
               duration: 420.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[   1510.0] E GameRomCamera[0] - Demo_OverwriteNear (#36, xc=2)
               duration: 420.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[   1510.0] E TwnObj_Village_Korok_DekuTree_A_01[0] - Demo_PlayASForTimeline (#50, xc=0)
               duration: 420.0
               {ASName: C16-TwnObj_Village_Korok_DekuTree_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1510.0] E GameROMPlayer[0] - Demo_PlayASForTimelineWithSword (#57, xc=0)
               duration: 420.0
               {ASName: Demo109_2-C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsHold: true, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1510.0] E Npc_kokiri006[1] - Demo_PlayASForTimeline (#61, xc=0)
               duration: 420.0
               {ASName: C16-UMii_Korogu_M-F-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1510.0] E Npc_kokiri005[2] - Demo_PlayASForTimeline (#64, xc=0)
               duration: 420.0
               {ASName: C16-UMii_Korogu_M-G-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1510.0] E Npc_kokiri003[1] - Demo_PlayASForTimeline (#67, xc=0)
               duration: 420.0
               {ASName: C16-UMii_Korogu_M-H-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1510.0] E Npc_kokiri004[1] - Demo_PlayASForTimeline (#70, xc=0)
               duration: 420.0
               {ASName: C16-UMii_Korogu_M-I-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1546.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#46, xc=0)
               duration: 310.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo109_2_Text010}
[   1856.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#46, xc=0)
[   1900.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1930.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1930.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[   1930.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[   1930.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[   1930.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#10, xc=1)
[   1930.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#11, xc=2)
[   1930.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#14, xc=3)
[   1930.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#17, xc=4)
[   1930.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[   1930.0] L GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
[   1930.0] L GameRomCamera[0] - Demo_OverwriteNear (#36, xc=2)
[   1930.0] L TwnObj_Village_Korok_DekuTree_A_01[0] - Demo_PlayASForTimeline (#50, xc=0)
[   1930.0] L GameROMPlayer[0] - Demo_PlayASForTimelineWithSword (#57, xc=0)
[   1930.0] L Npc_kokiri006[1] - Demo_PlayASForTimeline (#61, xc=0)
[   1930.0] L Npc_kokiri005[2] - Demo_PlayASForTimeline (#64, xc=0)
[   1930.0] L Npc_kokiri003[1] - Demo_PlayASForTimeline (#67, xc=0)
[   1930.0] L Npc_kokiri004[1] - Demo_PlayASForTimeline (#70, xc=0)
