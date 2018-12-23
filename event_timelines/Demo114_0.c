-------- Event timeline: Demo114_0 --------
actors: 13
clips: 103
oneshots: 0
cuts: 10
duration: 1816.0
subtimelines: ['Demo114_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 270.0
x4: 0
params: (none)

Cut: C03
start time: 420.0
x4: 0
params: (none)

Cut: C04
start time: 640.0
x4: 0
params: (none)

Cut: C05
start time: 880.0
x4: 0
params: (none)

Cut: C06
start time: 1120.0
x4: 0
params: (none)

Cut: C07
start time: 1227.0
x4: 0
params: (none)

Cut: C08
start time: 1302.0
x4: 0
params: (none)

Cut: C09
start time: 1443.0
x4: 0
params: (none)

Cut: C10
start time: 1666.0
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
x36: 4
actions: ['Demo_EventSetDirectionalYang', 'Demo_EventCloudShadowOff', 'Demo_SetWind', 'Demo_EventSetFogDirect']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleMiddle', 'Demo_RumbleSmall', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Dm_Ibutu_Fire[0]
x36: 1
actions: ['Demo_Join']
params: {CreateMode: 1, IsGrounding: false, IsWorld: true, PosX: 2541.0, PosY: 816.3599853515625, PosZ: -2598.0,
  RotX: -5.0, RotY: 108.0, RotZ: -10.0}

Actor: Dm_PlayerStole2[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_Goron020_2[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsFire[0]
x36: 3
actions: ['Demo_PlayASForTimeline', 'Demo_VisibleOff']
params: {CreateMode: 1, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Locator[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 45.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 1816.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 1816.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
               duration: 270.0
               {IsWaitFinish: true, angleY: -44.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#14, xc=1)
               duration: 270.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.019999999552965164, WindDirY: 0.0, WindDirZ: 0.699999988079071,
                 WindPower: 2.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#16, xc=2)
               duration: 1816.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 270.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 5.0, ApertureEnd: 5.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 22.0, FocalLengthEnd: 22.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 0.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
               duration: 90.0
               {FocusDistEnd: 5.0, FocusDistStart: 26.0, IsWaitFinish: true}
[      0.0] E Dm_Ibutu_Fire[0] - Demo_Join (#85, xc=0)
               duration: 1816.0
               {IsWaitFinish: true}
[      0.0] E RemainsFire[0] - Demo_PlayASForTimeline (#92, xc=0)
               duration: 270.0
               {ASName: C01-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsFire[0] - Demo_PlayASForTimeline (#98, xc=1)
               duration: 1816.0
               {ASName: BeforeClear, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#102, xc=0)
               duration: 1816.0
               {ASName: C00-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     45.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     82.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#52, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[     90.0] L GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
[     90.0] E GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
               duration: 180.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    107.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#52, xc=0)
[    146.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#53, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    171.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#53, xc=0)
[    210.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#54, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    235.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#54, xc=0)
[    270.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
[    270.0] L WorldManagerControl[0] - Demo_SetWind (#14, xc=1)
[    270.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[    270.0] L GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
[    270.0] L RemainsFire[0] - Demo_PlayASForTimeline (#92, xc=0)
[    270.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
               duration: 150.0
               {IsWaitFinish: true, angleY: -120.0}
[    270.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#15, xc=1)
               duration: 1546.0
               {IsWaitFinish: true}
[    270.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#17, xc=3)
               duration: 150.0
               {Far: 0.0, FarUse: false, FogRatio: 0.15000000596046448, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    270.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 5.0, ApertureEnd: 5.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 47.0, FocalLengthEnd: 47.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 0.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    270.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 150.0
               {FocusDistEnd: 528.0, FocusDistStart: 528.0, IsWaitFinish: true}
[    270.0] E RemainsFire[0] - Demo_PlayASForTimeline (#93, xc=0)
               duration: 150.0
               {ASName: C02-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    420.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
[    420.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#17, xc=3)
[    420.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[    420.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[    420.0] L RemainsFire[0] - Demo_PlayASForTimeline (#93, xc=0)
[    420.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 220.0
               {IsWaitFinish: true, angleY: -66.0}
[    420.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#18, xc=3)
               duration: 220.0
               {Far: 0.0, FarUse: false, FogRatio: 0.25, InstantSW: true, IsWaitFinish: true, Near: 0.0, NearUse: false}
[    420.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 220.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 5.5, ApertureEnd: 5.5, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 16.5, FocalLengthEnd: 16.5, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 0.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    420.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 185.0
               {FocusDistEnd: 82.0, FocusDistStart: 82.0, IsWaitFinish: true}
[    420.0] E RemainsFire[0] - Demo_PlayASForTimeline (#94, xc=0)
               duration: 220.0
               {ASName: C03-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    438.0] E EventControllerRumble[0] - Demo_RumbleSmall (#55, xc=0)
               duration: 20.0
               {Count: 3, IsWaitFinish: true}
[    458.0] L EventControllerRumble[0] - Demo_RumbleSmall (#55, xc=0)
[    482.0] E EventControllerRumble[0] - Demo_RumbleSmall (#56, xc=0)
               duration: 12.0
               {Count: 2, IsWaitFinish: true}
[    494.0] L EventControllerRumble[0] - Demo_RumbleSmall (#56, xc=0)
[    502.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#57, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    527.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#57, xc=0)
[    552.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#58, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    577.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#58, xc=0)
[    605.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[    605.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 15.0
               {FocusDistEnd: 3.0, FocusDistStart: 82.0, IsWaitFinish: true}
[    620.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[    620.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 20.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    640.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[    640.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#18, xc=3)
[    640.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[    640.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[    640.0] L RemainsFire[0] - Demo_PlayASForTimeline (#94, xc=0)
[    640.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 240.0
               {IsWaitFinish: true, angleY: -128.0}
[    640.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#19, xc=3)
               duration: 240.0
               {Far: 0.0, FarUse: false, FogRatio: 0.10000000149011612, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    640.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 240.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 6.0, ApertureEnd: 6.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 70.0, FocalLengthEnd: 70.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    640.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 240.0
               {FocusDistEnd: 900.0, FocusDistStart: 900.0, IsWaitFinish: true}
[    662.0] E EventControllerRumble[0] - Demo_RumbleSmall (#59, xc=0)
               duration: 50.0
               {Count: 10, IsWaitFinish: true}
[    712.0] L EventControllerRumble[0] - Demo_RumbleSmall (#59, xc=0)
[    712.0] E EventControllerRumble[0] - Demo_RumbleLarge (#60, xc=0)
               duration: 43.0
               {Count: 3, IsWaitFinish: true}
[    755.0] L EventControllerRumble[0] - Demo_RumbleLarge (#60, xc=0)
[    755.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#61, xc=0)
               duration: 139.0
               {Count: 12, IsWaitFinish: true}
[    880.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[    880.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#19, xc=3)
[    880.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[    880.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
[    880.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 240.0
               {IsWaitFinish: true, angleY: -82.0}
[    880.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#20, xc=3)
               duration: 240.0
               {Far: 0.0, FarUse: false, FogRatio: 0.10000000149011612, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    880.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 240.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 5.0, ApertureEnd: 5.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 21.0, FocalLengthEnd: 21.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 0.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    880.0] E GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
               duration: 240.0
               {FocusDistEnd: 25.0, FocusDistStart: 25.0, IsWaitFinish: true}
[    880.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#66, xc=0)
               duration: 240.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    880.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#88, xc=0)
               duration: 240.0
               {ASName: C05-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    894.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#61, xc=0)
[    995.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#62, xc=0)
               duration: 41.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo114_0_Text020}
[   1024.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1025.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
[   1036.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#62, xc=0)
[   1037.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#73, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1038.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#73, xc=1)
[   1042.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#63, xc=0)
               duration: 76.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo114_0_Text021}
[   1050.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#74, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1051.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#74, xc=1)
[   1064.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#75, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1065.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#75, xc=1)
[   1078.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#76, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1079.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#76, xc=1)
[   1097.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#77, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1098.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#77, xc=1)
[   1113.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#78, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1114.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#78, xc=1)
[   1118.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#63, xc=0)
[   1120.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
[   1120.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#20, xc=3)
[   1120.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[   1120.0] L GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
[   1120.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#66, xc=0)
[   1120.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#88, xc=0)
[   1120.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
               duration: 107.0
               {IsWaitFinish: true, angleY: -72.0}
[   1120.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#21, xc=3)
               duration: 107.0
               {Far: 0.0, FarUse: false, FogRatio: 0.15000000596046448, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1120.0] E GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
               duration: 107.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 28.0, ApertureEnd: 28.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.5, FocalLengthEnd: 3.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C06-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1120.0] E GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
               duration: 107.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[   1120.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#67, xc=0)
               duration: 107.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1120.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#89, xc=0)
               duration: 107.0
               {ASName: C06-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1124.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#64, xc=0)
               duration: 47.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo114_0_Text022}
[   1167.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#79, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   1168.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#79, xc=1)
[   1171.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#64, xc=0)
[   1188.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#65, xc=0)
               duration: 39.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo114_0_Text023}
[   1221.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#80, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1222.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#80, xc=1)
[   1227.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
[   1227.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#21, xc=3)
[   1227.0] L GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
[   1227.0] L GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
[   1227.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#65, xc=0)
[   1227.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#67, xc=0)
[   1227.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#89, xc=0)
[   1227.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
               duration: 75.0
               {IsWaitFinish: true, angleY: -72.0}
[   1227.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#22, xc=3)
               duration: 75.0
               {Far: 0.0, FarUse: false, FogRatio: 0.05000000074505806, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1227.0] E GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
               duration: 75.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.9000000953674316, FocalLengthEnd: 3.9000000953674316,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: true, OverwriteAtDist: 0.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1227.0] E GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
               duration: 75.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[   1227.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#68, xc=0)
               duration: 75.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1227.0] E RemainsFire[0] - Demo_PlayASForTimeline (#95, xc=0)
               duration: 75.0
               {ASName: C07-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1227.0] E RemainsFire[0] - Demo_VisibleOff (#99, xc=2)
               duration: 75.0
               {IsWaitFinish: true}
[   1230.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#81, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1231.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#81, xc=1)
[   1238.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#82, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1239.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#82, xc=1)
[   1246.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#83, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1247.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#83, xc=1)
[   1274.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#84, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   1275.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#84, xc=1)
[   1302.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
[   1302.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#22, xc=3)
[   1302.0] L GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
[   1302.0] L GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
[   1302.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#68, xc=0)
[   1302.0] L RemainsFire[0] - Demo_PlayASForTimeline (#95, xc=0)
[   1302.0] L RemainsFire[0] - Demo_VisibleOff (#99, xc=2)
[   1302.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
               duration: 141.0
               {IsWaitFinish: true, angleY: -62.0}
[   1302.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=3)
               duration: 141.0
               {Far: 0.0, FarUse: false, FogRatio: 0.05000000074505806, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1302.0] E GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
               duration: 141.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 28.0, ApertureEnd: 28.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 14.0, FocalLengthEnd: 14.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: true, OverwriteAtDist: 100.0, SceneName: C08-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1302.0] E GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
               duration: 108.0
               {FocusDistEnd: 24.0, FocusDistStart: 24.0, IsWaitFinish: true}
[   1302.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#69, xc=0)
               duration: 141.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1302.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#90, xc=0)
               duration: 141.0
               {ASName: C08-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1410.0] L GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
[   1410.0] E GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
               duration: 33.0
               {FocusDistEnd: 17.0, FocusDistStart: 24.0, IsWaitFinish: true}
[   1443.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
[   1443.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=3)
[   1443.0] L GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
[   1443.0] L GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
[   1443.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#69, xc=0)
[   1443.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#90, xc=0)
[   1443.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
               duration: 223.0
               {IsWaitFinish: true, angleY: -100.0}
[   1443.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=3)
               duration: 223.0
               {Far: 0.0, FarUse: false, FogRatio: 0.07000000029802322, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1443.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 223.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 3.0999999046325684, ApertureEnd: 6.28000020980835,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 0.699999988079071, DOFEndFrame: 140.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 15.600000381469727, FocalLengthEnd: 19.600000381469727,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C09-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1443.0] E GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
               duration: 72.0
               {FocusDistEnd: 18.0, FocusDistStart: 18.0, IsWaitFinish: true}
[   1443.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#70, xc=0)
               duration: 223.0
               {ASName: C09-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1443.0] E Dm_PlayerStole2[0] - Demo_PlayASForTimeline (#86, xc=0)
               duration: 223.0
               {ASName: C09-Item_Parastole2-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1443.0] E Npc_Goron020_2[0] - Demo_PlayASForTimeline (#91, xc=0)
               duration: 223.0
               {ASName: C09-Npc_Goron_HeroDescendants-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1443.0] E RemainsFire[0] - Demo_PlayASForTimeline (#96, xc=0)
               duration: 223.0
               {ASName: C09-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1443.0] E RemainsFire[0] - Demo_VisibleOff (#100, xc=2)
               duration: 223.0
               {IsWaitFinish: true}
[   1515.0] L GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
[   1515.0] E GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
               duration: 79.0
               {FocusDistEnd: 51.0, FocusDistStart: 18.0, IsWaitFinish: true}
[   1594.0] L GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
[   1594.0] E GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
               duration: 72.0
               {FocusDistEnd: 51.0, FocusDistStart: 51.0, IsWaitFinish: true}
[   1666.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
[   1666.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=3)
[   1666.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[   1666.0] L GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
[   1666.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#70, xc=0)
[   1666.0] L Dm_PlayerStole2[0] - Demo_PlayASForTimeline (#86, xc=0)
[   1666.0] L Npc_Goron020_2[0] - Demo_PlayASForTimeline (#91, xc=0)
[   1666.0] L RemainsFire[0] - Demo_PlayASForTimeline (#96, xc=0)
[   1666.0] L RemainsFire[0] - Demo_VisibleOff (#100, xc=2)
[   1666.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
               duration: 150.0
               {IsWaitFinish: true, angleY: -100.0}
[   1666.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=3)
               duration: 150.0
               {Far: 0.0, FarUse: false, FogRatio: 0.05000000074505806, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   1666.0] E GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 10.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 4.0, DOFBlurStart: 4.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 48.79999923706055, FocalLengthEnd: 48.79999923706055,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C10-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1666.0] E GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
               duration: 150.0
               {FocusDistEnd: 220.0, FocusDistStart: 181.0, IsWaitFinish: true}
[   1666.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#71, xc=0)
               duration: 150.0
               {ASName: C10-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1666.0] E Dm_PlayerStole2[0] - Demo_PlayASForTimeline (#87, xc=0)
               duration: 150.0
               {ASName: C10-Item_Parastole2-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1666.0] E RemainsFire[0] - Demo_PlayASForTimeline (#97, xc=0)
               duration: 150.0
               {ASName: C10-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1666.0] E RemainsFire[0] - Demo_VisibleOff (#101, xc=2)
               duration: 150.0
               {IsWaitFinish: true}
[   1771.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 45.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1816.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1816.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[   1816.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[   1816.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
[   1816.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#15, xc=1)
[   1816.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#16, xc=2)
[   1816.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=3)
[   1816.0] L GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
[   1816.0] L GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
[   1816.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#71, xc=0)
[   1816.0] L Dm_Ibutu_Fire[0] - Demo_Join (#85, xc=0)
[   1816.0] L Dm_PlayerStole2[0] - Demo_PlayASForTimeline (#87, xc=0)
[   1816.0] L RemainsFire[0] - Demo_PlayASForTimeline (#97, xc=0)
[   1816.0] L RemainsFire[0] - Demo_PlayASForTimeline (#98, xc=1)
[   1816.0] L RemainsFire[0] - Demo_VisibleOff (#101, xc=2)
[   1816.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#102, xc=0)
