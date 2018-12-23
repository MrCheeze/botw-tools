-------- Event timeline: Demo148_0 --------
actors: 7
clips: 74
oneshots: 0
cuts: 7
duration: 1867.0
subtimelines: ['Demo148_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: cut0
start time: 0.0
x4: 0
params: (none)

Cut: C01
start time: 210.0
x4: 0
params: (none)

Cut: C02
start time: 595.0
x4: 0
params: (none)

Cut: C03
start time: 795.0
x4: 0
params: (none)

Cut: C04
start time: 985.0
x4: 0
params: (none)

Cut: C05
start time: 1125.0
x4: 0
params: (none)

Cut: C06
start time: 1475.0
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

Actor: WorldManagerControl[0]
x36: 10
actions: ['Demo_SetWind', 'Demo_SetSkyPaletteType', 'Demo_SetPaletteType', 'Demo_EventSetFogDirect', 'Demo_EventCloudShadowPos', 'Demo_EventSetCloudShadowMove', 'Demo_EventCloudShadowOff', 'Demo_EventSetWeather', 'Demo_EventSetCharAmbientScale', 'Demo_SetDirectionalLight', 'Demo_EventSetCharMainLightScale']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Npc_Zelda_Sibyl[0]
x36: 4
actions: ['Demo_PlayASForTimeline', 'Demo_OffMaterialVisibility']
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
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 1775.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#3, xc=0)
               duration: 1775.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 90.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 3.0}
[      0.0] E WorldManagerControl[0] - Demo_SetSkyPaletteType (#4, xc=1)
               duration: 1775.0
               {IsWaitFinish: true, SkyPalette: 5}
[      0.0] E WorldManagerControl[0] - Demo_EventSetWeather (#5, xc=2)
               duration: 100.0
               {IsWaitFinish: true, WeatherType: 0}
[      0.0] E WorldManagerControl[0] - Demo_SetPaletteType (#6, xc=3)
               duration: 149.0
               {ChangeFrame: 0, EndFrame: 0, IsWaitFinish: true, PaletteType: 17, Speed: 1.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=4)
               duration: 1775.0
               {Far: 200.0, FarUse: true, FogRatio: 0.1599999964237213, InstantSW: true, IsWaitFinish: true,
                 Near: -100.0, NearUse: true}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#9, xc=5)
               duration: 2.0
               {IsWaitFinish: true, setPos_x: 0.06800000369548798, setPos_y: -0.03799999877810478}
[      0.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#13, xc=6)
               duration: 210.0
               {IsWaitFinish: true, angleX: -57.599998474121094, angleY: 48.959999084472656}
[      0.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#19, xc=7)
               duration: 595.0
               {Bscale: 0.75, Gscale: 0.75, IsWaitFinish: true, Rscale: 0.75}
[      0.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#25, xc=8)
               duration: 595.0
               {Bscale: 1.7000000476837158, Gscale: 1.7000000476837158, IsWaitFinish: true, Rscale: 1.7000000476837158}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#31, xc=9)
               duration: 1775.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 0.800000011920929, DOFEndFrame: 90.0, DOFStartFrame: 1.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 6.0, FocalLengthEnd: 6.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C08-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      2.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#9, xc=5)
[      2.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#10, xc=5)
               duration: 983.0
               {IsWaitFinish: true, setSpeed_x: 0.0006000000284984708, setSpeed_y: 9.999999747378752e-05}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    100.0] L WorldManagerControl[0] - Demo_EventSetWeather (#5, xc=2)
[    149.0] L WorldManagerControl[0] - Demo_SetPaletteType (#6, xc=3)
[    149.0] E WorldManagerControl[0] - Demo_SetPaletteType (#7, xc=3)
               duration: 1626.0
               {ChangeFrame: 1, EndFrame: 0, IsWaitFinish: true, PaletteType: 0, Speed: 0.20000000298023224}
[    180.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#50, xc=0)
               duration: 30.0
               {ASName: Demo148_0-C01-Npc_Zelda_Miko-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    210.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#13, xc=6)
[    210.0] L GameRomCamera[0] - Demo_CameraAnim (#32, xc=0)
[    210.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#50, xc=0)
[    210.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#14, xc=6)
               duration: 585.0
               {IsWaitFinish: true, angleX: -16.559999465942383, angleY: -122.4000015258789}
[    210.0] E GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
               duration: 385.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 40.0, ApertureEnd: 40.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.4000000059604645, DOFBlurStart: 0.4000000059604645, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    210.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 385.0
               {FocusDistEnd: 8.0, FocusDistStart: 9.5, IsWaitFinish: true}
[    210.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#51, xc=0)
               duration: 385.0
               {ASName: Demo148_0-C01-Npc_Zelda_Miko-A-0, ClothWarpMode: 0, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    210.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#57, xc=1)
               duration: 1565.0
               {ASName: Demo148_0-C01-Npc_Zelda_Miko_DM-A-0, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    210.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_OffMaterialVisibility (#58, xc=2)
               duration: 1565.0
               {IsWaitFinish: true, MaterialName: Mt_Hair}
[    210.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_OffMaterialVisibility (#59, xc=3)
               duration: 1565.0
               {IsWaitFinish: true, MaterialName: Mt_Hair_Anim_2}
[    210.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#60, xc=0)
               duration: 385.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    270.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#45, xc=0)
               duration: 290.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo148_0_Text000}
[    345.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#64, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    346.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#64, xc=1)
[    375.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#65, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[    376.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#65, xc=1)
[    400.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#66, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    401.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#66, xc=1)
[    426.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#67, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[    427.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#67, xc=1)
[    450.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#68, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    451.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#68, xc=1)
[    480.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#69, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[    481.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#69, xc=1)
[    502.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#70, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    503.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#70, xc=1)
[    528.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#71, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[    529.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#71, xc=1)
[    560.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#45, xc=0)
[    560.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Left}
[    561.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#72, xc=1)
[    588.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#73, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Slow, SteppingFoot: Right}
[    589.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#73, xc=1)
[    595.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#19, xc=7)
[    595.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#25, xc=8)
[    595.0] L GameRomCamera[0] - Demo_CameraAnim (#33, xc=0)
[    595.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[    595.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#51, xc=0)
[    595.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#60, xc=0)
[    595.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#20, xc=7)
               duration: 200.0
               {Bscale: 0.75, Gscale: 0.75, IsWaitFinish: true, Rscale: 0.75}
[    595.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#26, xc=8)
               duration: 200.0
               {Bscale: 1.7999999523162842, Gscale: 1.7999999523162842, IsWaitFinish: true, Rscale: 1.7999999523162842}
[    595.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 200.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 200.0, ApertureEnd: 200.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.8499999046325684, FocalLengthEnd: 2.8499999046325684,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    595.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 200.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    595.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#52, xc=0)
               duration: 200.0
               {ASName: Demo148_0-C02-Npc_Zelda_Miko-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    595.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#61, xc=0)
               duration: 200.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    630.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#46, xc=0)
               duration: 315.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo148_0_Text001}
[    795.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#14, xc=6)
[    795.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#20, xc=7)
[    795.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#26, xc=8)
[    795.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[    795.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[    795.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#52, xc=0)
[    795.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#61, xc=0)
[    795.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#15, xc=6)
               duration: 190.0
               {IsWaitFinish: true, angleX: -16.559999465942383, angleY: -100.08000183105469}
[    795.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#21, xc=7)
               duration: 190.0
               {Bscale: 0.75, Gscale: 0.75, IsWaitFinish: true, Rscale: 0.75}
[    795.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#27, xc=8)
               duration: 190.0
               {Bscale: 2.0, Gscale: 2.0, IsWaitFinish: true, Rscale: 2.0}
[    795.0] E GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
               duration: 190.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2999999523162842, DOFBlurStart: 1.2999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 7.0, FocalLengthEnd: 7.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    795.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 190.0
               {FocusDistEnd: 1.2000000476837158, FocusDistStart: 1.2000000476837158, IsWaitFinish: true}
[    795.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#53, xc=0)
               duration: 190.0
               {ASName: Demo148_0-C03-Npc_Zelda_Miko-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    795.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#62, xc=0)
               duration: 190.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    945.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#46, xc=0)
[    985.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#10, xc=5)
[    985.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#15, xc=6)
[    985.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#21, xc=7)
[    985.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#27, xc=8)
[    985.0] L GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
[    985.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[    985.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#53, xc=0)
[    985.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#62, xc=0)
[    985.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#11, xc=5)
               duration: 140.0
               {IsWaitFinish: true, setSpeed_x: 0.0006000000284984708, setSpeed_y: 9.999999747378752e-05}
[    985.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#16, xc=6)
               duration: 140.0
               {IsWaitFinish: true, angleX: -20.8799991607666, angleY: -133.5}
[    985.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#22, xc=7)
               duration: 140.0
               {Bscale: 0.75, Gscale: 0.75, IsWaitFinish: true, Rscale: 0.75}
[    985.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#28, xc=8)
               duration: 140.0
               {Bscale: 1.7999999523162842, Gscale: 1.7999999523162842, IsWaitFinish: true, Rscale: 1.7999999523162842}
[    985.0] E GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
               duration: 140.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 43.0, ApertureEnd: 43.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.6000000238418579, DOFBlurStart: 0.6000000238418579, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 1.9600000381469727, FocalLengthEnd: 1.9600000381469727,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C04-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    985.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 140.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    985.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#54, xc=0)
               duration: 140.0
               {ASName: Demo148_0-C04-Npc_Zelda_Miko-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1024.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#47, xc=0)
               duration: 101.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo148_0_Text004}
[   1125.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#11, xc=5)
[   1125.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#16, xc=6)
[   1125.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#22, xc=7)
[   1125.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#28, xc=8)
[   1125.0] L GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
[   1125.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
[   1125.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#47, xc=0)
[   1125.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#54, xc=0)
[   1125.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#12, xc=5)
               duration: 650.0
               {IsWaitFinish: true}
[   1125.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#17, xc=6)
               duration: 350.0
               {IsWaitFinish: true, angleX: -10.0, angleY: -133.5}
[   1125.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#23, xc=7)
               duration: 350.0
               {Bscale: 0.800000011920929, Gscale: 0.800000011920929, IsWaitFinish: true, Rscale: 0.800000011920929}
[   1125.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#29, xc=8)
               duration: 350.0
               {Bscale: 1.0700000524520874, Gscale: 1.0700000524520874, IsWaitFinish: true, Rscale: 1.0700000524520874}
[   1125.0] E GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
               duration: 350.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 150.0, ApertureEnd: 150.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 3.0, DOFBlurStart: 3.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1125.0] E GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
               duration: 350.0
               {FocusDistEnd: 3.1700000762939453, FocusDistStart: 3.1700000762939453, IsWaitFinish: true}
[   1125.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#55, xc=0)
               duration: 350.0
               {ASName: Demo148_0-C05-Npc_Zelda_Miko-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1162.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#48, xc=0)
               duration: 101.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo148_0_Text005}
[   1263.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#48, xc=0)
[   1286.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#49, xc=0)
               duration: 174.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo148_0_Text003}
[   1460.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#49, xc=0)
[   1475.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#17, xc=6)
[   1475.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#23, xc=7)
[   1475.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#29, xc=8)
[   1475.0] L GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
[   1475.0] L GameRomCamera[0] - Demo_FocusDistSetting (#43, xc=1)
[   1475.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#55, xc=0)
[   1475.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#18, xc=6)
               duration: 300.0
               {IsWaitFinish: true, angleX: -19.440000534057617, angleY: -20.8799991607666}
[   1475.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#24, xc=7)
               duration: 300.0
               {Bscale: 0.800000011920929, Gscale: 0.800000011920929, IsWaitFinish: true, Rscale: 0.800000011920929}
[   1475.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#30, xc=8)
               duration: 300.0
               {Bscale: 1.25, Gscale: 1.25, IsWaitFinish: true, Rscale: 1.25}
[   1475.0] E GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
               duration: 300.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 0.800000011920929, DOFEndFrame: 90.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 6.0, FocalLengthEnd: 6.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C06-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1475.0] E GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
               duration: 300.0
               {FocusDistEnd: 3.0999999046325684, FocusDistStart: 2.700000047683716, IsWaitFinish: true}
[   1475.0] E Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#56, xc=0)
               duration: 300.0
               {ASName: Demo148_0-C06-Npc_Zelda_Miko-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1475.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#63, xc=0)
               duration: 300.0
               {ASName: C06-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1745.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 122.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1775.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[   1775.0] L WorldManagerControl[0] - Demo_SetWind (#3, xc=0)
[   1775.0] L WorldManagerControl[0] - Demo_SetSkyPaletteType (#4, xc=1)
[   1775.0] L WorldManagerControl[0] - Demo_SetPaletteType (#7, xc=3)
[   1775.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=4)
[   1775.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#12, xc=5)
[   1775.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#18, xc=6)
[   1775.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#24, xc=7)
[   1775.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#30, xc=8)
[   1775.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#31, xc=9)
[   1775.0] L GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
[   1775.0] L GameRomCamera[0] - Demo_FocusDistSetting (#44, xc=1)
[   1775.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#56, xc=0)
[   1775.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_PlayASForTimeline (#57, xc=1)
[   1775.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_OffMaterialVisibility (#58, xc=2)
[   1775.0] L Dm_Npc_Zelda_Sibyl[0] - Demo_OffMaterialVisibility (#59, xc=3)
[   1775.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#63, xc=0)
[   1867.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
