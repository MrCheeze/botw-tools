-------- Event timeline: Demo160_0 --------
actors: 14
clips: 79
oneshots: 0
cuts: 11
duration: 1741.0
subtimelines: ['Demo160_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 60.0
x4: 0
params: (none)

Cut: C12
start time: 166.0
x4: 0
params: (none)

Cut: C03
start time: 301.0
x4: 0
params: (none)

Cut: C04
start time: 451.0
x4: 0
params: (none)

Cut: C06
start time: 616.0
x4: 0
params: (none)

Cut: C07
start time: 766.0
x4: 0
params: (none)

Cut: C08
start time: 886.0
x4: 0
params: (none)

Cut: C09
start time: 1246.0
x4: 0
params: (none)

Cut: C10
start time: 1396.0
x4: 0
params: (none)

Cut: C11
start time: 1576.0
x4: 0
params: (none)


===== Actors =====

Actor: DgnObj_RemainsClearTerminalBody_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 22.5, PosZ: 5.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 22.5, PosZ: 5.0, RotX: 0.0, RotY: 0.0,
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
x36: 3
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventCloudShadowOff']
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

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_PlayUiActorName']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Enemy_SiteBoss_Lsword[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 2, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

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


===== Timeline =====

[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#0, xc=0)
               duration: 1741.0
               {ASName: Standby, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#1, xc=0)
               duration: 166.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Fader[0] - Demo_FadeIn (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 1741.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 1741.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 60.0
               {IsWaitFinish: true, angleY: 115.33699798583984}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#16, xc=1)
               duration: 1741.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#17, xc=2)
               duration: 1741.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 60.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.4000000059604645, DOFBlurStart: 0.4000000059604645, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.4000000953674316, FocalLengthEnd: 2.4000000953674316,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C01-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
               duration: 60.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#57, xc=0)
               duration: 60.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Item_Conductor[0] - Demo_EventBind (#76, xc=0)
               duration: 451.0
               {ActorName: GameROMPlayer, IsContinueBind: false, IsWaitFinish: true, NodeName: Weapon_L, RotOffsetX: 180.0,
                 RotOffsetY: 180.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E Item_Conductor - Demo_VisibleOff (#77, xc=0)
               duration: 451.0
               {IsWaitFinish: true}
[     12.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#65, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[     13.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#65, xc=1)
[     30.0] L Fader[0] - Demo_FadeIn (#3, xc=0)
[     60.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[     60.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[     60.0] L GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
[     60.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#57, xc=0)
[     60.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 106.0
               {IsWaitFinish: true, angleY: 115.33699798583984}
[     60.0] E GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
               duration: 106.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[     60.0] E GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
               duration: 106.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[     60.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#58, xc=0)
               duration: 106.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     95.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#44, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    119.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#66, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    120.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#44, xc=0)
[    120.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#66, xc=1)
[    120.0] E EventControllerRumble[0] - Demo_RumbleSmall (#45, xc=0)
               duration: 329.0
               {Count: 48, IsWaitFinish: true}
[    130.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#67, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    131.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#67, xc=1)
[    145.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#68, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    146.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#68, xc=1)
[    166.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#1, xc=0)
[    166.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[    166.0] L GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
[    166.0] L GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
[    166.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#58, xc=0)
[    166.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#2, xc=0)
               duration: 1575.0
               {ASName: OffWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    166.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 135.0
               {IsWaitFinish: true, angleY: 115.33699798583984}
[    166.0] E GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 40.0, ApertureEnd: 40.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.4000000953674316, FocalLengthEnd: 2.4000000953674316,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C12-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    166.0] E GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
               duration: 135.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[    166.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#59, xc=0)
               duration: 135.0
               {ASName: C12-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    173.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#69, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    174.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#69, xc=1)
[    199.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#70, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    200.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#70, xc=1)
[    301.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
[    301.0] L GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
[    301.0] L GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
[    301.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#59, xc=0)
[    301.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
               duration: 150.0
               {IsWaitFinish: true, angleY: 98.0}
[    301.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    301.0] E GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
               duration: 150.0
               {FocusDistEnd: 15.0, FocusDistStart: 15.0, IsWaitFinish: true}
[    301.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#60, xc=0)
               duration: 150.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    355.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#71, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    356.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#71, xc=1)
[    383.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    384.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
[    449.0] L EventControllerRumble[0] - Demo_RumbleSmall (#45, xc=0)
[    451.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
[    451.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[    451.0] L GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
[    451.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#60, xc=0)
[    451.0] L Dm_Item_Conductor[0] - Demo_EventBind (#76, xc=0)
[    451.0] L Item_Conductor - Demo_VisibleOff (#77, xc=0)
[    451.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
               duration: 165.0
               {IsWaitFinish: true, angleY: -72.0}
[    451.0] E GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
               duration: 165.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 76.0, ApertureEnd: 76.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    451.0] E GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
               duration: 165.0
               {FocusDistEnd: 1.2000000476837158, FocusDistStart: 1.2000000476837158, IsWaitFinish: true}
[    451.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#61, xc=0)
               duration: 165.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    451.0] E Item_Conductor - Demo_Bind (#78, xc=0)
               duration: 1290.0
               {ActorName: GameROMPlayer, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0, RotOffsetY: 0.0,
                 RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0, UniqueName: ''}
[    508.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#73, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    509.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#73, xc=1)
[    530.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#74, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    531.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#74, xc=1)
[    616.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
[    616.0] L GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
[    616.0] L GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
[    616.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#61, xc=0)
[    616.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
               duration: 150.0
               {IsWaitFinish: true, angleY: -18.0}
[    616.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 40.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 2.0, DOFEndFrame: 135.0, DOFStartFrame: 127.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 3.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C06-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    616.0] E GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
               duration: 40.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[    616.0] E Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#50, xc=0)
               duration: 150.0
               {ASName: Demo160_0-C06-SiteBoss_Lsword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    616.0] E Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#55, xc=1)
               duration: 75.0
               {ASName: Demo160_0-C06-SiteBoss_Lsword_Off-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    656.0] L GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
[    656.0] E GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
               duration: 10.0
               {FocusDistEnd: 6.0, FocusDistStart: 2.5, IsWaitFinish: true}
[    666.0] L GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
[    666.0] E GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
               duration: 100.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    691.0] L Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#55, xc=1)
[    691.0] E Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#56, xc=1)
               duration: 10.0
               {ASName: Demo160_0-C06-SiteBoss_Lsword_On-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    701.0] L Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#56, xc=1)
[    766.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
[    766.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[    766.0] L GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
[    766.0] L Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#50, xc=0)
[    766.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
               duration: 120.0
               {IsWaitFinish: true, angleY: -18.0}
[    766.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 70.0, ApertureEnd: 70.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.0, FocalLengthEnd: 2.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C07-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    766.0] E GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
               duration: 120.0
               {FocusDistEnd: 1.600000023841858, FocusDistStart: 1.600000023841858, IsWaitFinish: true}
[    766.0] E Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#51, xc=0)
               duration: 120.0
               {ASName: Demo160_0-C07-SiteBoss_Lsword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    886.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
[    886.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[    886.0] L GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
[    886.0] L Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#51, xc=0)
[    886.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
               duration: 360.0
               {IsWaitFinish: true, angleY: -12.0}
[    886.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 360.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 5.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C08-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    886.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 179.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[    886.0] E Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#52, xc=0)
               duration: 360.0
               {ASName: Demo160_0-C08-SiteBoss_Lsword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1063.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#46, xc=0)
               duration: 100.0
               {Count: 10, IsWaitFinish: true}
[   1065.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[   1065.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 10.0
               {FocusDistEnd: 7.0, FocusDistStart: 4.5, IsWaitFinish: true}
[   1065.0] E EventSystemActor[0] - Demo_PlayUiActorName (#47, xc=0)
               duration: 180.0
               {ActorName: Enemy_SiteBoss_Lsword, ActorType: 0, IsWaitFinish: true}
[   1075.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[   1075.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 171.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[   1163.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#46, xc=0)
[   1245.0] L EventSystemActor[0] - Demo_PlayUiActorName (#47, xc=0)
[   1246.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
[   1246.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[   1246.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[   1246.0] L Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#52, xc=0)
[   1246.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=0)
               duration: 150.0
               {IsWaitFinish: true, angleY: 98.0}
[   1246.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 3.0, ApertureEnd: 3.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 8.0, FocalLengthEnd: 8.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C09-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1246.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 150.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   1246.0] E Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#53, xc=0)
               duration: 150.0
               {ASName: Demo160_0-C09-SiteBoss_Lsword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1246.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#62, xc=0)
               duration: 150.0
               {ASName: C09-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1296.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#48, xc=0)
               duration: 256.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo160_0_Text000}
[   1396.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=0)
[   1396.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[   1396.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[   1396.0] L Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#53, xc=0)
[   1396.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#62, xc=0)
[   1396.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=0)
               duration: 180.0
               {IsWaitFinish: true, angleY: 7.0}
[   1396.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C10-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1396.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 180.0
               {FocusDistEnd: 6.0, FocusDistStart: 9.0, IsWaitFinish: true}
[   1396.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#63, xc=0)
               duration: 180.0
               {ASName: C10-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1552.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#48, xc=0)
[   1576.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=0)
[   1576.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[   1576.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
[   1576.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#63, xc=0)
[   1576.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 165.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 40.0, ApertureEnd: 40.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 5.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 7.0, SceneName: C11-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1576.0] E GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
               duration: 165.0
               {FocusDistEnd: 3.700000047683716, FocusDistStart: 3.0, IsWaitFinish: true}
[   1576.0] E Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#54, xc=0)
               duration: 165.0
               {ASName: C11-SiteBoss_Lsword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1576.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#64, xc=0)
               duration: 165.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1579.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#49, xc=0)
               duration: 88.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo160_0_Text001}
[   1609.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#75, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1610.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#75, xc=1)
[   1667.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#49, xc=0)
[   1741.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#0, xc=0)
[   1741.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#2, xc=0)
[   1741.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   1741.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   1741.0] L WorldManagerControl[0] - Demo_SetWind (#16, xc=1)
[   1741.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#17, xc=2)
[   1741.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[   1741.0] L GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
[   1741.0] L Enemy_SiteBoss_Lsword[0] - Demo_PlayASForTimeline (#54, xc=0)
[   1741.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#64, xc=0)
[   1741.0] L Item_Conductor - Demo_Bind (#78, xc=0)
