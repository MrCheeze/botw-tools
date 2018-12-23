-------- Event timeline: Demo143_4 --------
actors: 12
clips: 83
oneshots: 0
cuts: 10
duration: 1290.0
subtimelines: ['Demo143_4_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 240.0
x4: 0
params: (none)

Cut: C03
start time: 300.0
x4: 0
params: (none)

Cut: C04
start time: 455.0
x4: 0
params: (none)

Cut: C05
start time: 505.0
x4: 0
params: (none)

Cut: C06
start time: 525.0
x4: 0
params: (none)

Cut: C07
start time: 545.0
x4: 0
params: (none)

Cut: C08
start time: 575.0
x4: 0
params: (none)

Cut: C09
start time: 620.0
x4: 0
params: (none)

Cut: C10
start time: 890.0
x4: 0
params: (none)


===== Actors =====

Actor: EventBgmCtrlTag[0]
x36: 1
actions: ['Demo_Stop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[1]
x36: 1
actions: ['Demo_PlayUiBossHpDamage']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_PlayUiBossHp']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: WorldManagerControl[0]
x36: 9
actions: ['Demo_SetWind', 'Demo_EventSetFogDirect', 'Demo_SetPaletteType', 'Demo_EventCloudShadowOff', 'Demo_SetYfog', 'Demo_EventSetCharAmbientScale', 'Demo_EventSetCharMainLightScale', 'Demo_EventSetWeather', 'Demo_SetDirectionalLight']
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

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall', 'Demo_RumbleLarge', 'Demo_RumbleMiddle']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Enemy_Ganon[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 2, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Locator[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Locator[1]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#3, xc=0)
               duration: 30.0
               {Color: 0, DispMode: NoLogo, Frame: 0, IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 1290.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.10000000149011612, WindDirY: 0.0, WindDirZ: -0.11999999731779099,
                 WindPower: 3.0}
[      0.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#5, xc=1)
               duration: 240.0
               {IsWaitFinish: true, angleX: -56.880001068115234, angleY: 43.20000076293945}
[      0.0] E WorldManagerControl[0] - Demo_SetPaletteType (#8, xc=2)
               duration: 240.0
               {ChangeFrame: 0, EndFrame: 0, IsWaitFinish: true, PaletteType: 16, Speed: 1.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#10, xc=3)
               duration: 1290.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=4)
               duration: 240.0
               {Far: 1400.0, FarUse: true, FogRatio: 0.25, InstantSW: true, IsWaitFinish: true, Near: 0.0,
                 NearUse: true}
[      0.0] E WorldManagerControl[0] - Demo_SetYfog (#15, xc=5)
               duration: 240.0
               {IsWaitFinish: true, YfogRatio: 0.6499999761581421}
[      0.0] E WorldManagerControl[0] - Demo_EventSetWeather (#20, xc=8)
               duration: 1290.0
               {IsWaitFinish: true, WeatherType: 0}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
               duration: 240.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 300.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
               duration: 240.0
               {FocusDistEnd: 955.0, FocusDistStart: 955.0, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#46, xc=2)
               duration: 240.0
               {IsWaitFinish: true, Near: 2.0}
[      0.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#48, xc=0)
               duration: 240.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-229.0, 280.0, -1035.0]
               type: 0
[      0.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#81, xc=0)
               duration: 1290.0
               {ASName: C01-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Locator[1] - Demo_PlayASForTimeline (#82, xc=0)
               duration: 1290.0
               {ASName: C01-Dm_Locator-B-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#3, xc=0)
[    240.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#5, xc=1)
[    240.0] L WorldManagerControl[0] - Demo_SetPaletteType (#8, xc=2)
[    240.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#11, xc=4)
[    240.0] L WorldManagerControl[0] - Demo_SetYfog (#15, xc=5)
[    240.0] L GameRomCamera[0] - Demo_CameraAnim (#21, xc=0)
[    240.0] L GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
[    240.0] L GameRomCamera[0] - Demo_OverwriteNear (#46, xc=2)
[    240.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#48, xc=0)
[    240.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#6, xc=1)
               duration: 650.0
               {IsWaitFinish: true, angleX: -74.87999725341797, angleY: -235.44000244140625}
[    240.0] E WorldManagerControl[0] - Demo_SetPaletteType (#9, xc=2)
               duration: 1050.0
               {ChangeFrame: 0, EndFrame: 0, IsWaitFinish: true, PaletteType: 18, Speed: 1.0}
[    240.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=4)
               duration: 60.0
               {Far: 75.0, FarUse: true, FogRatio: 0.800000011920929, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[    240.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#16, xc=6)
               duration: 1050.0
               {Bscale: 0.5, Gscale: 0.5, IsWaitFinish: true, Rscale: 0.5}
[    240.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#17, xc=7)
               duration: 60.0
               {Bscale: 1.0, Gscale: 1.0, IsWaitFinish: true, Rscale: 1.0}
[    240.0] E GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
               duration: 60.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 73.0, ApertureEnd: 73.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.399999976158142, DOFBlurStart: 1.399999976158142, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.5999999046325684, FocalLengthEnd: 2.5999999046325684,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    240.0] E GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
               duration: 60.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[    240.0] E GameRomCamera[0] - Demo_OverwriteNear (#47, xc=2)
               duration: 60.0
               {IsWaitFinish: true, Near: 0.10000000149011612}
[    240.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#55, xc=0)
               duration: 60.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    240.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#64, xc=0)
               duration: 60.0
               {ASName: C04-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    240.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#73, xc=1)
               duration: 265.0
               {ASName: Demo143_4-C00-Ganon-A-0, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    300.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#12, xc=4)
[    300.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#17, xc=7)
[    300.0] L GameRomCamera[0] - Demo_CameraAnim (#22, xc=0)
[    300.0] L GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
[    300.0] L GameRomCamera[0] - Demo_OverwriteNear (#47, xc=2)
[    300.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#55, xc=0)
[    300.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#64, xc=0)
[    300.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#13, xc=4)
               duration: 155.0
               {Far: 150.0, FarUse: true, FogRatio: 0.800000011920929, InstantSW: true, IsWaitFinish: true,
                 Near: -11.0, NearUse: true}
[    300.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#18, xc=7)
               duration: 155.0
               {Bscale: 0.5, Gscale: 0.5, IsWaitFinish: true, Rscale: 0.5}
[    300.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 155.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 6.75, ApertureEnd: 6.75, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 1.0, DOFEndFrame: 28.0, DOFStartFrame: 20.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.800000190734863, FocalLengthEnd: 5.800000190734863,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C05-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    300.0] E GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
               duration: 20.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    300.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#56, xc=0)
               duration: 155.0
               {ASName: C05-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    300.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#65, xc=0)
               duration: 155.0
               {ASName: C05-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    320.0] L GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
[    320.0] E GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
               duration: 10.0
               {FocusDistEnd: 50.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    327.0] E EventControllerRumble[0] - Demo_RumbleSmall (#49, xc=0)
               duration: 102.0
               {Count: 17, IsWaitFinish: true}
[    330.0] L GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
[    330.0] E GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
               duration: 125.0
               {FocusDistEnd: 50.0, FocusDistStart: 50.0, IsWaitFinish: true}
[    429.0] L EventControllerRumble[0] - Demo_RumbleSmall (#49, xc=0)
[    451.0] E EventControllerRumble[0] - Demo_RumbleLarge (#50, xc=0)
               duration: 43.0
               {Count: 3, IsWaitFinish: true}
[    455.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#13, xc=4)
[    455.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#18, xc=7)
[    455.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[    455.0] L GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
[    455.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#56, xc=0)
[    455.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#65, xc=0)
[    455.0] E EventSystemActor[0] - Demo_PlayUiBossHp (#2, xc=0)
               duration: 435.0
               {IsWaitFinish: true}
[    455.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#14, xc=4)
               duration: 835.0
               {Far: 75.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: true}
[    455.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#19, xc=7)
               duration: 835.0
               {Bscale: 1.0, Gscale: 1.0, IsWaitFinish: true, Rscale: 1.0}
[    455.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 50.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 58.0, ApertureEnd: 58.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.399999976158142, DOFBlurStart: 1.399999976158142, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.640000104904175, FocalLengthEnd: 2.640000104904175,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    455.0] E GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
               duration: 15.0
               {FocusDistEnd: 6.0, FocusDistStart: 80.0, IsWaitFinish: true}
[    455.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#57, xc=0)
               duration: 50.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    455.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#66, xc=0)
               duration: 50.0
               {ASName: C06-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    470.0] L GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
[    470.0] E GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
               duration: 35.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    494.0] L EventControllerRumble[0] - Demo_RumbleLarge (#50, xc=0)
[    494.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#51, xc=0)
               duration: 107.0
               {Count: 14, IsWaitFinish: true}
[    505.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[    505.0] L GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
[    505.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#57, xc=0)
[    505.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#66, xc=0)
[    505.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#73, xc=1)
[    505.0] E EventSystemActor[1] - Demo_PlayUiBossHpDamage (#1, xc=0)
               duration: 385.0
               {IsWaitFinish: true}
[    505.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 20.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 18.5, ApertureEnd: 18.5, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.300000190734863, FocalLengthEnd: 4.300000190734863,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C07-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    505.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 20.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[    505.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#58, xc=0)
               duration: 20.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    505.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#67, xc=0)
               duration: 20.0
               {ASName: C07-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    505.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#74, xc=1)
               duration: 20.0
               {ASName: Damage, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    525.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[    525.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[    525.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#58, xc=0)
[    525.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#67, xc=0)
[    525.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#74, xc=1)
[    525.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 20.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 9.300000190734863, ApertureEnd: 9.300000190734863,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 7.199999809265137, FocalLengthEnd: 7.199999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C08-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    525.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 20.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    525.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#59, xc=0)
               duration: 20.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    525.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#68, xc=0)
               duration: 20.0
               {ASName: C08-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    525.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#75, xc=1)
               duration: 20.0
               {ASName: Damage, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    545.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[    545.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[    545.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#59, xc=0)
[    545.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#68, xc=0)
[    545.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#75, xc=1)
[    545.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 30.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 12.0, ApertureEnd: 12.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.5, FocalLengthEnd: 4.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C09-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    545.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 30.0
               {FocusDistEnd: 1.399999976158142, FocusDistStart: 1.399999976158142, IsWaitFinish: true}
[    545.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#60, xc=0)
               duration: 30.0
               {ASName: C09-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    545.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#69, xc=0)
               duration: 30.0
               {ASName: C09-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    545.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#76, xc=1)
               duration: 30.0
               {ASName: Damage, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    575.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[    575.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[    575.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#60, xc=0)
[    575.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#69, xc=0)
[    575.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#76, xc=1)
[    575.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 45.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 21.0, ApertureEnd: 21.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.880000114440918, FocalLengthEnd: 3.880000114440918,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C10-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    575.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 45.0
               {FocusDistEnd: 4.0, FocusDistStart: 4.0, IsWaitFinish: true}
[    575.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#61, xc=0)
               duration: 45.0
               {ASName: C10-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    575.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#70, xc=0)
               duration: 45.0
               {ASName: C10-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    575.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#77, xc=1)
               duration: 26.0
               {ASName: Damage, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    601.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#51, xc=0)
[    601.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#77, xc=1)
[    601.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#78, xc=1)
               duration: 19.0
               {ASName: Damage, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    620.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[    620.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[    620.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#61, xc=0)
[    620.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#70, xc=0)
[    620.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#78, xc=1)
[    620.0] E EventBgmCtrlTag[0] - Demo_Stop (#0, xc=0)
               duration: 670.0
               {BgmName: RelicBeamBgm, FadeSec: 6.0, IsWaitFinish: true}
[    620.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 270.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 23.399999618530273, ApertureEnd: 20.5, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 11.199999809265137, FocalLengthEnd: 21.399999618530273,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C11-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    620.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 95.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.0, IsWaitFinish: true}
[    620.0] E EventControllerRumble[0] - Demo_RumbleLarge (#52, xc=0)
               duration: 50.0
               {Count: 4, IsWaitFinish: true}
[    620.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#62, xc=0)
               duration: 270.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    620.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#71, xc=0)
               duration: 270.0
               {ASName: C11-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    620.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#79, xc=1)
               duration: 270.0
               {ASName: Demo143_4-C00-Ganon_Down-A-0, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    670.0] L EventControllerRumble[0] - Demo_RumbleLarge (#52, xc=0)
[    715.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
[    715.0] E GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
               duration: 100.0
               {FocusDistEnd: 39.0, FocusDistStart: 4.5, IsWaitFinish: true}
[    815.0] L GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
[    815.0] E GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
               duration: 75.0
               {FocusDistEnd: 39.0, FocusDistStart: 39.0, IsWaitFinish: true}
[    890.0] L EventSystemActor[1] - Demo_PlayUiBossHpDamage (#1, xc=0)
[    890.0] L EventSystemActor[0] - Demo_PlayUiBossHp (#2, xc=0)
[    890.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#6, xc=1)
[    890.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[    890.0] L GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
[    890.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#62, xc=0)
[    890.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#71, xc=0)
[    890.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#79, xc=1)
[    890.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#7, xc=1)
               duration: 400.0
               {IsWaitFinish: true, angleX: 25.920000076293945, angleY: -201.60000610351562}
[    890.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 400.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 30.149999618530273, ApertureEnd: 30.149999618530273,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.600000023841858, DOFBlurStart: 1.600000023841858,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.880000114440918,
                 FocalLengthEnd: 3.880000114440918, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C12-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    890.0] E GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
               duration: 400.0
               {FocusDistEnd: 3.799999952316284, FocusDistStart: 4.5, IsWaitFinish: true}
[    890.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#63, xc=0)
               duration: 400.0
               {ASName: C12-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    890.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#72, xc=0)
               duration: 400.0
               {ASName: C12-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    890.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#80, xc=1)
               duration: 400.0
               {ASName: Demo143_4-C00-Ganon-A-0, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1083.0] E EventControllerRumble[0] - Demo_RumbleSmall (#53, xc=0)
               duration: 30.0
               {Count: 4, IsWaitFinish: true}
[   1113.0] L EventControllerRumble[0] - Demo_RumbleSmall (#53, xc=0)
[   1134.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#54, xc=0)
               duration: 100.0
               {Count: 6, IsWaitFinish: true}
[   1234.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#54, xc=0)
[   1290.0] L EventBgmCtrlTag[0] - Demo_Stop (#0, xc=0)
[   1290.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[   1290.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#7, xc=1)
[   1290.0] L WorldManagerControl[0] - Demo_SetPaletteType (#9, xc=2)
[   1290.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#10, xc=3)
[   1290.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#14, xc=4)
[   1290.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#16, xc=6)
[   1290.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#19, xc=7)
[   1290.0] L WorldManagerControl[0] - Demo_EventSetWeather (#20, xc=8)
[   1290.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[   1290.0] L GameRomCamera[0] - Demo_FocusDistSetting (#45, xc=1)
[   1290.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#63, xc=0)
[   1290.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#72, xc=0)
[   1290.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#80, xc=1)
[   1290.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#81, xc=0)
[   1290.0] L Dm_Locator[1] - Demo_PlayASForTimeline (#82, xc=0)
