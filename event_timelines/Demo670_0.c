-------- Event timeline: Demo670_0 --------
actors: 11
clips: 45
oneshots: 0
cuts: 8
duration: 1725.0
subtimelines: ['Demo670_0_effect']
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
start time: 1095.0
x4: 0
params: (none)

Cut: C05
start time: 1245.0
x4: 0
params: (none)

Cut: C06
start time: 1365.0
x4: 0
params: (none)

Cut: C07
start time: 1839.0
x4: 0
params: (none)

Cut: C08
start time: 2079.0
x4: 0
params: (none)


===== Actors =====

Actor: Enemy_SiteBoss_Lsword_R[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_VisibleOff']
params: {CreateMode: 3, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_OpenDungeonMessage', 'Demo_PlayUiActorName']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

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
x36: 2
actions: ['Demo_SetWind', 'Demo_EventCloudShadowOff']
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

Actor: GameROMPlayer[7]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_VisibleOff', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: DgnObj_RemainsClearTerminalBody_A_01[8]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 22.5, PosZ: 5.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[9]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 22.5, PosZ: 5.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_VisibleOff (#0, xc=0)
               duration: 270.0
               {IsWaitFinish: true}
[      0.0] E Fader[1] - Demo_FadeIn (#13, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[2] - Demo_SunMove (#14, xc=0)
               duration: 1725.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[3] - Demo_MoonMove (#15, xc=0)
               duration: 1734.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[4] - Demo_SetWind (#16, xc=0)
               duration: 1155.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.10000000149011612, WindDirY: 0.0, WindDirZ: -0.10999999940395355,
                 WindPower: 3.0}
[      0.0] E WorldManagerControl[4] - Demo_EventCloudShadowOff (#18, xc=1)
               duration: 1155.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[5] - Demo_CameraAnim (#20, xc=0)
               duration: 270.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#35, xc=0)
               duration: 270.0
               {ASName: Demo670_0-C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[8] - Demo_PlayASForTimeline (#43, xc=0)
               duration: 1725.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsClearTerminal[9] - Demo_PlayASForTimeline (#44, xc=0)
               duration: 1725.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[1] - Demo_FadeIn (#13, xc=0)
[    270.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_VisibleOff (#0, xc=0)
[    270.0] L GameRomCamera[5] - Demo_CameraAnim (#20, xc=0)
[    270.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#35, xc=0)
[    270.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_VisibleOff (#1, xc=0)
               duration: 660.0
               {IsWaitFinish: true}
[    270.0] E GameRomCamera[5] - Demo_CameraAnim (#21, xc=0)
               duration: 660.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    270.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#36, xc=0)
               duration: 660.0
               {ASName: Demo670_0-C01-Link-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    293.0] E EventSystemActor[0] - Demo_OpenDungeonMessage (#9, xc=0)
               duration: 208.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_0:Talk01'}
[    501.0] L EventSystemActor[0] - Demo_OpenDungeonMessage (#9, xc=0)
[    501.0] E EventSystemActor[0] - Demo_OpenDungeonMessage (#10, xc=0)
               duration: 208.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_0:Talk02'}
[    709.0] L EventSystemActor[0] - Demo_OpenDungeonMessage (#10, xc=0)
[    709.0] E EventSystemActor[0] - Demo_OpenDungeonMessage (#11, xc=0)
               duration: 208.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_0:Talk03'}
[    917.0] L EventSystemActor[0] - Demo_OpenDungeonMessage (#11, xc=0)
[    930.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_VisibleOff (#1, xc=0)
[    930.0] L GameRomCamera[5] - Demo_CameraAnim (#21, xc=0)
[    930.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#36, xc=0)
[    930.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_VisibleOff (#2, xc=0)
               duration: 165.0
               {IsWaitFinish: true}
[    930.0] E GameRomCamera[5] - Demo_CameraAnim (#22, xc=0)
               duration: 165.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    930.0] E GameRomCamera[5] - Demo_FocusDistSetting (#26, xc=1)
               duration: 165.0
               {FocusDistEnd: 1.2000000476837158, FocusDistStart: 1.2000000476837158, IsWaitFinish: true}
[    930.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#37, xc=0)
               duration: 165.0
               {ASName: Demo670_0-C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    986.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#41, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    987.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#41, xc=1)
[   1013.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#42, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1014.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#42, xc=1)
[   1095.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_VisibleOff (#2, xc=0)
[   1095.0] L GameRomCamera[5] - Demo_CameraAnim (#22, xc=0)
[   1095.0] L GameRomCamera[5] - Demo_FocusDistSetting (#26, xc=1)
[   1095.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#37, xc=0)
[   1095.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#3, xc=0)
               duration: 150.0
               {ASName: Demo670_0-C05-SiteBoss_Lsword-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1095.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#6, xc=1)
               duration: 75.0
               {ASName: Demo670_0-C04-SiteBoss_Lsword_Off-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1095.0] E GameRomCamera[5] - Demo_CameraAnim (#23, xc=0)
               duration: 150.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1095.0] E GameRomCamera[5] - Demo_FocusDistSetting (#27, xc=1)
               duration: 40.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[   1095.0] E GameROMPlayer[7] - Demo_VisibleOff (#38, xc=0)
               duration: 150.0
               {IsWaitFinish: true}
[   1135.0] L GameRomCamera[5] - Demo_FocusDistSetting (#27, xc=1)
[   1135.0] E GameRomCamera[5] - Demo_FocusDistSetting (#28, xc=1)
               duration: 10.0
               {FocusDistEnd: 6.0, FocusDistStart: 2.5, IsWaitFinish: true}
[   1145.0] L GameRomCamera[5] - Demo_FocusDistSetting (#28, xc=1)
[   1145.0] E GameRomCamera[5] - Demo_FocusDistSetting (#29, xc=1)
               duration: 100.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[   1155.0] L WorldManagerControl[4] - Demo_SetWind (#16, xc=0)
[   1155.0] L WorldManagerControl[4] - Demo_EventCloudShadowOff (#18, xc=1)
[   1170.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#6, xc=1)
[   1170.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#7, xc=1)
               duration: 10.0
               {ASName: Demo670_0-C04-SiteBoss_Lsword_On-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1180.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#7, xc=1)
[   1245.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#3, xc=0)
[   1245.0] L GameRomCamera[5] - Demo_CameraAnim (#23, xc=0)
[   1245.0] L GameRomCamera[5] - Demo_FocusDistSetting (#29, xc=1)
[   1245.0] L GameROMPlayer[7] - Demo_VisibleOff (#38, xc=0)
[   1245.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#4, xc=0)
               duration: 120.0
               {ASName: Demo670_0-C06-SiteBoss_Lsword-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1245.0] E GameRomCamera[5] - Demo_CameraAnim (#24, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1245.0] E GameRomCamera[5] - Demo_FocusDistSetting (#30, xc=1)
               duration: 120.0
               {FocusDistEnd: 1.600000023841858, FocusDistStart: 1.600000023841858, IsWaitFinish: true}
[   1245.0] E GameROMPlayer[7] - Demo_VisibleOff (#39, xc=0)
               duration: 120.0
               {IsWaitFinish: true}
[   1365.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#4, xc=0)
[   1365.0] L GameRomCamera[5] - Demo_CameraAnim (#24, xc=0)
[   1365.0] L GameRomCamera[5] - Demo_FocusDistSetting (#30, xc=1)
[   1365.0] L GameROMPlayer[7] - Demo_VisibleOff (#39, xc=0)
[   1365.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#5, xc=0)
               duration: 360.0
               {ASName: Demo670_0-C07-SiteBoss_Lsword-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1365.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#8, xc=1)
               duration: 360.0
               {ASName: Wait_Battle, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: true, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: 2}
[   1365.0] E WorldManagerControl[4] - Demo_SetWind (#17, xc=0)
               duration: 965.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.10000000149011612, WindDirY: 0.0, WindDirZ: -0.10999999940395355,
                 WindPower: 3.0}
[   1365.0] E WorldManagerControl[4] - Demo_EventCloudShadowOff (#19, xc=1)
               duration: 360.0
               {IsWaitFinish: true}
[   1365.0] E GameRomCamera[5] - Demo_CameraAnim (#25, xc=0)
               duration: 360.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C07-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1365.0] E GameRomCamera[5] - Demo_FocusDistSetting (#31, xc=1)
               duration: 179.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[   1365.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#40, xc=0)
               duration: 360.0
               {ASName: Demo670_0-C07-Link-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1544.0] L GameRomCamera[5] - Demo_FocusDistSetting (#31, xc=1)
[   1544.0] E EventSystemActor[0] - Demo_PlayUiActorName (#12, xc=0)
               duration: 181.0
               {ActorName: Enemy_SiteBoss_Lsword_R, ActorType: 0, IsWaitFinish: true}
[   1544.0] E GameRomCamera[5] - Demo_FocusDistSetting (#32, xc=1)
               duration: 10.0
               {FocusDistEnd: 7.0, FocusDistStart: 4.5, IsWaitFinish: true}
[   1544.0] E EventControllerRumble[6] - Demo_RumbleMiddle (#34, xc=0)
               duration: 100.0
               {Count: 10, IsWaitFinish: true}
[   1554.0] L GameRomCamera[5] - Demo_FocusDistSetting (#32, xc=1)
[   1554.0] E GameRomCamera[5] - Demo_FocusDistSetting (#33, xc=1)
               duration: 171.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[   1644.0] L EventControllerRumble[6] - Demo_RumbleMiddle (#34, xc=0)
[   1725.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#5, xc=0)
[   1725.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#8, xc=1)
[   1725.0] L EventSystemActor[0] - Demo_PlayUiActorName (#12, xc=0)
[   1725.0] L Obj_Sun_A_01[2] - Demo_SunMove (#14, xc=0)
[   1725.0] L WorldManagerControl[4] - Demo_EventCloudShadowOff (#19, xc=1)
[   1725.0] L GameRomCamera[5] - Demo_CameraAnim (#25, xc=0)
[   1725.0] L GameRomCamera[5] - Demo_FocusDistSetting (#33, xc=1)
[   1725.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#40, xc=0)
[   1725.0] L DgnObj_RemainsClearTerminalBody_A_01[8] - Demo_PlayASForTimeline (#43, xc=0)
[   1725.0] L RemainsClearTerminal[9] - Demo_PlayASForTimeline (#44, xc=0)
[   1734.0] L Obj_Moon_A_01[3] - Demo_MoonMove (#15, xc=0)
[   2330.0] L WorldManagerControl[4] - Demo_SetWind (#17, xc=0)
