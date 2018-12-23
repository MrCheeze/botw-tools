-------- Event timeline: Demo140_0 --------
actors: 7
clips: 21
oneshots: 0
cuts: 2
duration: 690.0
subtimelines: ['Demo140_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 570.0
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
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_EventCloudShadowOff', 'Demo_EventSetFogDirect']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting', 'Demo_OverwriteNear']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleMiddle', 'Demo_RumbleSmall', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Enemy_GanonGhost[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 690.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 690.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 690.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.05999999865889549, WindDirY: 0.0, WindDirZ: 0.23000000417232513,
                 WindPower: 6.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
               duration: 570.0
               {IsWaitFinish: true, angleY: 143.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#7, xc=2)
               duration: 690.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=3)
               duration: 570.0
               {Far: 0.0, FarUse: false, FogRatio: 0.14000000059604645, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
               duration: 570.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1000.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#12, xc=1)
               duration: 570.0
               {FocusDistEnd: 500.0, FocusDistStart: 500.0, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#14, xc=2)
               duration: 570.0
               {IsWaitFinish: true, Near: 2.0}
[      0.0] E Enemy_GanonGhost[0] - Demo_PlayASForTimeline (#20, xc=0)
               duration: 470.0
               {ASName: C01-GanonGhost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     40.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#16, xc=0)
               duration: 45.0
               {Count: 2, IsWaitFinish: true}
[     85.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#16, xc=0)
[    214.0] E EventControllerRumble[0] - Demo_RumbleSmall (#17, xc=0)
               duration: 37.0
               {Count: 8, IsWaitFinish: true}
[    251.0] L EventControllerRumble[0] - Demo_RumbleSmall (#17, xc=0)
[    265.0] E EventControllerRumble[0] - Demo_RumbleLarge (#18, xc=0)
               duration: 110.0
               {Count: 8, IsWaitFinish: true}
[    375.0] L EventControllerRumble[0] - Demo_RumbleLarge (#18, xc=0)
[    375.0] E EventControllerRumble[0] - Demo_RumbleSmall (#19, xc=0)
               duration: 170.0
               {Count: 16, IsWaitFinish: true}
[    470.0] L Enemy_GanonGhost[0] - Demo_PlayASForTimeline (#20, xc=0)
[    545.0] L EventControllerRumble[0] - Demo_RumbleSmall (#19, xc=0)
[    570.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
[    570.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=3)
[    570.0] L GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
[    570.0] L GameRomCamera[0] - Demo_FocusDistSetting (#12, xc=1)
[    570.0] L GameRomCamera[0] - Demo_OverwriteNear (#14, xc=2)
[    570.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=1)
               duration: 120.0
               {IsWaitFinish: true, angleY: 143.0}
[    570.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=3)
               duration: 120.0
               {Far: 0.0, FarUse: false, FogRatio: 0.11999999731779099, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    570.0] E GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1000.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    570.0] E GameRomCamera[0] - Demo_FocusDistSetting (#13, xc=1)
               duration: 120.0
               {FocusDistEnd: 500.0, FocusDistStart: 500.0, IsWaitFinish: true}
[    570.0] E GameRomCamera[0] - Demo_OverwriteNear (#15, xc=2)
               duration: 120.0
               {IsWaitFinish: true, Near: 2.0}
[    660.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    690.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    690.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    690.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    690.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[    690.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=1)
[    690.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#7, xc=2)
[    690.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#9, xc=3)
[    690.0] L GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
[    690.0] L GameRomCamera[0] - Demo_FocusDistSetting (#13, xc=1)
[    690.0] L GameRomCamera[0] - Demo_OverwriteNear (#15, xc=2)
