-------- Event timeline: Demo670_2 --------
actors: 12
clips: 41
oneshots: 0
cuts: 7
duration: 2024.0
subtimelines: ['Demo670_2_effect']
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
start time: 1080.0
x4: 0
params: (none)

Cut: C05
start time: 1200.0
x4: 0
params: (none)

Cut: C06
start time: 1410.0
x4: 0
params: (none)

Cut: C07
start time: 1500.0
x4: 0
params: (none)


===== Actors =====

Actor: Enemy_SiteBoss_Spear_R[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_VisibleOff']
params: {CreateMode: 3, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
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

Actor: EventSystemActor[7]
x36: 1
actions: ['Demo_PlayUiActorName', 'Demo_OpenDungeonMessage']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[8]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[10]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: DgnObj_RemainsClearTerminalBody_A_01[11]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 3.0, PosZ: -59.5, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[12]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 3.0, PosZ: -59.5, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Enemy_SiteBoss_Spear_R[0] - Demo_VisibleOff (#3, xc=1)
               duration: 1200.0
               {IsWaitFinish: true}
[      0.0] E Fader[1] - Demo_FadeIn (#4, xc=0)
               duration: 15.0
               {Color: 0, DispMode: Auto, Frame: 2, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[2] - Demo_SunMove (#5, xc=0)
               duration: 2145.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[3] - Demo_MoonMove (#6, xc=0)
               duration: 2145.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[4] - Demo_SetWind (#12, xc=1)
               duration: 2145.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[4] - Demo_EventCloudShadowOff (#13, xc=2)
               duration: 2145.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[5] - Demo_CameraAnim (#14, xc=0)
               duration: 270.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameROMPlayer[10] - Demo_PlayASForTimeline (#33, xc=0)
               duration: 270.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[11] - Demo_PlayASForTimeline (#39, xc=0)
               duration: 2145.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     15.0] L Fader[1] - Demo_FadeIn (#4, xc=0)
[     15.0] E RemainsClearTerminal[12] - Demo_PlayASForTimeline (#40, xc=0)
               duration: 2130.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    270.0] L GameRomCamera[5] - Demo_CameraAnim (#14, xc=0)
[    270.0] L GameROMPlayer[10] - Demo_PlayASForTimeline (#33, xc=0)
[    270.0] E GameRomCamera[5] - Demo_CameraAnim (#15, xc=0)
               duration: 660.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    270.0] E GameROMPlayer[10] - Demo_PlayASForTimeline (#34, xc=0)
               duration: 660.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    300.0] E EventSystemActor[7] - Demo_OpenDungeonMessage (#29, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_2:Talk01'}
[    510.0] L EventSystemActor[7] - Demo_OpenDungeonMessage (#29, xc=0)
[    510.0] E EventSystemActor[7] - Demo_OpenDungeonMessage (#30, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_2:Talk02'}
[    720.0] L EventSystemActor[7] - Demo_OpenDungeonMessage (#30, xc=0)
[    720.0] E EventSystemActor[7] - Demo_OpenDungeonMessage (#31, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_2:Talk03'}
[    930.0] L GameRomCamera[5] - Demo_CameraAnim (#15, xc=0)
[    930.0] L EventSystemActor[7] - Demo_OpenDungeonMessage (#31, xc=0)
[    930.0] L GameROMPlayer[10] - Demo_PlayASForTimeline (#34, xc=0)
[    930.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 150.0
               {IsWaitFinish: true, angleY: -100.0}
[    930.0] E GameRomCamera[5] - Demo_CameraAnim (#16, xc=0)
               duration: 150.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    930.0] E GameRomCamera[5] - Demo_FocusDistSetting (#21, xc=1)
               duration: 150.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    930.0] E GameROMPlayer[10] - Demo_PlayASForTimeline (#35, xc=0)
               duration: 150.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1030.0] E GameROMPlayer[10] - Demo_EmitEquipmentNoise (#37, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1031.0] L GameROMPlayer[10] - Demo_EmitEquipmentNoise (#37, xc=1)
[   1050.0] E GameROMPlayer[10] - Demo_EmitEquipmentNoise (#38, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1051.0] L GameROMPlayer[10] - Demo_EmitEquipmentNoise (#38, xc=1)
[   1080.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#7, xc=0)
[   1080.0] L GameRomCamera[5] - Demo_CameraAnim (#16, xc=0)
[   1080.0] L GameRomCamera[5] - Demo_FocusDistSetting (#21, xc=1)
[   1080.0] L GameROMPlayer[10] - Demo_PlayASForTimeline (#35, xc=0)
[   1080.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 120.0
               {IsWaitFinish: true, angleY: -100.0}
[   1080.0] E GameRomCamera[5] - Demo_CameraAnim (#17, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.200000047683716, FocalLengthEnd: 2.200000047683716,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C05-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1080.0] E GameRomCamera[5] - Demo_FocusDistSetting (#22, xc=1)
               duration: 120.0
               {FocusDistEnd: 5.5, FocusDistStart: 5.5, IsWaitFinish: true}
[   1200.0] L Enemy_SiteBoss_Spear_R[0] - Demo_VisibleOff (#3, xc=1)
[   1200.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#8, xc=0)
[   1200.0] L GameRomCamera[5] - Demo_CameraAnim (#17, xc=0)
[   1200.0] L GameRomCamera[5] - Demo_FocusDistSetting (#22, xc=1)
[   1200.0] E Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#0, xc=0)
               duration: 210.0
               {ASName: Demo670_2-C06-SiteBoss_Spear-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1200.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#9, xc=0)
               duration: 210.0
               {IsWaitFinish: true, angleY: -100.0}
[   1200.0] E GameRomCamera[5] - Demo_CameraAnim (#18, xc=0)
               duration: 210.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 70.0, ApertureEnd: 70.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7000000476837158, FocalLengthEnd: 1.7000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1200.0] E GameRomCamera[5] - Demo_FocusDistSetting (#23, xc=1)
               duration: 210.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[   1410.0] L Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#0, xc=0)
[   1410.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#9, xc=0)
[   1410.0] L GameRomCamera[5] - Demo_CameraAnim (#18, xc=0)
[   1410.0] L GameRomCamera[5] - Demo_FocusDistSetting (#23, xc=1)
[   1410.0] E Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#1, xc=0)
               duration: 90.0
               {ASName: Demo670_2-C07-SiteBoss_Spear-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1410.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#10, xc=0)
               duration: 90.0
               {IsWaitFinish: true, angleY: -100.0}
[   1410.0] E GameRomCamera[5] - Demo_CameraAnim (#19, xc=0)
               duration: 90.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 70.0, ApertureEnd: 70.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7000000476837158, FocalLengthEnd: 1.7000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1410.0] E GameRomCamera[5] - Demo_FocusDistSetting (#24, xc=1)
               duration: 90.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[   1500.0] L Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#1, xc=0)
[   1500.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#10, xc=0)
[   1500.0] L GameRomCamera[5] - Demo_CameraAnim (#19, xc=0)
[   1500.0] L GameRomCamera[5] - Demo_FocusDistSetting (#24, xc=1)
[   1500.0] E Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#2, xc=0)
               duration: 524.0
               {ASName: Demo670_2-C08-SiteBoss_Spear-A-0, ClothWarpMode: -2, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1500.0] E WorldManagerControl[4] - Demo_EventSetDirectionalYang (#11, xc=0)
               duration: 524.0
               {IsWaitFinish: true, angleY: -92.0}
[   1500.0] E GameRomCamera[5] - Demo_CameraAnim (#20, xc=0)
               duration: 524.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 70.0, ApertureEnd: 70.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 2.0, DOFEndFrame: 205.0, DOFStartFrame: 190.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7000000476837158, FocalLengthEnd: 1.7000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C08-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1500.0] E GameRomCamera[5] - Demo_FocusDistSetting (#25, xc=1)
               duration: 149.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[   1500.0] E GameROMPlayer[10] - Demo_PlayASForTimeline (#36, xc=0)
               duration: 524.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1649.0] L GameRomCamera[5] - Demo_FocusDistSetting (#25, xc=1)
[   1649.0] E GameRomCamera[5] - Demo_FocusDistSetting (#26, xc=1)
               duration: 46.0
               {FocusDistEnd: 13.0, FocusDistStart: 1.5, IsWaitFinish: true}
[   1674.0] E EventSystemActor[7] - Demo_PlayUiActorName (#32, xc=0)
               duration: 175.0
               {ActorName: Enemy_SiteBoss_Spear_R, ActorType: 0, IsWaitFinish: true}
[   1695.0] L GameRomCamera[5] - Demo_FocusDistSetting (#26, xc=1)
[   1695.0] E GameRomCamera[5] - Demo_FocusDistSetting (#27, xc=1)
               duration: 329.0
               {FocusDistEnd: 13.0, FocusDistStart: 13.0, IsWaitFinish: true}
[   1695.0] E EventControllerRumble[6] - Demo_RumbleMiddle (#28, xc=0)
               duration: 117.0
               {Count: 10, IsWaitFinish: true}
[   1812.0] L EventControllerRumble[6] - Demo_RumbleMiddle (#28, xc=0)
[   1849.0] L EventSystemActor[7] - Demo_PlayUiActorName (#32, xc=0)
[   2024.0] L Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#2, xc=0)
[   2024.0] L WorldManagerControl[4] - Demo_EventSetDirectionalYang (#11, xc=0)
[   2024.0] L GameRomCamera[5] - Demo_CameraAnim (#20, xc=0)
[   2024.0] L GameRomCamera[5] - Demo_FocusDistSetting (#27, xc=1)
[   2024.0] L GameROMPlayer[10] - Demo_PlayASForTimeline (#36, xc=0)
[   2145.0] L Obj_Sun_A_01[2] - Demo_SunMove (#5, xc=0)
[   2145.0] L Obj_Moon_A_01[3] - Demo_MoonMove (#6, xc=0)
[   2145.0] L WorldManagerControl[4] - Demo_SetWind (#12, xc=1)
[   2145.0] L WorldManagerControl[4] - Demo_EventCloudShadowOff (#13, xc=2)
[   2145.0] L DgnObj_RemainsClearTerminalBody_A_01[11] - Demo_PlayASForTimeline (#39, xc=0)
[   2145.0] L RemainsClearTerminal[12] - Demo_PlayASForTimeline (#40, xc=0)
