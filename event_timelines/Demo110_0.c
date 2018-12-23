-------- Event timeline: Demo110_0 --------
actors: 9
clips: 37
oneshots: 0
cuts: 4
duration: 1266.0
subtimelines: ['Demo110_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: C04
start time: 306.0
x4: 0
params: (none)

Cut: C02
start time: 486.0
x4: 0
params: (none)

Cut: C03
start time: 836.0
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
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventSetFogDirect', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleMiddle', 'Demo_RumbleSmall']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsFire[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_Goron022[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Weapon_Lsword_036[0]
x36: 1
actions: ['Demo_Bind']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 1266.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 1266.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
               duration: 306.0
               {IsWaitFinish: true, angleY: -96.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#8, xc=1)
               duration: 1266.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.05000000074505806, WindDirY: 0.0, WindDirZ: -0.10999999940395355,
                 WindPower: 1.2000000476837158}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#9, xc=2)
               duration: 1266.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#10, xc=3)
               duration: 1266.0
               {Far: 0.0, FarUse: false, FogRatio: 0.15000000596046448, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
               duration: 306.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 15.0, ApertureEnd: 15.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 16.0, FocalLengthEnd: 16.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
               duration: 306.0
               {FocusDistEnd: 92.0, FocusDistStart: 92.0, IsWaitFinish: true}
[      0.0] E RemainsFire[0] - Demo_PlayASForTimeline (#30, xc=0)
               duration: 306.0
               {ASName: C01-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsFire[0] - Demo_PlayASForTimeline (#34, xc=1)
               duration: 1266.0
               {ASName: BeforeClear, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     17.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#21, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     37.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#21, xc=0)
[    116.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#22, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[    136.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#22, xc=0)
[    221.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#23, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[    241.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#23, xc=0)
[    306.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
[    306.0] L GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
[    306.0] L GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=1)
[    306.0] L RemainsFire[0] - Demo_PlayASForTimeline (#30, xc=0)
[    306.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
               duration: 180.0
               {IsWaitFinish: true, angleY: -83.5199966430664}
[    306.0] E GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 7.0, FocalLengthEnd: 7.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    306.0] E GameRomCamera[0] - Demo_FocusDistSetting (#16, xc=1)
               duration: 180.0
               {FocusDistEnd: 116.0, FocusDistStart: 116.0, IsWaitFinish: true}
[    306.0] E RemainsFire[0] - Demo_PlayASForTimeline (#31, xc=0)
               duration: 180.0
               {ASName: C04-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    330.0] E EventControllerRumble[0] - Demo_RumbleSmall (#24, xc=0)
               duration: 20.0
               {Count: 3, IsWaitFinish: true}
[    350.0] L EventControllerRumble[0] - Demo_RumbleSmall (#24, xc=0)
[    419.0] E EventControllerRumble[0] - Demo_RumbleSmall (#25, xc=0)
               duration: 20.0
               {Count: 3, IsWaitFinish: true}
[    439.0] L EventControllerRumble[0] - Demo_RumbleSmall (#25, xc=0)
[    486.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
[    486.0] L GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
[    486.0] L GameRomCamera[0] - Demo_FocusDistSetting (#16, xc=1)
[    486.0] L RemainsFire[0] - Demo_PlayASForTimeline (#31, xc=0)
[    486.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 350.0
               {IsWaitFinish: true, angleY: 242.0}
[    486.0] E GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
               duration: 350.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 15.0, ApertureEnd: 15.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 2.0, DOFEndFrame: 240.0, DOFStartFrame: 60.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 16.0, FocalLengthEnd: 16.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    486.0] E GameRomCamera[0] - Demo_FocusDistSetting (#17, xc=1)
               duration: 350.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    486.0] E RemainsFire[0] - Demo_PlayASForTimeline (#32, xc=0)
               duration: 350.0
               {ASName: C02-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    525.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#26, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[    545.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#26, xc=0)
[    637.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#27, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[    657.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#27, xc=0)
[    729.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#28, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[    749.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#28, xc=0)
[    821.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#29, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[    836.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[    836.0] L GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
[    836.0] L GameRomCamera[0] - Demo_FocusDistSetting (#17, xc=1)
[    836.0] L RemainsFire[0] - Demo_PlayASForTimeline (#32, xc=0)
[    836.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 430.0
               {IsWaitFinish: true, angleY: 1.5}
[    836.0] E GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
               duration: 430.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.20000000298023224, DOFBlurStart: 0.20000000298023224, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: true, OverwriteAtDist: 100.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    836.0] E GameRomCamera[0] - Demo_FocusDistSetting (#18, xc=1)
               duration: 58.0
               {FocusDistEnd: 300.0, FocusDistStart: 300.0, IsWaitFinish: true}
[    836.0] E RemainsFire[0] - Demo_PlayASForTimeline (#33, xc=0)
               duration: 430.0
               {ASName: C03-DgnObj_IbutsuFireField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    836.0] E Npc_Goron022[0] - Demo_PlayASForTimeline (#35, xc=0)
               duration: 430.0
               {ASName: C03-UMii_Goron_M-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    836.0] E Weapon_Lsword_036[0] - Demo_Bind (#36, xc=0)
               duration: 430.0
               {ActorName: Npc_Goron022, IsContinueBind: true, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: '0'}
[    841.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#29, xc=0)
[    894.0] L GameRomCamera[0] - Demo_FocusDistSetting (#18, xc=1)
[    894.0] E GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=1)
               duration: 276.0
               {FocusDistEnd: 420.0, FocusDistStart: 300.0, IsWaitFinish: true}
[   1170.0] L GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=1)
[   1170.0] E GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=1)
               duration: 96.0
               {FocusDistEnd: 420.0, FocusDistStart: 420.0, IsWaitFinish: true}
[   1236.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1266.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1266.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[   1266.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[   1266.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[   1266.0] L WorldManagerControl[0] - Demo_SetWind (#8, xc=1)
[   1266.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#9, xc=2)
[   1266.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#10, xc=3)
[   1266.0] L GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
[   1266.0] L GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=1)
[   1266.0] L RemainsFire[0] - Demo_PlayASForTimeline (#33, xc=0)
[   1266.0] L RemainsFire[0] - Demo_PlayASForTimeline (#34, xc=1)
[   1266.0] L Npc_Goron022[0] - Demo_PlayASForTimeline (#35, xc=0)
[   1266.0] L Weapon_Lsword_036[0] - Demo_Bind (#36, xc=0)
