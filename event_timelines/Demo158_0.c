-------- Event timeline: Demo158_0 --------
actors: 15
clips: 79
oneshots: 0
cuts: 10
duration: 1655.0
subtimelines: ['Demo158_0_effect']
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
start time: 205.0
x4: 0
params: (none)

Cut: C04
start time: 400.0
x4: 0
params: (none)

Cut: C05
start time: 555.0
x4: 0
params: (none)

Cut: C06
start time: 660.0
x4: 0
params: (none)

Cut: C07
start time: 750.0
x4: 0
params: (none)

Cut: C08
start time: 1070.0
x4: 0
params: (none)

Cut: C09
start time: 1220.0
x4: 0
params: (none)

Cut: C10
start time: 1400.0
x4: 0
params: (none)


===== Actors =====

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

Actor: EventMessageTransmitter1[0]
x36: 1
actions: ['Demo_Msg2CameraKeepState']
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

Actor: Enemy_SiteBoss_Sword[0]
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

[      0.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#0, xc=0)
               duration: 205.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#2, xc=0)
               duration: 1655.0
               {ASName: Standby, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Fader[0] - Demo_FadeIn (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 1655.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 1655.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 90.0
               {IsWaitFinish: true, angleY: -75.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#16, xc=1)
               duration: 1655.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#17, xc=2)
               duration: 1655.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.0, FocalLengthEnd: 2.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
               duration: 90.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#65, xc=0)
               duration: 90.0
               {ASName: C01-Link-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Item_Conductor[0] - Demo_EventBind (#76, xc=0)
               duration: 205.0
               {ActorName: GameROMPlayer, IsContinueBind: false, IsWaitFinish: true, NodeName: Weapon_L, RotOffsetX: 180.0,
                 RotOffsetY: 180.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E Item_Conductor - Demo_VisibleOff (#77, xc=0)
               duration: 205.0
               {IsWaitFinish: true}
[     30.0] L Fader[0] - Demo_FadeIn (#3, xc=0)
[     90.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[     90.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[     90.0] L GameRomCamera[0] - Demo_FocusDistSetting (#28, xc=1)
[     90.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#65, xc=0)
[     90.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 115.0
               {IsWaitFinish: true, angleY: -74.0}
[     90.0] E GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
               duration: 115.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 350.0, ApertureEnd: 350.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 0.7200000286102295, FocalLengthEnd: 0.7200000286102295,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[     90.0] E GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
               duration: 115.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[     90.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#66, xc=0)
               duration: 115.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    144.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#48, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[    169.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#48, xc=0)
[    169.0] E EventControllerRumble[0] - Demo_RumbleSmall (#49, xc=0)
               duration: 230.0
               {Count: 34, IsWaitFinish: true}
[    177.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#71, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    178.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#71, xc=1)
[    189.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    190.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
[    205.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#0, xc=0)
[    205.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[    205.0] L GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
[    205.0] L GameRomCamera[0] - Demo_FocusDistSetting (#29, xc=1)
[    205.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#66, xc=0)
[    205.0] L Dm_Item_Conductor[0] - Demo_EventBind (#76, xc=0)
[    205.0] L Item_Conductor - Demo_VisibleOff (#77, xc=0)
[    205.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#1, xc=0)
               duration: 1450.0
               {ASName: OffWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    205.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 195.0
               {IsWaitFinish: true, angleY: -60.0}
[    205.0] E GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
               duration: 195.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 0.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    205.0] E GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
               duration: 95.0
               {FocusDistEnd: 9.0, FocusDistStart: 9.0, IsWaitFinish: true}
[    205.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#67, xc=0)
               duration: 195.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    205.0] E Item_Conductor - Demo_Bind (#78, xc=0)
               duration: 1450.0
               {ActorName: GameROMPlayer, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0, RotOffsetY: 0.0,
                 RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0, UniqueName: ''}
[    297.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#73, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    298.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#73, xc=1)
[    300.0] L GameRomCamera[0] - Demo_FocusDistSetting (#30, xc=1)
[    300.0] E GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
               duration: 50.0
               {FocusDistEnd: 20.0, FocusDistStart: 9.0, IsWaitFinish: true}
[    350.0] L GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
[    350.0] E GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
               duration: 50.0
               {FocusDistEnd: 20.0, FocusDistStart: 20.0, IsWaitFinish: true}
[    399.0] L EventControllerRumble[0] - Demo_RumbleSmall (#49, xc=0)
[    400.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
[    400.0] L GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
[    400.0] L GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
[    400.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#67, xc=0)
[    400.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
               duration: 155.0
               {IsWaitFinish: true, angleY: -60.0}
[    400.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 155.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 80.0, ApertureEnd: 80.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 2.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    400.0] E GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
               duration: 30.0
               {FocusDistEnd: 3.299999952316284, FocusDistStart: 3.299999952316284, IsWaitFinish: true}
[    400.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#68, xc=0)
               duration: 155.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    430.0] L GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
[    430.0] E GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
               duration: 60.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 3.299999952316284, IsWaitFinish: true}
[    465.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#74, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    466.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#74, xc=1)
[    485.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#75, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    486.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#75, xc=1)
[    490.0] L GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
[    490.0] E GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
               duration: 65.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[    555.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
[    555.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[    555.0] L GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
[    555.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#68, xc=0)
[    555.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
               duration: 105.0
               {IsWaitFinish: true, angleY: -100.0}
[    555.0] E GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 300.0, ApertureEnd: 350.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 1.5, DOFEndFrame: 63.0, DOFStartFrame: 53.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.299999952316284, FocalLengthEnd: 3.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    555.0] E GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
               duration: 25.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[    555.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#55, xc=0)
               duration: 105.0
               {ASName: Demo158_0-C05-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    555.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#61, xc=1)
               duration: 85.0
               {ASName: Demo158_0-C06-SiteBoss_Sword_BldOff-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    580.0] L GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
[    580.0] E GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
               duration: 45.0
               {FocusDistEnd: 10.0, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[    625.0] L GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
[    625.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 35.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[    640.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#61, xc=1)
[    640.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#62, xc=1)
               duration: 20.0
               {ASName: Demo158_0-C06-SiteBoss_Sword_BldOn-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    660.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
[    660.0] L GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
[    660.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[    660.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#55, xc=0)
[    660.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#62, xc=1)
[    660.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
               duration: 90.0
               {IsWaitFinish: true, angleY: -154.0}
[    660.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 1.0, DOFEndFrame: 65.0, DOFStartFrame: 55.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 3.299999952316284, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C06-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    660.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 40.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[    660.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#56, xc=0)
               duration: 90.0
               {ASName: Demo158_0-C06-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    660.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#63, xc=1)
               duration: 40.0
               {ASName: Demo158_0-C06-SiteBoss_Sword_SldOff-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    700.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[    700.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#63, xc=1)
[    700.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 20.0
               {FocusDistEnd: 2.299999952316284, FocusDistStart: 1.0, IsWaitFinish: true}
[    700.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#64, xc=1)
               duration: 20.0
               {ASName: Demo158_0-C06-SiteBoss_Sword_SldOn-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    720.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[    720.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#64, xc=1)
[    720.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 30.0
               {FocusDistEnd: 2.299999952316284, FocusDistStart: 2.299999952316284, IsWaitFinish: true}
[    750.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
[    750.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[    750.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[    750.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#56, xc=0)
[    750.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
               duration: 320.0
               {IsWaitFinish: true, angleY: -123.0}
[    750.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 320.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 350.0, ApertureEnd: 73.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 2.0, DOFEndFrame: 130.0, DOFStartFrame: 94.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 0.800000011920929, FocalLengthEnd: 3.299999952316284,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    750.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 105.0
               {FocusDistEnd: 1.7999999523162842, FocusDistStart: 1.7999999523162842, IsWaitFinish: true}
[    750.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#57, xc=0)
               duration: 320.0
               {ASName: Demo158_0-C07-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    855.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
[    855.0] E GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
               duration: 20.0
               {FocusDistEnd: 7.0, FocusDistStart: 1.7999999523162842, IsWaitFinish: true}
[    864.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#50, xc=0)
               duration: 160.0
               {Count: 5, IsWaitFinish: true}
[    875.0] L GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
[    875.0] E GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
               duration: 195.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[    882.0] E EventSystemActor[0] - Demo_PlayUiActorName (#52, xc=0)
               duration: 180.0
               {ActorName: Enemy_SiteBoss_Sword, ActorType: 0, IsWaitFinish: true}
[   1024.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#50, xc=0)
[   1062.0] L EventSystemActor[0] - Demo_PlayUiActorName (#52, xc=0)
[   1070.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
[   1070.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[   1070.0] L GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
[   1070.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#57, xc=0)
[   1070.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
               duration: 150.0
               {IsWaitFinish: true, angleY: -120.0}
[   1070.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 27.0, ApertureEnd: 27.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 14.0, FocalLengthEnd: 14.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C08-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1070.0] E GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
               duration: 150.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[   1070.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#58, xc=0)
               duration: 150.0
               {ASName: Demo158_0-C08-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1070.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#69, xc=0)
               duration: 150.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1075.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#53, xc=0)
               duration: 274.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo158_0_Text000}
[   1220.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
[   1220.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[   1220.0] L GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
[   1220.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#58, xc=0)
[   1220.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#69, xc=0)
[   1220.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=0)
               duration: 180.0
               {IsWaitFinish: true, angleY: -108.0}
[   1220.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 150.0, ApertureEnd: 126.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 2.0, DOFEndFrame: 120.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.600000023841858, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C09-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1220.0] E GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
               duration: 180.0
               {FocusDistEnd: 2.200000047683716, FocusDistStart: 1.0, IsWaitFinish: true}
[   1220.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#59, xc=0)
               duration: 180.0
               {ASName: C09-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1349.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#53, xc=0)
[   1377.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#54, xc=0)
               duration: 253.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo158_0_Text001}
[   1400.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=0)
[   1400.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[   1400.0] L GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
[   1400.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#59, xc=0)
[   1400.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=0)
               duration: 255.0
               {IsWaitFinish: true, angleY: -108.0}
[   1400.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 255.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 125.0, ApertureEnd: 125.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.20000000298023224, DOFBlurStart: 2.0, DOFEndFrame: 140.0, DOFStartFrame: 128.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 23.0, FocalLengthEnd: 23.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 7.0, SceneName: C10-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1400.0] E GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
               duration: 255.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   1400.0] E Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#60, xc=0)
               duration: 255.0
               {ASName: C10-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1400.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#70, xc=0)
               duration: 255.0
               {ASName: C10-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1630.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#54, xc=0)
[   1650.0] E EventMessageTransmitter1[0] - Demo_Msg2CameraKeepState (#51, xc=0)
               duration: 5.0
               {IsWaitFinish: true}
[   1655.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#1, xc=0)
[   1655.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#2, xc=0)
[   1655.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   1655.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   1655.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=0)
[   1655.0] L WorldManagerControl[0] - Demo_SetWind (#16, xc=1)
[   1655.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#17, xc=2)
[   1655.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[   1655.0] L GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
[   1655.0] L EventMessageTransmitter1[0] - Demo_Msg2CameraKeepState (#51, xc=0)
[   1655.0] L Enemy_SiteBoss_Sword[0] - Demo_PlayASForTimeline (#60, xc=0)
[   1655.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#70, xc=0)
[   1655.0] L Item_Conductor - Demo_Bind (#78, xc=0)
