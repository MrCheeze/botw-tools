-------- Event timeline: Demo123_0 --------
actors: 13
clips: 148
oneshots: 0
cuts: 13
duration: 1835.0
subtimelines: ['Demo123_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 224.0
x4: 0
params: (none)

Cut: C03
start time: 284.0
x4: 0
params: (none)

Cut: C04
start time: 474.0
x4: 0
params: (none)

Cut: C05
start time: 604.0
x4: 0
params: (none)

Cut: C06
start time: 761.0
x4: 0
params: (none)

Cut: C07
start time: 910.0
x4: 0
params: (none)

Cut: C08
start time: 985.0
x4: 0
params: (none)

Cut: C10
start time: 1025.0
x4: 0
params: (none)

Cut: C12
start time: 1145.0
x4: 0
params: (none)

Cut: C13
start time: 1280.0
x4: 0
params: (none)

Cut: C15
start time: 1505.0
x4: 0
params: (none)

Cut: C16
start time: 1655.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn', 'Demo_FadeOut']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
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
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_EventCloudShadowOff', 'Demo_EventSetFogDirect']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall', 'Demo_RumbleLarge', 'Demo_RumbleMiddle']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Npc_oasis003[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_OffMaterialVisibility']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Armor_115_Head[0]
x36: 1
actions: ['Demo_EventBind']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Animal_SunazarashiSP_C[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Animal_SunazarashiSP_A[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsElectric[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#6, xc=0)
               duration: 1835.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#7, xc=0)
               duration: 1835.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#8, xc=0)
               duration: 1835.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.009999999776482582, WindDirY: 0.0, WindDirZ: -0.27000001072883606,
                 WindPower: 6.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#9, xc=1)
               duration: 1835.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=2)
               duration: 224.0
               {IsWaitFinish: true, angleY: 120.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=3)
               duration: 224.0
               {Far: 500.0, FarUse: true, FogRatio: 0.4300000071525574, InstantSW: true, IsWaitFinish: true,
                 Near: -60.0, NearUse: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
               duration: 224.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 35.0, ApertureEnd: 35.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 0.0,
                 DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C01-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
               duration: 140.0
               {FocusDistEnd: 70.0, FocusDistStart: 70.0, IsWaitFinish: true}
[      0.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#134, xc=0)
               duration: 224.0
               {ASName: C01-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#145, xc=1)
               duration: 1052.0
               {ASName: Demo123_0-C01-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    129.0] E EventControllerRumble[0] - Demo_RumbleSmall (#65, xc=0)
               duration: 147.0
               {Count: 31, IsWaitFinish: true}
[    140.0] L GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
[    140.0] E GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
               duration: 84.0
               {FocusDistEnd: 18.0, FocusDistStart: 70.0, IsWaitFinish: true}
[    224.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=2)
[    224.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=3)
[    224.0] L GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
[    224.0] L GameRomCamera[0] - Demo_FocusDistSetting (#50, xc=1)
[    224.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#134, xc=0)
[    224.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=2)
               duration: 60.0
               {IsWaitFinish: true, angleY: 137.0}
[    224.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=3)
               duration: 60.0
               {Far: 300.0, FarUse: false, FogRatio: 0.3499999940395355, InstantSW: true, IsWaitFinish: true,
                 Near: -11.0, NearUse: true}
[    224.0] E GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
               duration: 60.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 10.0, ApertureEnd: 10.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 6.400000095367432, FocalLengthEnd: 6.400000095367432,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 150.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    224.0] E GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
               duration: 60.0
               {FocusDistEnd: 67.0, FocusDistStart: 67.0, IsWaitFinish: true}
[    224.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#135, xc=0)
               duration: 60.0
               {ASName: C02-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    276.0] L EventControllerRumble[0] - Demo_RumbleSmall (#65, xc=0)
[    284.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=2)
[    284.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=3)
[    284.0] L GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
[    284.0] L GameRomCamera[0] - Demo_FocusDistSetting (#51, xc=1)
[    284.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#135, xc=0)
[    284.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=2)
               duration: 190.0
               {IsWaitFinish: true, angleY: 140.0}
[    284.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=3)
               duration: 190.0
               {Far: 300.0, FarUse: false, FogRatio: 0.23000000417232513, InstantSW: true, IsWaitFinish: true,
                 Near: -17.0, NearUse: true}
[    284.0] E GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
               duration: 190.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 59.20000076293945, ApertureEnd: 59.20000076293945,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 0.20000000298023224, DOFEndFrame: 130.0,
                 DOFStartFrame: 60.0, DOFUse: true, EndFrame: -1.0, FocalLength: 5.699999809265137, FocalLengthEnd: 5.699999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 150.0, SceneName: C03-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    284.0] E GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
               duration: 107.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[    284.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#72, xc=0)
               duration: 190.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    284.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#112, xc=0)
               duration: 190.0
               {ASName: C03-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    284.0] E Npc_oasis003[0] - Demo_OffMaterialVisibility (#121, xc=1)
               duration: 1551.0
               {IsWaitFinish: true, MaterialName: Mt_Crown}
[    284.0] E Dm_Armor_115_Head[0] - Demo_EventBind (#122, xc=0)
               duration: 1551.0
               {ActorName: Npc_oasis003, IsContinueBind: true, IsWaitFinish: true, NodeName: Weapon_R, RotOffsetX: 0.0,
                 RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: '0'}
[    284.0] E Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#123, xc=0)
               duration: 190.0
               {ASName: C03-Sunazarashi_Chief-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    284.0] E Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#129, xc=0)
               duration: 190.0
               {ASName: C03-Sunazarashi-B-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    284.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#136, xc=0)
               duration: 190.0
               {ASName: C03-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    285.0] E EventControllerRumble[0] - Demo_RumbleLarge (#66, xc=0)
               duration: 25.0
               {Count: 3, IsWaitFinish: true}
[    310.0] L EventControllerRumble[0] - Demo_RumbleLarge (#66, xc=0)
[    391.0] L GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
[    391.0] E GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
               duration: 34.0
               {FocusDistEnd: 2.0, FocusDistStart: 10.0, IsWaitFinish: true}
[    425.0] L GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
[    425.0] E GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
               duration: 49.0
               {FocusDistEnd: 11.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    436.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#79, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    437.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#79, xc=1)
[    448.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#80, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    449.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#80, xc=1)
[    455.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#81, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    456.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#81, xc=1)
[    465.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#82, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    466.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#82, xc=1)
[    473.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#83, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    474.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=2)
[    474.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=3)
[    474.0] L GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
[    474.0] L GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
[    474.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#72, xc=0)
[    474.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#83, xc=1)
[    474.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#112, xc=0)
[    474.0] L Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#123, xc=0)
[    474.0] L Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#129, xc=0)
[    474.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#136, xc=0)
[    474.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=2)
               duration: 130.0
               {IsWaitFinish: true, angleY: 125.0}
[    474.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=3)
               duration: 130.0
               {Far: 300.0, FarUse: false, FogRatio: 0.44999998807907104, InstantSW: true, IsWaitFinish: true,
                 Near: -10.0, NearUse: true}
[    474.0] E GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
               duration: 130.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 180.0, ApertureEnd: 180.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.8999999761581421, DOFBlurStart: 0.8999999761581421, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.3399999141693115, FocalLengthEnd: 3.3399999141693115,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    474.0] E GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
               duration: 130.0
               {FocusDistEnd: 3.5, FocusDistStart: 3.5, IsWaitFinish: true}
[    474.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#73, xc=0)
               duration: 130.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    474.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#113, xc=0)
               duration: 130.0
               {ASName: C04-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    481.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#84, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    482.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#84, xc=1)
[    491.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#85, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    492.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#85, xc=1)
[    500.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#86, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    501.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#86, xc=1)
[    509.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#87, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    510.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#87, xc=1)
[    518.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#88, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    519.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#88, xc=1)
[    527.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#89, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    528.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#89, xc=1)
[    537.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#90, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    538.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#90, xc=1)
[    547.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#91, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    548.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#91, xc=1)
[    557.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#92, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    558.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#92, xc=1)
[    567.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#93, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    568.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#93, xc=1)
[    576.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#2, xc=0)
               duration: 35.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo123_0_Text018}
[    576.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#94, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    577.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#94, xc=1)
[    586.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#95, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    587.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#95, xc=1)
[    596.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#96, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    597.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#96, xc=1)
[    604.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=2)
[    604.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=3)
[    604.0] L GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
[    604.0] L GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
[    604.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#73, xc=0)
[    604.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#113, xc=0)
[    604.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=2)
               duration: 157.0
               {IsWaitFinish: true, angleY: 148.0}
[    604.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=3)
               duration: 157.0
               {Far: 0.0, FarUse: false, FogRatio: 0.3499999940395355, InstantSW: true, IsWaitFinish: true,
                 Near: -15.0, NearUse: true}
[    604.0] E GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
               duration: 157.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 113.0, ApertureEnd: 113.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    604.0] E GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
               duration: 157.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    604.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#74, xc=0)
               duration: 157.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    604.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#114, xc=0)
               duration: 157.0
               {ASName: C05-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    604.0] E Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#124, xc=0)
               duration: 157.0
               {ASName: C05-Sunazarashi_Chief-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    606.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#97, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    607.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#97, xc=1)
[    611.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#2, xc=0)
[    617.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#98, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    618.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#98, xc=1)
[    631.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#99, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    632.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#99, xc=1)
[    646.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#100, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[    647.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#100, xc=1)
[    666.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#3, xc=0)
               duration: 114.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo123_0_Text021}
[    761.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=2)
[    761.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=3)
[    761.0] L GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
[    761.0] L GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
[    761.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#74, xc=0)
[    761.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#114, xc=0)
[    761.0] L Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#124, xc=0)
[    761.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=2)
               duration: 149.0
               {IsWaitFinish: true, angleY: 134.0}
[    761.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=3)
               duration: 149.0
               {Far: 0.0, FarUse: false, FogRatio: 0.2800000011920929, InstantSW: true, IsWaitFinish: true,
                 Near: -9.0, NearUse: true}
[    761.0] E GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
               duration: 149.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 85.19999694824219, ApertureEnd: 85.19999694824219,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.109999895095825,
                 FocalLengthEnd: 3.109999895095825, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    761.0] E GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
               duration: 149.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    761.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#75, xc=0)
               duration: 149.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    761.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#115, xc=0)
               duration: 149.0
               {ASName: C06-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    761.0] E Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#125, xc=0)
               duration: 149.0
               {ASName: C06-Sunazarashi_Chief-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    761.0] E Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#130, xc=0)
               duration: 149.0
               {ASName: C06-Sunazarashi-B-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    761.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#137, xc=0)
               duration: 149.0
               {ASName: C06-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    780.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#3, xc=0)
[    816.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#4, xc=0)
               duration: 89.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo123_0_Text022}
[    857.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#101, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Both}
[    858.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#101, xc=1)
[    905.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#4, xc=0)
[    910.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=2)
[    910.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=3)
[    910.0] L GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
[    910.0] L GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
[    910.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#75, xc=0)
[    910.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#115, xc=0)
[    910.0] L Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#125, xc=0)
[    910.0] L Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#130, xc=0)
[    910.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#137, xc=0)
[    910.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=2)
               duration: 75.0
               {IsWaitFinish: true, angleY: 102.0}
[    910.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=3)
               duration: 75.0
               {Far: 0.0, FarUse: false, FogRatio: 0.3499999940395355, InstantSW: true, IsWaitFinish: true,
                 Near: -3.0, NearUse: true}
[    910.0] E GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
               duration: 75.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 170.0, ApertureEnd: 270.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 0.8999999761581421, DOFEndFrame: 60.0,
                 DOFStartFrame: 45.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    910.0] E GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
               duration: 75.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    910.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#76, xc=0)
               duration: 75.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    910.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#116, xc=0)
               duration: 75.0
               {ASName: C07-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    910.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#138, xc=0)
               duration: 75.0
               {ASName: C07-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    924.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#102, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    925.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#102, xc=1)
[    936.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#103, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    937.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#103, xc=1)
[    947.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#104, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    948.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#104, xc=1)
[    962.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#105, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    963.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#105, xc=1)
[    971.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#106, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    972.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#106, xc=1)
[    982.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#107, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    983.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#107, xc=1)
[    985.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=2)
[    985.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=3)
[    985.0] L GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
[    985.0] L GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
[    985.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#76, xc=0)
[    985.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#116, xc=0)
[    985.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#138, xc=0)
[    985.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=2)
               duration: 40.0
               {IsWaitFinish: true, angleY: 106.0}
[    985.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=3)
               duration: 40.0
               {Far: 0.0, FarUse: false, FogRatio: 0.3499999940395355, InstantSW: true, IsWaitFinish: true,
                 Near: -6.0, NearUse: true}
[    985.0] E GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
               duration: 40.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 67.0, ApertureEnd: 67.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.600000023841858, DOFBlurStart: 1.600000023841858, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 6.199999809265137, FocalLengthEnd: 6.199999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C08-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    985.0] E GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
               duration: 40.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[    985.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#77, xc=0)
               duration: 40.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    985.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#117, xc=0)
               duration: 40.0
               {ASName: C08-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    985.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#139, xc=0)
               duration: 40.0
               {ASName: C08-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    990.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#108, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    991.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#108, xc=1)
[   1000.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#109, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1001.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#109, xc=1)
[   1010.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#110, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1011.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#110, xc=1)
[   1020.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#111, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1021.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#111, xc=1)
[   1025.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=2)
[   1025.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=3)
[   1025.0] L GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
[   1025.0] L GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
[   1025.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#77, xc=0)
[   1025.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#117, xc=0)
[   1025.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#139, xc=0)
[   1025.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=2)
               duration: 120.0
               {IsWaitFinish: true, angleY: 115.0}
[   1025.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=3)
               duration: 120.0
               {Far: 0.0, FarUse: false, FogRatio: 0.25, InstantSW: true, IsWaitFinish: true, Near: 0.0, NearUse: true}
[   1025.0] E GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C10-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1025.0] E GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
               duration: 120.0
               {FocusDistEnd: 160.0, FocusDistStart: 160.0, IsWaitFinish: true}
[   1025.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#140, xc=0)
               duration: 120.0
               {ASName: C10-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1052.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#145, xc=1)
[   1052.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#146, xc=1)
               duration: 7.0
               {ASName: Demo123_0-C10-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1059.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#146, xc=1)
[   1059.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#147, xc=1)
               duration: 776.0
               {ASName: BeforeClear, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1144.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#67, xc=0)
               duration: 25.0
               {Count: 2, IsWaitFinish: true}
[   1145.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=2)
[   1145.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=3)
[   1145.0] L GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
[   1145.0] L GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
[   1145.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#140, xc=0)
[   1145.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=2)
               duration: 135.0
               {IsWaitFinish: true, angleY: 137.0}
[   1145.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#32, xc=3)
               duration: 135.0
               {Far: 0.0, FarUse: false, FogRatio: 0.25, InstantSW: true, IsWaitFinish: true, Near: 0.0, NearUse: true}
[   1145.0] E GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 200.0, SceneName: C12-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1145.0] E GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
               duration: 135.0
               {FocusDistEnd: 92.0, FocusDistStart: 92.0, IsWaitFinish: true}
[   1145.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#141, xc=0)
               duration: 135.0
               {ASName: C12-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1169.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#67, xc=0)
[   1195.0] E EventControllerRumble[0] - Demo_RumbleSmall (#68, xc=0)
               duration: 310.0
               {Count: 45, IsWaitFinish: true}
[   1280.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=2)
[   1280.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#32, xc=3)
[   1280.0] L GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
[   1280.0] L GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
[   1280.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#141, xc=0)
[   1280.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=2)
               duration: 225.0
               {IsWaitFinish: true, angleY: 153.0}
[   1280.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#33, xc=3)
               duration: 225.0
               {Far: 148.0, FarUse: true, FogRatio: 0.3700000047683716, InstantSW: true, IsWaitFinish: true,
                 Near: 20.0, NearUse: true}
[   1280.0] E GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
               duration: 225.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 180.0, SceneName: C13-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1280.0] E GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
               duration: 225.0
               {FocusDistEnd: 37.0, FocusDistStart: 37.0, IsWaitFinish: true}
[   1280.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#78, xc=0)
               duration: 225.0
               {ASName: C13-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1280.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#142, xc=0)
               duration: 225.0
               {ASName: C13-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1468.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#118, xc=0)
               duration: 37.0
               {ASName: C15-Npc_Gerudo_Queen-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1468.0] E Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#126, xc=0)
               duration: 37.0
               {ASName: C15-Sunazarashi_Chief-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1468.0] E Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#131, xc=0)
               duration: 37.0
               {ASName: C15-Sunazarashi-B-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1505.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=2)
[   1505.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#33, xc=3)
[   1505.0] L GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
[   1505.0] L GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
[   1505.0] L EventControllerRumble[0] - Demo_RumbleSmall (#68, xc=0)
[   1505.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#78, xc=0)
[   1505.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#118, xc=0)
[   1505.0] L Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#126, xc=0)
[   1505.0] L Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#131, xc=0)
[   1505.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#142, xc=0)
[   1505.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#21, xc=2)
               duration: 150.0
               {IsWaitFinish: true, angleY: 155.0}
[   1505.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#34, xc=3)
               duration: 150.0
               {Far: 0.0, FarUse: false, FogRatio: 0.2800000011920929, InstantSW: true, IsWaitFinish: true,
                 Near: -11.0, NearUse: true}
[   1505.0] E GameRomCamera[0] - Demo_CameraAnim (#47, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 41.400001525878906, ApertureEnd: 41.400001525878906,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 2.4000000953674316, DOFBlurStart: 2.4000000953674316,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 9.399999618530273,
                 FocalLengthEnd: 9.399999618530273, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C15-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1505.0] E GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
               duration: 150.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[   1505.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#119, xc=0)
               duration: 150.0
               {ASName: C15-Npc_Gerudo_Queen-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1505.0] E Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#127, xc=0)
               duration: 150.0
               {ASName: C15-Sunazarashi_Chief-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1505.0] E Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#132, xc=0)
               duration: 150.0
               {ASName: C15-Sunazarashi-B-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1505.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#143, xc=0)
               duration: 150.0
               {ASName: C15-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1524.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#69, xc=0)
               duration: 15.0
               {Count: 2, IsWaitFinish: true}
[   1539.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#69, xc=0)
[   1614.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#70, xc=0)
               duration: 15.0
               {Count: 2, IsWaitFinish: true}
[   1629.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#70, xc=0)
[   1655.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#21, xc=2)
[   1655.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#34, xc=3)
[   1655.0] L GameRomCamera[0] - Demo_CameraAnim (#47, xc=0)
[   1655.0] L GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
[   1655.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#119, xc=0)
[   1655.0] L Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#127, xc=0)
[   1655.0] L Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#132, xc=0)
[   1655.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#143, xc=0)
[   1655.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#22, xc=2)
               duration: 180.0
               {IsWaitFinish: true, angleY: 155.0}
[   1655.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#35, xc=3)
               duration: 180.0
               {Far: 435.0, FarUse: true, FogRatio: 0.3499999940395355, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: true}
[   1655.0] E GameRomCamera[0] - Demo_CameraAnim (#48, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C16-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1655.0] E GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
               duration: 180.0
               {FocusDistEnd: 21.0, FocusDistStart: 14.0, IsWaitFinish: true}
[   1655.0] E Npc_oasis003[0] - Demo_PlayASForTimeline (#120, xc=0)
               duration: 180.0
               {ASName: C16-Npc_Gerudo_Queen-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1655.0] E Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#128, xc=0)
               duration: 180.0
               {ASName: C16-Sunazarashi_Chief-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1655.0] E Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#133, xc=0)
               duration: 180.0
               {ASName: C16-Sunazarashi-B-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1655.0] E RemainsElectric[0] - Demo_PlayASForTimeline (#144, xc=0)
               duration: 180.0
               {ASName: C16-DgnObj_IbutsuElectricField_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1685.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#5, xc=0)
               duration: 120.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo123_0_Text020}
[   1694.0] E EventControllerRumble[0] - Demo_RumbleSmall (#71, xc=0)
               duration: 15.0
               {Count: 2, IsWaitFinish: true}
[   1709.0] L EventControllerRumble[0] - Demo_RumbleSmall (#71, xc=0)
[   1805.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#5, xc=0)
[   1805.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1835.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1835.0] L Obj_Sun_A_01[0] - Demo_SunMove (#6, xc=0)
[   1835.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#7, xc=0)
[   1835.0] L WorldManagerControl[0] - Demo_SetWind (#8, xc=0)
[   1835.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#9, xc=1)
[   1835.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#22, xc=2)
[   1835.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#35, xc=3)
[   1835.0] L GameRomCamera[0] - Demo_CameraAnim (#48, xc=0)
[   1835.0] L GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
[   1835.0] L Npc_oasis003[0] - Demo_PlayASForTimeline (#120, xc=0)
[   1835.0] L Npc_oasis003[0] - Demo_OffMaterialVisibility (#121, xc=1)
[   1835.0] L Dm_Armor_115_Head[0] - Demo_EventBind (#122, xc=0)
[   1835.0] L Animal_SunazarashiSP_C[0] - Demo_PlayASForTimeline (#128, xc=0)
[   1835.0] L Animal_SunazarashiSP_A[0] - Demo_PlayASForTimeline (#133, xc=0)
[   1835.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#144, xc=0)
[   1835.0] L RemainsElectric[0] - Demo_PlayASForTimeline (#147, xc=1)
