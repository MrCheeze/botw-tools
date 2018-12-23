-------- Event timeline: Demo164_0 --------
actors: 12
clips: 81
oneshots: 0
cuts: 5
duration: 1668.0
subtimelines: ['Demo164_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 350.0
x4: 0
params: (none)

Cut: C04
start time: 460.0
x4: 0
params: (none)

Cut: C05
start time: 558.0
x4: 0
params: (none)

Cut: C16
start time: 1178.0
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
x36: 3
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_EventCloudShadowOff', 'Demo_EventCloudShadowPos', 'Demo_EventSetCloudShadowMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_OverwriteNear', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: TerrainCalcCenterTag[0]
x36: 1
actions: ['Demo_TerrainCalcCenter']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleLarge', 'Demo_RumbleSmall']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 2
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Enemy_GanonGhost[0]
x36: 6
actions: ['Demo_PlayASForTimeline', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Locator[0]
x36: 3
actions: ['Demo_PlayASForTimeline', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Locator[1]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 60.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 1668.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 1668.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 1668.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.07000000029802322, WindDirY: 0.0, WindDirZ: 0.009999999776482582,
                 WindPower: 6.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
               duration: 1668.0
               {IsWaitFinish: true, angleY: 5.699999809265137}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#6, xc=2)
               duration: 1178.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#9, xc=0)
               duration: 350.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 0.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_OverwriteNear (#14, xc=1)
               duration: 350.0
               {IsWaitFinish: true, Near: 2.0}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=2)
               duration: 350.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[      0.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#24, xc=0)
               duration: 1568.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-253.0, 280.0, -884.0]
               type: 0
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#42, xc=0)
               duration: 350.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#70, xc=0)
               duration: 350.0
               {ASName: C02-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Locator[0] - Demo_XLinkEventFade (#74, xc=1)
               duration: 30.0
               {ELinkKey: Demo164_ZeldaFlare, IsWaitFinish: true, SLinkKey: ''}
[      0.0] E Dm_Locator[1] - Demo_PlayASForTimeline (#78, xc=0)
               duration: 1568.0
               {ASName: C01-Dm_Locator-B-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Dm_Locator[1] - Demo_XLinkEventFade (#79, xc=1)
               duration: 30.0
               {ELinkKey: Demo164_HyruleCastle, IsWaitFinish: true, SLinkKey: ''}
[     30.0] L Dm_Locator[0] - Demo_XLinkEventFade (#74, xc=1)
[     30.0] L Dm_Locator[1] - Demo_XLinkEventFade (#79, xc=1)
[     53.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#46, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[     54.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#46, xc=1)
[     60.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     60.0] E Dm_Locator[0] - Demo_XLinkEventCreate (#75, xc=1)
               duration: 1508.0
               {ELinkKey: Demo164_ZeldaFlare, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[     82.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#33, xc=0)
               duration: 87.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo164_0_Text003}
[     84.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#47, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[     85.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#47, xc=1)
[    160.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#48, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    161.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#48, xc=1)
[    169.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#33, xc=0)
[    175.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#49, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    176.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#49, xc=1)
[    190.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#34, xc=0)
               duration: 150.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo164_0_Text004}
[    231.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#50, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    232.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#50, xc=1)
[    252.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#51, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    253.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#51, xc=1)
[    323.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#52, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    324.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#52, xc=1)
[    336.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#53, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    337.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#53, xc=1)
[    340.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#34, xc=0)
[    350.0] L GameRomCamera[0] - Demo_CameraAnim (#9, xc=0)
[    350.0] L GameRomCamera[0] - Demo_OverwriteNear (#14, xc=1)
[    350.0] L GameRomCamera[0] - Demo_FocusDistSetting (#19, xc=2)
[    350.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#42, xc=0)
[    350.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#70, xc=0)
[    350.0] E GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
               duration: 110.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 100.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    350.0] E GameRomCamera[0] - Demo_OverwriteNear (#15, xc=1)
               duration: 110.0
               {IsWaitFinish: true, Near: 2.0}
[    350.0] E GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=2)
               duration: 110.0
               {FocusDistEnd: 1345.0, FocusDistStart: 1345.0, IsWaitFinish: true}
[    350.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#71, xc=0)
               duration: 828.0
               {ASName: C01-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    363.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#35, xc=0)
               duration: 183.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo164_0_Text002}
[    460.0] L GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
[    460.0] L GameRomCamera[0] - Demo_OverwriteNear (#15, xc=1)
[    460.0] L GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=2)
[    460.0] E GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
               duration: 98.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.0, FocalLengthEnd: 4.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 0.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    460.0] E GameRomCamera[0] - Demo_OverwriteNear (#16, xc=1)
               duration: 98.0
               {IsWaitFinish: true, Near: 2.0}
[    460.0] E GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=2)
               duration: 98.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    460.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#43, xc=0)
               duration: 98.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    464.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#54, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    465.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#54, xc=1)
[    476.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#55, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    477.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#55, xc=1)
[    482.0] E EventControllerRumble[0] - Demo_RumbleLarge (#25, xc=0)
               duration: 28.0
               {Count: 2, IsWaitFinish: true}
[    487.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#56, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    488.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#56, xc=1)
[    493.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#40, xc=1)
               duration: 15.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo164_0_Text009}
[    500.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#57, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[    501.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#57, xc=1)
[    507.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#58, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[    508.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#40, xc=1)
[    508.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#58, xc=1)
[    510.0] L EventControllerRumble[0] - Demo_RumbleLarge (#25, xc=0)
[    530.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#41, xc=1)
               duration: 25.0
               {ActorInstance: '', IsHideCaption: true, IsWaitFinish: true, Label: Demo164_0_Text010}
[    546.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#35, xc=0)
[    555.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#41, xc=1)
[    558.0] L GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
[    558.0] L GameRomCamera[0] - Demo_OverwriteNear (#16, xc=1)
[    558.0] L GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=2)
[    558.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#43, xc=0)
[    558.0] E GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
               duration: 620.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: false, EndFrame: -1.0, FocalLength: 730.0, FocalLengthEnd: 730.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    558.0] E GameRomCamera[0] - Demo_OverwriteNear (#17, xc=1)
               duration: 620.0
               {IsWaitFinish: true, Near: 2.0}
[    558.0] E GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=2)
               duration: 620.0
               {FocusDistEnd: 1175.0, FocusDistStart: 1175.0, IsWaitFinish: true}
[    558.0] E Enemy_GanonGhost[0] - Demo_PlayASForTimeline (#59, xc=0)
               duration: 620.0
               {ASName: C05-GanonGhost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    558.0] E Enemy_GanonGhost[0] - Demo_XLinkEventCreate (#62, xc=2)
               duration: 623.0
               {ELinkKey: eye, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    558.0] E Enemy_GanonGhost[0] - Demo_XLinkEventCreate (#64, xc=3)
               duration: 588.0
               {ELinkKey: body, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    558.0] E Enemy_GanonGhost[0] - Demo_XLinkEventCreate (#66, xc=4)
               duration: 623.0
               {ELinkKey: tail, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    571.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#36, xc=0)
               duration: 311.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo164_0_Text005}
[    571.0] E Dm_Locator[1] - Demo_XLinkEventCreate (#80, xc=1)
               duration: 997.0
               {ELinkKey: Demo164_HyruleCastle, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    608.0] E EventControllerRumble[0] - Demo_RumbleSmall (#26, xc=0)
               duration: 102.0
               {Count: 30, IsWaitFinish: true}
[    710.0] L EventControllerRumble[0] - Demo_RumbleSmall (#26, xc=0)
[    710.0] E EventControllerRumble[0] - Demo_RumbleLarge (#27, xc=0)
               duration: 28.0
               {Count: 2, IsWaitFinish: true}
[    738.0] L EventControllerRumble[0] - Demo_RumbleLarge (#27, xc=0)
[    738.0] E EventControllerRumble[0] - Demo_RumbleSmall (#28, xc=0)
               duration: 102.0
               {Count: 30, IsWaitFinish: true}
[    840.0] L EventControllerRumble[0] - Demo_RumbleSmall (#28, xc=0)
[    852.0] E EventControllerRumble[0] - Demo_RumbleLarge (#29, xc=0)
               duration: 68.0
               {Count: 5, IsWaitFinish: true}
[    882.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#36, xc=0)
[    920.0] L EventControllerRumble[0] - Demo_RumbleLarge (#29, xc=0)
[    920.0] E EventControllerRumble[0] - Demo_RumbleSmall (#30, xc=0)
               duration: 107.0
               {Count: 21, IsWaitFinish: true}
[   1013.0] E Dm_Locator[0] - Demo_XLinkEventCreate (#76, xc=2)
               duration: 100.0
               {ELinkKey: Demo164_ZeldaFlare_Bloom, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1027.0] L EventControllerRumble[0] - Demo_RumbleSmall (#30, xc=0)
[   1030.0] E EventControllerRumble[0] - Demo_RumbleLarge (#31, xc=0)
               duration: 82.0
               {Count: 6, IsWaitFinish: true}
[   1112.0] L EventControllerRumble[0] - Demo_RumbleLarge (#31, xc=0)
[   1112.0] E EventControllerRumble[0] - Demo_RumbleSmall (#32, xc=0)
               duration: 174.0
               {Count: 24, IsWaitFinish: true}
[   1113.0] L Dm_Locator[0] - Demo_XLinkEventCreate (#76, xc=2)
[   1130.0] E Enemy_GanonGhost[0] - Demo_XLinkEventCreate (#68, xc=5)
               duration: 246.0
               {ELinkKey: vanish, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1146.0] L Enemy_GanonGhost[0] - Demo_XLinkEventCreate (#64, xc=3)
[   1146.0] E Enemy_GanonGhost[0] - Demo_XLinkEventFade (#65, xc=3)
               duration: 77.0
               {ELinkKey: body, IsWaitFinish: true, SLinkKey: ''}
[   1178.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#6, xc=2)
[   1178.0] L GameRomCamera[0] - Demo_CameraAnim (#12, xc=0)
[   1178.0] L GameRomCamera[0] - Demo_OverwriteNear (#17, xc=1)
[   1178.0] L GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=2)
[   1178.0] L Enemy_GanonGhost[0] - Demo_PlayASForTimeline (#59, xc=0)
[   1178.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#71, xc=0)
[   1178.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#7, xc=2)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: -0.18400000035762787, setPos_y: 0.0}
[   1178.0] E GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
               duration: 390.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 20.0, ApertureEnd: 20.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2650.0, FocalLengthEnd: 2650.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C16-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1178.0] E GameRomCamera[0] - Demo_OverwriteNear (#18, xc=1)
               duration: 390.0
               {IsWaitFinish: true, Near: 2.0}
[   1178.0] E GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=2)
               duration: 390.0
               {FocusDistEnd: 115.0, FocusDistStart: 77.0, IsWaitFinish: true}
[   1178.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#44, xc=0)
               duration: 390.0
               {ASName: C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1178.0] E Enemy_GanonGhost[0] - Demo_PlayASForTimeline (#60, xc=0)
               duration: 390.0
               {ASName: C16-GanonGhost-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1178.0] E Enemy_GanonGhost[0] - Demo_PlayASForTimeline (#61, xc=1)
               duration: 390.0
               {ASName: Enemy_GanonGhost_Demo, ClothWarpMode: 1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1178.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#72, xc=0)
               duration: 390.0
               {ASName: C02-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1179.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#7, xc=2)
[   1179.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#8, xc=2)
               duration: 389.0
               {IsWaitFinish: true, setSpeed_x: -0.0010000000474974513, setSpeed_y: -0.0005000000237487257}
[   1181.0] L Enemy_GanonGhost[0] - Demo_XLinkEventCreate (#62, xc=2)
[   1181.0] L Enemy_GanonGhost[0] - Demo_XLinkEventCreate (#66, xc=4)
[   1181.0] E Enemy_GanonGhost[0] - Demo_XLinkEventFade (#63, xc=2)
               duration: 77.0
               {ELinkKey: eye, IsWaitFinish: true, SLinkKey: ''}
[   1181.0] E Enemy_GanonGhost[0] - Demo_XLinkEventFade (#67, xc=4)
               duration: 77.0
               {ELinkKey: tail, IsWaitFinish: true, SLinkKey: ''}
[   1220.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#37, xc=0)
               duration: 35.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo164_0_Text006}
[   1223.0] L Enemy_GanonGhost[0] - Demo_XLinkEventFade (#65, xc=3)
[   1255.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#37, xc=0)
[   1258.0] L Enemy_GanonGhost[0] - Demo_XLinkEventFade (#63, xc=2)
[   1258.0] L Enemy_GanonGhost[0] - Demo_XLinkEventFade (#67, xc=4)
[   1286.0] L EventControllerRumble[0] - Demo_RumbleSmall (#32, xc=0)
[   1307.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#38, xc=0)
               duration: 153.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo164_0_Text007}
[   1340.0] E Dm_Locator[0] - Demo_XLinkEventFade (#77, xc=2)
               duration: 35.0
               {ELinkKey: Demo164_ZeldaFlare_Bloom, IsWaitFinish: true, SLinkKey: ''}
[   1375.0] L Dm_Locator[0] - Demo_XLinkEventFade (#77, xc=2)
[   1376.0] L Enemy_GanonGhost[0] - Demo_XLinkEventCreate (#68, xc=5)
[   1376.0] E Enemy_GanonGhost[0] - Demo_XLinkEventFade (#69, xc=5)
               duration: 19.0
               {ELinkKey: vanish, IsWaitFinish: true, SLinkKey: ''}
[   1395.0] L Enemy_GanonGhost[0] - Demo_XLinkEventFade (#69, xc=5)
[   1460.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#38, xc=0)
[   1470.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#39, xc=0)
               duration: 59.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo164_0_Text008}
[   1508.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 60.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1529.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#39, xc=0)
[   1568.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1568.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#8, xc=2)
[   1568.0] L GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
[   1568.0] L GameRomCamera[0] - Demo_OverwriteNear (#18, xc=1)
[   1568.0] L GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=2)
[   1568.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#24, xc=0)
[   1568.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#44, xc=0)
[   1568.0] L Enemy_GanonGhost[0] - Demo_PlayASForTimeline (#60, xc=0)
[   1568.0] L Enemy_GanonGhost[0] - Demo_PlayASForTimeline (#61, xc=1)
[   1568.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#72, xc=0)
[   1568.0] L Dm_Locator[0] - Demo_XLinkEventCreate (#75, xc=1)
[   1568.0] L Dm_Locator[1] - Demo_PlayASForTimeline (#78, xc=0)
[   1568.0] L Dm_Locator[1] - Demo_XLinkEventCreate (#80, xc=1)
[   1568.0] E Dm_Locator[0] - Demo_XLinkEventCreate (#73, xc=0)
               duration: 100.0
               {ELinkKey: '', IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1620.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#45, xc=0)
               duration: 48.0
               {ASName: DemoWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1668.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[   1668.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[   1668.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[   1668.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#5, xc=1)
[   1668.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#45, xc=0)
[   1668.0] L Dm_Locator[0] - Demo_XLinkEventCreate (#73, xc=0)
