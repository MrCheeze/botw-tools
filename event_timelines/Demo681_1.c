-------- Event timeline: Demo681_1 --------
actors: 10
clips: 42
oneshots: 0
cuts: 6
duration: 1560.0
subtimelines: ['Demo681_1_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 135.0
x4: 0
params: (none)

Cut: C03
start time: 255.0
x4: 0
params: (none)

Cut: C04
start time: 450.0
x4: 0
params: (none)

Cut: C05
start time: 840.0
x4: 0
params: (none)

Cut: C06
start time: 1320.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn', 'Demo_FadeOut']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_FlagON', 'Demo_OpenDungeonMessage', 'Demo_PlayerWarpEffectSet']
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
actions: ['Demo_EventSetDirectionalYang', 'Demo_EventCloudShadowOff', 'Demo_EventSetWeather']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting', 'Demo_OverwriteNear']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 1, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Priest_Boss_Giant[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_DungeonPriestDlc2nd_Boss[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill', 'Demo_EmitEquipmentNoise', 'Demo_StopInAir']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}


===== Timeline =====

[      0.0] E EventSystemActor[0] - Demo_FlagON (#2, xc=0)
               duration: 1.0
               {FlagName: FinalTrial_BossField_Demo, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#6, xc=0)
               duration: 1650.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#7, xc=0)
               duration: 1650.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 450.0
               {IsWaitFinish: true, angleY: -80.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetWeather (#9, xc=1)
               duration: 295.0
               {IsWaitFinish: true, WeatherType: 2}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#11, xc=2)
               duration: 1650.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
               duration: 135.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#18, xc=1)
               duration: 135.0
               {FocusDistEnd: 28.0, FocusDistStart: 28.0, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#23, xc=2)
               duration: 1650.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[      0.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#24, xc=0)
               duration: 1650.0
               {ASName: C01-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Priest_Boss_Giant[0] - Demo_PlayASForTimeline (#25, xc=0)
               duration: 450.0
               {ASName: Demo681_1-C01-Priest_Boss_Giant-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_StopInAir (#29, xc=0)
               duration: 450.0
               {IsWaitFinish: true, NoFixed: false}
[      1.0] L EventSystemActor[0] - Demo_FlagON (#2, xc=0)
[      5.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 0, DispMode: NoLogo, Frame: 0, IsWaitFinish: true}
[     35.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    135.0] L GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
[    135.0] L GameRomCamera[0] - Demo_FocusDistSetting (#18, xc=1)
[    135.0] E GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 7.699999809265137, ApertureEnd: 7.699999809265137,
                 BgCheck: false, CameraName: DemoCamera, DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0,
                 DOFStartFrame: 0.0, DOFUse: true, EndFrame: -1.0, FocalLength: 18.0, FocalLengthEnd: 18.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    135.0] E GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=1)
               duration: 120.0
               {FocusDistEnd: 18.0, FocusDistStart: 18.0, IsWaitFinish: true}
[    255.0] L GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
[    255.0] L GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=1)
[    255.0] E GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
               duration: 195.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 4.0, ApertureEnd: 4.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 27.399999618530273, FocalLengthEnd: 27.399999618530273, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    255.0] E GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=1)
               duration: 195.0
               {FocusDistEnd: 27.399999618530273, FocusDistStart: 27.399999618530273, IsWaitFinish: true}
[    295.0] L WorldManagerControl[0] - Demo_EventSetWeather (#9, xc=1)
[    295.0] E WorldManagerControl[0] - Demo_EventSetWeather (#10, xc=1)
               duration: 120.0
               {IsWaitFinish: true, WeatherType: 0}
[    415.0] L WorldManagerControl[0] - Demo_EventSetWeather (#10, xc=1)
[    450.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
[    450.0] L GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
[    450.0] L GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=1)
[    450.0] L Priest_Boss_Giant[0] - Demo_PlayASForTimeline (#25, xc=0)
[    450.0] L GameROMPlayer[0] - Demo_StopInAir (#29, xc=0)
[    450.0] E GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
               duration: 390.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 12.199999809265137, ApertureEnd: 12.199999809265137,
                 BgCheck: false, CameraName: DemoCamera, DOFBlurEnd: 1.2999999523162842, DOFBlurStart: 1.2999999523162842,
                 DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: true, EndFrame: -1.0, FocalLength: 20.0, FocalLengthEnd: 20.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    450.0] E GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=1)
               duration: 390.0
               {FocusDistEnd: 20.0, FocusDistStart: 20.0, IsWaitFinish: true}
[    450.0] E Priest_Boss_Giant[0] - Demo_PlayASForTimeline (#26, xc=0)
               duration: 150.0
               {ASName: Demo681_1-C04-Priest_Boss_Giant-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    450.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#30, xc=0)
               duration: 390.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    600.0] L Priest_Boss_Giant[0] - Demo_PlayASForTimeline (#26, xc=0)
[    600.0] E Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#27, xc=0)
               duration: 240.0
               {ASName: Demo681_1-C04-Npc_DungeonPriestDlc2nd_Boss-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    735.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#33, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: MdlSpd, SteppingFoot: Left}
[    738.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#33, xc=1)
[    746.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#34, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: MdlSpd, SteppingFoot: Right}
[    749.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#34, xc=1)
[    757.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#35, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: MdlSpd, SteppingFoot: Left}
[    760.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#35, xc=1)
[    768.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#36, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: MdlSpd, SteppingFoot: Right}
[    771.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#36, xc=1)
[    783.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#37, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    786.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#37, xc=1)
[    801.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#38, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[    804.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#38, xc=1)
[    821.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#39, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    824.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#39, xc=1)
[    840.0] L GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
[    840.0] L GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=1)
[    840.0] L Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#27, xc=0)
[    840.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#30, xc=0)
[    840.0] E GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
               duration: 480.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    840.0] E Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#28, xc=0)
               duration: 480.0
               {ASName: C05-Npc_DungeonPriestDlc2nd_Boss-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    855.0] E EventSystemActor[0] - Demo_OpenDungeonMessage (#3, xc=0)
               duration: 420.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo681_1:Demo681_1_Text000'}
[   1275.0] L EventSystemActor[0] - Demo_OpenDungeonMessage (#3, xc=0)
[   1305.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#31, xc=0)
               duration: 15.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1320.0] L GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
[   1320.0] L Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#28, xc=0)
[   1320.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#31, xc=0)
[   1320.0] E GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
               duration: 330.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1320.0] E GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
               duration: 330.0
               {FocusDistEnd: 5.599999904632568, FocusDistStart: 5.599999904632568, IsWaitFinish: true}
[   1320.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#32, xc=0)
               duration: 330.0
               {ASName: C06-Link-A-0, ClothWarpMode: -1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1360.0] E EventSystemActor[0] - Demo_PlayerWarpEffectSet (#4, xc=0)
               duration: 150.0
               {ChangeType: 1, IsWaitFinish: true, SetFrame: 150.0}
[   1360.0] E GameROMPlayer[0] - Demo_XLinkEventCreate (#40, xc=1)
               duration: 150.0
               {ELinkKey: Demo005_0_warp, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1510.0] L EventSystemActor[0] - Demo_PlayerWarpEffectSet (#4, xc=0)
[   1510.0] L GameROMPlayer[0] - Demo_XLinkEventCreate (#40, xc=1)
[   1520.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 0, DispMode: NoLogo, Frame: 0, IsWaitFinish: true}
[   1549.0] E EventSystemActor[0] - Demo_FlagON (#5, xc=0)
               duration: 10.0
               {FlagName: FinalTrial_BossField_Demo2, IsWaitFinish: true}
[   1549.0] E GameROMPlayer[0] - Demo_XLinkEventKill (#41, xc=1)
               duration: 54.0
               {ELinkKey: Demo005_0_warp, IsWaitFinish: true, SLinkKey: ''}
[   1550.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1559.0] L EventSystemActor[0] - Demo_FlagON (#5, xc=0)
[   1603.0] L GameROMPlayer[0] - Demo_XLinkEventKill (#41, xc=1)
[   1650.0] L Obj_Sun_A_01[0] - Demo_SunMove (#6, xc=0)
[   1650.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#7, xc=0)
[   1650.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#11, xc=2)
[   1650.0] L GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
[   1650.0] L GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
[   1650.0] L GameRomCamera[0] - Demo_OverwriteNear (#23, xc=2)
[   1650.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#24, xc=0)
[   1650.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#32, xc=0)
