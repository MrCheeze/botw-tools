-------- Event timeline: Demo154_1 --------
actors: 13
clips: 92
oneshots: 0
cuts: 12
duration: 2285.0
subtimelines: ['Demo154_1_effect']
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
start time: 330.0
x4: 0
params: (none)

Cut: C04
start time: 480.0
x4: 0
params: (none)

Cut: C05
start time: 615.0
x4: 0
params: (none)

Cut: C06
start time: 735.0
x4: 0
params: (none)

Cut: C07
start time: 855.0
x4: 0
params: (none)

Cut: C08
start time: 1295.0
x4: 0
params: (none)

Cut: C09
start time: 1575.0
x4: 0
params: (none)

Cut: C10
start time: 1730.0
x4: 0
params: (none)

Cut: C14
start time: 1890.0
x4: 0
params: (none)

Cut: C11
start time: 2015.0
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
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_EventCloudShadowOff', 'Demo_EventSetFogDirect']
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

Actor: Npc_King_Vagrant007[0]
x36: 1
actions: ['Demo_VisibleOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Npc_King_Vagrant001[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Weapon_Sword_500[0]
x36: 2
actions: ['Demo_Bind', 'Demo_PlayASForTimeline']
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
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 2285.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 2285.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
               duration: 2285.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.11999999731779099, WindDirY: 0.0, WindDirZ: 0.029999999329447746,
                 WindPower: 6.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=1)
               duration: 210.0
               {IsWaitFinish: true, angleY: -28.799999237060547}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#19, xc=2)
               duration: 2285.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#20, xc=3)
               duration: 210.0
               {Far: 0.0, FarUse: false, FogRatio: 0.23000000417232513, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 24.0, ApertureEnd: 24.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2999999523162842, DOFBlurStart: 1.2999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 6.25, FocalLengthEnd: 6.25,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C01-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 210.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#50, xc=2)
               duration: 210.0
               {IsWaitFinish: true, Near: 6.0}
[      0.0] E Npc_King_Vagrant007[0] - Demo_VisibleOff (#64, xc=0)
               duration: 2285.0
               {IsWaitFinish: true}
[      0.0] E Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#65, xc=0)
               duration: 210.0
               {ASName: C01-Npc_King_Vagrant-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Weapon_Sword_500[0] - Demo_Bind (#70, xc=0)
               duration: 735.0
               {ActorName: Npc_King_Vagrant001, IsContinueBind: true, IsWaitFinish: true, NodeName: Weapon_R,
                 RotOffsetX: 0.0, RotOffsetY: 0.0, RotOffsetZ: 0.0, TransOffsetX: 0.0, TransOffsetY: 0.0, TransOffsetZ: 0.0,
                 UniqueName: ''}
[      0.0] E Weapon_Sword_500[0] - Demo_PlayASForTimeline (#71, xc=1)
               duration: 735.0
               {ASName: WaitColor, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: 1}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#79, xc=0)
               duration: 210.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     32.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#57, xc=0)
               duration: 298.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_1_Text033}
[    210.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=1)
[    210.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#20, xc=3)
[    210.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[    210.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[    210.0] L GameRomCamera[0] - Demo_OverwriteNear (#50, xc=2)
[    210.0] L Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#65, xc=0)
[    210.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#79, xc=0)
[    210.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=1)
               duration: 120.0
               {IsWaitFinish: true, angleY: -45.0}
[    210.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#21, xc=3)
               duration: 270.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1599999964237213, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    210.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 62.0, ApertureEnd: 62.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 5.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    210.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 120.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    210.0] E GameRomCamera[0] - Demo_OverwriteNear (#51, xc=2)
               duration: 1365.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[    210.0] E Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#66, xc=0)
               duration: 120.0
               {ASName: C02-Npc_King_Vagrant-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    210.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#80, xc=0)
               duration: 120.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    330.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=1)
[    330.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[    330.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[    330.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#57, xc=0)
[    330.0] L Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#66, xc=0)
[    330.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#80, xc=0)
[    330.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=1)
               duration: 150.0
               {IsWaitFinish: true, angleY: -108.72000122070312}
[    330.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 179.0, ApertureEnd: 179.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.9700000286102295, FocalLengthEnd: 2.9700000286102295,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C03-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    330.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 150.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[    330.0] E Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#67, xc=0)
               duration: 150.0
               {ASName: C03-Npc_King_Vagrant-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    330.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#81, xc=0)
               duration: 150.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    345.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#58, xc=0)
               duration: 346.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_1_Text034}
[    480.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=1)
[    480.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#21, xc=3)
[    480.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[    480.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[    480.0] L Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#67, xc=0)
[    480.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#81, xc=0)
[    480.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=1)
               duration: 135.0
               {IsWaitFinish: true, angleY: -45.0}
[    480.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#22, xc=3)
               duration: 135.0
               {Far: 0.0, FarUse: false, FogRatio: 0.23000000417232513, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    480.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 135.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 42.0, ApertureEnd: 42.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.7000000476837158, FocalLengthEnd: 1.7000000476837158,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    480.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 135.0
               {FocusDistEnd: 6.5, FocusDistStart: 6.5, IsWaitFinish: true}
[    480.0] E Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#68, xc=0)
               duration: 135.0
               {ASName: C04-Npc_King_Vagrant-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    480.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#82, xc=0)
               duration: 135.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    495.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#89, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    496.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#89, xc=1)
[    615.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=1)
[    615.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#22, xc=3)
[    615.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[    615.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[    615.0] L Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#68, xc=0)
[    615.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#82, xc=0)
[    615.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=1)
               duration: 120.0
               {IsWaitFinish: true, angleY: -105.83999633789062}
[    615.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=3)
               duration: 960.0
               {Far: 0.0, FarUse: false, FogRatio: 0.1599999964237213, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[    615.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.8999999761581421, DOFBlurStart: 0.8999999761581421, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.7999999523162842, FocalLengthEnd: 1.7999999523162842,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C05-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    615.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 120.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    615.0] E Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#69, xc=0)
               duration: 120.0
               {ASName: C05-Npc_King_Vagrant-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    615.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#83, xc=0)
               duration: 120.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    691.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#58, xc=0)
[    695.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 40.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    735.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    735.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=1)
[    735.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[    735.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
[    735.0] L Npc_King_Vagrant001[0] - Demo_PlayASForTimeline (#69, xc=0)
[    735.0] L Weapon_Sword_500[0] - Demo_Bind (#70, xc=0)
[    735.0] L Weapon_Sword_500[0] - Demo_PlayASForTimeline (#71, xc=1)
[    735.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#83, xc=0)
[    735.0] E Fader[0] - Demo_FadeIn (#2, xc=0)
               duration: 40.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    735.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=1)
               duration: 120.0
               {IsWaitFinish: true, angleY: -52.0}
[    735.0] E GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 124.0, ApertureEnd: 124.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.5, DOFBlurStart: 2.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.5, FocalLengthEnd: 2.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C06-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    735.0] E GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
               duration: 120.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    735.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#84, xc=0)
               duration: 120.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    743.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#59, xc=0)
               duration: 124.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo154_1_Text040}
[    755.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#90, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    756.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#90, xc=1)
[    775.0] L Fader[0] - Demo_FadeIn (#2, xc=0)
[    850.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#91, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    851.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#91, xc=1)
[    855.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=1)
[    855.0] L GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
[    855.0] L GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
[    855.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#84, xc=0)
[    855.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=1)
               duration: 440.0
               {IsWaitFinish: true, angleY: -110.16000366210938}
[    855.0] E GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
               duration: 440.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 14.800000190734863, ApertureEnd: 14.800000190734863,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.400000095367432, FocalLengthEnd: 4.400000095367432,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    855.0] E GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
               duration: 440.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    855.0] E EventSystemActor[0] - Demo_PlayUiActorName (#56, xc=0)
               duration: 180.0
               {ActorName: Dm_Npc_Hyrule_KingSoul, ActorType: 1, IsWaitFinish: true}
[    855.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#72, xc=0)
               duration: 440.0
               {ASName: C07-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    855.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#78, xc=1)
               duration: 1430.0
               {ASName: Ghost, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    855.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#85, xc=0)
               duration: 440.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    867.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#59, xc=0)
[   1035.0] L EventSystemActor[0] - Demo_PlayUiActorName (#56, xc=0)
[   1047.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#60, xc=0)
               duration: 510.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_1_Text035}
[   1295.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=1)
[   1295.0] L GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
[   1295.0] L GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
[   1295.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#72, xc=0)
[   1295.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#85, xc=0)
[   1295.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=1)
               duration: 280.0
               {IsWaitFinish: true, angleY: -110.16000366210938}
[   1295.0] E GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
               duration: 280.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 98.5, ApertureEnd: 98.5, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.5, DOFBlurStart: 2.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.900000095367432, FocalLengthEnd: 4.900000095367432,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C08-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1295.0] E GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
               duration: 280.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[   1295.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#73, xc=0)
               duration: 280.0
               {ASName: C08-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1295.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#86, xc=0)
               duration: 280.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1557.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#60, xc=0)
[   1575.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=1)
[   1575.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#23, xc=3)
[   1575.0] L GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
[   1575.0] L GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
[   1575.0] L GameRomCamera[0] - Demo_OverwriteNear (#51, xc=2)
[   1575.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#73, xc=0)
[   1575.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#86, xc=0)
[   1575.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=1)
               duration: 155.0
               {IsWaitFinish: true, angleY: -45.0}
[   1575.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=3)
               duration: 440.0
               {Far: 0.0, FarUse: false, FogRatio: 0.25, InstantSW: true, IsWaitFinish: true, Near: 0.0, NearUse: false}
[   1575.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 155.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 6.099999904632568, ApertureEnd: 6.099999904632568,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 0.699999988079071, DOFBlurStart: 0.699999988079071,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 14.800000190734863,
                 FocalLengthEnd: 14.800000190734863, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C09-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1575.0] E GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
               duration: 155.0
               {FocusDistEnd: 6.5, FocusDistStart: 6.5, IsWaitFinish: true}
[   1575.0] E GameRomCamera[0] - Demo_OverwriteNear (#52, xc=2)
               duration: 155.0
               {IsWaitFinish: true, Near: 2.0}
[   1575.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#74, xc=0)
               duration: 155.0
               {ASName: C09-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1575.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#87, xc=0)
               duration: 155.0
               {ASName: C09-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1578.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#61, xc=0)
               duration: 312.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_1_Text038}
[   1730.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#15, xc=1)
[   1730.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[   1730.0] L GameRomCamera[0] - Demo_FocusDistSetting (#46, xc=1)
[   1730.0] L GameRomCamera[0] - Demo_OverwriteNear (#52, xc=2)
[   1730.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#74, xc=0)
[   1730.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#87, xc=0)
[   1730.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=1)
               duration: 160.0
               {IsWaitFinish: true, angleY: -48.959999084472656}
[   1730.0] E GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
               duration: 160.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 6.099999904632568, ApertureEnd: 6.099999904632568,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 29.799999237060547, FocalLengthEnd: 29.799999237060547,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 20.0, SceneName: C10-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1730.0] E GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
               duration: 160.0
               {FocusDistEnd: 27.0, FocusDistStart: 27.0, IsWaitFinish: true}
[   1730.0] E GameRomCamera[0] - Demo_OverwriteNear (#53, xc=2)
               duration: 285.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[   1730.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#75, xc=0)
               duration: 160.0
               {ASName: C10-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1730.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#88, xc=0)
               duration: 160.0
               {ASName: C10-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1890.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#16, xc=1)
[   1890.0] L GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
[   1890.0] L GameRomCamera[0] - Demo_FocusDistSetting (#47, xc=1)
[   1890.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#61, xc=0)
[   1890.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#75, xc=0)
[   1890.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#88, xc=0)
[   1890.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=1)
               duration: 125.0
               {IsWaitFinish: true, angleY: -55.0}
[   1890.0] E GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
               duration: 125.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 64.0, ApertureEnd: 64.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.7999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 6.449999809265137, FocalLengthEnd: 6.449999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C14-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1890.0] E GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
               duration: 125.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[   1890.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#76, xc=0)
               duration: 125.0
               {ASName: C14-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1945.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#62, xc=0)
               duration: 65.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_1_Text039}
[   2010.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#62, xc=0)
[   2015.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#17, xc=1)
[   2015.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#24, xc=3)
[   2015.0] L GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
[   2015.0] L GameRomCamera[0] - Demo_FocusDistSetting (#48, xc=1)
[   2015.0] L GameRomCamera[0] - Demo_OverwriteNear (#53, xc=2)
[   2015.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#76, xc=0)
[   2015.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=1)
               duration: 270.0
               {IsWaitFinish: true, angleY: -57.0}
[   2015.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=3)
               duration: 270.0
               {Far: 0.0, FarUse: false, FogRatio: 0.15000000596046448, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: false}
[   2015.0] E GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
               duration: 270.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C11-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2015.0] E GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
               duration: 270.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   2015.0] E GameRomCamera[0] - Demo_OverwriteNear (#54, xc=2)
               duration: 270.0
               {IsWaitFinish: true, Near: 1.0}
[   2015.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#55, xc=0)
               duration: 270.0
               IsWaitFinish: true
               level: 0
               meshReso: 2
               pos: [-272.0, 289.0, -950.0]
               type: 0
[   2015.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#63, xc=0)
               duration: 210.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo154_1_Text037}
[   2015.0] E Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#77, xc=0)
               duration: 270.0
               {ASName: C11-Npc_King_Ghost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2225.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#63, xc=0)
[   2255.0] E Fader[0] - Demo_FadeOut (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   2285.0] L Fader[0] - Demo_FadeOut (#3, xc=0)
[   2285.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   2285.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   2285.0] L WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
[   2285.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#18, xc=1)
[   2285.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#19, xc=2)
[   2285.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=3)
[   2285.0] L GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
[   2285.0] L GameRomCamera[0] - Demo_FocusDistSetting (#49, xc=1)
[   2285.0] L GameRomCamera[0] - Demo_OverwriteNear (#54, xc=2)
[   2285.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#55, xc=0)
[   2285.0] L Npc_King_Vagrant007[0] - Demo_VisibleOff (#64, xc=0)
[   2285.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#77, xc=0)
[   2285.0] L Dm_Npc_Hyrule_KingSoul[0] - Demo_PlayASForTimeline (#78, xc=1)
