-------- Event timeline: Demo163_0 --------
actors: 17
clips: 160
oneshots: 0
cuts: 26
duration: 3910.0
subtimelines: ['Demo163_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 105.0
x4: 0
params: (none)

Cut: C03
start time: 195.0
x4: 0
params: (none)

Cut: C04
start time: 420.0
x4: 0
params: (none)

Cut: C05
start time: 465.0
x4: 0
params: (none)

Cut: C06
start time: 525.0
x4: 0
params: (none)

Cut: C07
start time: 675.0
x4: 0
params: (none)

Cut: C08
start time: 975.0
x4: 0
params: (none)

Cut: C09
start time: 1125.0
x4: 0
params: (none)

Cut: C10
start time: 1260.0
x4: 0
params: (none)

Cut: C11
start time: 1395.0
x4: 0
params: (none)

Cut: C12
start time: 1485.0
x4: 0
params: (none)

Cut: C13
start time: 1680.0
x4: 0
params: (none)

Cut: C14
start time: 1920.0
x4: 0
params: (none)

Cut: C15
start time: 1980.0
x4: 0
params: (none)

Cut: C16
start time: 2160.0
x4: 0
params: (none)

Cut: C17
start time: 2370.0
x4: 0
params: (none)

Cut: C18
start time: 2565.0
x4: 0
params: (none)

Cut: C26
start time: 2730.0
x4: 0
params: (none)

Cut: C19
start time: 2875.0
x4: 0
params: (none)

Cut: C20
start time: 3025.0
x4: 0
params: (none)

Cut: C21
start time: 3175.0
x4: 0
params: (none)

Cut: C22
start time: 3415.0
x4: 0
params: (none)

Cut: C23
start time: 3475.0
x4: 0
params: (none)

Cut: C24
start time: 3535.0
x4: 0
params: (none)

Cut: C25
start time: 3790.0
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
x36: 4
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetSkyPaletteType', 'Demo_SetWind', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleMiddle', 'Demo_RumbleLarge', 'Demo_RumbleSmall']
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

Actor: Dm_Locator[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_IbutsuWaterBodyOutside_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_IbutsuWaterBodyInside_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[1]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 3.0, PosZ: -59.5, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_RemainsClearTerminalBody_A_01[2]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 3.0, PosZ: -59.5, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise', 'Demo_PlayASForDemo']
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

Actor: Dm_Npc_Zora_Hero[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 3910.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 3910.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
               duration: 675.0
               {IsWaitFinish: true, angleY: -14.399999618530273}
[      0.0] E WorldManagerControl[0] - Demo_SetSkyPaletteType (#9, xc=1)
               duration: 3910.0
               {IsWaitFinish: true, SkyPalette: 2}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#10, xc=2)
               duration: 3910.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#11, xc=3)
               duration: 3910.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 105.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[      0.0] E DgnObj_IbutsuWaterBodyOutside_A_01[0] - Demo_PlayASForTimeline (#100, xc=0)
               duration: 135.0
               {ASName: BeforeClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_IbutsuWaterBodyInside_A_01[0] - Demo_PlayASForTimeline (#102, xc=0)
               duration: 135.0
               {ASName: BeforeClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsClearTerminal[1] - Demo_PlayASForTimeline (#104, xc=0)
               duration: 135.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[2] - Demo_PlayASForTimeline (#106, xc=0)
               duration: 195.0
               {ASName: Standby, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#108, xc=0)
               duration: 105.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Item_Conductor[0] - Demo_EventBind (#142, xc=0)
               duration: 195.0
               {ActorName: GameROMPlayer, IsContinueBind: true, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0,
                 RotOffsetY: 180.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: '0'}
[      0.0] E Item_Conductor - Demo_VisibleOff (#143, xc=0)
               duration: 195.0
               {IsWaitFinish: true}
[     17.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#127, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[     18.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#127, xc=1)
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     38.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#128, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[     39.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#128, xc=1)
[     66.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#129, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[     67.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#129, xc=1)
[     96.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#130, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[     97.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#130, xc=1)
[    105.0] L GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
[    105.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[    105.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#108, xc=0)
[    105.0] E GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    105.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 90.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[    105.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#109, xc=0)
               duration: 90.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    111.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#131, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    112.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#131, xc=1)
[    135.0] L DgnObj_IbutsuWaterBodyOutside_A_01[0] - Demo_PlayASForTimeline (#100, xc=0)
[    135.0] L DgnObj_IbutsuWaterBodyInside_A_01[0] - Demo_PlayASForTimeline (#102, xc=0)
[    135.0] L RemainsClearTerminal[1] - Demo_PlayASForTimeline (#104, xc=0)
[    135.0] E DgnObj_IbutsuWaterBodyOutside_A_01[0] - Demo_PlayASForTimeline (#101, xc=0)
               duration: 3775.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    135.0] E DgnObj_IbutsuWaterBodyInside_A_01[0] - Demo_PlayASForTimeline (#103, xc=0)
               duration: 3775.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    135.0] E RemainsClearTerminal[1] - Demo_PlayASForTimeline (#105, xc=0)
               duration: 3775.0
               {ASName: Demo_Activate, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    195.0] L GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
[    195.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[    195.0] L DgnObj_RemainsClearTerminalBody_A_01[2] - Demo_PlayASForTimeline (#106, xc=0)
[    195.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#109, xc=0)
[    195.0] L Dm_Item_Conductor[0] - Demo_EventBind (#142, xc=0)
[    195.0] L Item_Conductor - Demo_VisibleOff (#143, xc=0)
[    195.0] E GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
               duration: 225.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.699999988079071, DOFBlurStart: 0.699999988079071, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.399999976158142, FocalLengthEnd: 1.399999976158142,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 20.0, SceneName: C03-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    195.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 225.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[    195.0] E DgnObj_RemainsClearTerminalBody_A_01[2] - Demo_PlayASForTimeline (#107, xc=0)
               duration: 3715.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    195.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#110, xc=0)
               duration: 225.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    195.0] E Item_Conductor - Demo_Bind (#144, xc=0)
               duration: 3465.0
               {ActorName: GameROMPlayer, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0, RotOffsetY: 0.0,
                 RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0, UniqueName: ''}
[    225.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#132, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    226.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#132, xc=1)
[    269.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#133, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    270.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#133, xc=1)
[    278.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#73, xc=0)
               duration: 162.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text017}
[    297.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#134, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    298.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#134, xc=1)
[    318.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#135, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    319.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#135, xc=1)
[    344.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#136, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    345.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#136, xc=1)
[    380.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#137, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    381.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#137, xc=1)
[    420.0] L GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
[    420.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[    420.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#110, xc=0)
[    420.0] E GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
               duration: 45.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.5, FocalLengthEnd: 1.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    420.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 45.0
               {FocusDistEnd: 8.0, FocusDistStart: 8.0, IsWaitFinish: true}
[    420.0] E GameROMPlayer[0] - Demo_PlayASForDemo (#111, xc=0)
               duration: 45.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: -1.0, SeqBank: 0, TargetIndex: -1}
[    440.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#73, xc=0)
[    465.0] L GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
[    465.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[    465.0] L GameROMPlayer[0] - Demo_PlayASForDemo (#111, xc=0)
[    465.0] E GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
               duration: 60.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.5, FocalLengthEnd: 1.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    465.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 60.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[    465.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#112, xc=0)
               duration: 60.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    468.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#74, xc=0)
               duration: 56.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text018}
[    524.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#74, xc=0)
[    525.0] L GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
[    525.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
[    525.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#112, xc=0)
[    525.0] E GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 45.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.149999976158142, DOFEndFrame: 50.0,
                 DOFStartFrame: 20.0, DOFUse: true, EndFrame: -1.0, FocalLength: 10.0, FocalLengthEnd: 23.200000762939453,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    525.0] E GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
               duration: 150.0
               {FocusDistEnd: 2.700000047683716, FocusDistStart: 2.700000047683716, IsWaitFinish: true}
[    525.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#113, xc=0)
               duration: 150.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    525.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#145, xc=0)
               duration: 150.0
               {ASName: C06-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    526.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#159, xc=1)
               duration: 3264.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    546.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#75, xc=0)
               duration: 34.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text019}
[    551.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#138, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    552.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#138, xc=1)
[    580.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#75, xc=0)
[    626.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#76, xc=0)
               duration: 67.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text020}
[    675.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#4, xc=0)
[    675.0] L GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
[    675.0] L GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
[    675.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#113, xc=0)
[    675.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#145, xc=0)
[    675.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
               duration: 300.0
               {IsWaitFinish: true, angleY: -23.040000915527344}
[    675.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 300.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.600000023841858, FocalLengthEnd: 1.600000023841858,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    675.0] E GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
               duration: 300.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    675.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#146, xc=0)
               duration: 300.0
               {ASName: C07-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    693.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#76, xc=0)
[    713.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#77, xc=0)
               duration: 47.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text021}
[    760.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#77, xc=0)
[    760.0] E EventSystemActor[0] - Demo_PlayUiActorName (#97, xc=0)
               duration: 180.0
               {ActorName: Dm_Npc_Zora_Hero, ActorType: 1, IsWaitFinish: true}
[    940.0] L EventSystemActor[0] - Demo_PlayUiActorName (#97, xc=0)
[    975.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=0)
[    975.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[    975.0] L GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
[    975.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#146, xc=0)
[    975.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 1395.0
               {IsWaitFinish: true, angleY: -14.399999618530273}
[    975.0] E GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C08-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    975.0] E GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
               duration: 150.0
               {FocusDistEnd: 2.0999999046325684, FocusDistStart: 2.0999999046325684, IsWaitFinish: true}
[    975.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#147, xc=0)
               duration: 150.0
               {ASName: C08-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    999.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#78, xc=0)
               duration: 43.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text022}
[   1042.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#78, xc=0)
[   1072.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#79, xc=0)
               duration: 82.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text023}
[   1125.0] L GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
[   1125.0] L GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
[   1125.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#147, xc=0)
[   1125.0] E GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 25.0, ApertureEnd: 25.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2999999523162842, DOFBlurStart: 1.2999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 11.0, FocalLengthEnd: 11.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C09-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1125.0] E GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
               duration: 135.0
               {FocusDistEnd: 3.799999952316284, FocusDistStart: 3.799999952316284, IsWaitFinish: true}
[   1125.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#114, xc=0)
               duration: 135.0
               {ASName: C09-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1125.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#148, xc=0)
               duration: 135.0
               {ASName: C09-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1154.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#79, xc=0)
[   1178.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#80, xc=0)
               duration: 40.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text024}
[   1218.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#80, xc=0)
[   1260.0] L GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
[   1260.0] L GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
[   1260.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#114, xc=0)
[   1260.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#148, xc=0)
[   1260.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 40.0, ApertureEnd: 40.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.299999952316284, FocalLengthEnd: 2.299999952316284,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C10-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1260.0] E GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
               duration: 135.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[   1260.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#149, xc=0)
               duration: 225.0
               {ASName: C10-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1261.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#81, xc=0)
               duration: 101.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text025}
[   1362.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#81, xc=0)
[   1395.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[   1395.0] L GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
[   1395.0] E GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.0, FocalLengthEnd: 2.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C11-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1395.0] E GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
               duration: 90.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[   1395.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#115, xc=0)
               duration: 90.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1408.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#82, xc=0)
               duration: 120.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text026}
[   1485.0] L GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
[   1485.0] L GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
[   1485.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#115, xc=0)
[   1485.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#149, xc=0)
[   1485.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 195.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 300.0, ApertureEnd: 430.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 1.5, DOFEndFrame: 180.0, DOFStartFrame: 120.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7999999523162842, FocalLengthEnd: 2.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C12-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1485.0] E GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
               duration: 85.0
               {FocusDistEnd: 1.5, FocusDistStart: 2.299999952316284, IsWaitFinish: true}
[   1485.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#98, xc=0)
               duration: 195.0
               {ASName: C12-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1485.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#116, xc=0)
               duration: 195.0
               {ASName: C12-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1485.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#150, xc=0)
               duration: 675.0
               {ASName: C12-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1528.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#82, xc=0)
[   1570.0] L GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
[   1570.0] E GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
               duration: 45.0
               {FocusDistEnd: 3.299999952316284, FocusDistStart: 1.5, IsWaitFinish: true}
[   1615.0] L GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
[   1615.0] E GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
               duration: 65.0
               {FocusDistEnd: 11.0, FocusDistStart: 3.299999952316284, IsWaitFinish: true}
[   1638.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#69, xc=0)
               duration: 11.0
               {Count: 1, IsWaitFinish: true}
[   1649.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#69, xc=0)
[   1680.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[   1680.0] L GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
[   1680.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#98, xc=0)
[   1680.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#116, xc=0)
[   1680.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 240.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 1.5, DOFEndFrame: 90.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.399999976158142, FocalLengthEnd: 1.399999976158142,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C13-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1680.0] E GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
               duration: 105.0
               {FocusDistEnd: 4.0, FocusDistStart: 1.5, IsWaitFinish: true}
[   1680.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#99, xc=0)
               duration: 240.0
               {ASName: C13-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1680.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#117, xc=0)
               duration: 240.0
               {ASName: C13-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1717.0] E EventControllerRumble[0] - Demo_RumbleLarge (#70, xc=0)
               duration: 12.0
               {Count: 1, IsWaitFinish: true}
[   1729.0] L EventControllerRumble[0] - Demo_RumbleLarge (#70, xc=0)
[   1730.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#139, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   1731.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#139, xc=1)
[   1785.0] L GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
[   1785.0] E GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
               duration: 114.0
               {FocusDistEnd: 6.5, FocusDistStart: 4.0, IsWaitFinish: true}
[   1800.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#83, xc=0)
               duration: 73.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo163_0_Text040}
[   1808.0] E EventControllerRumble[0] - Demo_RumbleSmall (#71, xc=0)
               duration: 110.0
               {Count: 16, IsWaitFinish: true}
[   1873.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#83, xc=0)
[   1899.0] L GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
[   1899.0] E GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
               duration: 21.0
               {FocusDistEnd: 6.5, FocusDistStart: 6.5, IsWaitFinish: true}
[   1918.0] L EventControllerRumble[0] - Demo_RumbleSmall (#71, xc=0)
[   1920.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[   1920.0] L GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
[   1920.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#99, xc=0)
[   1920.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#117, xc=0)
[   1920.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 60.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 360.0, ApertureEnd: 360.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.600000023841858, FocalLengthEnd: 1.600000023841858,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C14-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1920.0] E GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
               duration: 60.0
               {FocusDistEnd: 2.200000047683716, FocusDistStart: 2.200000047683716, IsWaitFinish: true}
[   1920.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#118, xc=0)
               duration: 60.0
               {ASName: C14-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1963.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#84, xc=0)
               duration: 129.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text027}
[   1964.0] E EventControllerRumble[0] - Demo_RumbleSmall (#72, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[   1970.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#140, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   1971.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#140, xc=1)
[   1974.0] L EventControllerRumble[0] - Demo_RumbleSmall (#72, xc=0)
[   1980.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[   1980.0] L GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
[   1980.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#118, xc=0)
[   1980.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C15-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1980.0] E GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
               duration: 180.0
               {FocusDistEnd: 3.799999952316284, FocusDistStart: 3.799999952316284, IsWaitFinish: true}
[   1980.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#119, xc=0)
               duration: 180.0
               {ASName: C15-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2092.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#84, xc=0)
[   2100.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#85, xc=0)
               duration: 254.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text028}
[   2160.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[   2160.0] L GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
[   2160.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#119, xc=0)
[   2160.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#150, xc=0)
[   2160.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 290.0, ApertureEnd: 81.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.899999976158142, DOFBlurStart: 1.399999976158142, DOFEndFrame: 90.0,
                 DOFStartFrame: 60.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.240000009536743, FocalLengthEnd: 10.600000381469727,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C16-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2160.0] E GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
               duration: 210.0
               {FocusDistEnd: 2.200000047683716, FocusDistStart: 2.200000047683716, IsWaitFinish: true}
[   2160.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#120, xc=0)
               duration: 210.0
               {ASName: C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2160.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#151, xc=0)
               duration: 210.0
               {ASName: C16-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2354.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#85, xc=0)
[   2370.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[   2370.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[   2370.0] L GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
[   2370.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#120, xc=0)
[   2370.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#151, xc=0)
[   2370.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 195.0
               {IsWaitFinish: true, angleY: -23.040000915527344}
[   2370.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 195.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 18.0, FocalLengthEnd: 18.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C17-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2370.0] E GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
               duration: 195.0
               {FocusDistEnd: 18.0, FocusDistStart: 18.0, IsWaitFinish: true}
[   2370.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#121, xc=0)
               duration: 195.0
               {ASName: C17-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2370.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#152, xc=0)
               duration: 360.0
               {ASName: C17-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2373.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#86, xc=0)
               duration: 49.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text029}
[   2422.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#86, xc=0)
[   2427.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#87, xc=0)
               duration: 65.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text030}
[   2492.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#87, xc=0)
[   2495.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#88, xc=0)
               duration: 76.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text031}
[   2565.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[   2565.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[   2565.0] L GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
[   2565.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#121, xc=0)
[   2565.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 1345.0
               {IsWaitFinish: true, angleY: -14.399999618530273}
[   2565.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 165.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C18-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2565.0] E GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
               duration: 165.0
               {FocusDistEnd: 3.700000047683716, FocusDistStart: 3.700000047683716, IsWaitFinish: true}
[   2565.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#122, xc=0)
               duration: 165.0
               {ASName: C18-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2571.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#88, xc=0)
[   2579.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#89, xc=0)
               duration: 181.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text032}
[   2730.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[   2730.0] L GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
[   2730.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#122, xc=0)
[   2730.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#152, xc=0)
[   2730.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 145.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 53.0, ApertureEnd: 53.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C26-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2730.0] E GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
               duration: 145.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[   2730.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#123, xc=0)
               duration: 145.0
               {ASName: C26-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2730.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#153, xc=0)
               duration: 295.0
               {ASName: C26-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2760.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#89, xc=0)
[   2803.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#90, xc=0)
               duration: 113.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text033}
[   2875.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[   2875.0] L GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
[   2875.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#123, xc=0)
[   2875.0] E GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 80.0, ApertureEnd: 80.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 0.6000000238418579, FocalLengthEnd: 0.6000000238418579,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C19-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2875.0] E GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
               duration: 150.0
               {FocusDistEnd: 0.800000011920929, FocusDistStart: 0.800000011920929, IsWaitFinish: true}
[   2875.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#124, xc=0)
               duration: 540.0
               {ASName: C19-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2916.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#90, xc=0)
[   2952.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#91, xc=0)
               duration: 39.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text034}
[   2991.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#91, xc=0)
[   3000.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#141, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   3001.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#141, xc=1)
[   3025.0] L GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
[   3025.0] L GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
[   3025.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#153, xc=0)
[   3025.0] E GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 19.0, ApertureEnd: 19.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 4.699999809265137, FocalLengthEnd: 4.699999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 5.0, SceneName: C20-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   3025.0] E GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
               duration: 150.0
               {FocusDistEnd: 4.199999809265137, FocusDistStart: 4.199999809265137, IsWaitFinish: true}
[   3025.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#154, xc=0)
               duration: 150.0
               {ASName: C20-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3064.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#92, xc=0)
               duration: 81.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text035}
[   3145.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#92, xc=0)
[   3175.0] L GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
[   3175.0] L GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
[   3175.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#154, xc=0)
[   3175.0] E GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
               duration: 240.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 2.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C21-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3175.0] E GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
               duration: 240.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[   3175.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#155, xc=0)
               duration: 240.0
               {ASName: C21-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3194.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#93, xc=0)
               duration: 213.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text036}
[   3407.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#93, xc=0)
[   3415.0] L GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
[   3415.0] L GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
[   3415.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#124, xc=0)
[   3415.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#155, xc=0)
[   3415.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 60.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 5.0, SceneName: C22-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3415.0] E GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
               duration: 60.0
               {FocusDistEnd: 5.300000190734863, FocusDistStart: 5.300000190734863, IsWaitFinish: true}
[   3415.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#125, xc=0)
               duration: 120.0
               {ASName: C22-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3415.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#156, xc=0)
               duration: 60.0
               {ASName: C22-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3430.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#94, xc=0)
               duration: 27.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text037}
[   3457.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#94, xc=0)
[   3475.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[   3475.0] L GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
[   3475.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#156, xc=0)
[   3475.0] E GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
               duration: 60.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 300.0, ApertureEnd: 300.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 5.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C23-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3475.0] E GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
               duration: 60.0
               {FocusDistEnd: 19.0, FocusDistStart: 19.0, IsWaitFinish: true}
[   3475.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#157, xc=0)
               duration: 60.0
               {ASName: C23-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3488.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#95, xc=0)
               duration: 92.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text038}
[   3535.0] L GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
[   3535.0] L GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
[   3535.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#125, xc=0)
[   3535.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#157, xc=0)
[   3535.0] E GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
               duration: 255.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 2.0, DOFEndFrame: 140.0, DOFStartFrame: 125.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C24-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3535.0] E GameRomCamera[0] - Demo_FocusDistSetting (#66, xc=1)
               duration: 105.0
               {FocusDistEnd: 1.399999976158142, FocusDistStart: 1.399999976158142, IsWaitFinish: true}
[   3535.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#126, xc=0)
               duration: 125.0
               {ASName: C24-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3535.0] E Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#158, xc=0)
               duration: 255.0
               {ASName: C24-Npc_Zora_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3580.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#95, xc=0)
[   3605.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#96, xc=0)
               duration: 39.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo163_0_Text039}
[   3640.0] L GameRomCamera[0] - Demo_FocusDistSetting (#66, xc=1)
[   3640.0] E GameRomCamera[0] - Demo_FocusDistSetting (#67, xc=1)
               duration: 100.0
               {FocusDistEnd: 3.299999952316284, FocusDistStart: 1.399999976158142, IsWaitFinish: true}
[   3644.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#96, xc=0)
[   3660.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#126, xc=0)
[   3660.0] L Item_Conductor - Demo_Bind (#144, xc=0)
[   3740.0] L GameRomCamera[0] - Demo_FocusDistSetting (#67, xc=1)
[   3740.0] E GameRomCamera[0] - Demo_FocusDistSetting (#68, xc=1)
               duration: 50.0
               {FocusDistEnd: 3.299999952316284, FocusDistStart: 3.299999952316284, IsWaitFinish: true}
[   3790.0] L GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
[   3790.0] L GameRomCamera[0] - Demo_FocusDistSetting (#68, xc=1)
[   3790.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#158, xc=0)
[   3790.0] L Dm_Npc_Zora_Hero[0] - Demo_PlayASForTimeline (#159, xc=1)
[   3790.0] E GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C25-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3879.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   3909.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   3910.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[   3910.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[   3910.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
[   3910.0] L WorldManagerControl[0] - Demo_SetSkyPaletteType (#9, xc=1)
[   3910.0] L WorldManagerControl[0] - Demo_SetWind (#10, xc=2)
[   3910.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#11, xc=3)
[   3910.0] L GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
[   3910.0] L DgnObj_IbutsuWaterBodyOutside_A_01[0] - Demo_PlayASForTimeline (#101, xc=0)
[   3910.0] L DgnObj_IbutsuWaterBodyInside_A_01[0] - Demo_PlayASForTimeline (#103, xc=0)
[   3910.0] L RemainsClearTerminal[1] - Demo_PlayASForTimeline (#105, xc=0)
[   3910.0] L DgnObj_RemainsClearTerminalBody_A_01[2] - Demo_PlayASForTimeline (#107, xc=0)
