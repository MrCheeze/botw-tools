-------- Event timeline: Demo102_0 --------
actors: 8
clips: 57
oneshots: 0
cuts: 8
duration: 2260.0
subtimelines: ['Demo102_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C07
start time: 450.0
x4: 0
params: (none)

Cut: C08
start time: 750.0
x4: 0
params: (none)

Cut: C02
start time: 1190.0
x4: 0
params: (none)

Cut: C03
start time: 1800.0
x4: 0
params: (none)

Cut: C04
start time: 1950.0
x4: 0
params: (none)

Cut: C05
start time: 2010.0
x4: 0
params: (none)

Cut: C06
start time: 2140.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeOut', 'Demo_FadeIn', 'Demo_VariableFadeIn', 'Demo_ChangeFadeColor']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: WorldManagerControl[0]
x36: 6
actions: ['Demo_SetPaletteType', 'Demo_SetWind', 'Demo_EventSetDirectionalYang', 'Demo_EventCloudShadowOff', 'Demo_EventSetCharAmbientScale', 'Demo_EventSetCharMainLightScale', 'Demo_SetDirectionalLight']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventMessageTransmitter1[0]
x36: 1
actions: ['Demo_Msg2CameraKeepState']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_XLinkEventCreate', 'Demo_PlayerDestinationMove']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: true, DisableSheikPad: true,
  DisableShield: true, DisableWeapon: true, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: FldObj_FirstShrineBedWater_A_01[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Dm_Locator[0]
x36: 5
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForTimeline', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_ChangeFadeColor (#0, xc=0)
               duration: 60.0
               {Color: 0, Frame: 0, IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#9, xc=1)
               duration: 2260.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=2)
               duration: 450.0
               {IsWaitFinish: true, angleY: -60.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#14, xc=3)
               duration: 2260.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#15, xc=4)
               duration: 450.0
               {Bscale: 0.4000000059604645, Gscale: 0.4000000059604645, IsWaitFinish: true, Rscale: 0.4000000059604645}
[      0.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#20, xc=5)
               duration: 750.0
               {Bscale: 0.4000000059604645, Gscale: 0.4000000059604645, IsWaitFinish: true, Rscale: 0.4000000059604645}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
               duration: 1190.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[      4.0] E Dm_Locator[0] - Demo_XLinkEventCreate (#55, xc=4)
               duration: 1946.0
               {ELinkKey: Demo102_0_Dust, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[     60.0] L Fader[0] - Demo_ChangeFadeColor (#0, xc=0)
[     60.0] E Fader[0] - Demo_VariableFadeIn (#1, xc=0)
               duration: 240.0
               {Color: 0, FadeTime: 240.0, IsWaitFinish: true}
[     60.0] E WorldManagerControl[0] - Demo_SetPaletteType (#8, xc=0)
               duration: 2200.0
               {ChangeFrame: 0, EndFrame: 0, IsWaitFinish: true, PaletteType: 2, Speed: 1.0}
[     60.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 390.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.5, ApertureEnd: 1.5, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.5, DOFBlurStart: 5.0, DOFEndFrame: 390.0, DOFStartFrame: 1.0, DOFUse: true,
                 EndFrame: -1.0, FocalLength: 1.7999999523162842, FocalLengthEnd: 1.7999999523162842, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[     60.0] E EventMessageTransmitter1[0] - Demo_Msg2CameraKeepState (#35, xc=0)
               duration: 4.0
               {IsWaitFinish: true}
[     60.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#39, xc=0)
               duration: 390.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     60.0] E Dm_Locator[0] - Demo_PlayASForTimeline (#51, xc=0)
               duration: 2160.0
               {ASName: C01-Dm_Locator-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     61.0] E Dm_Locator[0] - Demo_XLinkEventCreate (#54, xc=3)
               duration: 389.0
               {ELinkKey: Demo102_0_Ceiling, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[     64.0] L EventMessageTransmitter1[0] - Demo_Msg2CameraKeepState (#35, xc=0)
[    100.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#36, xc=0)
               duration: 84.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo102_0_Text004}
[    184.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#36, xc=0)
[    293.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#37, xc=0)
               duration: 65.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo102_0_Text005}
[    300.0] L Fader[0] - Demo_VariableFadeIn (#1, xc=0)
[    358.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#37, xc=0)
[    419.0] E Fader[0] - Demo_FadeOut (#2, xc=0)
               duration: 20.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    439.0] L Fader[0] - Demo_FadeOut (#2, xc=0)
[    450.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=2)
[    450.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#15, xc=4)
[    450.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[    450.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#39, xc=0)
[    450.0] L Dm_Locator[0] - Demo_XLinkEventCreate (#54, xc=3)
[    450.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#11, xc=2)
               duration: 300.0
               {IsWaitFinish: true, angleX: -34.560001373291016, angleY: 51.84000015258789}
[    450.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#16, xc=4)
               duration: 300.0
               {Bscale: 0.2280000001192093, Gscale: 0.2280000001192093, IsWaitFinish: true, Rscale: 0.2280000001192093}
[    450.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 300.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.4000000059604645, DOFBlurStart: 1.0, DOFEndFrame: 600.0, DOFStartFrame: 390.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C07-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    450.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#40, xc=0)
               duration: 300.0
               {ASName: C07-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    450.0] E FldObj_FirstShrineBedWater_A_01[0] - Demo_PlayASForTimeline (#48, xc=0)
               duration: 300.0
               {ASName: C07-FldObj_FirstShrineBedWater_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    450.0] E Dm_Locator[0] - Demo_XLinkEventCreate (#53, xc=2)
               duration: 1500.0
               {ELinkKey: Demo102_0_LineLight, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    451.0] E Fader[0] - Demo_FadeIn (#3, xc=0)
               duration: 20.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    471.0] L Fader[0] - Demo_FadeIn (#3, xc=0)
[    477.0] E DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#38, xc=0)
               duration: 117.0
               {ActorInstance: '', IsHideCaption: false, IsWaitFinish: true, Label: Demo102_0_Text006}
[    594.0] L DemoVoiceEmitTag[0] - Demo_VoiceTrigger (#38, xc=0)
[    720.0] E Fader[0] - Demo_FadeOut (#4, xc=0)
               duration: 10.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    730.0] L Fader[0] - Demo_FadeOut (#4, xc=0)
[    750.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#11, xc=2)
[    750.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#16, xc=4)
[    750.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#20, xc=5)
[    750.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[    750.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#40, xc=0)
[    750.0] L FldObj_FirstShrineBedWater_A_01[0] - Demo_PlayASForTimeline (#48, xc=0)
[    750.0] E Fader[0] - Demo_FadeIn (#5, xc=0)
               duration: 10.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    750.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=2)
               duration: 1200.0
               {IsWaitFinish: true, angleY: -35.0}
[    750.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#17, xc=4)
               duration: 440.0
               {Bscale: 0.4000000059604645, Gscale: 0.4000000059604645, IsWaitFinish: true, Rscale: 0.4000000059604645}
[    750.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#21, xc=5)
               duration: 440.0
               {Bscale: 0.5, Gscale: 0.5, IsWaitFinish: true, Rscale: 0.5}
[    750.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 440.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 90.0, ApertureEnd: 90.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.7999999523162842, DOFEndFrame: 630.0,
                 DOFStartFrame: 500.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.315000057220459, FocalLengthEnd: 2.315000057220459,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C08-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    750.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#41, xc=0)
               duration: 440.0
               {ASName: C08-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    750.0] E FldObj_FirstShrineBedWater_A_01[0] - Demo_PlayASForTimeline (#49, xc=0)
               duration: 440.0
               {ASName: C08-FldObj_FirstShrineBedWater_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1,
                 IsIgnoreSame: false, IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    751.0] E Dm_Locator[0] - Demo_XLinkEventCreate (#52, xc=1)
               duration: 1199.0
               {ELinkKey: Demo102_0_BedGlow, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    760.0] L Fader[0] - Demo_FadeIn (#5, xc=0)
[    870.0] E FldObj_FirstShrineBedWater_A_01[0] - Demo_PlayASForTimeline (#50, xc=1)
               duration: 90.0
               {ASName: FadeOut, ClothWarpMode: 1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    960.0] L FldObj_FirstShrineBedWater_A_01[0] - Demo_PlayASForTimeline (#50, xc=1)
[   1190.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#17, xc=4)
[   1190.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#21, xc=5)
[   1190.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[   1190.0] L GameRomCamera[0] - Demo_FocusDistSetting (#31, xc=1)
[   1190.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#41, xc=0)
[   1190.0] L FldObj_FirstShrineBedWater_A_01[0] - Demo_PlayASForTimeline (#49, xc=0)
[   1190.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#18, xc=4)
               duration: 950.0
               {Bscale: 0.4000000059604645, Gscale: 0.4000000059604645, IsWaitFinish: true, Rscale: 0.4000000059604645}
[   1190.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#22, xc=5)
               duration: 950.0
               {Bscale: 0.4000000059604645, Gscale: 0.4000000059604645, IsWaitFinish: true, Rscale: 0.4000000059604645}
[   1190.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 610.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 10.0, ApertureEnd: 10.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.5, DOFBlurStart: 2.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 7.800000190734863, FocalLengthEnd: 7.800000190734863,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1190.0] E GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
               duration: 610.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[   1190.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#42, xc=0)
               duration: 610.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1191.0] E GameROMPlayer[0] - Demo_XLinkEventCreate (#47, xc=1)
               duration: 610.0
               {ELinkKey: Demo102_0_Drip, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[   1800.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[   1800.0] L GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
[   1800.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#42, xc=0)
[   1800.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 10.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1800.0] E GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
               duration: 150.0
               {FocusDistEnd: 14.0, FocusDistStart: 14.0, IsWaitFinish: true}
[   1800.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#43, xc=0)
               duration: 150.0
               {ASName: C03-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1801.0] L GameROMPlayer[0] - Demo_XLinkEventCreate (#47, xc=1)
[   1950.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=2)
[   1950.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[   1950.0] L GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
[   1950.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#43, xc=0)
[   1950.0] L Dm_Locator[0] - Demo_XLinkEventCreate (#52, xc=1)
[   1950.0] L Dm_Locator[0] - Demo_XLinkEventCreate (#53, xc=2)
[   1950.0] L Dm_Locator[0] - Demo_XLinkEventCreate (#55, xc=4)
[   1950.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=2)
               duration: 310.0
               {IsWaitFinish: true, angleY: -80.0}
[   1950.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 60.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 8.0, ApertureEnd: 8.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.7999999523162842, DOFEndFrame: 1450.0, DOFStartFrame: 1390.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 11.0, FocalLengthEnd: 11.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1950.0] E GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
               duration: 60.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[   1950.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#44, xc=0)
               duration: 54.0
               {ASName: C04-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1950.0] E Dm_Locator[0] - Demo_XLinkEventFade (#56, xc=4)
               duration: 30.0
               {ELinkKey: Demo102_0_Dust, IsWaitFinish: true, SLinkKey: ''}
[   1980.0] L Dm_Locator[0] - Demo_XLinkEventFade (#56, xc=4)
[   1994.0] E Fader[0] - Demo_FadeOut (#6, xc=0)
               duration: 10.0
               {Color: 1, DispMode: Auto, Frame: 2, IsWaitFinish: true}
[   2004.0] L Fader[0] - Demo_FadeOut (#6, xc=0)
[   2004.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#44, xc=0)
[   2010.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[   2010.0] L GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
[   2010.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 250.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 8.0, ApertureEnd: 8.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.0, DOFBlurStart: 2.0, DOFEndFrame: 250.0, DOFStartFrame: 0.0, DOFUse: true,
                 EndFrame: -1.0, FocalLength: 18.0, FocalLengthEnd: 18.0, InterpolateCount: 0.0, IsWaitFinish: true,
                 OverwriteAt: false, OverwriteAtDist: 1.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1,
                 TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   2010.0] E GameROMPlayer[0] - Demo_PlayerDestinationMove (#45, xc=0)
               duration: 106.0
               {DestPosX: -1130.143798828125, DestPosY: 237.3800811767578, DestPosZ: 1914.192138671875, IsWaitFinish: true,
                 StickValue: 1.0}
[   2014.0] E Fader[0] - Demo_FadeIn (#7, xc=0)
               duration: 10.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   2024.0] L Fader[0] - Demo_FadeIn (#7, xc=0)
[   2116.0] L GameROMPlayer[0] - Demo_PlayerDestinationMove (#45, xc=0)
[   2116.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#46, xc=0)
               duration: 144.0
               {ASName: DemoWait, ClothWarpMode: 1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   2140.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#18, xc=4)
[   2140.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#22, xc=5)
[   2140.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#19, xc=4)
               duration: 120.0
               {Bscale: 1.0, Gscale: 1.0, IsWaitFinish: true, Rscale: 1.0}
[   2140.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#23, xc=5)
               duration: 120.0
               {Bscale: 1.0, Gscale: 1.0, IsWaitFinish: true, Rscale: 1.0}
[   2220.0] L Dm_Locator[0] - Demo_PlayASForTimeline (#51, xc=0)
[   2260.0] L WorldManagerControl[0] - Demo_SetPaletteType (#8, xc=0)
[   2260.0] L WorldManagerControl[0] - Demo_SetWind (#9, xc=1)
[   2260.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=2)
[   2260.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#14, xc=3)
[   2260.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#19, xc=4)
[   2260.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#23, xc=5)
[   2260.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[   2260.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#46, xc=0)
