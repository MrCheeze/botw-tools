-------- Event timeline: Demo670_1 --------
actors: 12
clips: 42
oneshots: 0
cuts: 8
duration: 1833.0
subtimelines: ['Demo670_1_effect']
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
start time: 1035.0
x4: 0
params: (none)

Cut: C05
start time: 1265.0
x4: 0
params: (none)

Cut: C06
start time: 1331.0
x4: 0
params: (none)

Cut: C07
start time: 1386.0
x4: 0
params: (none)

Cut: C08
start time: 1491.0
x4: 0
params: (none)


===== Actors =====

Actor: EventSystemActor[13]
x36: 1
actions: ['Demo_PlayUiActorName', 'Demo_OpenDungeonMessage']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_RemainsClearTerminalBody_A_01
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 17.75, PosZ: 22.0, RotX: 0.0, RotY: 180.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 17.75, PosZ: 22.0, RotX: 0.0, RotY: 180.0,
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
actions: ['Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_EventSetCloudShadowMove']
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

Actor: DemoVoiceEmitTag[7]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Enemy_SiteBoss_Bow_R[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 3, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[12]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}


===== Timeline =====

[      0.0] E DgnObj_RemainsClearTerminalBody_A_01 - Demo_PlayASForTimeline (#4, xc=0)
               duration: 1833.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#5, xc=0)
               duration: 1833.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Fader[1] - Demo_FadeIn (#6, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 2, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[2] - Demo_SunMove (#7, xc=0)
               duration: 1833.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[3] - Demo_MoonMove (#8, xc=0)
               duration: 1833.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[4] - Demo_SetWind (#9, xc=0)
               duration: 1833.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.009999999776482582, WindDirY: 0.0, WindDirZ: -0.11999999731779099,
                 WindPower: 10.0}
[      0.0] E GameRomCamera[5] - Demo_CameraAnim (#12, xc=0)
               duration: 270.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 0,
                 TargetActorPosReferenceMode: 0, UniqueName: ''}
[      0.0] E GameROMPlayer[12] - Demo_PlayASForTimeline (#33, xc=0)
               duration: 270.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: -1.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[1] - Demo_FadeIn (#6, xc=0)
[    270.0] L GameRomCamera[5] - Demo_CameraAnim (#12, xc=0)
[    270.0] L GameROMPlayer[12] - Demo_PlayASForTimeline (#33, xc=0)
[    270.0] E GameRomCamera[5] - Demo_CameraAnim (#13, xc=0)
               duration: 660.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 0,
                 TargetActorPosReferenceMode: 0, UniqueName: ''}
[    270.0] E GameROMPlayer[12] - Demo_PlayASForTimeline (#34, xc=0)
               duration: 660.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: -1.0, SeqBank: 0, TargetIndex: -1}
[    300.0] E EventSystemActor[13] - Demo_OpenDungeonMessage (#0, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_1:Talk01'}
[    510.0] L EventSystemActor[13] - Demo_OpenDungeonMessage (#0, xc=0)
[    510.0] E EventSystemActor[13] - Demo_OpenDungeonMessage (#1, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_1:Talk02'}
[    720.0] L EventSystemActor[13] - Demo_OpenDungeonMessage (#1, xc=0)
[    720.0] E EventSystemActor[13] - Demo_OpenDungeonMessage (#2, xc=0)
               duration: 210.0
               {IsWaitFinish: true, MessageId: 'DemoMsg/Demo670_1:Talk03'}
[    752.0] E GameROMPlayer[12] - Demo_EmitEquipmentNoise (#38, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    753.0] L GameROMPlayer[12] - Demo_EmitEquipmentNoise (#38, xc=1)
[    930.0] L EventSystemActor[13] - Demo_OpenDungeonMessage (#2, xc=0)
[    930.0] L GameRomCamera[5] - Demo_CameraAnim (#13, xc=0)
[    930.0] L GameROMPlayer[12] - Demo_PlayASForTimeline (#34, xc=0)
[    930.0] E WorldManagerControl[4] - Demo_EventSetCloudShadowMove (#10, xc=1)
               duration: 105.0
               {IsWaitFinish: true, setSpeed_x: 0.0010000000474974513, setSpeed_y: 0.0}
[    930.0] E GameRomCamera[5] - Demo_CameraAnim (#14, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.4000000953674316, FocalLengthEnd: 2.4000000953674316,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C03-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 0, TargetActorPosReferenceMode: 0,
                 UniqueName: ''}
[    930.0] E GameRomCamera[5] - Demo_FocusDistSetting (#20, xc=1)
               duration: 105.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    930.0] E GameROMPlayer[12] - Demo_PlayASForTimeline (#35, xc=0)
               duration: 105.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    963.0] E GameROMPlayer[12] - Demo_EmitEquipmentNoise (#39, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    964.0] L GameROMPlayer[12] - Demo_EmitEquipmentNoise (#39, xc=1)
[    970.0] E GameROMPlayer[12] - Demo_EmitEquipmentNoise (#40, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    971.0] L GameROMPlayer[12] - Demo_EmitEquipmentNoise (#40, xc=1)
[    990.0] E GameROMPlayer[12] - Demo_EmitEquipmentNoise (#41, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    991.0] L GameROMPlayer[12] - Demo_EmitEquipmentNoise (#41, xc=1)
[   1035.0] L WorldManagerControl[4] - Demo_EventSetCloudShadowMove (#10, xc=1)
[   1035.0] L GameRomCamera[5] - Demo_CameraAnim (#14, xc=0)
[   1035.0] L GameRomCamera[5] - Demo_FocusDistSetting (#20, xc=1)
[   1035.0] L GameROMPlayer[12] - Demo_PlayASForTimeline (#35, xc=0)
[   1035.0] E WorldManagerControl[4] - Demo_EventCloudShadowOff (#11, xc=1)
               duration: 456.0
               {IsWaitFinish: true}
[   1035.0] E GameRomCamera[5] - Demo_CameraAnim (#15, xc=0)
               duration: 230.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 13.600000381469727, ApertureEnd: 13.600000381469727,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 20.0, FocalLengthEnd: 20.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 0, TargetActorPosReferenceMode: 0,
                 UniqueName: ''}
[   1035.0] E GameRomCamera[5] - Demo_FocusDistSetting (#21, xc=1)
               duration: 40.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[   1035.0] E GameROMPlayer[12] - Demo_PlayASForTimeline (#36, xc=0)
               duration: 230.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1075.0] L GameRomCamera[5] - Demo_FocusDistSetting (#21, xc=1)
[   1075.0] E GameRomCamera[5] - Demo_FocusDistSetting (#22, xc=1)
               duration: 40.0
               {FocusDistEnd: 15.0, FocusDistStart: 10.0, IsWaitFinish: true}
[   1115.0] L GameRomCamera[5] - Demo_FocusDistSetting (#22, xc=1)
[   1115.0] E GameRomCamera[5] - Demo_FocusDistSetting (#23, xc=1)
               duration: 150.0
               {FocusDistEnd: 15.0, FocusDistStart: 15.0, IsWaitFinish: true}
[   1265.0] L GameRomCamera[5] - Demo_CameraAnim (#15, xc=0)
[   1265.0] L GameRomCamera[5] - Demo_FocusDistSetting (#23, xc=1)
[   1265.0] L GameROMPlayer[12] - Demo_PlayASForTimeline (#36, xc=0)
[   1265.0] E GameRomCamera[5] - Demo_CameraAnim (#16, xc=0)
               duration: 66.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 12.0, ApertureEnd: 12.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.8999999761581421, DOFBlurStart: 0.8999999761581421, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 6.400000095367432, FocalLengthEnd: 6.400000095367432,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C05-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 0, TargetActorPosReferenceMode: 0,
                 UniqueName: ''}
[   1265.0] E GameRomCamera[5] - Demo_FocusDistSetting (#24, xc=1)
               duration: 66.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[   1265.0] E Enemy_SiteBoss_Bow_R[0] - Demo_PlayASForTimeline (#29, xc=0)
               duration: 66.0
               {ASName: Demo670_1-C05-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1331.0] L GameRomCamera[5] - Demo_CameraAnim (#16, xc=0)
[   1331.0] L GameRomCamera[5] - Demo_FocusDistSetting (#24, xc=1)
[   1331.0] L Enemy_SiteBoss_Bow_R[0] - Demo_PlayASForTimeline (#29, xc=0)
[   1331.0] E GameRomCamera[5] - Demo_CameraAnim (#17, xc=0)
               duration: 55.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 23.0, ApertureEnd: 23.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 6.5, FocalLengthEnd: 6.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C06-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 0, TargetActorPosReferenceMode: 0, UniqueName: ''}
[   1331.0] E GameRomCamera[5] - Demo_FocusDistSetting (#25, xc=1)
               duration: 55.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[   1331.0] E Enemy_SiteBoss_Bow_R[0] - Demo_PlayASForTimeline (#30, xc=0)
               duration: 55.0
               {ASName: Demo670_1-C06-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1386.0] L GameRomCamera[5] - Demo_CameraAnim (#17, xc=0)
[   1386.0] L GameRomCamera[5] - Demo_FocusDistSetting (#25, xc=1)
[   1386.0] L Enemy_SiteBoss_Bow_R[0] - Demo_PlayASForTimeline (#30, xc=0)
[   1386.0] E GameRomCamera[5] - Demo_CameraAnim (#18, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 11.0, ApertureEnd: 11.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.699999809265137, FocalLengthEnd: 5.699999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 0, TargetActorPosReferenceMode: 0,
                 UniqueName: ''}
[   1386.0] E GameRomCamera[5] - Demo_FocusDistSetting (#26, xc=1)
               duration: 105.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   1386.0] E Enemy_SiteBoss_Bow_R[0] - Demo_PlayASForTimeline (#31, xc=0)
               duration: 105.0
               {ASName: Demo670_1-C07-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1491.0] L WorldManagerControl[4] - Demo_EventCloudShadowOff (#11, xc=1)
[   1491.0] L GameRomCamera[5] - Demo_CameraAnim (#18, xc=0)
[   1491.0] L GameRomCamera[5] - Demo_FocusDistSetting (#26, xc=1)
[   1491.0] L Enemy_SiteBoss_Bow_R[0] - Demo_PlayASForTimeline (#31, xc=0)
[   1491.0] E GameRomCamera[5] - Demo_CameraAnim (#19, xc=0)
               duration: 342.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C08-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1491.0] E GameRomCamera[5] - Demo_FocusDistSetting (#27, xc=1)
               duration: 342.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[   1491.0] E Enemy_SiteBoss_Bow_R[0] - Demo_PlayASForTimeline (#32, xc=0)
               duration: 342.0
               {ASName: Demo670_1-C08-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1491.0] E GameROMPlayer[12] - Demo_PlayASForTimeline (#37, xc=0)
               duration: 342.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1623.0] E EventControllerRumble[6] - Demo_RumbleMiddle (#28, xc=0)
               duration: 82.0
               {Count: 8, IsWaitFinish: true}
[   1653.0] E EventSystemActor[13] - Demo_PlayUiActorName (#3, xc=0)
               duration: 180.0
               {ActorName: Enemy_SiteBoss_Bow_R, ActorType: 0, IsWaitFinish: true}
[   1705.0] L EventControllerRumble[6] - Demo_RumbleMiddle (#28, xc=0)
[   1833.0] L EventSystemActor[13] - Demo_PlayUiActorName (#3, xc=0)
[   1833.0] L DgnObj_RemainsClearTerminalBody_A_01 - Demo_PlayASForTimeline (#4, xc=0)
[   1833.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#5, xc=0)
[   1833.0] L Obj_Sun_A_01[2] - Demo_SunMove (#7, xc=0)
[   1833.0] L Obj_Moon_A_01[3] - Demo_MoonMove (#8, xc=0)
[   1833.0] L WorldManagerControl[4] - Demo_SetWind (#9, xc=0)
[   1833.0] L GameRomCamera[5] - Demo_CameraAnim (#19, xc=0)
[   1833.0] L GameRomCamera[5] - Demo_FocusDistSetting (#27, xc=1)
[   1833.0] L Enemy_SiteBoss_Bow_R[0] - Demo_PlayASForTimeline (#32, xc=0)
[   1833.0] L GameROMPlayer[12] - Demo_PlayASForTimeline (#37, xc=0)
