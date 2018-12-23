-------- Event timeline: Demo681_0 --------
actors: 14
clips: 116
oneshots: 0
cuts: 20
duration: 3090.0
subtimelines: ['Demo681_0_effect']
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
start time: 1500.0
x4: 0
params: (none)

Cut: C07
start time: 1620.0
x4: 0
params: (none)

Cut: C08
start time: 1735.0
x4: 0
params: (none)

Cut: C09
start time: 1855.0
x4: 0
params: (none)

Cut: C10
start time: 1975.0
x4: 0
params: (none)

Cut: C11
start time: 2035.0
x4: 0
params: (none)

Cut: C12
start time: 2115.0
x4: 0
params: (none)

Cut: C19
start time: 2250.0
x4: 0
params: (none)

Cut: C13
start time: 2370.0
x4: 0
params: (none)

Cut: C14
start time: 2460.0
x4: 0
params: (none)

Cut: C20
start time: 2535.0
x4: 0
params: (none)

Cut: C15
start time: 2610.0
x4: 0
params: (none)

Cut: C16
start time: 2685.0
x4: 0
params: (none)

Cut: C17
start time: 2815.0
x4: 0
params: (none)

Cut: C18
start time: 2935.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader
x36: 1
actions: ['Demo_FadeOut', 'Demo_FadeIn']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_FlagON', 'Demo_OpenDungeonMessage']
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

Actor: DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_DLC_IbutsuEx_BossDLTerminal_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: -0.3700000047683716, PosZ: 0.0, RotX: 0.0,
  RotY: 150.08900451660156, RotZ: 0.0}

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
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise', 'Demo_StopInAir']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Dm_GameROMMotorcycle[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E EventSystemActor[0] - Demo_FlagON (#8, xc=0)
               duration: 1.0
               {FlagName: FinalTrial_BossField_Demo, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#13, xc=0)
               duration: 3091.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#14, xc=0)
               duration: 3091.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=0)
               duration: 450.0
               {IsWaitFinish: true, angleY: -80.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetWeather (#21, xc=1)
               duration: 295.0
               {IsWaitFinish: true, WeatherType: 2}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#23, xc=2)
               duration: 3090.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 135.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
               duration: 135.0
               {FocusDistEnd: 28.0, FocusDistStart: 28.0, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#62, xc=2)
               duration: 1500.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[      0.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#64, xc=0)
               duration: 840.0
               {ASName: C01-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Priest_Boss_Giant[0] - Demo_PlayASForTimeline (#85, xc=0)
               duration: 450.0
               {ASName: Demo681_0-C01-Priest_Boss_Giant-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_StopInAir (#93, xc=0)
               duration: 450.0
               {IsWaitFinish: true, NoFixed: false}
[      1.0] L EventSystemActor[0] - Demo_FlagON (#8, xc=0)
[      5.0] E Fader - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[     35.0] L Fader - Demo_FadeIn (#0, xc=0)
[    135.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[    135.0] L GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
[    135.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 7.699999809265137, ApertureEnd: 7.699999809265137,
                 BgCheck: false, CameraName: DemoCamera, DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0,
                 DOFStartFrame: 0.0, DOFUse: true, EndFrame: -1.0, FocalLength: 18.0, FocalLengthEnd: 18.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    135.0] E GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
               duration: 120.0
               {FocusDistEnd: 18.0, FocusDistStart: 18.0, IsWaitFinish: true}
[    255.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[    255.0] L GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
[    255.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 195.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 4.0, ApertureEnd: 4.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 27.399999618530273, FocalLengthEnd: 27.399999618530273, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    255.0] E GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
               duration: 195.0
               {FocusDistEnd: 27.399999618530273, FocusDistStart: 27.399999618530273, IsWaitFinish: true}
[    295.0] L WorldManagerControl[0] - Demo_EventSetWeather (#21, xc=1)
[    295.0] E WorldManagerControl[0] - Demo_EventSetWeather (#22, xc=1)
               duration: 120.0
               {IsWaitFinish: true, WeatherType: 0}
[    415.0] L WorldManagerControl[0] - Demo_EventSetWeather (#22, xc=1)
[    450.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=0)
[    450.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[    450.0] L GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
[    450.0] L Priest_Boss_Giant[0] - Demo_PlayASForTimeline (#85, xc=0)
[    450.0] L GameROMPlayer[0] - Demo_StopInAir (#93, xc=0)
[    450.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 390.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 12.199999809265137, ApertureEnd: 12.199999809265137,
                 BgCheck: false, CameraName: DemoCamera, DOFBlurEnd: 1.2999999523162842, DOFBlurStart: 1.2999999523162842,
                 DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: true, EndFrame: -1.0, FocalLength: 20.0, FocalLengthEnd: 20.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    450.0] E GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
               duration: 390.0
               {FocusDistEnd: 20.0, FocusDistStart: 20.0, IsWaitFinish: true}
[    450.0] E Priest_Boss_Giant[0] - Demo_PlayASForTimeline (#86, xc=0)
               duration: 150.0
               {ASName: Demo681_0-C04-Priest_Boss_Giant-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    450.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#94, xc=0)
               duration: 390.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    600.0] L Priest_Boss_Giant[0] - Demo_PlayASForTimeline (#86, xc=0)
[    600.0] E Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#87, xc=0)
               duration: 240.0
               {ASName: Demo681_0-C04-Npc_DungeonPriestDlc2nd_Boss-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    735.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#102, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: MdlSpd, SteppingFoot: Left}
[    738.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#102, xc=1)
[    746.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#103, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: MdlSpd, SteppingFoot: Right}
[    749.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#103, xc=1)
[    757.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#104, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: MdlSpd, SteppingFoot: Left}
[    760.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#104, xc=1)
[    768.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#105, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: MdlSpd, SteppingFoot: Right}
[    771.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#105, xc=1)
[    783.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#106, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    786.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#106, xc=1)
[    801.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#107, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[    804.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#107, xc=1)
[    821.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#108, xc=1)
               duration: 3.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    824.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#108, xc=1)
[    840.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[    840.0] L GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
[    840.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#64, xc=0)
[    840.0] L Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#87, xc=0)
[    840.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#94, xc=0)
[    840.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 660.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    840.0] E Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#88, xc=0)
               duration: 660.0
               {ASName: C05-Npc_DungeonPriestDlc2nd_Boss-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    855.0] E EventSystemActor[0] - Demo_OpenDungeonMessage (#9, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo681_0:Demo681_0_Text000'}
[   1065.0] L EventSystemActor[0] - Demo_OpenDungeonMessage (#9, xc=0)
[   1065.0] E EventSystemActor[0] - Demo_OpenDungeonMessage (#10, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo681_0:Demo681_0_Text001'}
[   1275.0] L EventSystemActor[0] - Demo_OpenDungeonMessage (#10, xc=0)
[   1275.0] E EventSystemActor[0] - Demo_OpenDungeonMessage (#11, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo681_0:Demo681_0_Text002'}
[   1485.0] L EventSystemActor[0] - Demo_OpenDungeonMessage (#11, xc=0)
[   1500.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[   1500.0] L GameRomCamera[0] - Demo_OverwriteNear (#62, xc=2)
[   1500.0] L Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#88, xc=0)
[   1500.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 13.0, ApertureEnd: 13.0, BgCheck: false,
                 CameraName: DemoCamera, DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 68.0, FocalLengthEnd: 68.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 68.0, SceneName: C06-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1500.0] E GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
               duration: 120.0
               {FocusDistEnd: 68.0, FocusDistStart: 68.0, IsWaitFinish: true}
[   1500.0] E GameRomCamera[0] - Demo_OverwriteNear (#63, xc=2)
               duration: 120.0
               {IsWaitFinish: true, Near: 10.0}
[   1500.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#65, xc=0)
               duration: 120.0
               {ASName: C06-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1500.0] E Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#89, xc=0)
               duration: 120.0
               {ASName: C06-Npc_DungeonPriestDlc2nd_Boss-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1500.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#95, xc=0)
               duration: 120.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1620.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[   1620.0] L GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
[   1620.0] L GameRomCamera[0] - Demo_OverwriteNear (#63, xc=2)
[   1620.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#65, xc=0)
[   1620.0] L Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#89, xc=0)
[   1620.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#95, xc=0)
[   1620.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=0)
               duration: 115.0
               {IsWaitFinish: true, angleY: 111.0}
[   1620.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 115.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 2.0, ApertureEnd: 2.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 37.5, FocalLengthEnd: 37.5, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C07-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1620.0] E GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
               duration: 115.0
               {FocusDistEnd: 37.5, FocusDistStart: 37.5, IsWaitFinish: true}
[   1620.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#66, xc=0)
               duration: 115.0
               {ASName: C07-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1670.0] E EventControllerRumble[0] - Demo_RumbleLarge (#2, xc=0)
               duration: 20.0
               {Count: 1, IsWaitFinish: true}
[   1690.0] L EventControllerRumble[0] - Demo_RumbleLarge (#2, xc=0)
[   1690.0] E EventControllerRumble[0] - Demo_RumbleLarge (#3, xc=0)
               duration: 20.0
               {Count: 1, IsWaitFinish: true}
[   1710.0] L EventControllerRumble[0] - Demo_RumbleLarge (#3, xc=0)
[   1718.0] E EventControllerRumble[0] - Demo_RumbleLarge (#4, xc=0)
               duration: 40.0
               {Count: 2, IsWaitFinish: true}
[   1735.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=0)
[   1735.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[   1735.0] L GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
[   1735.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#66, xc=0)
[   1735.0] E GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 2.0, ApertureEnd: 2.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 97.0, FocalLengthEnd: 97.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C08-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1735.0] E GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
               duration: 120.0
               {FocusDistEnd: 97.0, FocusDistStart: 97.0, IsWaitFinish: true}
[   1735.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#67, xc=0)
               duration: 380.0
               {ASName: C08-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1758.0] L EventControllerRumble[0] - Demo_RumbleLarge (#4, xc=0)
[   1855.0] L GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
[   1855.0] L GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
[   1855.0] E GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 100.0, FocalLengthEnd: 100.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C09-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1855.0] E GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
               duration: 120.0
               {FocusDistEnd: 100.0, FocusDistStart: 100.0, IsWaitFinish: true}
[   1855.0] E Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#90, xc=0)
               duration: 120.0
               {ASName: C09-Npc_DungeonPriestDlc2nd_Boss-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1855.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#96, xc=0)
               duration: 120.0
               {ASName: C09-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1967.0] E EventControllerRumble[0] - Demo_RumbleLarge (#5, xc=0)
               duration: 20.0
               {Count: 1, IsWaitFinish: true}
[   1975.0] L GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
[   1975.0] L GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
[   1975.0] L Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#90, xc=0)
[   1975.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#96, xc=0)
[   1975.0] E GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
               duration: 60.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 5.5, ApertureEnd: 5.5, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 53.0, FocalLengthEnd: 53.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C10-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1975.0] E GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
               duration: 60.0
               {FocusDistEnd: 25.0, FocusDistStart: 25.0, IsWaitFinish: true}
[   1987.0] L EventControllerRumble[0] - Demo_RumbleLarge (#5, xc=0)
[   2035.0] L GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
[   2035.0] L GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
[   2035.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 80.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 100.0, FocalLengthEnd: 100.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C11-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2035.0] E GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
               duration: 80.0
               {FocusDistEnd: 100.0, FocusDistStart: 100.0, IsWaitFinish: true}
[   2035.0] E Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#91, xc=0)
               duration: 80.0
               {ASName: C11-Npc_DungeonPriestDlc2nd_Boss-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2035.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#97, xc=0)
               duration: 80.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2115.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[   2115.0] L GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
[   2115.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#67, xc=0)
[   2115.0] L Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#91, xc=0)
[   2115.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#97, xc=0)
[   2115.0] E GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
               duration: 135.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 2.0, ApertureEnd: 2.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 116.0, FocalLengthEnd: 116.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C12-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2115.0] E GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
               duration: 135.0
               {FocusDistEnd: 116.0, FocusDistStart: 116.0, IsWaitFinish: true}
[   2115.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#68, xc=0)
               duration: 135.0
               {ASName: C12-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2130.0] E EventControllerRumble[0] - Demo_RumbleLarge (#6, xc=0)
               duration: 20.0
               {Count: 1, IsWaitFinish: true}
[   2150.0] L EventControllerRumble[0] - Demo_RumbleLarge (#6, xc=0)
[   2250.0] L GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
[   2250.0] L GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
[   2250.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#68, xc=0)
[   2250.0] E GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.550000011920929, ApertureEnd: 0.550000011920929,
                 BgCheck: false, CameraName: DemoCamera, DOFBlurEnd: 2.819999933242798, DOFBlurStart: 2.819999933242798,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 215.0, FocalLengthEnd: 215.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C19-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2250.0] E GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
               duration: 120.0
               {FocusDistEnd: 215.0, FocusDistStart: 215.0, IsWaitFinish: true}
[   2250.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#69, xc=0)
               duration: 120.0
               {ASName: C19-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2250.0] E Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#92, xc=0)
               duration: 120.0
               {ASName: C19-Npc_DungeonPriestDlc2nd_Boss-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2250.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#98, xc=0)
               duration: 120.0
               {ASName: C19-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2370.0] L GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
[   2370.0] L GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
[   2370.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#69, xc=0)
[   2370.0] L Npc_DungeonPriestDlc2nd_Boss[0] - Demo_PlayASForTimeline (#92, xc=0)
[   2370.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#98, xc=0)
[   2370.0] E GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
               duration: 90.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 15.0, ApertureEnd: 15.0, BgCheck: false,
                 CameraName: DemoCamera, DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 17.799999237060547, FocalLengthEnd: 17.799999237060547,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C13-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2370.0] E GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
               duration: 90.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[   2370.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#70, xc=0)
               duration: 90.0
               {ASName: C13-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2370.0] E DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#77, xc=0)
               duration: 90.0
               {ASName: C13-DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2370.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#99, xc=0)
               duration: 90.0
               {ASName: C13-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2370.0] E Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#109, xc=0)
               duration: 90.0
               {ASName: Demo681_0-C13-Motorcycle_Demo-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2460.0] L GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
[   2460.0] L GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
[   2460.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#70, xc=0)
[   2460.0] L DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#77, xc=0)
[   2460.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#99, xc=0)
[   2460.0] L Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#109, xc=0)
[   2460.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=0)
               duration: 75.0
               {IsWaitFinish: true, angleY: -213.0}
[   2460.0] E GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
               duration: 75.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 9.600000381469727, ApertureEnd: 9.600000381469727,
                 BgCheck: false, CameraName: DemoCamera, DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 10.0, FocalLengthEnd: 10.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C14-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2460.0] E GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
               duration: 75.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[   2460.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#71, xc=0)
               duration: 75.0
               {ASName: C14-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2460.0] E DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#78, xc=0)
               duration: 75.0
               {ASName: C14-DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2460.0] E Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#110, xc=0)
               duration: 75.0
               {ASName: C14-Motorcycle_Demo-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2535.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=0)
[   2535.0] L GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
[   2535.0] L GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
[   2535.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#71, xc=0)
[   2535.0] L DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#78, xc=0)
[   2535.0] L Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#110, xc=0)
[   2535.0] E GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
               duration: 75.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 6.0, ApertureEnd: 6.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 1.909999966621399, DOFBlurStart: 1.909999966621399, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 9.0, FocalLengthEnd: 9.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C20-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2535.0] E GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
               duration: 75.0
               {FocusDistEnd: 9.0, FocusDistStart: 9.0, IsWaitFinish: true}
[   2535.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#72, xc=0)
               duration: 75.0
               {ASName: C20-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2535.0] E DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#79, xc=0)
               duration: 75.0
               {ASName: C20-DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2535.0] E Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#111, xc=0)
               duration: 75.0
               {ASName: C20-Motorcycle_Demo-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2610.0] L GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
[   2610.0] L GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
[   2610.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#72, xc=0)
[   2610.0] L DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#79, xc=0)
[   2610.0] L Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#111, xc=0)
[   2610.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=0)
               duration: 75.0
               {IsWaitFinish: true, angleY: -2.0}
[   2610.0] E GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
               duration: 75.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 10.0, ApertureEnd: 10.0, BgCheck: false,
                 CameraName: DemoCamera, DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 14.0, FocalLengthEnd: 14.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C15-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2610.0] E GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
               duration: 75.0
               {FocusDistEnd: 14.0, FocusDistStart: 14.0, IsWaitFinish: true}
[   2610.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#73, xc=0)
               duration: 75.0
               {ASName: C15-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2610.0] E DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#80, xc=0)
               duration: 75.0
               {ASName: C15-DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2610.0] E Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#112, xc=0)
               duration: 75.0
               {ASName: C15-Motorcycle_Demo-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2685.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=0)
[   2685.0] L GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
[   2685.0] L GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
[   2685.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#73, xc=0)
[   2685.0] L DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#80, xc=0)
[   2685.0] L Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#112, xc=0)
[   2685.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=0)
               duration: 130.0
               {IsWaitFinish: true, angleY: -139.0}
[   2685.0] E GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
               duration: 130.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 21.0, ApertureEnd: 21.0, BgCheck: false,
                 CameraName: DemoCamera, DOFBlurEnd: 2.799999952316284, DOFBlurStart: 2.0, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 33.0, FocalLengthEnd: 33.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C16-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2685.0] E GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
               duration: 130.0
               {FocusDistEnd: 12.600000381469727, FocusDistStart: 12.600000381469727, IsWaitFinish: true}
[   2685.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#74, xc=0)
               duration: 130.0
               {ASName: C16-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2685.0] E DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#81, xc=0)
               duration: 130.0
               {ASName: C16-DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2685.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#100, xc=0)
               duration: 130.0
               {ASName: C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2685.0] E Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#113, xc=0)
               duration: 130.0
               {ASName: C16-Motorcycle_Demo-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2815.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=0)
[   2815.0] L GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
[   2815.0] L GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
[   2815.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#74, xc=0)
[   2815.0] L DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#81, xc=0)
[   2815.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#100, xc=0)
[   2815.0] L Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#113, xc=0)
[   2815.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=0)
               duration: 276.0
               {IsWaitFinish: true, angleY: -20.0}
[   2815.0] E GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 8.0, ApertureEnd: 8.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 37.0, FocalLengthEnd: 37.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C17-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2815.0] E GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
               duration: 120.0
               {FocusDistEnd: 37.0, FocusDistStart: 37.0, IsWaitFinish: true}
[   2815.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#75, xc=0)
               duration: 120.0
               {ASName: C17-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2815.0] E DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#82, xc=0)
               duration: 120.0
               {ASName: C17-DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2815.0] E DgnObj_DLC_IbutsuEx_BossDLTerminal_A_01[0] - Demo_PlayASForTimeline (#84, xc=0)
               duration: 275.0
               {ASName: OffWait, ClothWarpMode: -2, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2815.0] E Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#114, xc=0)
               duration: 120.0
               {ASName: C17-Motorcycle_Demo-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2875.0] E EventControllerRumble[0] - Demo_RumbleLarge (#7, xc=0)
               duration: 60.0
               {Count: 2, IsWaitFinish: true}
[   2935.0] L EventControllerRumble[0] - Demo_RumbleLarge (#7, xc=0)
[   2935.0] L GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
[   2935.0] L GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
[   2935.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#75, xc=0)
[   2935.0] L DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#82, xc=0)
[   2935.0] L Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#114, xc=0)
[   2935.0] E GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
               duration: 156.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C18-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2935.0] E DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#76, xc=0)
               duration: 155.0
               {ASName: C18-DgnObj_DLC_IbutsuEx_BossBattleRoom_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2935.0] E DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#83, xc=0)
               duration: 155.0
               {ASName: C18-DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2935.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#101, xc=0)
               duration: 156.0
               {ASName: C18-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2935.0] E Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#115, xc=0)
               duration: 155.0
               {ASName: Demo681_0-C18-Motorcycle_Demo-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3060.0] E Fader - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   3089.0] E EventSystemActor[0] - Demo_FlagON (#12, xc=0)
               duration: 1.0
               {FlagName: FinalTrial_BossField_Demo2, IsWaitFinish: true}
[   3090.0] L Fader - Demo_FadeOut (#1, xc=0)
[   3090.0] L EventSystemActor[0] - Demo_FlagON (#12, xc=0)
[   3090.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#23, xc=2)
[   3090.0] L DgnObj_DLC_IbutsuEx_BossBattleRoom_Demo_A_01[0] - Demo_PlayASForTimeline (#76, xc=0)
[   3090.0] L DgnObj_DLC_IbutsuEx_BossBattleRoomTerminal_A_01[0] - Demo_PlayASForTimeline (#83, xc=0)
[   3090.0] L DgnObj_DLC_IbutsuEx_BossDLTerminal_A_01[0] - Demo_PlayASForTimeline (#84, xc=0)
[   3090.0] L Dm_GameROMMotorcycle[0] - Demo_PlayASForTimeline (#115, xc=0)
[   3091.0] L Obj_Sun_A_01[0] - Demo_SunMove (#13, xc=0)
[   3091.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#14, xc=0)
[   3091.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=0)
[   3091.0] L GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
[   3091.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#101, xc=0)
