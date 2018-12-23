-------- Event timeline: Demo162_0 --------
actors: 14
clips: 87
oneshots: 0
cuts: 14
duration: 2145.0
subtimelines: ['Demo162_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 90.0
x4: 0
params: (none)

Cut: C03
start time: 200.0
x4: 0
params: (none)

Cut: C04
start time: 255.0
x4: 0
params: (none)

Cut: C05
start time: 375.0
x4: 0
params: (none)

Cut: C06
start time: 525.0
x4: 0
params: (none)

Cut: C07
start time: 645.0
x4: 0
params: (none)

Cut: C08
start time: 855.0
x4: 0
params: (none)

Cut: C09
start time: 945.0
x4: 0
params: (none)

Cut: C11
start time: 1300.0
x4: 0
params: (none)

Cut: C12
start time: 1395.0
x4: 0
params: (none)

Cut: C13
start time: 1560.0
x4: 0
params: (none)

Cut: C14
start time: 1740.0
x4: 0
params: (none)

Cut: C15
start time: 1905.0
x4: 0
params: (none)


===== Actors =====

Actor: DgnObj_RemainsClearTerminalBody_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 3.0, PosZ: -59.5, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 3.0, PosZ: -59.5, RotX: 0.0, RotY: 0.0,
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

Actor: WorldManagerControl[2]
x36: 3
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_SetDirectionalLight']
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

Actor: Enemy_SiteBoss_Spear[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 2, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Dm_Item_Conductor[1]
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
               duration: 2145.0
               {ASName: Standby, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#1, xc=0)
               duration: 255.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Fader[0] - Demo_FadeIn (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 2145.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 2145.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 90.0
               {IsWaitFinish: true, angleY: -60.0}
[      0.0] E WorldManagerControl[2] - Demo_SetWind (#19, xc=1)
               duration: 2145.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[2] - Demo_EventCloudShadowOff (#20, xc=2)
               duration: 2145.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 90.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
               duration: 90.0
               {FocusDistEnd: 1.399999976158142, FocusDistStart: 1.399999976158142, IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#65, xc=0)
               duration: 90.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Item_Conductor[1] - Demo_EventBind (#84, xc=0)
               duration: 255.0
               {ActorName: GameROMPlayer, IsContinueBind: false, IsWaitFinish: true, NodeName: Weapon_L, RotOffsetX: 180.0,
                 RotOffsetY: 180.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E Item_Conductor - Demo_VisibleOff (#85, xc=0)
               duration: 255.0
               {IsWaitFinish: true}
[     24.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#74, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[     25.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#74, xc=1)
[     30.0] L Fader[0] - Demo_FadeIn (#3, xc=0)
[     37.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#75, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[     38.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#75, xc=1)
[     90.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#6, xc=0)
[     90.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[     90.0] L GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
[     90.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#65, xc=0)
[     90.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 110.0
               {IsWaitFinish: true, angleY: -60.0}
[     90.0] E GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
               duration: 110.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7999999523162842, FocalLengthEnd: 1.7999999523162842,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[     90.0] E GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
               duration: 110.0
               {FocusDistEnd: 1.399999976158142, FocusDistStart: 1.399999976158142, IsWaitFinish: true}
[     90.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#66, xc=0)
               duration: 110.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    159.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#51, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    184.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#51, xc=0)
[    184.0] E EventControllerRumble[0] - Demo_RumbleSmall (#52, xc=0)
               duration: 225.0
               {Count: 34, IsWaitFinish: true}
[    200.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#7, xc=0)
[    200.0] L GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
[    200.0] L GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
[    200.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#66, xc=0)
[    200.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 55.0
               {IsWaitFinish: true, angleY: -60.0}
[    200.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 55.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    200.0] E GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
               duration: 55.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[    200.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#67, xc=0)
               duration: 55.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    209.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#76, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    210.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#76, xc=1)
[    224.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#77, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    225.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#77, xc=1)
[    236.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#78, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    237.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#78, xc=1)
[    255.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#1, xc=0)
[    255.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#8, xc=0)
[    255.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[    255.0] L GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
[    255.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#67, xc=0)
[    255.0] L Dm_Item_Conductor[1] - Demo_EventBind (#84, xc=0)
[    255.0] L Item_Conductor - Demo_VisibleOff (#85, xc=0)
[    255.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#2, xc=0)
               duration: 1890.0
               {ASName: OffWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    255.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#9, xc=0)
               duration: 120.0
               {IsWaitFinish: true, angleY: -60.0}
[    255.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    255.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 120.0
               {FocusDistEnd: 8.0, FocusDistStart: 8.0, IsWaitFinish: true}
[    255.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#68, xc=0)
               duration: 120.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    255.0] E Item_Conductor - Demo_Bind (#86, xc=0)
               duration: 1890.0
               {ActorName: GameROMPlayer, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0, RotOffsetY: 0.0,
                 RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0, UniqueName: ''}
[    264.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#79, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    265.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#79, xc=1)
[    285.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#80, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    286.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#80, xc=1)
[    375.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#9, xc=0)
[    375.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[    375.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[    375.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#68, xc=0)
[    375.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#10, xc=0)
               duration: 150.0
               {IsWaitFinish: true, angleY: -100.0}
[    375.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 150.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    375.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 150.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    375.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#69, xc=0)
               duration: 150.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    409.0] L EventControllerRumble[0] - Demo_RumbleSmall (#52, xc=0)
[    474.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#81, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    475.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#81, xc=1)
[    494.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#82, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    495.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#82, xc=1)
[    525.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#10, xc=0)
[    525.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[    525.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[    525.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#69, xc=0)
[    525.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#11, xc=0)
               duration: 120.0
               {IsWaitFinish: true, angleY: -100.0}
[    525.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.200000047683716, FocalLengthEnd: 2.200000047683716,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    525.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 120.0
               {FocusDistEnd: 5.5, FocusDistStart: 5.5, IsWaitFinish: true}
[    525.0] E Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#57, xc=0)
               duration: 120.0
               {ASName: C06-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    645.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#11, xc=0)
[    645.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[    645.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[    645.0] L Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#57, xc=0)
[    645.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#12, xc=0)
               duration: 210.0
               {IsWaitFinish: true, angleY: -100.0}
[    645.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 210.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 70.0, ApertureEnd: 70.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7000000476837158, FocalLengthEnd: 1.7000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    645.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 210.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    645.0] E Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#58, xc=0)
               duration: 210.0
               {ASName: Demo162_0-C07-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    855.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#12, xc=0)
[    855.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[    855.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[    855.0] L Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#58, xc=0)
[    855.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#13, xc=0)
               duration: 90.0
               {IsWaitFinish: true, angleY: -100.0}
[    855.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 90.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 70.0, ApertureEnd: 70.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7000000476837158, FocalLengthEnd: 1.7000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C08-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    855.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 90.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[    855.0] E Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#59, xc=0)
               duration: 90.0
               {ASName: Demo162_0-C08-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    945.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#13, xc=0)
[    945.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[    945.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
[    945.0] L Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#59, xc=0)
[    945.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#14, xc=0)
               duration: 355.0
               {IsWaitFinish: true, angleY: -92.0}
[    945.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 355.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 70.0, ApertureEnd: 70.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 2.0, DOFEndFrame: 205.0, DOFStartFrame: 190.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7000000476837158, FocalLengthEnd: 1.7000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C09-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    945.0] E GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
               duration: 149.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[    945.0] E Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#60, xc=0)
               duration: 355.0
               {ASName: Demo162_0-C09-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1085.0] E EventSystemActor[0] - Demo_PlayUiActorName (#54, xc=0)
               duration: 175.0
               {ActorName: Enemy_SiteBoss_Spear, ActorType: 0, IsWaitFinish: true}
[   1094.0] L GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
[   1094.0] E GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
               duration: 46.0
               {FocusDistEnd: 13.0, FocusDistStart: 1.5, IsWaitFinish: true}
[   1126.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#53, xc=0)
               duration: 117.0
               {Count: 10, IsWaitFinish: true}
[   1140.0] L GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
[   1140.0] E GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
               duration: 160.0
               {FocusDistEnd: 13.0, FocusDistStart: 13.0, IsWaitFinish: true}
[   1243.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#53, xc=0)
[   1260.0] L EventSystemActor[0] - Demo_PlayUiActorName (#54, xc=0)
[   1300.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#14, xc=0)
[   1300.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[   1300.0] L GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
[   1300.0] L Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#60, xc=0)
[   1300.0] E WorldManagerControl[2] - Demo_SetDirectionalLight (#15, xc=0)
               duration: 95.0
               {IsWaitFinish: true, angleX: 136.8000030517578, angleY: -90.0}
[   1300.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 95.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C11-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1300.0] E GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
               duration: 95.0
               {FocusDistEnd: 28.0, FocusDistStart: 28.0, IsWaitFinish: true}
[   1300.0] E Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#61, xc=0)
               duration: 95.0
               {ASName: C11-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1300.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#70, xc=0)
               duration: 95.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1354.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#55, xc=0)
               duration: 264.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo162_0_Text000}
[   1395.0] L WorldManagerControl[2] - Demo_SetDirectionalLight (#15, xc=0)
[   1395.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[   1395.0] L GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
[   1395.0] L Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#61, xc=0)
[   1395.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#70, xc=0)
[   1395.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#16, xc=0)
               duration: 165.0
               {IsWaitFinish: true, angleY: -90.0}
[   1395.0] E GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
               duration: 165.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C12-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1395.0] E GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
               duration: 165.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   1395.0] E Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#62, xc=0)
               duration: 165.0
               {ASName: C12-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1395.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#71, xc=0)
               duration: 165.0
               {ASName: C12-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1560.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#16, xc=0)
[   1560.0] L GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
[   1560.0] L GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
[   1560.0] L Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#62, xc=0)
[   1560.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#71, xc=0)
[   1560.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#17, xc=0)
               duration: 180.0
               {IsWaitFinish: true, angleY: -102.0}
[   1560.0] E GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
               duration: 180.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C13-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1560.0] E GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
               duration: 180.0
               {FocusDistEnd: 9.0, FocusDistStart: 9.0, IsWaitFinish: true}
[   1560.0] E Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#63, xc=0)
               duration: 180.0
               {ASName: C13-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1618.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#55, xc=0)
[   1740.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#17, xc=0)
[   1740.0] L GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
[   1740.0] L GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
[   1740.0] L Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#63, xc=0)
[   1740.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#18, xc=0)
               duration: 165.0
               {IsWaitFinish: true, angleY: -85.0}
[   1740.0] E GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
               duration: 165.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C14-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1740.0] E GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
               duration: 165.0
               {FocusDistEnd: 2.799999952316284, FocusDistStart: 2.799999952316284, IsWaitFinish: true}
[   1740.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#72, xc=0)
               duration: 165.0
               {ASName: C14-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1765.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#56, xc=0)
               duration: 168.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo162_0_Text001}
[   1767.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#83, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1768.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#83, xc=1)
[   1905.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#18, xc=0)
[   1905.0] L GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
[   1905.0] L GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
[   1905.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#72, xc=0)
[   1905.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 240.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 52.0, ApertureEnd: 52.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 1.0, DOFEndFrame: 90.0, DOFStartFrame: 80.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.2999999523162842, FocalLengthEnd: 1.2999999523162842,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 7.0, SceneName: C15-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1905.0] E GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
               duration: 240.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[   1905.0] E Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#64, xc=0)
               duration: 240.0
               {ASName: C15-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1905.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#73, xc=0)
               duration: 240.0
               {ASName: C15-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1933.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#56, xc=0)
[   2145.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#0, xc=0)
[   2145.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#2, xc=0)
[   2145.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   2145.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   2145.0] L WorldManagerControl[2] - Demo_SetWind (#19, xc=1)
[   2145.0] L WorldManagerControl[2] - Demo_EventCloudShadowOff (#20, xc=2)
[   2145.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[   2145.0] L GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
[   2145.0] L Enemy_SiteBoss_Spear[0] - Demo_PlayASForTimeline (#64, xc=0)
[   2145.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#73, xc=0)
[   2145.0] L Item_Conductor - Demo_Bind (#86, xc=0)
