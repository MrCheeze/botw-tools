-------- Event timeline: Demo112_0 --------
actors: 11
clips: 45
oneshots: 0
cuts: 5
duration: 900.0
subtimelines: ['Demo112_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C03
start time: 180.0
x4: 0
params: (none)

Cut: C04
start time: 300.0
x4: 0
params: (none)

Cut: C06
start time: 510.0
x4: 0
params: (none)

Cut: C07
start time: 690.0
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
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_EventSetFogDirect']
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

Actor: RemainsWater[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWater_WeakPoint[0]
x36: 2
actions: ['Demo_EventBind', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWater_WeakPoint[1]
x36: 2
actions: ['Demo_EventBind', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWater_WeakPoint[2]
x36: 2
actions: ['Demo_EventBind', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsWater_WeakPoint[3]
x36: 2
actions: ['Demo_EventBind', 'Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 900.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 900.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
               duration: 180.0
               {IsWaitFinish: true, angleY: -115.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#9, xc=1)
               duration: 900.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.12999999523162842, WindDirY: 0.0, WindDirZ: 0.019999999552965164,
                 WindPower: 3.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#10, xc=2)
               duration: 900.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=3)
               duration: 180.0
               {Far: 300.0, FarUse: true, FogRatio: 0.5299999713897705, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=1)
               duration: 180.0
               {FocusDistEnd: 90.0, FocusDistStart: 128.0, IsWaitFinish: true}
[      0.0] E RemainsWater[0] - Demo_PlayASForTimeline (#31, xc=0)
               duration: 180.0
               {ASName: C01-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater[0] - Demo_PlayASForTimeline (#36, xc=1)
               duration: 900.0
               {ASName: BeforeClear, ClothWarpMode: 1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[0] - Demo_EventBind (#37, xc=0)
               duration: 900.0
               {ActorName: RemainsWater, IsContinueBind: false, IsWaitFinish: true, NodeName: Faucet_1, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E RemainsWater_WeakPoint[0] - Demo_PlayASForTimeline (#38, xc=1)
               duration: 900.0
               {ASName: Deactive, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[1] - Demo_EventBind (#39, xc=0)
               duration: 900.0
               {ActorName: RemainsWater, IsContinueBind: false, IsWaitFinish: true, NodeName: Faucet_2, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E RemainsWater_WeakPoint[1] - Demo_PlayASForTimeline (#40, xc=1)
               duration: 900.0
               {ASName: Deactive, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[2] - Demo_EventBind (#41, xc=0)
               duration: 900.0
               {ActorName: RemainsWater, IsContinueBind: false, IsWaitFinish: true, NodeName: Faucet_3, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E RemainsWater_WeakPoint[2] - Demo_PlayASForTimeline (#42, xc=1)
               duration: 900.0
               {ASName: Deactive, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsWater_WeakPoint[3] - Demo_EventBind (#43, xc=0)
               duration: 900.0
               {ActorName: RemainsWater, IsContinueBind: false, IsWaitFinish: true, NodeName: Faucet_4, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E RemainsWater_WeakPoint[3] - Demo_PlayASForTimeline (#44, xc=1)
               duration: 900.0
               {ASName: Deactive, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    180.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
[    180.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=3)
[    180.0] L GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
[    180.0] L GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=1)
[    180.0] L RemainsWater[0] - Demo_PlayASForTimeline (#31, xc=0)
[    180.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
               duration: 120.0
               {IsWaitFinish: true, angleY: -160.0}
[    180.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=3)
               duration: 120.0
               {Far: 300.0, FarUse: true, FogRatio: 0.5299999713897705, InstantSW: true, IsWaitFinish: true,
                 Near: -40.0, NearUse: true}
[    180.0] E GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 4.800000190734863, ApertureEnd: 4.800000190734863,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 24.799999237060547, FocalLengthEnd: 24.799999237060547,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C03-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    180.0] E GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
               duration: 120.0
               {FocusDistEnd: 35.0, FocusDistStart: 35.0, IsWaitFinish: true}
[    180.0] E EventControllerRumble[0] - Demo_RumbleSmall (#28, xc=0)
               duration: 370.0
               {Count: 53, IsWaitFinish: true}
[    180.0] E RemainsWater[0] - Demo_PlayASForTimeline (#32, xc=0)
               duration: 120.0
               {ASName: C03-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    300.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
[    300.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=3)
[    300.0] L GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
[    300.0] L GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
[    300.0] L RemainsWater[0] - Demo_PlayASForTimeline (#32, xc=0)
[    300.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 210.0
               {IsWaitFinish: true, angleY: 130.0}
[    300.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#13, xc=3)
               duration: 210.0
               {Far: 300.0, FarUse: true, FogRatio: 0.6399999856948853, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[    300.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    300.0] E GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=1)
               duration: 210.0
               {FocusDistEnd: 35.0, FocusDistStart: 35.0, IsWaitFinish: true}
[    300.0] E RemainsWater[0] - Demo_PlayASForTimeline (#33, xc=0)
               duration: 210.0
               {ASName: C04-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    510.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[    510.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#13, xc=3)
[    510.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[    510.0] L GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=1)
[    510.0] L RemainsWater[0] - Demo_PlayASForTimeline (#33, xc=0)
[    510.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 180.0
               {IsWaitFinish: true, angleY: -170.0}
[    510.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#14, xc=3)
               duration: 180.0
               {Far: 300.0, FarUse: true, FogRatio: 0.5799999833106995, InstantSW: true, IsWaitFinish: true,
                 Near: -30.0, NearUse: true}
[    510.0] E GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    510.0] E GameRomCamera[0] - Demo_FocusDistSetting (#24, xc=1)
               duration: 40.0
               {FocusDistEnd: 33.0, FocusDistStart: 33.0, IsWaitFinish: true}
[    510.0] E RemainsWater[0] - Demo_PlayASForTimeline (#34, xc=0)
               duration: 180.0
               {ASName: C06-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    550.0] L GameRomCamera[0] - Demo_FocusDistSetting (#24, xc=1)
[    550.0] L EventControllerRumble[0] - Demo_RumbleSmall (#28, xc=0)
[    550.0] E GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
               duration: 120.0
               {FocusDistEnd: 70.0, FocusDistStart: 33.0, IsWaitFinish: true}
[    560.0] E EventControllerRumble[0] - Demo_RumbleLarge (#29, xc=0)
               duration: 110.0
               {Count: 9, IsWaitFinish: true}
[    670.0] L GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
[    670.0] L EventControllerRumble[0] - Demo_RumbleLarge (#29, xc=0)
[    670.0] E GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
               duration: 20.0
               {FocusDistEnd: 70.0, FocusDistStart: 70.0, IsWaitFinish: true}
[    690.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[    690.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#14, xc=3)
[    690.0] L GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
[    690.0] L GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
[    690.0] L RemainsWater[0] - Demo_PlayASForTimeline (#34, xc=0)
[    690.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 210.0
               {IsWaitFinish: true, angleY: -170.0}
[    690.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#15, xc=3)
               duration: 210.0
               {Far: 300.0, FarUse: true, FogRatio: 0.47999998927116394, InstantSW: true, IsWaitFinish: true,
                 Near: -1.0, NearUse: true}
[    690.0] E GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 15.0, ApertureEnd: 15.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 38.0, FocalLengthEnd: 38.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 110.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    690.0] E GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
               duration: 210.0
               {FocusDistEnd: 118.0, FocusDistStart: 118.0, IsWaitFinish: true}
[    690.0] E RemainsWater[0] - Demo_PlayASForTimeline (#35, xc=0)
               duration: 210.0
               {ASName: C07-DgnObj_IbutsuWaterField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    782.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#30, xc=0)
               duration: 65.0
               {Count: 3, IsWaitFinish: true}
[    847.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#30, xc=0)
[    870.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    900.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    900.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    900.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    900.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
[    900.0] L WorldManagerControl[0] - Demo_SetWind (#9, xc=1)
[    900.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#10, xc=2)
[    900.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#15, xc=3)
[    900.0] L GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
[    900.0] L GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
[    900.0] L RemainsWater[0] - Demo_PlayASForTimeline (#35, xc=0)
[    900.0] L RemainsWater[0] - Demo_PlayASForTimeline (#36, xc=1)
[    900.0] L RemainsWater_WeakPoint[0] - Demo_EventBind (#37, xc=0)
[    900.0] L RemainsWater_WeakPoint[0] - Demo_PlayASForTimeline (#38, xc=1)
[    900.0] L RemainsWater_WeakPoint[1] - Demo_EventBind (#39, xc=0)
[    900.0] L RemainsWater_WeakPoint[1] - Demo_PlayASForTimeline (#40, xc=1)
[    900.0] L RemainsWater_WeakPoint[2] - Demo_EventBind (#41, xc=0)
[    900.0] L RemainsWater_WeakPoint[2] - Demo_PlayASForTimeline (#42, xc=1)
[    900.0] L RemainsWater_WeakPoint[3] - Demo_EventBind (#43, xc=0)
[    900.0] L RemainsWater_WeakPoint[3] - Demo_PlayASForTimeline (#44, xc=1)
