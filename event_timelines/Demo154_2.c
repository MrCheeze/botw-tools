-------- Event timeline: Demo154_2 --------
actors: 9
clips: 133
oneshots: 0
cuts: 18
duration: 3840.0
subtimelines: ['Demo154_2_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 210.0
x4: 0
params: (none)

Cut: C03
start time: 450.0
x4: 0
params: (none)

Cut: C04
start time: 540.0
x4: 0
params: (none)

Cut: C05
start time: 685.0
x4: 0
params: (none)

Cut: C06
start time: 945.0
x4: 0
params: (none)

Cut: C07
start time: 1415.0
x4: 0
params: (none)

Cut: C08
start time: 1750.0
x4: 0
params: (none)

Cut: C09
start time: 1990.0
x4: 0
params: (none)

Cut: C10
start time: 2140.0
x4: 0
params: (none)

Cut: C11
start time: 2375.0
x4: 0
params: (none)

Cut: C12
start time: 2705.0
x4: 0
params: (none)

Cut: C13
start time: 2905.0
x4: 0
params: (none)

Cut: C14
start time: 3055.0
x4: 0
params: (none)

Cut: C15
start time: 3170.0
x4: 0
params: (none)

Cut: C16
start time: 3405.0
x4: 0
params: (none)

Cut: C17
start time: 3475.0
x4: 0
params: (none)

Cut: C19
start time: 3575.0
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
actions: ['Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_EventSetDirectionalYang', 'Demo_EventSetFogDirect']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting', 'Demo_OverwriteNear']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: TerrainCalcCenterTag[0]
x36: 1
actions: ['Demo_TerrainCalcCenter']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Npc_Hyrule_KingSoul[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 3840.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 3840.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 3840.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.11999999731779099, WindDirY: 0.0, WindDirZ: 0.03999999910593033,
                 WindPower: 6.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
               duration: 3840.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=2)
               duration: 210.0
               {IsWaitFinish: true, angleY: -60.47999954223633}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=3)
               duration: 210.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1599999964237213, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 139.1999969482422, ApertureEnd: 66.5999984741211,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.600000023841858, DOFBlurStart: 1.600000023841858,
                 DOFEndFrame: 200.0, DOFStartFrame: 100.0, DOFUse: true, EndFrame: -1.0, FocalLength: 10.899999618530273,
                 FocalLengthEnd: 16.799999237060547, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
               duration: 210.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#70, xc=2)
               duration: 210.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[      0.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#80, xc=0)
               duration: 3170.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-811.0, 263.0, 1971.0]
               type: 0
[      0.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#95, xc=0)
               duration: 210.0
               {ASName: C01-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#112, xc=1)
               duration: 3840.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#113, xc=0)
               duration: 450.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     58.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#83, xc=0)
               duration: 131.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text054}
[    189.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#83, xc=0)
[    210.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=2)
[    210.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=3)
[    210.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[    210.0] L GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
[    210.0] L GameRomCamera[0] - Demo_OverwriteNear (#70, xc=2)
[    210.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#95, xc=0)
[    210.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=2)
               duration: 240.0
               {IsWaitFinish: true, angleY: -110.87999725341797}
[    210.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=3)
               duration: 240.0
               {Far: 0.0, FarUse: false, FogRatio: 0.23000000417232513, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    210.0] E GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
               duration: 240.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 80.0, ApertureEnd: 80.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 2.0, DOFEndFrame: 210.0, DOFStartFrame: 90.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 7000.0, FocalLengthEnd: 7000.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    210.0] E GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
               duration: 240.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[    210.0] E GameRomCamera[0] - Demo_OverwriteNear (#71, xc=2)
               duration: 240.0
               {IsWaitFinish: true, Near: 1.0}
[    210.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#96, xc=0)
               duration: 240.0
               {ASName: C02-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    248.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#84, xc=0)
               duration: 257.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text055}
[    450.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=2)
[    450.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=3)
[    450.0] L GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
[    450.0] L GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
[    450.0] L GameRomCamera[0] - Demo_OverwriteNear (#71, xc=2)
[    450.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#96, xc=0)
[    450.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#113, xc=0)
[    450.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=2)
               duration: 90.0
               {IsWaitFinish: true, angleY: -69.12000274658203}
[    450.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=3)
               duration: 235.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1599999964237213, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    450.0] E GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
               duration: 90.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 112.0, ApertureEnd: 112.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 9.600000381469727, FocalLengthEnd: 9.600000381469727,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C03-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    450.0] E GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
               duration: 90.0
               {FocusDistEnd: 9.199999809265137, FocusDistStart: 9.199999809265137, IsWaitFinish: true}
[    450.0] E GameRomCamera[0] - Demo_OverwriteNear (#72, xc=2)
               duration: 90.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[    450.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#97, xc=0)
               duration: 235.0
               {ASName: C03-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    450.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#114, xc=0)
               duration: 90.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    505.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#84, xc=0)
[    540.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=2)
[    540.0] L GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
[    540.0] L GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
[    540.0] L GameRomCamera[0] - Demo_OverwriteNear (#72, xc=2)
[    540.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#114, xc=0)
[    540.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=2)
               duration: 145.0
               {IsWaitFinish: true, angleY: -69.12000274658203}
[    540.0] E GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
               duration: 145.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.5, DOFBlurStart: 2.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 2.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    540.0] E GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
               duration: 145.0
               {FocusDistEnd: 2.5, FocusDistStart: 2.5, IsWaitFinish: true}
[    540.0] E GameRomCamera[0] - Demo_OverwriteNear (#73, xc=2)
               duration: 145.0
               {IsWaitFinish: true, Near: 2.0}
[    540.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#115, xc=0)
               duration: 145.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    548.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#85, xc=0)
               duration: 396.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text056}
[    685.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=2)
[    685.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=3)
[    685.0] L GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
[    685.0] L GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
[    685.0] L GameRomCamera[0] - Demo_OverwriteNear (#73, xc=2)
[    685.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#97, xc=0)
[    685.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#115, xc=0)
[    685.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=2)
               duration: 260.0
               {IsWaitFinish: true, angleY: -61.91999816894531}
[    685.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=3)
               duration: 260.0
               {Far: 0.0, FarUse: false, FogRatio: 0.23000000417232513, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    685.0] E GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
               duration: 260.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 12.0, ApertureEnd: 12.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.699999988079071, DOFBlurStart: 0.699999988079071, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 9.100000381469727, FocalLengthEnd: 9.100000381469727,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C05-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    685.0] E GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
               duration: 260.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    685.0] E GameRomCamera[0] - Demo_OverwriteNear (#74, xc=2)
               duration: 260.0
               {IsWaitFinish: true, Near: 1.0}
[    685.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#98, xc=0)
               duration: 260.0
               {ASName: C05-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    685.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#116, xc=0)
               duration: 730.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    944.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#85, xc=0)
[    945.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=2)
[    945.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=3)
[    945.0] L GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
[    945.0] L GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
[    945.0] L GameRomCamera[0] - Demo_OverwriteNear (#74, xc=2)
[    945.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#98, xc=0)
[    945.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=2)
               duration: 470.0
               {IsWaitFinish: true, angleY: -122.4000015258789}
[    945.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=3)
               duration: 1430.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1599999964237213, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    945.0] E GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
               duration: 470.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 100.0, ApertureEnd: 100.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7000000476837158, FocalLengthEnd: 1.7000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    945.0] E GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
               duration: 470.0
               {FocusDistEnd: 2.700000047683716, FocusDistStart: 2.700000047683716, IsWaitFinish: true}
[    945.0] E GameRomCamera[0] - Demo_OverwriteNear (#75, xc=2)
               duration: 805.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[    945.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#99, xc=0)
               duration: 470.0
               {ASName: C06-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    968.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#86, xc=0)
               duration: 390.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text057}
[   1358.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#86, xc=0)
[   1385.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#87, xc=0)
               duration: 364.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text058}
[   1415.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=2)
[   1415.0] L GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
[   1415.0] L GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
[   1415.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#99, xc=0)
[   1415.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#116, xc=0)
[   1415.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=2)
               duration: 335.0
               {IsWaitFinish: true, angleY: -98.63999938964844}
[   1415.0] E GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
               duration: 335.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 25.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.20000000298023224, DOFBlurStart: 0.20000000298023224, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 2.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C07-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1415.0] E GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
               duration: 335.0
               {FocusDistEnd: 1.5, FocusDistStart: 1.5, IsWaitFinish: true}
[   1415.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#100, xc=0)
               duration: 335.0
               {ASName: C07-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1415.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#117, xc=0)
               duration: 335.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1749.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#87, xc=0)
[   1750.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=2)
[   1750.0] L GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
[   1750.0] L GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
[   1750.0] L GameRomCamera[0] - Demo_OverwriteNear (#75, xc=2)
[   1750.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#100, xc=0)
[   1750.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#117, xc=0)
[   1750.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=2)
               duration: 240.0
               {IsWaitFinish: true, angleY: -68.4000015258789}
[   1750.0] E GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
               duration: 240.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 70.0, ApertureEnd: 70.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.700000047683716, FocalLengthEnd: 2.700000047683716,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C08-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1750.0] E GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
               duration: 240.0
               {FocusDistEnd: 2.799999952316284, FocusDistStart: 2.799999952316284, IsWaitFinish: true}
[   1750.0] E GameRomCamera[0] - Demo_OverwriteNear (#76, xc=2)
               duration: 390.0
               {IsWaitFinish: true, Near: 2.0}
[   1750.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#101, xc=0)
               duration: 240.0
               {ASName: C09-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1750.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#118, xc=0)
               duration: 625.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1769.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#88, xc=0)
               duration: 203.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text059}
[   1972.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#88, xc=0)
[   1990.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=2)
[   1990.0] L GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
[   1990.0] L GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
[   1990.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#101, xc=0)
[   1990.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=2)
               duration: 150.0
               {IsWaitFinish: true, angleY: -100.08000183105469}
[   1990.0] E GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 69.0, ApertureEnd: 69.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.399999976158142, DOFBlurStart: 1.399999976158142, DOFEndFrame: 2140.0,
                 DOFStartFrame: 1990.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.299999952316284, FocalLengthEnd: 3.1500000953674316,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C09-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1990.0] E GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
               duration: 150.0
               {FocusDistEnd: 3.5, FocusDistStart: 3.5, IsWaitFinish: true}
[   1990.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#102, xc=0)
               duration: 150.0
               {ASName: C09-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2047.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#89, xc=0)
               duration: 82.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text065}
[   2129.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#89, xc=0)
[   2140.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=2)
[   2140.0] L GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
[   2140.0] L GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
[   2140.0] L GameRomCamera[0] - Demo_OverwriteNear (#76, xc=2)
[   2140.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#102, xc=0)
[   2140.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=2)
               duration: 235.0
               {IsWaitFinish: true, angleY: -81.36000061035156}
[   2140.0] E GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
               duration: 235.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 120.0, ApertureEnd: 120.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.5, DOFBlurStart: 2.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.5, FocalLengthEnd: 3.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C10-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2140.0] E GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
               duration: 235.0
               {FocusDistEnd: 3.299999952316284, FocusDistStart: 3.299999952316284, IsWaitFinish: true}
[   2140.0] E GameRomCamera[0] - Demo_OverwriteNear (#77, xc=2)
               duration: 915.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[   2140.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#103, xc=0)
               duration: 235.0
               {ASName: C10-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2160.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#90, xc=0)
               duration: 206.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text066}
[   2366.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#90, xc=0)
[   2375.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=2)
[   2375.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=3)
[   2375.0] L GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
[   2375.0] L GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
[   2375.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#103, xc=0)
[   2375.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#118, xc=0)
[   2375.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=2)
               duration: 330.0
               {IsWaitFinish: true, angleY: -59.0}
[   2375.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=3)
               duration: 330.0
               {Far: 0.0, FarUse: false, FogRatio: 0.23000000417232513, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   2375.0] E GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
               duration: 330.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C11-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2375.0] E GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
               duration: 330.0
               {FocusDistEnd: 7.300000190734863, FocusDistStart: 7.300000190734863, IsWaitFinish: true}
[   2375.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#104, xc=0)
               duration: 330.0
               {ASName: C11-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2375.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#119, xc=0)
               duration: 530.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2404.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#91, xc=0)
               duration: 286.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text061}
[   2690.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#91, xc=0)
[   2705.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=2)
[   2705.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=3)
[   2705.0] L GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
[   2705.0] L GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
[   2705.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#104, xc=0)
[   2705.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=2)
               duration: 200.0
               {IsWaitFinish: true, angleY: -41.040000915527344}
[   2705.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=3)
               duration: 465.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1599999964237213, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   2705.0] E GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
               duration: 200.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 120.0, ApertureEnd: 120.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.799999952316284, FocalLengthEnd: 3.799999952316284,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C12-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2705.0] E GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
               duration: 200.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[   2705.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#105, xc=0)
               duration: 200.0
               {ASName: C12-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2719.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#92, xc=0)
               duration: 343.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text062}
[   2905.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=2)
[   2905.0] L GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
[   2905.0] L GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
[   2905.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#105, xc=0)
[   2905.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#119, xc=0)
[   2905.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=2)
               duration: 150.0
               {IsWaitFinish: true, angleY: -110.16000366210938}
[   2905.0] E GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 120.0, ApertureEnd: 120.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.799999952316284, FocalLengthEnd: 3.799999952316284,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C13-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   2905.0] E GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
               duration: 150.0
               {FocusDistEnd: 5.5, FocusDistStart: 5.5, IsWaitFinish: true}
[   2905.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#106, xc=0)
               duration: 150.0
               {ASName: C13-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2905.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#120, xc=0)
               duration: 150.0
               {ASName: C13-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3005.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#125, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[   3006.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#125, xc=1)
[   3029.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#126, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[   3030.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#126, xc=1)
[   3047.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#127, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[   3048.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#127, xc=1)
[   3055.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=2)
[   3055.0] L GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
[   3055.0] L GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
[   3055.0] L GameRomCamera[0] - Demo_OverwriteNear (#77, xc=2)
[   3055.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#106, xc=0)
[   3055.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#120, xc=0)
[   3055.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=2)
               duration: 115.0
               {IsWaitFinish: true, angleY: -84.95999908447266}
[   3055.0] E GameRomCamera[0] - Demo_CameraAnim (#47, xc=0)
               duration: 115.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C14-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3055.0] E GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
               duration: 115.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[   3055.0] E GameRomCamera[0] - Demo_OverwriteNear (#78, xc=2)
               duration: 115.0
               {IsWaitFinish: true, Near: 2.5}
[   3055.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#107, xc=0)
               duration: 115.0
               {ASName: C14-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3055.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#121, xc=0)
               duration: 350.0
               {ASName: C14-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3062.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#92, xc=0)
[   3080.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#128, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[   3081.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#128, xc=1)
[   3091.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#93, xc=0)
               duration: 303.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text063}
[   3102.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#129, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[   3103.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#129, xc=1)
[   3125.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#130, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[   3126.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#130, xc=1)
[   3145.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#131, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[   3146.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#131, xc=1)
[   3155.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#132, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[   3156.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#132, xc=1)
[   3170.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#19, xc=2)
[   3170.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=3)
[   3170.0] L GameRomCamera[0] - Demo_CameraAnim (#47, xc=0)
[   3170.0] L GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
[   3170.0] L GameRomCamera[0] - Demo_OverwriteNear (#78, xc=2)
[   3170.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#80, xc=0)
[   3170.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#107, xc=0)
[   3170.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=2)
               duration: 235.0
               {IsWaitFinish: true, angleY: -16.559999465942383}
[   3170.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=3)
               duration: 235.0
               {Far: 0.0, FarUse: false, FogRatio: 0.23000000417232513, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   3170.0] E GameRomCamera[0] - Demo_CameraAnim (#48, xc=0)
               duration: 235.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C15-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3170.0] E GameRomCamera[0] - Demo_FocusDistSetting (#66, xc=1)
               duration: 235.0
               {FocusDistEnd: 0.5, FocusDistStart: 0.5, IsWaitFinish: true}
[   3170.0] E GameRomCamera[0] - Demo_OverwriteNear (#79, xc=2)
               duration: 670.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[   3170.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#81, xc=0)
               duration: 235.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-36.0, 160.0, 1807.0]
               type: 0
[   3170.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#108, xc=0)
               duration: 235.0
               {ASName: C15-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3394.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#93, xc=0)
[   3403.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#94, xc=0)
               duration: 380.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_2_Text064}
[   3405.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#20, xc=2)
[   3405.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=3)
[   3405.0] L GameRomCamera[0] - Demo_CameraAnim (#48, xc=0)
[   3405.0] L GameRomCamera[0] - Demo_FocusDistSetting (#66, xc=1)
[   3405.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#81, xc=0)
[   3405.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#108, xc=0)
[   3405.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#121, xc=0)
[   3405.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#21, xc=2)
               duration: 70.0
               {IsWaitFinish: true, angleY: -90.72000122070312}
[   3405.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#32, xc=3)
               duration: 170.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1599999964237213, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   3405.0] E GameRomCamera[0] - Demo_CameraAnim (#49, xc=0)
               duration: 70.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C16-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3405.0] E GameRomCamera[0] - Demo_FocusDistSetting (#67, xc=1)
               duration: 70.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   3405.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#82, xc=0)
               duration: 435.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-811.0, 263.0, 1971.0]
               type: 0
[   3405.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#109, xc=0)
               duration: 70.0
               {ASName: C16-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3405.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#122, xc=0)
               duration: 70.0
               {ASName: C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3475.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#21, xc=2)
[   3475.0] L GameRomCamera[0] - Demo_CameraAnim (#49, xc=0)
[   3475.0] L GameRomCamera[0] - Demo_FocusDistSetting (#67, xc=1)
[   3475.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#109, xc=0)
[   3475.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#122, xc=0)
[   3475.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#22, xc=2)
               duration: 100.0
               {IsWaitFinish: true, angleY: -48.2400016784668}
[   3475.0] E GameRomCamera[0] - Demo_CameraAnim (#50, xc=0)
               duration: 100.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 350.0, ApertureEnd: 350.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.5, DOFBlurStart: 1.5, DOFEndFrame: 99.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 0.44999998807907104, FocalLengthEnd: 0.44999998807907104,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C17-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   3475.0] E GameRomCamera[0] - Demo_FocusDistSetting (#68, xc=1)
               duration: 100.0
               {FocusDistEnd: 0.699999988079071, FocusDistStart: 0.699999988079071, IsWaitFinish: true}
[   3475.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#110, xc=0)
               duration: 100.0
               {ASName: C17-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3475.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#123, xc=0)
               duration: 100.0
               {ASName: C17-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3575.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#22, xc=2)
[   3575.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#32, xc=3)
[   3575.0] L GameRomCamera[0] - Demo_CameraAnim (#50, xc=0)
[   3575.0] L GameRomCamera[0] - Demo_FocusDistSetting (#68, xc=1)
[   3575.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#110, xc=0)
[   3575.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#123, xc=0)
[   3575.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#23, xc=2)
               duration: 265.0
               {IsWaitFinish: true, angleY: -72.0}
[   3575.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#33, xc=3)
               duration: 265.0
               {Far: 0.0, FarUse: false, FogRatio: 0.23000000417232513, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   3575.0] E GameRomCamera[0] - Demo_CameraAnim (#51, xc=0)
               duration: 265.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C19-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   3575.0] E GameRomCamera[0] - Demo_FocusDistSetting (#69, xc=1)
               duration: 265.0
               {FocusDistEnd: 8.0, FocusDistStart: 8.0, IsWaitFinish: true}
[   3575.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#111, xc=0)
               duration: 265.0
               {ASName: C19-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3575.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#124, xc=0)
               duration: 265.0
               {ASName: C19-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   3783.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#94, xc=0)
[   3810.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   3840.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   3840.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[   3840.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[   3840.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[   3840.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
[   3840.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#23, xc=2)
[   3840.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#33, xc=3)
[   3840.0] L GameRomCamera[0] - Demo_CameraAnim (#51, xc=0)
[   3840.0] L GameRomCamera[0] - Demo_FocusDistSetting (#69, xc=1)
[   3840.0] L GameRomCamera[0] - Demo_OverwriteNear (#79, xc=2)
[   3840.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#82, xc=0)
[   3840.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#111, xc=0)
[   3840.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#112, xc=1)
[   3840.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#124, xc=0)
