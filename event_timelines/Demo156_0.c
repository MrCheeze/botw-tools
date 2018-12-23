-------- Event timeline: Demo156_0 --------
actors: 17
clips: 166
oneshots: 0
cuts: 23
duration: 3379.0
subtimelines: ['Demo156_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 150.0
x4: 0
params: (none)

Cut: C03
start time: 315.0
x4: 0
params: (none)

Cut: C04
start time: 450.0
x4: 0
params: (none)

Cut: C05
start time: 600.0
x4: 0
params: (none)

Cut: C06
start time: 710.0
x4: 0
params: (none)

Cut: C07
start time: 1064.0
x4: 0
params: (none)

Cut: C08
start time: 1214.0
x4: 0
params: (none)

Cut: C09
start time: 1349.0
x4: 0
params: (none)

Cut: C10
start time: 1499.0
x4: 0
params: (none)

Cut: C21
start time: 1640.0
x4: 0
params: (none)

Cut: C24
start time: 1849.0
x4: 0
params: (none)

Cut: C25
start time: 1934.0
x4: 0
params: (none)

Cut: C26
start time: 2088.0
x4: 0
params: (none)

Cut: C27
start time: 2131.0
x4: 0
params: (none)

Cut: C13
start time: 2192.0
x4: 0
params: (none)

Cut: C14
start time: 2392.0
x4: 0
params: (none)

Cut: C15
start time: 2542.0
x4: 0
params: (none)

Cut: C16
start time: 2630.0
x4: 0
params: (none)

Cut: C17
start time: 2750.0
x4: 0
params: (none)

Cut: C18
start time: 2855.0
x4: 0
params: (none)

Cut: C19
start time: 3014.0
x4: 0
params: (none)

Cut: C20
start time: 3129.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn', 'Demo_FadeOut']
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
actions: ['Demo_EventCloudShadowOff', 'Demo_SetWind', 'Demo_EventCloudShadowPos', 'Demo_EventSetCloudShadowMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting', 'Demo_OverwriteNear']
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

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall', 'Demo_RumbleMiddle', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Npc_Rito_Hero[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer
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

Actor: DgnObj_IbutsuWindWingL_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_IbutsuWindWingR_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[1]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 17.75, PosZ: 22.0, RotX: 0.0, RotY: 180.0,
  RotZ: 0.0}

Actor: DgnObj_RemainsClearTerminalBody_A_01[2]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 17.75, PosZ: 22.0, RotX: 0.0, RotY: 180.0,
  RotZ: 0.0}

Actor: Dm_Locator[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 3379.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 3379.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 3379.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: -0.33399999141693115,
                 WindPower: 15.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
               duration: 150.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 82.4000015258789, ApertureEnd: 82.4000015258789,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.7000000476837158, DOFBlurStart: 1.7000000476837158,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C01-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
               duration: 150.0
               {FocusDistEnd: 2.200000047683716, FocusDistStart: 2.200000047683716, IsWaitFinish: true}
[      0.0] E GameROMPlayer - Demo_PlayASForTimeline (#119, xc=0)
               duration: 150.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Item_Conductor[0] - Demo_EventBind (#153, xc=0)
               duration: 315.0
               {ActorName: GameROMPlayer, IsContinueBind: false, IsWaitFinish: true, NodeName: Weapon_L, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E Item_Conductor - Demo_VisibleOff (#154, xc=0)
               duration: 315.0
               {IsWaitFinish: true}
[      0.0] E DgnObj_IbutsuWindWingL_A_01[0] - Demo_PlayASForTimeline (#156, xc=0)
               duration: 90.0
               {ASName: BeforeClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_IbutsuWindWingR_A_01[0] - Demo_PlayASForTimeline (#158, xc=0)
               duration: 90.0
               {ASName: BeforeClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsClearTerminal[1] - Demo_PlayASForTimeline (#160, xc=0)
               duration: 90.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[2] - Demo_PlayASForTimeline (#162, xc=0)
               duration: 150.0
               {ASName: Standby, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     69.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#137, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[     70.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#137, xc=1)
[     84.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#138, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[     85.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#138, xc=1)
[     90.0] L DgnObj_IbutsuWindWingL_A_01[0] - Demo_PlayASForTimeline (#156, xc=0)
[     90.0] L DgnObj_IbutsuWindWingR_A_01[0] - Demo_PlayASForTimeline (#158, xc=0)
[     90.0] L RemainsClearTerminal[1] - Demo_PlayASForTimeline (#160, xc=0)
[     90.0] E DgnObj_IbutsuWindWingL_A_01[0] - Demo_PlayASForTimeline (#157, xc=0)
               duration: 3289.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     90.0] E DgnObj_IbutsuWindWingR_A_01[0] - Demo_PlayASForTimeline (#159, xc=0)
               duration: 3289.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     90.0] E RemainsClearTerminal[1] - Demo_PlayASForTimeline (#161, xc=0)
               duration: 3289.0
               {ASName: Demo_Activate, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    150.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
[    150.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[    150.0] L GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
[    150.0] L GameROMPlayer - Demo_PlayASForTimeline (#119, xc=0)
[    150.0] L DgnObj_RemainsClearTerminalBody_A_01[2] - Demo_PlayASForTimeline (#162, xc=0)
[    150.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#6, xc=1)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.09200000017881393, setPos_y: -0.15000000596046448}
[    150.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 165.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 11.0, ApertureEnd: 11.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.699999988079071, DOFBlurStart: 0.699999988079071, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 9.0, FocalLengthEnd: 9.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    150.0] E GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
               duration: 165.0
               {FocusDistEnd: 12.0, FocusDistStart: 12.0, IsWaitFinish: true}
[    150.0] E GameROMPlayer - Demo_PlayASForTimeline (#120, xc=0)
               duration: 165.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    150.0] E DgnObj_RemainsClearTerminalBody_A_01[2] - Demo_PlayASForTimeline (#163, xc=0)
               duration: 3229.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    151.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#6, xc=1)
[    151.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#7, xc=1)
               duration: 164.0
               {IsWaitFinish: true, setSpeed_x: 0.0003000000142492354, setSpeed_y: 0.0}
[    281.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#139, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    282.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#139, xc=1)
[    303.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#140, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    304.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#140, xc=1)
[    315.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#7, xc=1)
[    315.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[    315.0] L GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
[    315.0] L GameROMPlayer - Demo_PlayASForTimeline (#120, xc=0)
[    315.0] L Dm_Item_Conductor[0] - Demo_EventBind (#153, xc=0)
[    315.0] L Item_Conductor - Demo_VisibleOff (#154, xc=0)
[    315.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#8, xc=1)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.6100000143051147, setPos_y: 0.734000027179718}
[    315.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 0.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    315.0] E GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
               duration: 135.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[    315.0] E GameRomCamera[0] - Demo_OverwriteNear (#77, xc=2)
               duration: 135.0
               {IsWaitFinish: true, Near: 1.0}
[    315.0] E GameROMPlayer - Demo_PlayASForTimeline (#121, xc=0)
               duration: 135.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    315.0] E Item_Conductor - Demo_Bind (#155, xc=0)
               duration: 3064.0
               {ActorName: GameROMPlayer, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0, RotOffsetY: 0.0,
                 RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0, UniqueName: ''}
[    316.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#8, xc=1)
[    316.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#9, xc=1)
               duration: 134.0
               {IsWaitFinish: true, setSpeed_x: 0.0003000000142492354, setSpeed_y: 0.0}
[    351.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#141, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    352.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#141, xc=1)
[    377.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#142, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    378.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#142, xc=1)
[    405.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#143, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    406.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#143, xc=1)
[    450.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#9, xc=1)
[    450.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[    450.0] L GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
[    450.0] L GameRomCamera[0] - Demo_OverwriteNear (#77, xc=2)
[    450.0] L GameROMPlayer - Demo_PlayASForTimeline (#121, xc=0)
[    450.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#10, xc=1)
               duration: 150.0
               {IsWaitFinish: true}
[    450.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.5, FocalLengthEnd: 1.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    450.0] E GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
               duration: 150.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[    450.0] E GameROMPlayer - Demo_PlayASForTimeline (#122, xc=0)
               duration: 150.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    462.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#82, xc=0)
               duration: 124.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text000}
[    527.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#144, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    528.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#144, xc=1)
[    549.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#145, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    550.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#145, xc=1)
[    577.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#146, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    578.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#146, xc=1)
[    586.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#82, xc=0)
[    600.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#10, xc=1)
[    600.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[    600.0] L GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
[    600.0] L GameROMPlayer - Demo_PlayASForTimeline (#122, xc=0)
[    600.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#11, xc=1)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.3440000116825104, setPos_y: 0.44200000166893005}
[    600.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 110.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 51.400001525878906, ApertureEnd: 51.400001525878906,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.600000023841858,
                 FocalLengthEnd: 1.600000023841858, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    600.0] E GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
               duration: 110.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[    600.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#105, xc=0)
               duration: 110.0
               {ASName: C05-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    600.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#118, xc=1)
               duration: 2779.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    600.0] E GameROMPlayer - Demo_PlayASForTimeline (#123, xc=0)
               duration: 110.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    601.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#11, xc=1)
[    601.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#12, xc=1)
               duration: 109.0
               {IsWaitFinish: true, setSpeed_x: 0.0003000000142492354, setSpeed_y: 0.0}
[    670.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#83, xc=0)
               duration: 83.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text001}
[    710.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#12, xc=1)
[    710.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[    710.0] L GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
[    710.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#105, xc=0)
[    710.0] L GameROMPlayer - Demo_PlayASForTimeline (#123, xc=0)
[    710.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#13, xc=1)
               duration: 354.0
               {IsWaitFinish: true}
[    710.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 354.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.7999999523162842, FocalLengthEnd: 1.7999999523162842,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    710.0] E GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
               duration: 354.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[    710.0] E GameRomCamera[0] - Demo_OverwriteNear (#78, xc=2)
               duration: 355.0
               {IsWaitFinish: true, Near: 1.0}
[    710.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#106, xc=0)
               duration: 354.0
               {ASName: C06-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    753.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#83, xc=0)
[    760.0] E EventSystemActor[0] - Demo_PlayUiActorName (#98, xc=0)
               duration: 211.0
               {ActorName: Dm_Npc_Rito_Hero, ActorType: 1, IsWaitFinish: true}
[    966.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#84, xc=0)
               duration: 207.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text014}
[    971.0] L EventSystemActor[0] - Demo_PlayUiActorName (#98, xc=0)
[   1064.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#13, xc=1)
[   1064.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[   1064.0] L GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
[   1064.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#106, xc=0)
[   1064.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#14, xc=1)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.4699999988079071, setPos_y: 0.44999998807907104}
[   1064.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 80.0, ApertureEnd: 80.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.4000000953674316, FocalLengthEnd: 3.4000000953674316,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1064.0] E GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
               duration: 150.0
               {FocusDistEnd: 7.5, FocusDistStart: 7.5, IsWaitFinish: true}
[   1064.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#107, xc=0)
               duration: 150.0
               {ASName: C07-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1064.0] E GameROMPlayer - Demo_PlayASForTimeline (#124, xc=0)
               duration: 150.0
               {ASName: C07-Link-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1065.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#14, xc=1)
[   1065.0] L GameRomCamera[0] - Demo_OverwriteNear (#78, xc=2)
[   1065.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#15, xc=1)
               duration: 149.0
               {IsWaitFinish: true, setSpeed_x: 0.0003000000142492354, setSpeed_y: 0.0}
[   1173.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#84, xc=0)
[   1214.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#15, xc=1)
[   1214.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[   1214.0] L GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
[   1214.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#107, xc=0)
[   1214.0] L GameROMPlayer - Demo_PlayASForTimeline (#124, xc=0)
[   1214.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#16, xc=1)
               duration: 635.0
               {IsWaitFinish: true}
[   1214.0] E GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 15.0, FocalLengthEnd: 15.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C08-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1214.0] E GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
               duration: 135.0
               {FocusDistEnd: 14.5, FocusDistStart: 14.5, IsWaitFinish: true}
[   1214.0] E GameRomCamera[0] - Demo_OverwriteNear (#79, xc=2)
               duration: 135.0
               {IsWaitFinish: true, Near: 14.0}
[   1214.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#108, xc=0)
               duration: 135.0
               {ASName: C08-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1226.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#85, xc=0)
               duration: 140.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text003}
[   1349.0] L GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
[   1349.0] L GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
[   1349.0] L GameRomCamera[0] - Demo_OverwriteNear (#79, xc=2)
[   1349.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#108, xc=0)
[   1349.0] E GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 27.0, ApertureEnd: 27.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.7999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 10.399999618530273, FocalLengthEnd: 10.399999618530273,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C09-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1349.0] E GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
               duration: 150.0
               {FocusDistEnd: 19.0, FocusDistStart: 19.0, IsWaitFinish: true}
[   1349.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#109, xc=0)
               duration: 150.0
               {ASName: C09-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1349.0] E GameROMPlayer - Demo_PlayASForTimeline (#125, xc=0)
               duration: 150.0
               {ASName: C09-Link-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1366.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#85, xc=0)
[   1366.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#86, xc=0)
               duration: 94.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text024}
[   1460.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#86, xc=0)
[   1475.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#87, xc=0)
               duration: 81.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text025}
[   1499.0] L GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
[   1499.0] L GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
[   1499.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#109, xc=0)
[   1499.0] L GameROMPlayer - Demo_PlayASForTimeline (#125, xc=0)
[   1499.0] E GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
               duration: 141.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 55.0, ApertureEnd: 55.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7000000476837158, FocalLengthEnd: 1.7000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C10-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1499.0] E GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
               duration: 141.0
               {FocusDistEnd: 2.299999952316284, FocusDistStart: 2.700000047683716, IsWaitFinish: true}
[   1499.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#110, xc=0)
               duration: 141.0
               {ASName: C10-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1556.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#87, xc=0)
[   1557.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#88, xc=0)
               duration: 83.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text026}
[   1640.0] L GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
[   1640.0] L GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
[   1640.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#88, xc=0)
[   1640.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#110, xc=0)
[   1640.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 209.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 102.0, ApertureEnd: 77.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.8999999761581421, DOFBlurStart: 0.8999999761581421, DOFEndFrame: 92.0,
                 DOFStartFrame: 85.0, DOFUse: true, EndFrame: -1.0, FocalLength: 0.6600000262260437, FocalLengthEnd: 1.100000023841858,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C21-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1640.0] E GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
               duration: 87.0
               {FocusDistEnd: 0.699999988079071, FocusDistStart: 0.699999988079071, IsWaitFinish: true}
[   1640.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#111, xc=0)
               duration: 209.0
               {ASName: C21-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1640.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#164, xc=0)
               duration: 209.0
               {ASName: C21-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1727.0] L GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
[   1727.0] E GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
               duration: 13.0
               {FocusDistEnd: 2.5, FocusDistStart: 0.699999988079071, IsWaitFinish: true}
[   1730.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#89, xc=0)
               duration: 109.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo156_0_Text009}
[   1740.0] L GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
[   1740.0] E GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
               duration: 68.0
               {FocusDistEnd: 3.200000047683716, FocusDistStart: 2.5, IsWaitFinish: true}
[   1743.0] E EventControllerRumble[0] - Demo_RumbleSmall (#99, xc=0)
               duration: 52.0
               {Count: 9, IsWaitFinish: true}
[   1795.0] L EventControllerRumble[0] - Demo_RumbleSmall (#99, xc=0)
[   1808.0] L GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
[   1808.0] E GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
               duration: 14.0
               {FocusDistEnd: 3.200000047683716, FocusDistStart: 3.200000047683716, IsWaitFinish: true}
[   1822.0] L GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
[   1822.0] E GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
               duration: 3.0
               {FocusDistEnd: 1.2999999523162842, FocusDistStart: 3.200000047683716, IsWaitFinish: true}
[   1825.0] L GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
[   1825.0] E GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
               duration: 24.0
               {FocusDistEnd: 1.2999999523162842, FocusDistStart: 1.2999999523162842, IsWaitFinish: true}
[   1839.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#89, xc=0)
[   1839.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#90, xc=0)
               duration: 78.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo156_0_Text010}
[   1839.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#100, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[   1849.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#16, xc=1)
[   1849.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[   1849.0] L GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
[   1849.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#100, xc=0)
[   1849.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#111, xc=0)
[   1849.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#164, xc=0)
[   1849.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#17, xc=1)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.44600000977516174, setPos_y: 0.414000004529953}
[   1849.0] E GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
               duration: 85.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 108.0, ApertureEnd: 48.79999923706055, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.8999999761581421, DOFBlurStart: 0.8999999761581421, DOFEndFrame: 10.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.5, FocalLengthEnd: 1.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C24-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1849.0] E GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
               duration: 85.0
               {FocusDistEnd: 1.399999976158142, FocusDistStart: 1.399999976158142, IsWaitFinish: true}
[   1849.0] E GameROMPlayer - Demo_PlayASForTimeline (#126, xc=0)
               duration: 85.0
               {ASName: C24-Link-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1849.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#165, xc=0)
               duration: 85.0
               {ASName: C24-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1850.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#17, xc=1)
[   1850.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#18, xc=1)
               duration: 342.0
               {IsWaitFinish: true, setSpeed_x: 0.0003000000142492354, setSpeed_y: 0.0}
[   1860.0] E EventControllerRumble[0] - Demo_RumbleLarge (#101, xc=0)
               duration: 16.0
               {Count: 1, IsWaitFinish: true}
[   1861.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#147, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   1862.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#147, xc=1)
[   1876.0] L EventControllerRumble[0] - Demo_RumbleLarge (#101, xc=0)
[   1917.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#90, xc=0)
[   1934.0] L GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
[   1934.0] L GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
[   1934.0] L GameROMPlayer - Demo_PlayASForTimeline (#126, xc=0)
[   1934.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#165, xc=0)
[   1934.0] E GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
               duration: 154.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 370.0, ApertureEnd: 370.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 0.5, FocalLengthEnd: 0.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C25-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1934.0] E GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
               duration: 81.0
               {FocusDistEnd: 1.399999976158142, FocusDistStart: 1.399999976158142, IsWaitFinish: true}
[   1934.0] E GameROMPlayer - Demo_PlayASForTimeline (#127, xc=0)
               duration: 154.0
               {ASName: C25-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1976.0] E EventControllerRumble[0] - Demo_RumbleSmall (#102, xc=0)
               duration: 95.0
               {Count: 14, IsWaitFinish: true}
[   1998.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#148, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   1999.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#148, xc=1)
[   2015.0] L GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
[   2015.0] E GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
               duration: 7.0
               {FocusDistEnd: 3.299999952316284, FocusDistStart: 1.399999976158142, IsWaitFinish: true}
[   2022.0] L GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
[   2022.0] E GameRomCamera[0] - Demo_FocusDistSetting (#66, xc=1)
               duration: 66.0
               {FocusDistEnd: 3.299999952316284, FocusDistStart: 3.299999952316284, IsWaitFinish: true}
[   2071.0] L EventControllerRumble[0] - Demo_RumbleSmall (#102, xc=0)
[   2080.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#103, xc=0)
               duration: 12.0
               {Count: 3, IsWaitFinish: true}
[   2088.0] L GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
[   2088.0] L GameRomCamera[0] - Demo_FocusDistSetting (#66, xc=1)
[   2088.0] L GameROMPlayer - Demo_PlayASForTimeline (#127, xc=0)
[   2088.0] E GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
               duration: 43.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 650.0, ApertureEnd: 650.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 0.800000011920929, FocalLengthEnd: 0.800000011920929,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C26-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2088.0] E GameRomCamera[0] - Demo_FocusDistSetting (#67, xc=1)
               duration: 43.0
               {FocusDistEnd: 13.0, FocusDistStart: 2.0, IsWaitFinish: true}
[   2088.0] E GameROMPlayer - Demo_PlayASForTimeline (#128, xc=0)
               duration: 43.0
               {ASName: C26-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2092.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#103, xc=0)
[   2093.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#149, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   2094.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#149, xc=1)
[   2131.0] L GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
[   2131.0] L GameRomCamera[0] - Demo_FocusDistSetting (#67, xc=1)
[   2131.0] L GameROMPlayer - Demo_PlayASForTimeline (#128, xc=0)
[   2131.0] E GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
               duration: 61.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 820.0, ApertureEnd: 820.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.399999976158142, DOFBlurStart: 1.399999976158142, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 0.4000000059604645, FocalLengthEnd: 0.4000000059604645,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C27-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2131.0] E GameRomCamera[0] - Demo_FocusDistSetting (#68, xc=1)
               duration: 61.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[   2131.0] E GameROMPlayer - Demo_PlayASForTimeline (#129, xc=0)
               duration: 61.0
               {ASName: C27-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2137.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#91, xc=0)
               duration: 12.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo156_0_Text029}
[   2139.0] E EventControllerRumble[0] - Demo_RumbleSmall (#104, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[   2143.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#150, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   2144.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#150, xc=1)
[   2149.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#91, xc=0)
[   2149.0] L EventControllerRumble[0] - Demo_RumbleSmall (#104, xc=0)
[   2192.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#18, xc=1)
[   2192.0] L GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
[   2192.0] L GameRomCamera[0] - Demo_FocusDistSetting (#68, xc=1)
[   2192.0] L GameROMPlayer - Demo_PlayASForTimeline (#129, xc=0)
[   2192.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#19, xc=1)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.44999998807907104, setPos_y: 0.4099999964237213}
[   2192.0] E GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
               duration: 200.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 26.0, ApertureEnd: 26.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.100000023841858, DOFBlurStart: 1.100000023841858, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 8.800000190734863, FocalLengthEnd: 8.800000190734863,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C13-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2192.0] E GameRomCamera[0] - Demo_FocusDistSetting (#69, xc=1)
               duration: 200.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[   2192.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#112, xc=0)
               duration: 200.0
               {ASName: C13-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2192.0] E GameROMPlayer - Demo_PlayASForTimeline (#130, xc=0)
               duration: 200.0
               {ASName: C13-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2193.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#19, xc=1)
[   2193.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#20, xc=1)
               duration: 557.0
               {IsWaitFinish: true, setSpeed_x: 0.0003000000142492354, setSpeed_y: 0.0}
[   2224.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#151, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   2225.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#151, xc=1)
[   2241.0] E GameROMPlayer - Demo_EmitEquipmentNoise (#152, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   2242.0] L GameROMPlayer - Demo_EmitEquipmentNoise (#152, xc=1)
[   2242.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#92, xc=0)
               duration: 135.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text027}
[   2377.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#92, xc=0)
[   2392.0] L GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
[   2392.0] L GameRomCamera[0] - Demo_FocusDistSetting (#69, xc=1)
[   2392.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#112, xc=0)
[   2392.0] L GameROMPlayer - Demo_PlayASForTimeline (#130, xc=0)
[   2392.0] E GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 97.0, ApertureEnd: 97.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.300000190734863, FocalLengthEnd: 5.300000190734863,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C14-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2392.0] E GameRomCamera[0] - Demo_FocusDistSetting (#70, xc=1)
               duration: 150.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   2392.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#113, xc=0)
               duration: 150.0
               {ASName: C14-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2392.0] E GameROMPlayer - Demo_PlayASForTimeline (#131, xc=0)
               duration: 150.0
               {ASName: C14-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2403.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#93, xc=0)
               duration: 139.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text028}
[   2542.0] L GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
[   2542.0] L GameRomCamera[0] - Demo_FocusDistSetting (#70, xc=1)
[   2542.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#93, xc=0)
[   2542.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#113, xc=0)
[   2542.0] L GameROMPlayer - Demo_PlayASForTimeline (#131, xc=0)
[   2542.0] E GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
               duration: 88.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 9.5, FocalLengthEnd: 9.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C15-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2542.0] E GameRomCamera[0] - Demo_FocusDistSetting (#71, xc=1)
               duration: 88.0
               {FocusDistEnd: 9.5, FocusDistStart: 9.5, IsWaitFinish: true}
[   2542.0] E GameRomCamera[0] - Demo_OverwriteNear (#80, xc=2)
               duration: 88.0
               {IsWaitFinish: true, Near: 6.0}
[   2542.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#114, xc=0)
               duration: 88.0
               {ASName: C15-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2542.0] E GameROMPlayer - Demo_PlayASForTimeline (#132, xc=0)
               duration: 88.0
               {ASName: C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2561.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#94, xc=0)
               duration: 51.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text012}
[   2612.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#94, xc=0)
[   2630.0] L GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
[   2630.0] L GameRomCamera[0] - Demo_FocusDistSetting (#71, xc=1)
[   2630.0] L GameRomCamera[0] - Demo_OverwriteNear (#80, xc=2)
[   2630.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#114, xc=0)
[   2630.0] L GameROMPlayer - Demo_PlayASForTimeline (#132, xc=0)
[   2630.0] E GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.2000000476837158, FocalLengthEnd: 1.2000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C16-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2630.0] E GameRomCamera[0] - Demo_FocusDistSetting (#72, xc=1)
               duration: 120.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[   2630.0] E GameROMPlayer - Demo_PlayASForTimeline (#133, xc=0)
               duration: 120.0
               {ASName: C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2750.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#20, xc=1)
[   2750.0] L GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
[   2750.0] L GameRomCamera[0] - Demo_FocusDistSetting (#72, xc=1)
[   2750.0] L GameROMPlayer - Demo_PlayASForTimeline (#133, xc=0)
[   2750.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#21, xc=1)
               duration: 379.0
               {IsWaitFinish: true}
[   2750.0] E GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 33.0, ApertureEnd: 33.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 5.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C17-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2750.0] E GameRomCamera[0] - Demo_FocusDistSetting (#73, xc=1)
               duration: 105.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[   2750.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#115, xc=0)
               duration: 105.0
               {ASName: C17-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2750.0] E GameROMPlayer - Demo_PlayASForTimeline (#134, xc=0)
               duration: 264.0
               {ASName: C17-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2751.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#95, xc=0)
               duration: 50.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text021}
[   2801.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#95, xc=0)
[   2855.0] L GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
[   2855.0] L GameRomCamera[0] - Demo_FocusDistSetting (#73, xc=1)
[   2855.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#115, xc=0)
[   2855.0] E GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
               duration: 159.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.949999988079071, DOFBlurStart: 0.949999988079071, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.2000000476837158, FocalLengthEnd: 1.2000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C18-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2855.0] E GameRomCamera[0] - Demo_FocusDistSetting (#74, xc=1)
               duration: 159.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[   2855.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#116, xc=0)
               duration: 159.0
               {ASName: C18-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2883.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#96, xc=0)
               duration: 62.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text022}
[   2945.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#96, xc=0)
[   3014.0] L GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
[   3014.0] L GameRomCamera[0] - Demo_FocusDistSetting (#74, xc=1)
[   3014.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#116, xc=0)
[   3014.0] L GameROMPlayer - Demo_PlayASForTimeline (#134, xc=0)
[   3014.0] E GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
               duration: 115.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 80.0, ApertureEnd: 80.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.0, FocalLengthEnd: 2.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C19-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3014.0] E GameRomCamera[0] - Demo_FocusDistSetting (#75, xc=1)
               duration: 115.0
               {FocusDistEnd: 4.199999809265137, FocusDistStart: 2.0, IsWaitFinish: true}
[   3014.0] E GameRomCamera[0] - Demo_OverwriteNear (#81, xc=2)
               duration: 116.0
               {IsWaitFinish: true, Near: 1.0}
[   3014.0] E GameROMPlayer - Demo_PlayASForTimeline (#135, xc=0)
               duration: 115.0
               {ASName: C19-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3129.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#21, xc=1)
[   3129.0] L GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
[   3129.0] L GameRomCamera[0] - Demo_FocusDistSetting (#75, xc=1)
[   3129.0] L GameROMPlayer - Demo_PlayASForTimeline (#135, xc=0)
[   3129.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#22, xc=1)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.3959999978542328, setPos_y: 0.7639999985694885}
[   3129.0] E GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
               duration: 250.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 48.0, SceneName: C20-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3129.0] E GameRomCamera[0] - Demo_FocusDistSetting (#76, xc=1)
               duration: 250.0
               {FocusDistEnd: 21.0, FocusDistStart: 18.0, IsWaitFinish: true}
[   3129.0] E Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#117, xc=0)
               duration: 250.0
               {ASName: C20-Npc_Rito_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3129.0] E GameROMPlayer - Demo_PlayASForTimeline (#136, xc=0)
               duration: 250.0
               {ASName: C20-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3130.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#22, xc=1)
[   3130.0] L GameRomCamera[0] - Demo_OverwriteNear (#81, xc=2)
[   3130.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#23, xc=1)
               duration: 249.0
               {IsWaitFinish: true, setSpeed_x: 0.0003000000142492354, setSpeed_y: 0.0}
[   3189.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#97, xc=0)
               duration: 115.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo156_0_Text023}
[   3304.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#97, xc=0)
[   3319.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 60.0
               {Color: 0, DispMode: Auto, Frame: 1, IsWaitFinish: true}
[   3379.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   3379.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[   3379.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[   3379.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[   3379.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#23, xc=1)
[   3379.0] L GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
[   3379.0] L GameRomCamera[0] - Demo_FocusDistSetting (#76, xc=1)
[   3379.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#117, xc=0)
[   3379.0] L Dm_Npc_Rito_Hero[0] - Demo_PlayASForTimeline (#118, xc=1)
[   3379.0] L GameROMPlayer - Demo_PlayASForTimeline (#136, xc=0)
[   3379.0] L Item_Conductor - Demo_Bind (#155, xc=0)
[   3379.0] L DgnObj_IbutsuWindWingL_A_01[0] - Demo_PlayASForTimeline (#157, xc=0)
[   3379.0] L DgnObj_IbutsuWindWingR_A_01[0] - Demo_PlayASForTimeline (#159, xc=0)
[   3379.0] L RemainsClearTerminal[1] - Demo_PlayASForTimeline (#161, xc=0)
[   3379.0] L DgnObj_RemainsClearTerminalBody_A_01[2] - Demo_PlayASForTimeline (#163, xc=0)
