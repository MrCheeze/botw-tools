-------- Event timeline: Demo146_1 --------
actors: 15
clips: 111
oneshots: 0
cuts: 11
duration: 2250.0
subtimelines: ['Demo146_1_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 150.0
x4: 0
params: (none)

Cut: C03
start time: 350.0
x4: 0
params: (none)

Cut: C04
start time: 440.0
x4: 0
params: (none)

Cut: C05
start time: 575.0
x4: 0
params: (none)

Cut: C06
start time: 725.0
x4: 0
params: (none)

Cut: C07
start time: 860.0
x4: 0
params: (none)

Cut: C08
start time: 1010.0
x4: 0
params: (none)

Cut: C09
start time: 1335.0
x4: 0
params: (none)

Cut: C10
start time: 1575.0
x4: 0
params: (none)

Cut: C11
start time: 1960.0
x4: 0
params: (none)


===== Actors =====

Actor: DemoVoiceEmitTag
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: SceneBgmCtrlTag[0]
x36: 1
actions: ['Demo_Ctrl']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Fader[1]
x36: 1
actions: ['Demo_FadeIn']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[2]
x36: 1
actions: ['Demo_PlayUiActorName']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Sun_A_01[3]
x36: 1
actions: ['Demo_SunMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Moon_A_01[4]
x36: 1
actions: ['Demo_MoonMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: WorldManagerControl[10]
x36: 6
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_SetPaletteType', 'Demo_EventCloudShadowOff', 'Demo_EventSetFogDirect', 'Demo_SetYfog', 'Demo_SetDirectionalLight']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[12]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting', 'Demo_OverwriteNear']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall', 'Demo_RumbleMiddle', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[7]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: OwnedHorseOrCreate_ForEvent[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 1, HorseManeName: Horse_Link_Mane_00L, HorseReinsName: '', HorseSaddleName: '', IsGrounding: false,
  IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0}

Actor: SaddleOfOwnedHorseOrCreate_ForEvent[0]
x36: 1
actions: ['Demo_Bind']
params: {CreateMode: 1, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: ReinsOfOwnedHorseOrCreate_ForEvent[0]
x36: 1
actions: ['Demo_Bind']
params: {CreateMode: 1, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Enemy_GanonBeast[0]
x36: 1
actions: ['Demo_PlayASForTimeline', 'Demo_VisibleOff']
params: {CreateMode: 2, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Weapon_Bow_071
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 4, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[1] - Demo_FadeIn (#7, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[3] - Demo_SunMove (#9, xc=0)
               duration: 2250.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[4] - Demo_MoonMove (#10, xc=0)
               duration: 2250.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[10] - Demo_SetWind (#11, xc=0)
               duration: 1960.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.019999999552965164, WindDirY: 0.0, WindDirZ: 0.009999999776482582,
                 WindPower: 8.0}
[      0.0] E WorldManagerControl[10] - Demo_EventSetDirectionalYang (#12, xc=1)
               duration: 1960.0
               {IsWaitFinish: true, angleY: -42.0}
[      0.0] E WorldManagerControl[10] - Demo_SetPaletteType (#14, xc=2)
               duration: 1520.0
               {ChangeFrame: 0, EndFrame: 0, IsWaitFinish: true, PaletteType: 16, Speed: 1.0}
[      0.0] E WorldManagerControl[10] - Demo_EventCloudShadowOff (#16, xc=3)
               duration: 1960.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[10] - Demo_EventSetFogDirect (#17, xc=4)
               duration: 150.0
               {Far: 300.0, FarUse: true, FogRatio: 0.6000000238418579, InstantSW: true, IsWaitFinish: true,
                 Near: -10.0, NearUse: true}
[      0.0] E GameRomCamera[12] - Demo_CameraAnim (#25, xc=0)
               duration: 150.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[12] - Demo_FocusDistSetting (#36, xc=1)
               duration: 150.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[      0.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#64, xc=0)
               duration: 150.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#91, xc=0)
               duration: 150.0
               {ASName: C01-Horse_Link_L-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E SaddleOfOwnedHorseOrCreate_ForEvent[0] - Demo_Bind (#97, xc=0)
               duration: 1905.0
               Horse: !!python/object/new:evfl.common.ActorIdentifier
                 state: !!python/tuple
                 - null
                 - _offsets_to_this: []
                   name: OwnedHorseOrCreate_ForEvent
                   sub_name: '0'
               IsLeftBind: false
               IsRightBind: false
               IsWaitFinish: true
               IsZelda: false
               Rider: !!python/object/new:evfl.common.ActorIdentifier
                 state: !!python/tuple
                 - null
                 - _offsets_to_this: []
                   name: GameROMPlayer
                   sub_name: '7'
[      0.0] E ReinsOfOwnedHorseOrCreate_ForEvent[0] - Demo_Bind (#99, xc=0)
               duration: 1845.0
               Horse: !!python/object/new:evfl.common.ActorIdentifier
                 state: !!python/tuple
                 - null
                 - _offsets_to_this: []
                   name: OwnedHorseOrCreate_ForEvent
                   sub_name: '0'
               IsLeftBind: false
               IsRightBind: false
               IsWaitFinish: true
               Rider: !!python/object/new:evfl.common.ActorIdentifier
                 state: !!python/tuple
                 - null
                 - _offsets_to_this: []
                   name: GameROMPlayer
                   sub_name: '7'
[      0.0] E Enemy_GanonBeast[0] - Demo_VisibleOff (#101, xc=0)
               duration: 350.0
               {IsWaitFinish: true}
[     30.0] L Fader[1] - Demo_FadeIn (#7, xc=0)
[     85.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#70, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[     86.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#70, xc=1)
[     95.0] E DemoVoiceEmitTag - Demo_VoiceTrigger (#0, xc=0)
               duration: 145.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo146_1_Text001}
[    150.0] L WorldManagerControl[10] - Demo_EventSetFogDirect (#17, xc=4)
[    150.0] L GameRomCamera[12] - Demo_CameraAnim (#25, xc=0)
[    150.0] L GameRomCamera[12] - Demo_FocusDistSetting (#36, xc=1)
[    150.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#64, xc=0)
[    150.0] L OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#91, xc=0)
[    150.0] E WorldManagerControl[10] - Demo_EventSetFogDirect (#18, xc=4)
               duration: 200.0
               {Far: 200.0, FarUse: true, FogRatio: 0.6000000238418579, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[    150.0] E GameRomCamera[12] - Demo_CameraAnim (#26, xc=0)
               duration: 200.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 47.0, ApertureEnd: 47.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2999999523162842, DOFBlurStart: 1.2999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.600000023841858, FocalLengthEnd: 1.600000023841858,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    150.0] E GameRomCamera[12] - Demo_FocusDistSetting (#37, xc=1)
               duration: 65.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[    150.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#65, xc=0)
               duration: 200.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    150.0] E OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#92, xc=0)
               duration: 200.0
               {ASName: C02-Horse_Link_L-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    215.0] L GameRomCamera[12] - Demo_FocusDistSetting (#37, xc=1)
[    215.0] E GameRomCamera[12] - Demo_FocusDistSetting (#38, xc=1)
               duration: 116.0
               {FocusDistEnd: 9.0, FocusDistStart: 1.5, IsWaitFinish: true}
[    235.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#71, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Left}
[    236.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#71, xc=1)
[    240.0] L DemoVoiceEmitTag - Demo_VoiceTrigger (#0, xc=0)
[    248.0] E DemoVoiceEmitTag - Demo_VoiceTrigger (#1, xc=0)
               duration: 452.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo146_1_Text007}
[    250.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#72, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[    251.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#72, xc=1)
[    331.0] L GameRomCamera[12] - Demo_FocusDistSetting (#38, xc=1)
[    331.0] E GameRomCamera[12] - Demo_FocusDistSetting (#39, xc=1)
               duration: 19.0
               {FocusDistEnd: 9.0, FocusDistStart: 9.0, IsWaitFinish: true}
[    350.0] L WorldManagerControl[10] - Demo_EventSetFogDirect (#18, xc=4)
[    350.0] L GameRomCamera[12] - Demo_CameraAnim (#26, xc=0)
[    350.0] L GameRomCamera[12] - Demo_FocusDistSetting (#39, xc=1)
[    350.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#65, xc=0)
[    350.0] L OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#92, xc=0)
[    350.0] L Enemy_GanonBeast[0] - Demo_VisibleOff (#101, xc=0)
[    350.0] E WorldManagerControl[10] - Demo_EventSetFogDirect (#19, xc=4)
               duration: 510.0
               {Far: 2000.0, FarUse: true, FogRatio: 0.6000000238418579, InstantSW: true, IsWaitFinish: true,
                 Near: 1800.0, NearUse: true}
[    350.0] E GameRomCamera[12] - Demo_CameraAnim (#27, xc=0)
               duration: 90.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    350.0] E GameRomCamera[12] - Demo_FocusDistSetting (#40, xc=1)
               duration: 90.0
               {FocusDistEnd: 60.0, FocusDistStart: 60.0, IsWaitFinish: true}
[    350.0] E Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#102, xc=0)
               duration: 90.0
               {ASName: C03-GanonBeast-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    369.0] E EventControllerRumble[0] - Demo_RumbleSmall (#58, xc=0)
               duration: 71.0
               {Count: 10, IsWaitFinish: true}
[    440.0] L GameRomCamera[12] - Demo_CameraAnim (#27, xc=0)
[    440.0] L GameRomCamera[12] - Demo_FocusDistSetting (#40, xc=1)
[    440.0] L EventControllerRumble[0] - Demo_RumbleSmall (#58, xc=0)
[    440.0] L Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#102, xc=0)
[    440.0] E GameRomCamera[12] - Demo_CameraAnim (#28, xc=0)
               duration: 135.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    440.0] E GameRomCamera[12] - Demo_FocusDistSetting (#41, xc=1)
               duration: 135.0
               {FocusDistEnd: 33.0, FocusDistStart: 33.0, IsWaitFinish: true}
[    440.0] E Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#103, xc=0)
               duration: 135.0
               {ASName: C04-GanonBeast-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    528.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#59, xc=0)
               duration: 47.0
               {Count: 3, IsWaitFinish: true}
[    575.0] L GameRomCamera[12] - Demo_CameraAnim (#28, xc=0)
[    575.0] L GameRomCamera[12] - Demo_FocusDistSetting (#41, xc=1)
[    575.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#59, xc=0)
[    575.0] L Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#103, xc=0)
[    575.0] E GameRomCamera[12] - Demo_CameraAnim (#29, xc=0)
               duration: 150.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    575.0] E GameRomCamera[12] - Demo_FocusDistSetting (#42, xc=1)
               duration: 150.0
               {FocusDistEnd: 108.0, FocusDistStart: 108.0, IsWaitFinish: true}
[    575.0] E Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#104, xc=0)
               duration: 150.0
               {ASName: C05-GanonBeast-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    700.0] L DemoVoiceEmitTag - Demo_VoiceTrigger (#1, xc=0)
[    725.0] L GameRomCamera[12] - Demo_CameraAnim (#29, xc=0)
[    725.0] L GameRomCamera[12] - Demo_FocusDistSetting (#42, xc=1)
[    725.0] L Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#104, xc=0)
[    725.0] E GameRomCamera[12] - Demo_CameraAnim (#30, xc=0)
               duration: 135.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    725.0] E GameRomCamera[12] - Demo_FocusDistSetting (#43, xc=1)
               duration: 135.0
               {FocusDistEnd: 140.0, FocusDistStart: 140.0, IsWaitFinish: true}
[    725.0] E GameRomCamera[12] - Demo_OverwriteNear (#53, xc=2)
               duration: 135.0
               {IsWaitFinish: true, Near: 1.0}
[    725.0] E Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#105, xc=0)
               duration: 135.0
               {ASName: C06-GanonBeast-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    727.0] E EventControllerRumble[0] - Demo_RumbleSmall (#60, xc=0)
               duration: 100.0
               {Count: 21, IsWaitFinish: true}
[    772.0] E DemoVoiceEmitTag - Demo_VoiceTrigger (#2, xc=0)
               duration: 271.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo146_1_Text008}
[    827.0] L EventControllerRumble[0] - Demo_RumbleSmall (#60, xc=0)
[    860.0] L WorldManagerControl[10] - Demo_EventSetFogDirect (#19, xc=4)
[    860.0] L GameRomCamera[12] - Demo_CameraAnim (#30, xc=0)
[    860.0] L GameRomCamera[12] - Demo_FocusDistSetting (#43, xc=1)
[    860.0] L GameRomCamera[12] - Demo_OverwriteNear (#53, xc=2)
[    860.0] L Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#105, xc=0)
[    860.0] E WorldManagerControl[10] - Demo_EventSetFogDirect (#20, xc=4)
               duration: 150.0
               {Far: 200.0, FarUse: true, FogRatio: 0.2800000011920929, InstantSW: true, IsWaitFinish: true,
                 Near: -50.0, NearUse: true}
[    860.0] E WorldManagerControl[10] - Demo_SetYfog (#24, xc=5)
               duration: 150.0
               {IsWaitFinish: true, YfogRatio: 0.5}
[    860.0] E GameRomCamera[12] - Demo_CameraAnim (#31, xc=0)
               duration: 150.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C07-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    860.0] E GameRomCamera[12] - Demo_FocusDistSetting (#44, xc=1)
               duration: 150.0
               {FocusDistEnd: 240.0, FocusDistStart: 240.0, IsWaitFinish: true}
[    860.0] E GameRomCamera[12] - Demo_OverwriteNear (#54, xc=2)
               duration: 150.0
               {IsWaitFinish: true, Near: 50.0}
[    860.0] E Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#106, xc=0)
               duration: 150.0
               {ASName: C07-GanonBeast-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1010.0] L WorldManagerControl[10] - Demo_EventSetFogDirect (#20, xc=4)
[   1010.0] L WorldManagerControl[10] - Demo_SetYfog (#24, xc=5)
[   1010.0] L GameRomCamera[12] - Demo_CameraAnim (#31, xc=0)
[   1010.0] L GameRomCamera[12] - Demo_FocusDistSetting (#44, xc=1)
[   1010.0] L GameRomCamera[12] - Demo_OverwriteNear (#54, xc=2)
[   1010.0] L Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#106, xc=0)
[   1010.0] E WorldManagerControl[10] - Demo_EventSetFogDirect (#21, xc=4)
               duration: 325.0
               {Far: 400.0, FarUse: true, FogRatio: 0.6000000238418579, InstantSW: true, IsWaitFinish: true,
                 Near: -50.0, NearUse: true}
[   1010.0] E GameRomCamera[12] - Demo_CameraAnim (#32, xc=0)
               duration: 325.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C08-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1010.0] E GameRomCamera[12] - Demo_FocusDistSetting (#45, xc=1)
               duration: 325.0
               {FocusDistEnd: 8.5, FocusDistStart: 8.5, IsWaitFinish: true}
[   1010.0] E GameRomCamera[12] - Demo_OverwriteNear (#55, xc=2)
               duration: 325.0
               {IsWaitFinish: true, Near: 1.0}
[   1010.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#66, xc=0)
               duration: 325.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1010.0] E OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#93, xc=0)
               duration: 325.0
               {ASName: C08-Horse_Link_L-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1010.0] E Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#107, xc=0)
               duration: 325.0
               {ASName: C08-GanonBeast-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1043.0] L DemoVoiceEmitTag - Demo_VoiceTrigger (#2, xc=0)
[   1043.0] E EventControllerRumble[0] - Demo_RumbleLarge (#61, xc=0)
               duration: 100.0
               {Count: 6, IsWaitFinish: true}
[   1060.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#73, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[   1061.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#73, xc=1)
[   1120.0] E EventSystemActor[2] - Demo_PlayUiActorName (#8, xc=0)
               duration: 210.0
               {ActorName: Enemy_GanonBeast, ActorType: 0, IsWaitFinish: true}
[   1140.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#74, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[   1141.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#74, xc=1)
[   1143.0] L EventControllerRumble[0] - Demo_RumbleLarge (#61, xc=0)
[   1330.0] L EventSystemActor[2] - Demo_PlayUiActorName (#8, xc=0)
[   1335.0] L WorldManagerControl[10] - Demo_EventSetFogDirect (#21, xc=4)
[   1335.0] L GameRomCamera[12] - Demo_CameraAnim (#32, xc=0)
[   1335.0] L GameRomCamera[12] - Demo_FocusDistSetting (#45, xc=1)
[   1335.0] L GameRomCamera[12] - Demo_OverwriteNear (#55, xc=2)
[   1335.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#66, xc=0)
[   1335.0] L OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#93, xc=0)
[   1335.0] L Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#107, xc=0)
[   1335.0] E WorldManagerControl[10] - Demo_EventSetFogDirect (#22, xc=4)
               duration: 240.0
               {Far: 300.0, FarUse: true, FogRatio: 0.44999998807907104, InstantSW: true, IsWaitFinish: true,
                 Near: -50.0, NearUse: true}
[   1335.0] E GameRomCamera[12] - Demo_CameraAnim (#33, xc=0)
               duration: 240.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 1800.0, ApertureEnd: 1800.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 21.0, FocalLengthEnd: 21.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C09-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1335.0] E GameRomCamera[12] - Demo_FocusDistSetting (#46, xc=1)
               duration: 30.0
               {FocusDistEnd: 8.5, FocusDistStart: 8.5, IsWaitFinish: true}
[   1335.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#67, xc=0)
               duration: 240.0
               {ASName: C09-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1335.0] E OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#94, xc=0)
               duration: 240.0
               {ASName: C09-Horse_Link_L-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1335.0] E Weapon_Bow_071 - Demo_PlayASForTimeline (#109, xc=0)
               duration: 240.0
               {ASName: C09-Weapon_Bow_074-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1350.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#75, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   1351.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#75, xc=1)
[   1356.0] E DemoVoiceEmitTag - Demo_VoiceTrigger (#3, xc=0)
               duration: 185.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo146_1_Text017}
[   1365.0] L GameRomCamera[12] - Demo_FocusDistSetting (#46, xc=1)
[   1365.0] E GameRomCamera[12] - Demo_FocusDistSetting (#47, xc=1)
               duration: 45.0
               {FocusDistEnd: 13.5, FocusDistStart: 8.5, IsWaitFinish: true}
[   1410.0] L GameRomCamera[12] - Demo_FocusDistSetting (#47, xc=1)
[   1410.0] E GameRomCamera[12] - Demo_FocusDistSetting (#48, xc=1)
               duration: 165.0
               {FocusDistEnd: 3.75, FocusDistStart: 13.5, IsWaitFinish: true}
[   1520.0] L WorldManagerControl[10] - Demo_SetPaletteType (#14, xc=2)
[   1520.0] E WorldManagerControl[10] - Demo_SetPaletteType (#15, xc=2)
               duration: 730.0
               {ChangeFrame: 1, EndFrame: 0, IsWaitFinish: true, PaletteType: 0, Speed: 0.20000000298023224}
[   1541.0] L DemoVoiceEmitTag - Demo_VoiceTrigger (#3, xc=0)
[   1575.0] L WorldManagerControl[10] - Demo_EventSetFogDirect (#22, xc=4)
[   1575.0] L GameRomCamera[12] - Demo_CameraAnim (#33, xc=0)
[   1575.0] L GameRomCamera[12] - Demo_FocusDistSetting (#48, xc=1)
[   1575.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#67, xc=0)
[   1575.0] L OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#94, xc=0)
[   1575.0] L Weapon_Bow_071 - Demo_PlayASForTimeline (#109, xc=0)
[   1575.0] E WorldManagerControl[10] - Demo_EventSetFogDirect (#23, xc=4)
               duration: 385.0
               {Far: 300.0, FarUse: true, FogRatio: 0.15000000596046448, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[   1575.0] E GameRomCamera[12] - Demo_CameraAnim (#34, xc=0)
               duration: 385.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 15.0, ApertureEnd: 15.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.399999976158142, DOFBlurStart: 1.399999976158142, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 10.399999618530273, FocalLengthEnd: 10.399999618530273,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C10-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1575.0] E GameRomCamera[12] - Demo_FocusDistSetting (#49, xc=1)
               duration: 385.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[   1575.0] E GameRomCamera[12] - Demo_OverwriteNear (#56, xc=2)
               duration: 385.0
               {IsWaitFinish: true, Near: 1.0}
[   1575.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#68, xc=0)
               duration: 385.0
               {ASName: C10-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1575.0] E OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#95, xc=0)
               duration: 385.0
               {ASName: C10-Horse_Link_L-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1605.0] E DemoVoiceEmitTag - Demo_VoiceTrigger (#4, xc=0)
               duration: 314.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo146_1_Text018}
[   1765.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#76, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Left}
[   1766.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#76, xc=1)
[   1790.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#77, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[   1791.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#77, xc=1)
[   1803.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#78, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Left}
[   1804.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#78, xc=1)
[   1818.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#79, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[   1819.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#79, xc=1)
[   1825.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#80, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Left}
[   1826.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#80, xc=1)
[   1845.0] L ReinsOfOwnedHorseOrCreate_ForEvent[0] - Demo_Bind (#99, xc=0)
[   1845.0] E ReinsOfOwnedHorseOrCreate_ForEvent[0] - Demo_Bind (#100, xc=0)
               duration: 405.0
               Horse: !!python/object/new:evfl.common.ActorIdentifier
                 state: !!python/tuple
                 - null
                 - _offsets_to_this: []
                   name: OwnedHorseOrCreate_ForEvent
                   sub_name: '0'
               IsLeftBind: true
               IsRightBind: true
               IsWaitFinish: true
               Rider: !!python/object/new:evfl.common.ActorIdentifier
                 state: !!python/tuple
                 - null
                 - _offsets_to_this: []
                   name: GameROMPlayer
                   sub_name: '7'
[   1862.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#81, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[   1863.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#81, xc=1)
[   1891.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#82, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   1892.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#82, xc=1)
[   1905.0] L SaddleOfOwnedHorseOrCreate_ForEvent[0] - Demo_Bind (#97, xc=0)
[   1905.0] E SaddleOfOwnedHorseOrCreate_ForEvent[0] - Demo_Bind (#98, xc=0)
               duration: 345.0
               Horse: !!python/object/new:evfl.common.ActorIdentifier
                 state: !!python/tuple
                 - null
                 - _offsets_to_this: []
                   name: OwnedHorseOrCreate_ForEvent
                   sub_name: '0'
               IsLeftBind: true
               IsRightBind: true
               IsWaitFinish: true
               IsZelda: false
               Rider: !!python/object/new:evfl.common.ActorIdentifier
                 state: !!python/tuple
                 - null
                 - _offsets_to_this: []
                   name: GameROMPlayer
                   sub_name: '7'
[   1919.0] L DemoVoiceEmitTag - Demo_VoiceTrigger (#4, xc=0)
[   1925.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#83, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   1926.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#83, xc=1)
[   1951.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#84, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   1952.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#84, xc=1)
[   1960.0] L WorldManagerControl[10] - Demo_SetWind (#11, xc=0)
[   1960.0] L WorldManagerControl[10] - Demo_EventSetDirectionalYang (#12, xc=1)
[   1960.0] L WorldManagerControl[10] - Demo_EventCloudShadowOff (#16, xc=3)
[   1960.0] L WorldManagerControl[10] - Demo_EventSetFogDirect (#23, xc=4)
[   1960.0] L GameRomCamera[12] - Demo_CameraAnim (#34, xc=0)
[   1960.0] L GameRomCamera[12] - Demo_FocusDistSetting (#49, xc=1)
[   1960.0] L GameRomCamera[12] - Demo_OverwriteNear (#56, xc=2)
[   1960.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#68, xc=0)
[   1960.0] L OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#95, xc=0)
[   1960.0] E DemoVoiceEmitTag - Demo_VoiceTrigger (#5, xc=0)
               duration: 228.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo146_1_Text019}
[   1960.0] E WorldManagerControl[10] - Demo_SetDirectionalLight (#13, xc=1)
               duration: 290.0
               {IsWaitFinish: true, angleX: -32.770057678222656, angleY: 44.92039489746094}
[   1960.0] E GameRomCamera[12] - Demo_CameraAnim (#35, xc=0)
               duration: 290.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 7.0, SceneName: C11-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1960.0] E GameRomCamera[12] - Demo_FocusDistSetting (#50, xc=1)
               duration: 40.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[   1960.0] E GameRomCamera[12] - Demo_OverwriteNear (#57, xc=2)
               duration: 290.0
               {IsWaitFinish: true, Near: 1.0}
[   1960.0] E GameROMPlayer[7] - Demo_PlayASForTimeline (#69, xc=0)
               duration: 290.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1960.0] E OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#96, xc=0)
               duration: 290.0
               {ASName: C11-Horse_Link_L-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1960.0] E Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#108, xc=0)
               duration: 290.0
               {ASName: C11-GanonBeast-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1960.0] E Weapon_Bow_071 - Demo_PlayASForTimeline (#110, xc=0)
               duration: 290.0
               {ASName: C11-Weapon_Bow_074-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1978.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#85, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   1979.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#85, xc=1)
[   1993.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#86, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   1994.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#86, xc=1)
[   2000.0] L GameRomCamera[12] - Demo_FocusDistSetting (#50, xc=1)
[   2000.0] E GameRomCamera[12] - Demo_FocusDistSetting (#51, xc=1)
               duration: 50.0
               {FocusDistEnd: 11.0, FocusDistStart: 7.0, IsWaitFinish: true}
[   2005.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#87, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   2006.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#87, xc=1)
[   2016.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#88, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   2017.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#88, xc=1)
[   2028.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#62, xc=0)
               duration: 30.0
               {Count: 2, IsWaitFinish: true}
[   2050.0] L GameRomCamera[12] - Demo_FocusDistSetting (#51, xc=1)
[   2050.0] E GameRomCamera[12] - Demo_FocusDistSetting (#52, xc=1)
               duration: 200.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[   2058.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#62, xc=0)
[   2123.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#63, xc=0)
               duration: 30.0
               {Count: 1, IsWaitFinish: true}
[   2126.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#89, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   2127.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#89, xc=1)
[   2153.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#63, xc=0)
[   2170.0] E GameROMPlayer[7] - Demo_EmitEquipmentNoise (#90, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Both}
[   2171.0] L GameROMPlayer[7] - Demo_EmitEquipmentNoise (#90, xc=1)
[   2188.0] L DemoVoiceEmitTag - Demo_VoiceTrigger (#5, xc=0)
[   2248.0] E SceneBgmCtrlTag[0] - Demo_Ctrl (#6, xc=0)
               duration: 2.0
               {CtrlType: GanonBeastBgm_Start, IsWaitFinish: true}
[   2250.0] L SceneBgmCtrlTag[0] - Demo_Ctrl (#6, xc=0)
[   2250.0] L Obj_Sun_A_01[3] - Demo_SunMove (#9, xc=0)
[   2250.0] L Obj_Moon_A_01[4] - Demo_MoonMove (#10, xc=0)
[   2250.0] L WorldManagerControl[10] - Demo_SetDirectionalLight (#13, xc=1)
[   2250.0] L WorldManagerControl[10] - Demo_SetPaletteType (#15, xc=2)
[   2250.0] L GameRomCamera[12] - Demo_CameraAnim (#35, xc=0)
[   2250.0] L GameRomCamera[12] - Demo_FocusDistSetting (#52, xc=1)
[   2250.0] L GameRomCamera[12] - Demo_OverwriteNear (#57, xc=2)
[   2250.0] L GameROMPlayer[7] - Demo_PlayASForTimeline (#69, xc=0)
[   2250.0] L OwnedHorseOrCreate_ForEvent[0] - Demo_PlayASForTimeline (#96, xc=0)
[   2250.0] L SaddleOfOwnedHorseOrCreate_ForEvent[0] - Demo_Bind (#98, xc=0)
[   2250.0] L ReinsOfOwnedHorseOrCreate_ForEvent[0] - Demo_Bind (#100, xc=0)
[   2250.0] L Enemy_GanonBeast[0] - Demo_PlayASForTimeline (#108, xc=0)
[   2250.0] L Weapon_Bow_071 - Demo_PlayASForTimeline (#110, xc=0)
