-------- Event timeline: Demo161_0 --------
actors: 15
clips: 154
oneshots: 0
cuts: 24
duration: 3974.0
subtimelines: ['Demo161_0_effect']
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

Cut: C04
start time: 345.0
x4: 0
params: (none)

Cut: C05
start time: 435.0
x4: 0
params: (none)

Cut: C25
start time: 580.0
x4: 0
params: (none)

Cut: C06
start time: 760.0
x4: 0
params: (none)

Cut: C07
start time: 960.0
x4: 0
params: (none)

Cut: C08
start time: 1210.0
x4: 0
params: (none)

Cut: C09
start time: 1375.0
x4: 0
params: (none)

Cut: C10
start time: 1680.0
x4: 0
params: (none)

Cut: C11
start time: 1845.0
x4: 0
params: (none)

Cut: C12
start time: 2055.0
x4: 0
params: (none)

Cut: C13
start time: 2265.0
x4: 0
params: (none)

Cut: C14
start time: 2633.0
x4: 0
params: (none)

Cut: C23
start time: 2933.0
x4: 0
params: (none)

Cut: C24
start time: 3008.0
x4: 0
params: (none)

Cut: C15
start time: 3113.0
x4: 0
params: (none)

Cut: C16
start time: 3233.0
x4: 0
params: (none)

Cut: C17
start time: 3338.0
x4: 0
params: (none)

Cut: C18
start time: 3458.0
x4: 0
params: (none)

Cut: C19
start time: 3588.0
x4: 0
params: (none)

Cut: C20
start time: 3663.0
x4: 0
params: (none)

Cut: C21
start time: 3738.0
x4: 0
params: (none)

Cut: C22
start time: 3793.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

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
x36: 3
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleMiddle', 'Demo_RumbleSmall', 'Demo_RumbleLarge']
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

Actor: RemainsClearTerminal[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 22.5, PosZ: 5.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_RemainsClearTerminalBody_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 22.5, PosZ: 5.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Item_Conductor[0]
x36: 1
actions: ['Demo_EventBind']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Dm_Npc_Goron_Hero[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Item_Conductor
x36: 1
actions: ['Demo_Bind', 'Demo_VisibleOff']
params: {CreateMode: 3, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#2, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 3974.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 3974.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
               duration: 3974.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=1)
               duration: 435.0
               {IsWaitFinish: true, angleY: -85.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#11, xc=2)
               duration: 3974.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
               duration: 135.0
               {FocusDistEnd: 2.200000047683716, FocusDistStart: 2.200000047683716, IsWaitFinish: true}
[      0.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#85, xc=0)
               duration: 60.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#87, xc=0)
               duration: 135.0
               {ASName: Standby, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Item_Conductor[0] - Demo_EventBind (#89, xc=0)
               duration: 135.0
               {ActorName: GameROMPlayer, IsContinueBind: false, IsWaitFinish: true, NodeName: Weapon_L, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#90, xc=0)
               duration: 135.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Item_Conductor - Demo_VisibleOff (#152, xc=0)
               duration: 135.0
               {IsWaitFinish: true}
[     30.0] L Fader[0] - Demo_FadeIn (#2, xc=0)
[     60.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#85, xc=0)
[     60.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#86, xc=0)
               duration: 3914.0
               {ASName: Demo_Activate, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    135.0] L GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
[    135.0] L GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
[    135.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#87, xc=0)
[    135.0] L Dm_Item_Conductor[0] - Demo_EventBind (#89, xc=0)
[    135.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#90, xc=0)
[    135.0] L Item_Conductor - Demo_VisibleOff (#152, xc=0)
[    135.0] E GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    135.0] E GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
               duration: 210.0
               {FocusDistEnd: 17.0, FocusDistStart: 17.0, IsWaitFinish: true}
[    135.0] E DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#88, xc=0)
               duration: 3839.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    135.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#91, xc=0)
               duration: 210.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    135.0] E Item_Conductor - Demo_Bind (#153, xc=0)
               duration: 3839.0
               {ActorName: GameROMPlayer, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0, RotOffsetY: 0.0,
                 RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0, UniqueName: ''}
[    224.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#124, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    225.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#124, xc=1)
[    248.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#125, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    249.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#125, xc=1)
[    261.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#126, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    262.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#126, xc=1)
[    298.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#127, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    299.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#127, xc=1)
[    345.0] L GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
[    345.0] L GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
[    345.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#91, xc=0)
[    345.0] E GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    345.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 90.0
               {FocusDistEnd: 1.7999999523162842, FocusDistStart: 1.7999999523162842, IsWaitFinish: true}
[    345.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#92, xc=0)
               duration: 90.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    435.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=1)
[    435.0] L GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
[    435.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[    435.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#92, xc=0)
[    435.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=1)
               duration: 2198.0
               {IsWaitFinish: true, angleY: -95.0}
[    435.0] E GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
               duration: 145.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    435.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 145.0
               {FocusDistEnd: 1.899999976158142, FocusDistStart: 1.899999976158142, IsWaitFinish: true}
[    435.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#93, xc=0)
               duration: 145.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    435.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#137, xc=0)
               duration: 145.0
               {ASName: C05-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    435.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#151, xc=1)
               duration: 3539.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    446.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#74, xc=0)
               duration: 45.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo161_0_Text013}
[    482.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#128, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    483.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#128, xc=1)
[    491.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#74, xc=0)
[    505.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#129, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    506.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#129, xc=1)
[    541.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#130, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    542.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#130, xc=1)
[    555.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#131, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    556.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#131, xc=1)
[    575.0] E EventSystemActor[0] - Demo_PlayUiActorName (#73, xc=0)
               duration: 180.0
               {ActorName: Dm_Npc_Goron_Hero, ActorType: 1, IsWaitFinish: true}
[    580.0] L GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
[    580.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[    580.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#93, xc=0)
[    580.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#137, xc=0)
[    580.0] E GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C25-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    580.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 180.0
               {FocusDistEnd: 5.5, FocusDistStart: 5.5, IsWaitFinish: true}
[    580.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#138, xc=0)
               duration: 180.0
               {ASName: C25-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    755.0] L EventSystemActor[0] - Demo_PlayUiActorName (#73, xc=0)
[    755.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#94, xc=0)
               duration: 205.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    760.0] L GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
[    760.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[    760.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#138, xc=0)
[    760.0] E GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
               duration: 200.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    760.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 200.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    760.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#139, xc=0)
               duration: 200.0
               {ASName: C06-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    782.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#75, xc=0)
               duration: 178.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo161_0_Text014}
[    960.0] L GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
[    960.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[    960.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#75, xc=0)
[    960.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#94, xc=0)
[    960.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#139, xc=0)
[    960.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 250.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C07-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    960.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 250.0
               {FocusDistEnd: 6.199999809265137, FocusDistStart: 6.199999809265137, IsWaitFinish: true}
[    960.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#95, xc=0)
               duration: 250.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    960.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#140, xc=0)
               duration: 250.0
               {ASName: C07-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1003.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#76, xc=0)
               duration: 180.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo161_0_Text015}
[   1183.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#76, xc=0)
[   1210.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[   1210.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
[   1210.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#95, xc=0)
[   1210.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#140, xc=0)
[   1210.0] E GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
               duration: 165.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C08-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1210.0] E GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
               duration: 165.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[   1210.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#77, xc=0)
               duration: 90.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo161_0_Text016}
[   1210.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#96, xc=0)
               duration: 165.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1300.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#77, xc=0)
[   1375.0] L GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
[   1375.0] L GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
[   1375.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#96, xc=0)
[   1375.0] E GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
               duration: 305.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C09-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1375.0] E GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
               duration: 305.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[   1375.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#97, xc=0)
               duration: 250.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1375.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#141, xc=0)
               duration: 305.0
               {ASName: C09-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1378.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#78, xc=0)
               duration: 302.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo161_0_Text010}
[   1625.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#97, xc=0)
[   1625.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#98, xc=0)
               duration: 55.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1680.0] L GameRomCamera[0] - Demo_CameraAnim (#20, xc=0)
[   1680.0] L GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
[   1680.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#78, xc=0)
[   1680.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#98, xc=0)
[   1680.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#141, xc=0)
[   1680.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 165.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C10-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1680.0] E GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
               duration: 165.0
               {FocusDistEnd: 62.0, FocusDistStart: 62.0, IsWaitFinish: true}
[   1680.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#99, xc=0)
               duration: 165.0
               {ASName: C10-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1680.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#142, xc=0)
               duration: 165.0
               {ASName: C10-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1718.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#79, xc=0)
               duration: 300.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo161_0_Text003}
[   1845.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[   1845.0] L GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
[   1845.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#99, xc=0)
[   1845.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#142, xc=0)
[   1845.0] E GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C11-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1845.0] E GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
               duration: 210.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[   1845.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#100, xc=0)
               duration: 210.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1845.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#143, xc=0)
               duration: 210.0
               {ASName: C11-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2018.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#79, xc=0)
[   2055.0] L GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
[   2055.0] L GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
[   2055.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#100, xc=0)
[   2055.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#143, xc=0)
[   2055.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C12-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2055.0] E GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
               duration: 210.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[   2055.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#101, xc=0)
               duration: 210.0
               {ASName: C12-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2055.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#144, xc=0)
               duration: 210.0
               {ASName: C12-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2091.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#80, xc=0)
               duration: 431.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo161_0_Text012}
[   2265.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[   2265.0] L GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
[   2265.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#101, xc=0)
[   2265.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#144, xc=0)
[   2265.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#0, xc=0)
               duration: 368.0
               {ASName: C13-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2265.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 368.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C13-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2265.0] E GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
               duration: 368.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[   2265.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#102, xc=0)
               duration: 165.0
               {ASName: C10-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2265.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#145, xc=0)
               duration: 368.0
               {ASName: C13-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2430.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#102, xc=0)
[   2430.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#103, xc=0)
               duration: 203.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2492.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#66, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[   2502.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#66, xc=0)
[   2522.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#80, xc=0)
[   2536.0] E EventControllerRumble[0] - Demo_RumbleSmall (#67, xc=0)
               duration: 50.0
               {Count: 11, IsWaitFinish: true}
[   2559.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#81, xc=0)
               duration: 167.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo161_0_Text007}
[   2586.0] L EventControllerRumble[0] - Demo_RumbleSmall (#67, xc=0)
[   2626.0] E EventControllerRumble[0] - Demo_RumbleLarge (#68, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[   2633.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#0, xc=0)
[   2633.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=1)
[   2633.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[   2633.0] L GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
[   2633.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#103, xc=0)
[   2633.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#145, xc=0)
[   2633.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#1, xc=0)
               duration: 300.0
               {ASName: C14-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2633.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=1)
               duration: 600.0
               {IsWaitFinish: true, angleY: -138.0}
[   2633.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 300.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C14-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2633.0] E GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
               duration: 67.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   2633.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#104, xc=0)
               duration: 300.0
               {ASName: C14-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2636.0] L EventControllerRumble[0] - Demo_RumbleLarge (#68, xc=0)
[   2651.0] E EventControllerRumble[0] - Demo_RumbleLarge (#69, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[   2660.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#132, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   2661.0] L EventControllerRumble[0] - Demo_RumbleLarge (#69, xc=0)
[   2661.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#132, xc=1)
[   2700.0] L GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
[   2700.0] E GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
               duration: 25.0
               {FocusDistEnd: 3.5, FocusDistStart: 1.0, IsWaitFinish: true}
[   2725.0] L GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
[   2726.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#81, xc=0)
[   2726.0] E GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
               duration: 207.0
               {FocusDistEnd: 3.5, FocusDistStart: 3.5, IsWaitFinish: true}
[   2880.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#133, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   2881.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#133, xc=1)
[   2933.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#1, xc=0)
[   2933.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[   2933.0] L GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
[   2933.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#104, xc=0)
[   2933.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 75.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C23-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2933.0] E GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
               duration: 50.0
               {FocusDistEnd: 2.700000047683716, FocusDistStart: 2.700000047683716, IsWaitFinish: true}
[   2933.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#105, xc=0)
               duration: 75.0
               {ASName: C23-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2983.0] L GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
[   2983.0] E GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
               duration: 10.0
               {FocusDistEnd: 5.5, FocusDistStart: 2.700000047683716, IsWaitFinish: true}
[   2993.0] L GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
[   2993.0] E GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
               duration: 15.0
               {FocusDistEnd: 5.5, FocusDistStart: 5.5, IsWaitFinish: true}
[   2998.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#134, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   2999.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#134, xc=1)
[   3005.0] E EventControllerRumble[0] - Demo_RumbleLarge (#70, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[   3005.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#82, xc=0)
               duration: 13.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo161_0_Text017}
[   3008.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[   3008.0] L GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
[   3008.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#105, xc=0)
[   3008.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C24-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3008.0] E GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
               duration: 24.0
               {FocusDistEnd: 3.700000047683716, FocusDistStart: 3.700000047683716, IsWaitFinish: true}
[   3008.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#106, xc=0)
               duration: 105.0
               {ASName: C24-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3012.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#135, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   3013.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#135, xc=1)
[   3015.0] L EventControllerRumble[0] - Demo_RumbleLarge (#70, xc=0)
[   3018.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#82, xc=0)
[   3032.0] L GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
[   3032.0] E GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
               duration: 8.0
               {FocusDistEnd: 9.5, FocusDistStart: 3.700000047683716, IsWaitFinish: true}
[   3040.0] L GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
[   3040.0] E GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
               duration: 73.0
               {FocusDistEnd: 9.5, FocusDistStart: 9.5, IsWaitFinish: true}
[   3040.0] E EventControllerRumble[0] - Demo_RumbleSmall (#71, xc=0)
               duration: 40.0
               {Count: 8, IsWaitFinish: true}
[   3080.0] L EventControllerRumble[0] - Demo_RumbleSmall (#71, xc=0)
[   3100.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#72, xc=0)
               duration: 10.0
               {Count: 1, IsWaitFinish: true}
[   3110.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#72, xc=0)
[   3113.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[   3113.0] L GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
[   3113.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#106, xc=0)
[   3113.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C15-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3113.0] E GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
               duration: 120.0
               {FocusDistEnd: 1.7000000476837158, FocusDistStart: 1.7000000476837158, IsWaitFinish: true}
[   3113.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#107, xc=0)
               duration: 120.0
               {ASName: C15-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3149.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#136, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[   3150.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#136, xc=1)
[   3233.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=1)
[   3233.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[   3233.0] L GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
[   3233.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#107, xc=0)
[   3233.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=1)
               duration: 741.0
               {IsWaitFinish: true, angleY: -95.0}
[   3233.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C16-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3233.0] E GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
               duration: 105.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[   3233.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#108, xc=0)
               duration: 105.0
               {ASName: C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3233.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#146, xc=0)
               duration: 105.0
               {ASName: C16-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3243.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#83, xc=0)
               duration: 204.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo161_0_Text005}
[   3338.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[   3338.0] L GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
[   3338.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#108, xc=0)
[   3338.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#146, xc=0)
[   3338.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C17-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3338.0] E GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
               duration: 120.0
               {FocusDistEnd: 2.0, FocusDistStart: 3.5, IsWaitFinish: true}
[   3338.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#109, xc=0)
               duration: 120.0
               {ASName: C17-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3338.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#147, xc=0)
               duration: 120.0
               {ASName: C17-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3447.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#83, xc=0)
[   3458.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[   3458.0] L GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
[   3458.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#109, xc=0)
[   3458.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#147, xc=0)
[   3458.0] E GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
               duration: 130.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C18-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3458.0] E GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
               duration: 130.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[   3458.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#110, xc=0)
               duration: 130.0
               {ASName: C18-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3588.0] L GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
[   3588.0] L GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
[   3588.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#110, xc=0)
[   3588.0] E GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
               duration: 75.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C19-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3588.0] E GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
               duration: 75.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[   3588.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#84, xc=0)
               duration: 150.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo161_0_Text009}
[   3588.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#111, xc=0)
               duration: 150.0
               {ASName: C19-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3588.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#148, xc=0)
               duration: 75.0
               {ASName: C19-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3663.0] L GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
[   3663.0] L GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
[   3663.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#148, xc=0)
[   3663.0] E GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
               duration: 75.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C20-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3663.0] E GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
               duration: 75.0
               {FocusDistEnd: 3.5, FocusDistStart: 3.5, IsWaitFinish: true}
[   3663.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#149, xc=0)
               duration: 75.0
               {ASName: C20-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3738.0] L GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
[   3738.0] L GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
[   3738.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#84, xc=0)
[   3738.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#111, xc=0)
[   3738.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#149, xc=0)
[   3738.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 55.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C21-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3738.0] E GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
               duration: 55.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   3738.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#112, xc=0)
               duration: 55.0
               {ASName: C21-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3793.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[   3793.0] L GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
[   3793.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#112, xc=0)
[   3793.0] E GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
               duration: 181.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C22-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3793.0] E GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
               duration: 181.0
               {FocusDistEnd: 140.0, FocusDistStart: 140.0, IsWaitFinish: true}
[   3793.0] E Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#150, xc=0)
               duration: 181.0
               {ASName: C22-Npc_Goron_Hero-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3914.0] E Fader[0] - Demo_FadeOut (#3, xc=0)
               duration: 60.0
               {Color: 0, DispMode: Auto, Frame: 1, IsWaitFinish: true}
[   3974.0] L Fader[0] - Demo_FadeOut (#3, xc=0)
[   3974.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   3974.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   3974.0] L WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
[   3974.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=1)
[   3974.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#11, xc=2)
[   3974.0] L GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
[   3974.0] L GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
[   3974.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#86, xc=0)
[   3974.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#88, xc=0)
[   3974.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#150, xc=0)
[   3974.0] L Dm_Npc_Goron_Hero[0] - Demo_PlayASForTimeline (#151, xc=1)
[   3974.0] L Item_Conductor - Demo_Bind (#153, xc=0)
[   3974.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#113, xc=0)
               duration: 210.0
               {ASName: C12-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4184.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#113, xc=0)
[   4184.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#114, xc=0)
               duration: 76.0
               {ASName: C14-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4260.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#114, xc=0)
[   4260.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#115, xc=0)
               duration: 75.0
               {ASName: C23-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4335.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#115, xc=0)
[   4335.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#116, xc=0)
               duration: 105.0
               {ASName: C24-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4440.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#116, xc=0)
[   4440.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#117, xc=0)
               duration: 87.0
               {ASName: C15-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4527.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#117, xc=0)
[   4527.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#118, xc=0)
               duration: 105.0
               {ASName: C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4632.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#118, xc=0)
[   4632.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#119, xc=0)
               duration: 120.0
               {ASName: C17-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4752.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#119, xc=0)
[   4752.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#120, xc=0)
               duration: 130.0
               {ASName: C18-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   4882.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#120, xc=0)
[   4882.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#121, xc=0)
               duration: 150.0
               {ASName: C19-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   5032.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#121, xc=0)
[   5032.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#122, xc=0)
               duration: 55.0
               {ASName: C21-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   5087.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#122, xc=0)
[   5087.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#123, xc=0)
               duration: 181.0
               {ASName: C22-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   5268.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#123, xc=0)
