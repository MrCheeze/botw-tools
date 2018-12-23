-------- Event timeline: Demo155_0 --------
actors: 14
clips: 73
oneshots: 0
cuts: 11
duration: 1711.0
subtimelines: ['Demo155_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 110.0
x4: 0
params: (none)

Cut: C03
start time: 165.0
x4: 0
params: (none)

Cut: C04
start time: 285.0
x4: 0
params: (none)

Cut: C05
start time: 390.0
x4: 0
params: (none)

Cut: C07
start time: 620.0
x4: 0
params: (none)

Cut: C08
start time: 686.0
x4: 0
params: (none)

Cut: C09
start time: 741.0
x4: 0
params: (none)

Cut: C10
start time: 846.0
x4: 0
params: (none)

Cut: C12
start time: 1306.0
x4: 0
params: (none)

Cut: C14
start time: 1441.0
x4: 0
params: (none)


===== Actors =====

Actor: DgnObj_RemainsClearTerminalBody_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 17.75, PosZ: 22.0, RotX: 0.0, RotY: 180.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 17.75, PosZ: 22.0, RotX: 0.0, RotY: 180.0,
  RotZ: 0.0}

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn']
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
x36: 2
actions: ['Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_EventCloudShadowPos', 'Demo_EventSetCloudShadowMove']
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

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_PlayUiActorName']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Enemy_SiteBoss_Bow[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 2, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Item_Conductor[0]
x36: 1
actions: ['Demo_EventBind']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Item_Conductor
x36: 1
actions: ['Demo_VisibleOff', 'Demo_Bind']
params: {CreateMode: 3, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}


===== Timeline =====

[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#0, xc=0)
               duration: 1711.0
               {ASName: Standby, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#1, xc=0)
               duration: 285.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Fader[0] - Demo_FadeIn (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 1711.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 1711.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
               duration: 1711.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.009999999776482582, WindDirY: 0.0, WindDirZ: -0.11999999731779099,
                 WindPower: 10.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#7, xc=1)
               duration: 165.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
               duration: 110.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 400.0, ApertureEnd: 400.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.9000000953674316, FocalLengthEnd: 2.9000000953674316,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C01-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
               duration: 110.0
               {FocusDistEnd: 3.5, FocusDistStart: 3.5, IsWaitFinish: true}
[      0.0] E Dm_Item_Conductor[0] - Demo_EventBind (#52, xc=0)
               duration: 165.0
               {ActorName: GameROMPlayer, IsContinueBind: false, IsWaitFinish: true, NodeName: Weapon_L, RotOffsetX: 180.0,
                 RotOffsetY: 180.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E Item_Conductor - Demo_VisibleOff (#53, xc=0)
               duration: 165.0
               {IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#55, xc=0)
               duration: 110.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     27.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#62, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[     28.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#62, xc=1)
[     30.0] L Fader[0] - Demo_FadeIn (#3, xc=0)
[     63.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#40, xc=0)
               duration: 26.0
               {Count: 2, IsWaitFinish: true}
[     76.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#63, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[     77.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#63, xc=1)
[     81.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#64, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[     82.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#64, xc=1)
[     89.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#40, xc=0)
[     89.0] E EventControllerRumble[0] - Demo_RumbleSmall (#41, xc=0)
               duration: 202.0
               {Count: 29, IsWaitFinish: true}
[     93.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#65, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[     94.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#65, xc=1)
[    109.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#66, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    110.0] L GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
[    110.0] L GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
[    110.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#55, xc=0)
[    110.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#66, xc=1)
[    110.0] E GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
               duration: 55.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.0, FocalLengthEnd: 2.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    110.0] E GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
               duration: 55.0
               {FocusDistEnd: 0.800000011920929, FocusDistStart: 0.800000011920929, IsWaitFinish: true}
[    110.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#56, xc=0)
               duration: 55.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    122.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#67, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    123.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#67, xc=1)
[    140.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#68, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    141.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#68, xc=1)
[    165.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#7, xc=1)
[    165.0] L GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
[    165.0] L GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
[    165.0] L Dm_Item_Conductor[0] - Demo_EventBind (#52, xc=0)
[    165.0] L Item_Conductor - Demo_VisibleOff (#53, xc=0)
[    165.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#56, xc=0)
[    165.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#8, xc=1)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: -0.14000000059604645, setPos_y: -0.03999999910593033}
[    165.0] E GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.10000000149011612, DOFBlurStart: 0.10000000149011612, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    165.0] E GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
               duration: 120.0
               {FocusDistEnd: 22.0, FocusDistStart: 18.0, IsWaitFinish: true}
[    165.0] E Item_Conductor - Demo_Bind (#54, xc=0)
               duration: 1546.0
               {ActorName: GameROMPlayer, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0, RotOffsetY: 0.0,
                 RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0, UniqueName: ''}
[    165.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#57, xc=0)
               duration: 120.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    166.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#8, xc=1)
[    166.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#9, xc=1)
               duration: 224.0
               {IsWaitFinish: true, setSpeed_x: 0.0010000000474974513, setSpeed_y: 0.0}
[    172.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#69, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    173.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#69, xc=1)
[    193.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#70, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    194.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#70, xc=1)
[    285.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#1, xc=0)
[    285.0] L GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
[    285.0] L GameRomCamera[0] - Demo_FocusDistSetting (#27, xc=1)
[    285.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#57, xc=0)
[    285.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#2, xc=0)
               duration: 1426.0
               {ASName: OffWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    285.0] E GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.4000000953674316, FocalLengthEnd: 2.4000000953674316,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    285.0] E GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
               duration: 105.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    285.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#58, xc=0)
               duration: 105.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    291.0] L EventControllerRumble[0] - Demo_RumbleSmall (#41, xc=0)
[    317.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#71, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    318.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#71, xc=1)
[    352.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    353.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
[    390.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#9, xc=1)
[    390.0] L GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
[    390.0] L GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
[    390.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#58, xc=0)
[    390.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#10, xc=1)
               duration: 916.0
               {IsWaitFinish: true}
[    390.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 230.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 13.600000381469727, ApertureEnd: 13.600000381469727,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 20.0, FocalLengthEnd: 20.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C05-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    390.0] E GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
               duration: 40.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[    390.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#59, xc=0)
               duration: 230.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    430.0] L GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
[    430.0] E GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
               duration: 40.0
               {FocusDistEnd: 15.0, FocusDistStart: 10.0, IsWaitFinish: true}
[    470.0] L GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
[    470.0] E GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
               duration: 150.0
               {FocusDistEnd: 15.0, FocusDistStart: 15.0, IsWaitFinish: true}
[    620.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[    620.0] L GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
[    620.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#59, xc=0)
[    620.0] E GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
               duration: 66.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 12.0, ApertureEnd: 12.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.8999999761581421, DOFBlurStart: 0.8999999761581421, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 6.400000095367432, FocalLengthEnd: 6.400000095367432,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    620.0] E GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
               duration: 66.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    620.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#46, xc=0)
               duration: 66.0
               {ASName: Demo155_0-C07-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    686.0] L GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
[    686.0] L GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
[    686.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#46, xc=0)
[    686.0] E GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
               duration: 55.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 23.0, ApertureEnd: 23.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 6.5, FocalLengthEnd: 6.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C08-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    686.0] E GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
               duration: 55.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    686.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#47, xc=0)
               duration: 55.0
               {ASName: Demo155_0-C08-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    741.0] L GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
[    741.0] L GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
[    741.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#47, xc=0)
[    741.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 11.0, ApertureEnd: 11.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.699999809265137, FocalLengthEnd: 5.699999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C09-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    741.0] E GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
               duration: 105.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    741.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#48, xc=0)
               duration: 105.0
               {ASName: Demo155_0-C09-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    846.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[    846.0] L GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
[    846.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#48, xc=0)
[    846.0] E GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
               duration: 460.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 40.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 2.0, DOFEndFrame: 180.0, DOFStartFrame: 150.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 10.0, FocalLengthEnd: 10.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C10-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    846.0] E GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
               duration: 460.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[    846.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#49, xc=0)
               duration: 460.0
               {ASName: Demo155_0-C10-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1012.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#42, xc=0)
               duration: 82.0
               {Count: 8, IsWaitFinish: true}
[   1018.0] E EventSystemActor[0] - Demo_PlayUiActorName (#45, xc=0)
               duration: 180.0
               {ActorName: Enemy_SiteBoss_Bow, ActorType: 0, IsWaitFinish: true}
[   1094.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#42, xc=0)
[   1198.0] L EventSystemActor[0] - Demo_PlayUiActorName (#45, xc=0)
[   1202.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#43, xc=0)
               duration: 263.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo155_0_Text000}
[   1306.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#10, xc=1)
[   1306.0] L GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
[   1306.0] L GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
[   1306.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#49, xc=0)
[   1306.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#11, xc=1)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.7699999809265137, setPos_y: 0.1599999964237213}
[   1306.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 4.0, ApertureEnd: 4.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 45.0, FocalLengthEnd: 45.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C12-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1306.0] E GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
               duration: 135.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[   1306.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#50, xc=0)
               duration: 135.0
               {ASName: Demo155_0-C12-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1306.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#60, xc=0)
               duration: 135.0
               {ASName: C12-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1307.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#11, xc=1)
[   1307.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#12, xc=1)
               duration: 134.0
               {IsWaitFinish: true, setSpeed_x: 0.0010000000474974513, setSpeed_y: 0.0}
[   1441.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#12, xc=1)
[   1441.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[   1441.0] L GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
[   1441.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#50, xc=0)
[   1441.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#60, xc=0)
[   1441.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#13, xc=1)
               duration: 270.0
               {IsWaitFinish: true}
[   1441.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 270.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 162.0, DOFStartFrame: 143.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.0, FocalLengthEnd: 4.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C14-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1441.0] E GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
               duration: 141.0
               {FocusDistEnd: 3.5, FocusDistStart: 3.5, IsWaitFinish: true}
[   1441.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#51, xc=0)
               duration: 270.0
               {ASName: Demo155_0-C14-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1441.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#61, xc=0)
               duration: 270.0
               {ASName: C14-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1465.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#43, xc=0)
[   1482.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#44, xc=0)
               duration: 188.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo155_0_Text001}
[   1582.0] L GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
[   1582.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 23.0
               {FocusDistEnd: 1.5, FocusDistStart: 3.5, IsWaitFinish: true}
[   1605.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[   1605.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 106.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[   1670.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#44, xc=0)
[   1711.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#0, xc=0)
[   1711.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#2, xc=0)
[   1711.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   1711.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   1711.0] L WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
[   1711.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#13, xc=1)
[   1711.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[   1711.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[   1711.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#51, xc=0)
[   1711.0] L Item_Conductor - Demo_Bind (#54, xc=0)
[   1711.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#61, xc=0)
