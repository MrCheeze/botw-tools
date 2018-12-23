-------- Event timeline: Demo111_0 --------
actors: 8
clips: 47
oneshots: 0
cuts: 5
duration: 798.0
subtimelines: ['Demo111_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 80.0
x4: 0
params: (none)

Cut: C03
start time: 165.0
x4: 0
params: (none)

Cut: C04
start time: 235.0
x4: 0
params: (none)

Cut: C05
start time: 400.0
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
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventSetFogDirect', 'Demo_EventCloudShadowOff', 'Demo_EventCloudShadowPos', 'Demo_EventSetCloudShadowMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting', 'Demo_OverwriteNear']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWind[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 790.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 790.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
               duration: 80.0
               {IsWaitFinish: true, angleY: 205.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#9, xc=1)
               duration: 790.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.029999999329447746, WindDirY: 0.0, WindDirZ: -0.10999999940395355,
                 WindPower: 12.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#10, xc=2)
               duration: 80.0
               {Far: 0.0, FarUse: false, FogRatio: 0.029999999329447746, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#15, xc=3)
               duration: 235.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
               duration: 80.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 440.0, FocalLengthEnd: 440.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
               duration: 80.0
               {FocusDistEnd: 485.0, FocusDistStart: 485.0, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#32, xc=2)
               duration: 80.0
               {IsWaitFinish: true, Near: 450.0}
[      0.0] E EventControllerRumble[0] - Demo_RumbleSmall (#37, xc=0)
               duration: 235.0
               {Count: 60, IsWaitFinish: true}
[      0.0] E RemainsWind[0] - Demo_PlayASForTimeline (#41, xc=0)
               duration: 80.0
               {ASName: C01-DgnObj_IbutsuWindField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWind[0] - Demo_PlayASForTimeline (#46, xc=1)
               duration: 790.0
               {ASName: BeforeClear, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     80.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
[     80.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#10, xc=2)
[     80.0] L GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
[     80.0] L GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
[     80.0] L GameRomCamera[0] - Demo_OverwriteNear (#32, xc=2)
[     80.0] L RemainsWind[0] - Demo_PlayASForTimeline (#41, xc=0)
[     80.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
               duration: 85.0
               {IsWaitFinish: true, angleY: 205.0}
[     80.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=2)
               duration: 85.0
               {Far: 0.0, FarUse: false, FogRatio: 0.029999999329447746, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[     80.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 85.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 440.0, FocalLengthEnd: 440.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[     80.0] E GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
               duration: 85.0
               {FocusDistEnd: 560.0, FocusDistStart: 560.0, IsWaitFinish: true}
[     80.0] E GameRomCamera[0] - Demo_OverwriteNear (#33, xc=2)
               duration: 85.0
               {IsWaitFinish: true, Near: 500.0}
[     80.0] E RemainsWind[0] - Demo_PlayASForTimeline (#42, xc=0)
               duration: 85.0
               {ASName: C02-DgnObj_IbutsuWindField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    165.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
[    165.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=2)
[    165.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[    165.0] L GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
[    165.0] L GameRomCamera[0] - Demo_OverwriteNear (#33, xc=2)
[    165.0] L RemainsWind[0] - Demo_PlayASForTimeline (#42, xc=0)
[    165.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 70.0
               {IsWaitFinish: true, angleY: 205.0}
[    165.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=2)
               duration: 70.0
               {Far: 0.0, FarUse: false, FogRatio: 0.029999999329447746, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    165.0] E GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
               duration: 70.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 440.0, FocalLengthEnd: 440.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    165.0] E GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
               duration: 70.0
               {FocusDistEnd: 510.0, FocusDistStart: 510.0, IsWaitFinish: true}
[    165.0] E GameRomCamera[0] - Demo_OverwriteNear (#34, xc=2)
               duration: 70.0
               {IsWaitFinish: true, Near: 480.0}
[    165.0] E RemainsWind[0] - Demo_PlayASForTimeline (#43, xc=0)
               duration: 70.0
               {ASName: C03-DgnObj_IbutsuWindField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    235.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[    235.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=2)
[    235.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#15, xc=3)
[    235.0] L GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
[    235.0] L GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
[    235.0] L GameRomCamera[0] - Demo_OverwriteNear (#34, xc=2)
[    235.0] L EventControllerRumble[0] - Demo_RumbleSmall (#37, xc=0)
[    235.0] L RemainsWind[0] - Demo_PlayASForTimeline (#43, xc=0)
[    235.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 165.0
               {IsWaitFinish: true, angleY: 205.0}
[    235.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#13, xc=2)
               duration: 165.0
               {Far: 0.0, FarUse: false, FogRatio: 0.029999999329447746, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    235.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#16, xc=3)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.27799999713897705, setPos_y: 0.21199999749660492}
[    235.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 165.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.6000000238418579, DOFBlurStart: 1.0, DOFEndFrame: 0.800000011920929,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 90.0, FocalLengthEnd: 90.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    235.0] E GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
               duration: 156.0
               {FocusDistEnd: 650.0, FocusDistStart: 520.0, IsWaitFinish: true}
[    235.0] E GameRomCamera[0] - Demo_OverwriteNear (#35, xc=2)
               duration: 165.0
               {IsWaitFinish: true, Near: 450.0}
[    235.0] E EventControllerRumble[0] - Demo_RumbleLarge (#38, xc=0)
               duration: 67.0
               {Count: 5, IsWaitFinish: true}
[    235.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#40, xc=0)
               duration: 100.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo111_0_Text000}
[    235.0] E RemainsWind[0] - Demo_PlayASForTimeline (#44, xc=0)
               duration: 165.0
               {ASName: C04-DgnObj_IbutsuWindField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    236.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#16, xc=3)
[    236.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#17, xc=3)
               duration: 164.0
               {IsWaitFinish: true, setSpeed_x: 0.0008999999845400453, setSpeed_y: 0.0}
[    302.0] L EventControllerRumble[0] - Demo_RumbleLarge (#38, xc=0)
[    302.0] E EventControllerRumble[0] - Demo_RumbleSmall (#39, xc=0)
               duration: 98.0
               {Count: 15, IsWaitFinish: true}
[    335.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#40, xc=0)
[    391.0] L GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
[    391.0] E GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
               duration: 9.0
               {FocusDistEnd: 650.0, FocusDistStart: 650.0, IsWaitFinish: true}
[    400.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[    400.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#13, xc=2)
[    400.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#17, xc=3)
[    400.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[    400.0] L GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
[    400.0] L GameRomCamera[0] - Demo_OverwriteNear (#35, xc=2)
[    400.0] L EventControllerRumble[0] - Demo_RumbleSmall (#39, xc=0)
[    400.0] L RemainsWind[0] - Demo_PlayASForTimeline (#44, xc=0)
[    400.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 390.0
               {IsWaitFinish: true, angleY: 205.0}
[    400.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#14, xc=2)
               duration: 390.0
               {Far: 0.0, FarUse: false, FogRatio: 0.07000000029802322, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    400.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#18, xc=3)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: -0.6299999952316284, setPos_y: 0.11999999731779099}
[    400.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 390.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.20000000298023224, DOFBlurStart: 0.20000000298023224, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 100.0, FocalLengthEnd: 100.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C05-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    400.0] E GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
               duration: 250.0
               {FocusDistEnd: 510.0, FocusDistStart: 550.0, IsWaitFinish: true}
[    400.0] E GameRomCamera[0] - Demo_OverwriteNear (#36, xc=2)
               duration: 390.0
               {IsWaitFinish: true, Near: 20.0}
[    400.0] E RemainsWind[0] - Demo_PlayASForTimeline (#45, xc=0)
               duration: 390.0
               {ASName: C05-DgnObj_IbutsuWindField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    401.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#18, xc=3)
[    401.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#19, xc=3)
               duration: 389.0
               {IsWaitFinish: true, setSpeed_x: 0.0008999999845400453, setSpeed_y: 0.0}
[    650.0] L GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
[    650.0] E GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
               duration: 140.0
               {FocusDistEnd: 510.0, FocusDistStart: 510.0, IsWaitFinish: true}
[    760.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 38.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    790.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    790.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    790.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
[    790.0] L WorldManagerControl[0] - Demo_SetWind (#9, xc=1)
[    790.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#14, xc=2)
[    790.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#19, xc=3)
[    790.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[    790.0] L GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
[    790.0] L GameRomCamera[0] - Demo_OverwriteNear (#36, xc=2)
[    790.0] L RemainsWind[0] - Demo_PlayASForTimeline (#45, xc=0)
[    790.0] L RemainsWind[0] - Demo_PlayASForTimeline (#46, xc=1)
[    798.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
