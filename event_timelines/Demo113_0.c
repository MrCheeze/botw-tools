-------- Event timeline: Demo113_0 --------
actors: 8
clips: 49
oneshots: 0
cuts: 5
duration: 1125.0
subtimelines: ['Demo113_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 240.0
x4: 0
params: (none)

Cut: C03
start time: 420.0
x4: 0
params: (none)

Cut: C04
start time: 555.0
x4: 0
params: (none)

Cut: C05
start time: 915.0
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
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_SetPaletteType', 'Demo_EventSetFogDirect', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall', 'Demo_RumbleMiddle', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsElectric[0]
x36: 3
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 1125.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 1125.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 1125.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.20000000298023224, WindDirY: 0.0, WindDirZ: 0.3400000035762787,
                 WindPower: 5.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
               duration: 915.0
               {IsWaitFinish: true, angleY: -103.0}
[      0.0] E WorldManagerControl[0] - Demo_SetPaletteType (#7, xc=2)
               duration: 1125.0
               {ChangeFrame: 0, EndFrame: 0, IsWaitFinish: true, PaletteType: 8, Speed: 1.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=3)
               duration: 240.0
               {Far: 500.0, FarUse: true, FogRatio: 0.949999988079071, InstantSW: true, IsWaitFinish: true,
                 Near: -13.0, NearUse: true}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#13, xc=4)
               duration: 1125.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
               duration: 240.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 100.0, FocalLengthEnd: 100.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=1)
               duration: 160.0
               {FocusDistEnd: 38.0, FocusDistStart: 38.0, IsWaitFinish: true}
[      0.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#42, xc=0)
               duration: 240.0
               {ASName: C01-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#47, xc=1)
               duration: 1125.0
               {ASName: BeforeClear, ClothWarpMode: 1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#48, xc=2)
               duration: 1125.0
               {ASName: WeakPointAll_ForTimeLine, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: 2}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     47.0] E EventControllerRumble[0] - Demo_RumbleSmall (#26, xc=0)
               duration: 10.0
               {Count: 2, IsWaitFinish: true}
[     57.0] L EventControllerRumble[0] - Demo_RumbleSmall (#26, xc=0)
[     66.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#27, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[     86.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#27, xc=0)
[    160.0] L GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=1)
[    160.0] E GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=1)
               duration: 35.0
               {FocusDistEnd: 4.0, FocusDistStart: 38.0, IsWaitFinish: true}
[    174.0] E EventControllerRumble[0] - Demo_RumbleSmall (#28, xc=0)
               duration: 10.0
               {Count: 2, IsWaitFinish: true}
[    184.0] L EventControllerRumble[0] - Demo_RumbleSmall (#28, xc=0)
[    195.0] L GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=1)
[    195.0] E GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=1)
               duration: 45.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[    200.0] E EventControllerRumble[0] - Demo_RumbleLarge (#29, xc=0)
               duration: 15.0
               {Count: 1, IsWaitFinish: true}
[    215.0] L EventControllerRumble[0] - Demo_RumbleLarge (#29, xc=0)
[    215.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#30, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    225.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#30, xc=0)
[    240.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=3)
[    240.0] L GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
[    240.0] L GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=1)
[    240.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#42, xc=0)
[    240.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=3)
               duration: 180.0
               {Far: 4990.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: -300.0, NearUse: true}
[    240.0] E GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    240.0] E GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
               duration: 180.0
               {FocusDistEnd: 242.0, FocusDistStart: 285.0, IsWaitFinish: true}
[    240.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#43, xc=0)
               duration: 180.0
               {ASName: C02-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    284.0] E EventControllerRumble[0] - Demo_RumbleSmall (#31, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    294.0] L EventControllerRumble[0] - Demo_RumbleSmall (#31, xc=0)
[    298.0] E EventControllerRumble[0] - Demo_RumbleSmall (#32, xc=0)
               duration: 17.0
               {Count: 3, IsWaitFinish: true}
[    315.0] L EventControllerRumble[0] - Demo_RumbleSmall (#32, xc=0)
[    416.0] E EventControllerRumble[0] - Demo_RumbleSmall (#33, xc=0)
               duration: 10.0
               {Count: 2, IsWaitFinish: true}
[    420.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=3)
[    420.0] L GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
[    420.0] L GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
[    420.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#43, xc=0)
[    420.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#10, xc=3)
               duration: 135.0
               {Far: 400.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: 230.0, NearUse: true}
[    420.0] E GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 15.0, ApertureEnd: 15.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 260.0, FocalLengthEnd: 260.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    420.0] E GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=1)
               duration: 135.0
               {FocusDistEnd: 250.0, FocusDistStart: 250.0, IsWaitFinish: true}
[    420.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#44, xc=0)
               duration: 135.0
               {ASName: C03-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    426.0] L EventControllerRumble[0] - Demo_RumbleSmall (#33, xc=0)
[    432.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#34, xc=0)
               duration: 19.0
               {Count: 3, IsWaitFinish: true}
[    451.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#34, xc=0)
[    539.0] E EventControllerRumble[0] - Demo_RumbleSmall (#35, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[    549.0] L EventControllerRumble[0] - Demo_RumbleSmall (#35, xc=0)
[    555.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#10, xc=3)
[    555.0] L GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
[    555.0] L GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=1)
[    555.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#44, xc=0)
[    555.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=3)
               duration: 360.0
               {Far: 200.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: 5.0, NearUse: true}
[    555.0] E GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
               duration: 360.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.20000000298023224, DOFBlurStart: 0.20000000298023224, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 400.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    555.0] E GameRomCamera[0] - Demo_FocusDistSetting (#24, xc=1)
               duration: 360.0
               {FocusDistEnd: 70.0, FocusDistStart: 70.0, IsWaitFinish: true}
[    555.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#45, xc=0)
               duration: 360.0
               {ASName: C04-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    556.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#36, xc=0)
               duration: 16.0
               {Count: 3, IsWaitFinish: true}
[    572.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#36, xc=0)
[    672.0] E EventControllerRumble[0] - Demo_RumbleLarge (#37, xc=0)
               duration: 15.0
               {Count: 1, IsWaitFinish: true}
[    687.0] L EventControllerRumble[0] - Demo_RumbleLarge (#37, xc=0)
[    687.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#38, xc=0)
               duration: 10.0
               {Count: 3, IsWaitFinish: true}
[    697.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#38, xc=0)
[    802.0] E EventControllerRumble[0] - Demo_RumbleSmall (#39, xc=0)
               duration: 10.0
               {Count: 2, IsWaitFinish: true}
[    812.0] L EventControllerRumble[0] - Demo_RumbleSmall (#39, xc=0)
[    812.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#40, xc=0)
               duration: 20.0
               {Count: 3, IsWaitFinish: true}
[    832.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#40, xc=0)
[    915.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
[    915.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=3)
[    915.0] L GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
[    915.0] L GameRomCamera[0] - Demo_FocusDistSetting (#24, xc=1)
[    915.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#45, xc=0)
[    915.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=1)
               duration: 210.0
               {IsWaitFinish: true, angleY: -64.0}
[    915.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=3)
               duration: 210.0
               {Far: 2000.0, FarUse: true, FogRatio: 0.9800000190734863, InstantSW: true, IsWaitFinish: true,
                 Near: -25.0, NearUse: true}
[    915.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.10000000149011612, DOFBlurStart: 0.10000000149011612, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    915.0] E GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
               duration: 210.0
               {FocusDistEnd: 350.0, FocusDistStart: 310.0, IsWaitFinish: true}
[    915.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#41, xc=0)
               duration: 60.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo113_0_Text000}
[    915.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#46, xc=0)
               duration: 210.0
               {ASName: C05-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    975.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#41, xc=0)
[   1095.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1125.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1125.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[   1125.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[   1125.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[   1125.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=1)
[   1125.0] L WorldManagerControl[0] - Demo_SetPaletteType (#7, xc=2)
[   1125.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=3)
[   1125.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#13, xc=4)
[   1125.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[   1125.0] L GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
[   1125.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#46, xc=0)
[   1125.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#47, xc=1)
[   1125.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#48, xc=2)
