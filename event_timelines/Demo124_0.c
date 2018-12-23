-------- Event timeline: Demo124_0 --------
actors: 11
clips: 50
oneshots: 0
cuts: 7
duration: 1620.0
subtimelines: ['Demo124_0_effect']
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

Cut: C04
start time: 590.0
x4: 0
params: (none)

Cut: C05
start time: 700.0
x4: 0
params: (none)

Cut: C10
start time: 965.0
x4: 0
params: (none)

Cut: C08
start time: 1240.0
x4: 0
params: (none)

Cut: C09
start time: 1465.0
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
x36: 3
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 93.5999984741211, PosZ: -2.0, RotX: 0.0,
  RotY: 180.0, RotZ: 0.0}

Actor: DgnObj_RemainsClearTerminalBody_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 93.5999984741211, PosZ: -2.0, RotX: 0.0,
  RotY: 180.0, RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_HeartUtuwa_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Enemy_SiteBoss_Sword[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 2, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 1620.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 1620.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 240.0
               {IsWaitFinish: true, angleY: 230.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#13, xc=1)
               duration: 1620.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#14, xc=2)
               duration: 1620.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
               duration: 240.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 35.0, ApertureEnd: 80.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 0.800000011920929, DOFEndFrame: 210.0, DOFStartFrame: 150.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.0, FocalLengthEnd: 3.299999952316284, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
               duration: 95.0
               {FocusDistEnd: 3.0, FocusDistStart: 13.0, IsWaitFinish: true}
[      0.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#32, xc=0)
               duration: 1620.0
               {ASName: OffWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#33, xc=0)
               duration: 1620.0
               {ASName: Standby, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#38, xc=0)
               duration: 1465.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#45, xc=0)
               duration: 240.0
               {ASName: Demo124_0-C01-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#49, xc=1)
               duration: 735.0
               {ASName: DownWaitMaterial, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     95.0] L GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
[     95.0] E GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=1)
               duration: 145.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    240.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[    240.0] L GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
[    240.0] L GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=1)
[    240.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#45, xc=0)
[    240.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 350.0
               {IsWaitFinish: true, angleY: 100.0}
[    240.0] E GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
               duration: 350.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 36.5, ApertureEnd: 36.5, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.6000000238418579, DOFBlurStart: 0.6000000238418579, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 4.699999809265137, FocalLengthEnd: 4.699999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    240.0] E GameRomCamera[0] - Demo_FocusDistSetting (#24, xc=1)
               duration: 100.0
               {FocusDistEnd: 5.5, FocusDistStart: 3.5, IsWaitFinish: true}
[    240.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#46, xc=0)
               duration: 350.0
               {ASName: C02-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    340.0] L GameRomCamera[0] - Demo_FocusDistSetting (#24, xc=1)
[    340.0] E GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
               duration: 250.0
               {FocusDistEnd: 5.5, FocusDistStart: 5.5, IsWaitFinish: true}
[    448.0] E EventControllerRumble[0] - Demo_RumbleSmall (#34, xc=0)
               duration: 142.0
               {Count: 30, IsWaitFinish: true}
[    590.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[    590.0] L GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
[    590.0] L GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
[    590.0] L EventControllerRumble[0] - Demo_RumbleSmall (#34, xc=0)
[    590.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#46, xc=0)
[    590.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 110.0
               {IsWaitFinish: true, angleY: 260.0}
[    590.0] E GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
               duration: 110.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 97.0, ApertureEnd: 97.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2999999523162842, DOFBlurStart: 1.2999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.75, FocalLengthEnd: 1.75,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    590.0] E GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
               duration: 110.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.5, IsWaitFinish: true}
[    590.0] E EventControllerRumble[0] - Demo_RumbleLarge (#35, xc=0)
               duration: 189.0
               {Count: 12, IsWaitFinish: true}
[    590.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#47, xc=0)
               duration: 110.0
               {ASName: C04-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    700.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
[    700.0] L GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
[    700.0] L GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
[    700.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#47, xc=0)
[    700.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
               duration: 265.0
               {IsWaitFinish: true, angleY: 20.0}
[    700.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 265.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 35.0, ApertureEnd: 35.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 0.800000011920929, DOFEndFrame: 180.0, DOFStartFrame: 170.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.0, FocalLengthEnd: 4.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    700.0] E GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
               duration: 265.0
               {FocusDistEnd: 8.0, FocusDistStart: 8.0, IsWaitFinish: true}
[    700.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#48, xc=0)
               duration: 35.0
               {ASName: C05-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    730.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 120.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    735.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#48, xc=0)
[    735.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#49, xc=1)
[    779.0] L EventControllerRumble[0] - Demo_RumbleLarge (#35, xc=0)
[    850.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    850.0] E Fader[0] - Demo_FadeIn (#2, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    880.0] L Fader[0] - Demo_FadeIn (#2, xc=0)
[    965.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
[    965.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[    965.0] L GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
[    965.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
               duration: 275.0
               {IsWaitFinish: true, angleY: 100.0}
[    965.0] E GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
               duration: 275.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.20000000298023224, DOFBlurStart: 0.20000000298023224, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 5.5, FocalLengthEnd: 5.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C10-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    965.0] E GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
               duration: 227.0
               {FocusDistEnd: 25.0, FocusDistStart: 19.0, IsWaitFinish: true}
[   1192.0] L GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
[   1192.0] E GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
               duration: 48.0
               {FocusDistEnd: 25.0, FocusDistStart: 25.0, IsWaitFinish: true}
[   1240.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
[   1240.0] L GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
[   1240.0] L GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
[   1240.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
               duration: 210.0
               {IsWaitFinish: true, angleY: 180.0}
[   1240.0] E GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 32.0, ApertureEnd: 32.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.699999988079071, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 90.0,
                 DOFStartFrame: 50.0, DOFUse: true, EndFrame: -1.0, FocalLength: 5.800000190734863, FocalLengthEnd: 5.800000190734863,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C08-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1240.0] E GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
               duration: 210.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[   1240.0] E Obj_HeartUtuwa_A_01[0] - Demo_PlayASForTimeline (#36, xc=0)
               duration: 210.0
               {ASName: C08-Item_HeartUtuwa-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1450.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
[   1450.0] L GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
[   1450.0] L GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
[   1450.0] L Obj_HeartUtuwa_A_01[0] - Demo_PlayASForTimeline (#36, xc=0)
[   1450.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
               duration: 170.0
               {IsWaitFinish: true, angleY: 180.0}
[   1450.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 170.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7999999523162842, FocalLengthEnd: 1.7999999523162842,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C09-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1450.0] E GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
               duration: 170.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   1450.0] E Obj_HeartUtuwa_A_01[0] - Demo_PlayASForTimeline (#37, xc=0)
               duration: 170.0
               {ASName: C09-Item_HeartUtuwa-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1465.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#38, xc=0)
[   1465.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#39, xc=0)
               duration: 155.0
               {ASName: C09-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1476.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#40, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1477.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#40, xc=1)
[   1494.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#41, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1495.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#41, xc=1)
[   1511.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#42, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1512.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#42, xc=1)
[   1532.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#43, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1533.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#43, xc=1)
[   1551.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#44, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1552.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#44, xc=1)
[   1590.0] E Fader[0] - Demo_FadeOut (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1620.0] L Fader[0] - Demo_FadeOut (#3, xc=0)
[   1620.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   1620.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   1620.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
[   1620.0] L WorldManagerControl[0] - Demo_SetWind (#13, xc=1)
[   1620.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#14, xc=2)
[   1620.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[   1620.0] L GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
[   1620.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#32, xc=0)
[   1620.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#33, xc=0)
[   1620.0] L Obj_HeartUtuwa_A_01[0] - Demo_PlayASForTimeline (#37, xc=0)
[   1620.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#39, xc=0)
