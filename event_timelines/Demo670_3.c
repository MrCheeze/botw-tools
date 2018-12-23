-------- Event timeline: Demo670_3 --------
actors: 12
clips: 50
oneshots: 0
cuts: 6
duration: 1600.0
subtimelines: ['Demo670_3_effect']
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
start time: 930.0
x4: 0
params: (none)

Cut: C04
start time: 1085.0
x4: 0
params: (none)

Cut: C05
start time: 1190.0
x4: 0
params: (none)

Cut: C06
start time: 1280.0
x4: 0
params: (none)


===== Actors =====

Actor: RemainsClearTerminal
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 93.5999984741211, PosZ: -2.0, RotX: 0.0,
  RotY: 180.0, RotZ: 0.0}

Actor: DgnObj_RemainsClearTerminalBody_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 93.5999984741211, PosZ: -2.0, RotX: 0.0,
  RotY: 180.0, RotZ: 0.0}

Actor: Fader[1]
x36: 1
actions: ['Demo_FadeIn']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Sun_A_01[2]
x36: 1
actions: ['Demo_SunMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Moon_A_01[3]
x36: 1
actions: ['Demo_MoonMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: WorldManagerControl[4]
x36: 3
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[5]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[6]
x36: 1
actions: ['Demo_RumbleMiddle']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[8]
x36: 1
actions: ['Demo_PlayUiActorName']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[9]
x36: 1
actions: ['Demo_OpenDungeonMessage']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Enemy_SiteBoss_Sword_R[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_VisibleOff']
params: {CreateMode: 3, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[11]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}


===== Timeline =====

[      0.0] E RemainsClearTerminal - Demo_PlayASForTimeline (#0, xc=0)
               duration: 1600.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#1, xc=0)
               duration: 1600.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Fader[1] - Demo_FadeIn (#2, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 2, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[2] - Demo_SunMove (#3, xc=0)
               duration: 1804.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[3] - Demo_MoonMove (#4, xc=0)
               duration: 1804.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#5, xc=0)
               duration: 270.0
               {IsWaitFinish: true, angleY: -75.0}
[      0.0] E WorldManagerControl[4] - Demo_SetWind (#10, xc=1)
               duration: 1804.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[4] - Demo_EventCloudShadowOff (#11, xc=2)
               duration: 1804.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[5] - Demo_CameraAnim (#12, xc=0)
               duration: 270.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 2.0, FocalLengthEnd: 2.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E Enemy_SiteBoss_Sword_R[0] - Demo_VisibleOff (#35, xc=0)
               duration: 1085.0
               {IsWaitFinish: true}
[      0.0] E GameROMPlayer[11] - Demo_PlayASForTimeline (#43, xc=0)
               duration: 270.0
               {ASName: C01-Link-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[1] - Demo_FadeIn (#2, xc=0)
[    270.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#5, xc=0)
[    270.0] L GameRomCamera[5] - Demo_CameraAnim (#12, xc=0)
[    270.0] L GameROMPlayer[11] - Demo_PlayASForTimeline (#43, xc=0)
[    270.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 660.0
               {IsWaitFinish: true, angleY: -74.0}
[    270.0] E GameRomCamera[5] - Demo_CameraAnim (#13, xc=0)
               duration: 660.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 350.0, ApertureEnd: 350.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 0.7200000286102295, FocalLengthEnd: 0.7200000286102295,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    270.0] E GameROMPlayer[11] - Demo_PlayASForTimeline (#44, xc=0)
               duration: 660.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    300.0] E EventSystemActor[9] - Demo_OpenDungeonMessage (#32, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_3:Talk01'}
[    510.0] L EventSystemActor[9] - Demo_OpenDungeonMessage (#32, xc=0)
[    510.0] E EventSystemActor[9] - Demo_OpenDungeonMessage (#33, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_3:Talk02'}
[    720.0] L EventSystemActor[9] - Demo_OpenDungeonMessage (#33, xc=0)
[    720.0] E EventSystemActor[9] - Demo_OpenDungeonMessage (#34, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_3:Talk03'}
[    930.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#6, xc=0)
[    930.0] L GameRomCamera[5] - Demo_CameraAnim (#13, xc=0)
[    930.0] L EventSystemActor[9] - Demo_OpenDungeonMessage (#34, xc=0)
[    930.0] L GameROMPlayer[11] - Demo_PlayASForTimeline (#44, xc=0)
[    930.0] E GameRomCamera[5] - Demo_CameraAnim (#14, xc=0)
               duration: 155.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 80.0, ApertureEnd: 80.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: false, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 2.5,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C03-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    930.0] E GameRomCamera[5] - Demo_FocusDistSetting (#18, xc=1)
               duration: 30.0
               {FocusDistEnd: 3.299999952316284, FocusDistStart: 3.299999952316284, IsWaitFinish: true}
[    930.0] E GameROMPlayer[11] - Demo_PlayASForTimeline (#45, xc=0)
               duration: 350.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    952.0] E GameROMPlayer[11] - Demo_EmitEquipmentNoise (#47, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    953.0] L GameROMPlayer[11] - Demo_EmitEquipmentNoise (#47, xc=1)
[    960.0] L GameRomCamera[5] - Demo_FocusDistSetting (#18, xc=1)
[    960.0] E GameRomCamera[5] - Demo_FocusDistSetting (#19, xc=1)
               duration: 60.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 3.299999952316284, IsWaitFinish: true}
[    996.0] E GameROMPlayer[11] - Demo_EmitEquipmentNoise (#48, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    997.0] L GameROMPlayer[11] - Demo_EmitEquipmentNoise (#48, xc=1)
[   1020.0] L GameRomCamera[5] - Demo_FocusDistSetting (#19, xc=1)
[   1020.0] E GameRomCamera[5] - Demo_FocusDistSetting (#20, xc=1)
               duration: 65.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[   1020.0] E GameROMPlayer[11] - Demo_EmitEquipmentNoise (#49, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1021.0] L GameROMPlayer[11] - Demo_EmitEquipmentNoise (#49, xc=1)
[   1085.0] L GameRomCamera[5] - Demo_CameraAnim (#14, xc=0)
[   1085.0] L GameRomCamera[5] - Demo_FocusDistSetting (#20, xc=1)
[   1085.0] L Enemy_SiteBoss_Sword_R[0] - Demo_VisibleOff (#35, xc=0)
[   1085.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 105.0
               {IsWaitFinish: true, angleY: -100.0}
[   1085.0] E GameRomCamera[5] - Demo_CameraAnim (#15, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 300.0, ApertureEnd: 350.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 1.5, DOFEndFrame: 63.0, DOFStartFrame: 53.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.299999952316284, FocalLengthEnd: 3.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1085.0] E GameRomCamera[5] - Demo_FocusDistSetting (#21, xc=1)
               duration: 25.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[   1085.0] E Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#36, xc=0)
               duration: 105.0
               {ASName: Demo670_3-C04-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1085.0] E Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#39, xc=1)
               duration: 85.0
               {ASName: Demo670-C04-SiteBoss_Sword_BldOff-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1110.0] L GameRomCamera[5] - Demo_FocusDistSetting (#21, xc=1)
[   1110.0] E GameRomCamera[5] - Demo_FocusDistSetting (#22, xc=1)
               duration: 45.0
               {FocusDistEnd: 10.0, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[   1155.0] L GameRomCamera[5] - Demo_FocusDistSetting (#22, xc=1)
[   1155.0] E GameRomCamera[5] - Demo_FocusDistSetting (#23, xc=1)
               duration: 35.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[   1170.0] L Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#39, xc=1)
[   1170.0] E Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#40, xc=1)
               duration: 20.0
               {ASName: Demo670-C04-SiteBoss_Sword_BldOn-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1190.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#7, xc=0)
[   1190.0] L GameRomCamera[5] - Demo_CameraAnim (#15, xc=0)
[   1190.0] L GameRomCamera[5] - Demo_FocusDistSetting (#23, xc=1)
[   1190.0] L Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#36, xc=0)
[   1190.0] L Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#40, xc=1)
[   1190.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 90.0
               {IsWaitFinish: true, angleY: -154.0}
[   1190.0] E GameRomCamera[5] - Demo_CameraAnim (#16, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 1.0, DOFEndFrame: 65.0, DOFStartFrame: 55.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 3.299999952316284, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1190.0] E GameRomCamera[5] - Demo_FocusDistSetting (#24, xc=1)
               duration: 40.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   1190.0] E Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#37, xc=0)
               duration: 90.0
               {ASName: Demo670_3-C05-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1190.0] E Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#41, xc=1)
               duration: 40.0
               {ASName: Demo670-C05-SiteBoss_Sword_SldOff-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1230.0] L GameRomCamera[5] - Demo_FocusDistSetting (#24, xc=1)
[   1230.0] L Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#41, xc=1)
[   1230.0] E GameRomCamera[5] - Demo_FocusDistSetting (#25, xc=1)
               duration: 20.0
               {FocusDistEnd: 2.299999952316284, FocusDistStart: 1.0, IsWaitFinish: true}
[   1230.0] E Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#42, xc=1)
               duration: 20.0
               {ASName: Demo670-C05-SiteBoss_Sword_SldOn-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1250.0] L GameRomCamera[5] - Demo_FocusDistSetting (#25, xc=1)
[   1250.0] L Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#42, xc=1)
[   1250.0] E GameRomCamera[5] - Demo_FocusDistSetting (#26, xc=1)
               duration: 30.0
               {FocusDistEnd: 2.299999952316284, FocusDistStart: 2.299999952316284, IsWaitFinish: true}
[   1280.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#8, xc=0)
[   1280.0] L GameRomCamera[5] - Demo_CameraAnim (#16, xc=0)
[   1280.0] L GameRomCamera[5] - Demo_FocusDistSetting (#26, xc=1)
[   1280.0] L Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#37, xc=0)
[   1280.0] L GameROMPlayer[11] - Demo_PlayASForTimeline (#45, xc=0)
[   1280.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#9, xc=0)
               duration: 320.0
               {IsWaitFinish: true, angleY: -123.0}
[   1280.0] E GameRomCamera[5] - Demo_CameraAnim (#17, xc=0)
               duration: 320.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 350.0, ApertureEnd: 73.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 2.0, DOFEndFrame: 130.0, DOFStartFrame: 94.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 0.800000011920929, FocalLengthEnd: 3.299999952316284,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1280.0] E GameRomCamera[5] - Demo_FocusDistSetting (#27, xc=1)
               duration: 105.0
               {FocusDistEnd: 1.7999999523162842, FocusDistStart: 1.7999999523162842, IsWaitFinish: true}
[   1280.0] E Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#38, xc=0)
               duration: 320.0
               {ASName: Demo670_3-C06-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1280.0] E GameROMPlayer[11] - Demo_PlayASForTimeline (#46, xc=0)
               duration: 320.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1385.0] L GameRomCamera[5] - Demo_FocusDistSetting (#27, xc=1)
[   1385.0] E GameRomCamera[5] - Demo_FocusDistSetting (#28, xc=1)
               duration: 20.0
               {FocusDistEnd: 7.0, FocusDistStart: 1.7999999523162842, IsWaitFinish: true}
[   1394.0] E EventControllerRumble[6] - Demo_RumbleMiddle (#30, xc=0)
               duration: 160.0
               {Count: 5, IsWaitFinish: true}
[   1405.0] L GameRomCamera[5] - Demo_FocusDistSetting (#28, xc=1)
[   1405.0] E GameRomCamera[5] - Demo_FocusDistSetting (#29, xc=1)
               duration: 195.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[   1412.0] E EventSystemActor[8] - Demo_PlayUiActorName (#31, xc=0)
               duration: 180.0
               {ActorName: Enemy_SiteBoss_Sword_R, ActorType: 0, IsWaitFinish: true}
[   1554.0] L EventControllerRumble[6] - Demo_RumbleMiddle (#30, xc=0)
[   1592.0] L EventSystemActor[8] - Demo_PlayUiActorName (#31, xc=0)
[   1600.0] L RemainsClearTerminal - Demo_PlayASForTimeline (#0, xc=0)
[   1600.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#1, xc=0)
[   1600.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#9, xc=0)
[   1600.0] L GameRomCamera[5] - Demo_CameraAnim (#17, xc=0)
[   1600.0] L GameRomCamera[5] - Demo_FocusDistSetting (#29, xc=1)
[   1600.0] L Enemy_SiteBoss_Sword_R[0] - Demo_PlayASForTimeline (#38, xc=0)
[   1600.0] L GameROMPlayer[11] - Demo_PlayASForTimeline (#46, xc=0)
[   1804.0] L Obj_Sun_A_01[2] - Demo_SunMove (#3, xc=0)
[   1804.0] L Obj_Moon_A_01[3] - Demo_MoonMove (#4, xc=0)
[   1804.0] L WorldManagerControl[4] - Demo_SetWind (#10, xc=1)
[   1804.0] L WorldManagerControl[4] - Demo_EventCloudShadowOff (#11, xc=2)
