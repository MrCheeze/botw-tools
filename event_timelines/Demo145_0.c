-------- Event timeline: Demo145_0 --------
actors: 8
clips: 112
oneshots: 0
cuts: 18
duration: 2290.0
subtimelines: ['Demo145_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 265.0
x4: 0
params: (none)

Cut: C03
start time: 465.0
x4: 0
params: (none)

Cut: C04
start time: 635.0
x4: 0
params: (none)

Cut: C05
start time: 825.0
x4: 0
params: (none)

Cut: C06
start time: 855.0
x4: 0
params: (none)

Cut: C07
start time: 885.0
x4: 0
params: (none)

Cut: C08
start time: 915.0
x4: 0
params: (none)

Cut: C09
start time: 975.0
x4: 0
params: (none)

Cut: C10
start time: 1145.0
x4: 0
params: (none)

Cut: C11
start time: 1285.0
x4: 0
params: (none)

Cut: C12
start time: 1330.0
x4: 0
params: (none)

Cut: C13
start time: 1390.0
x4: 0
params: (none)

Cut: C14
start time: 1480.0
x4: 0
params: (none)

Cut: C15
start time: 1600.0
x4: 0
params: (none)

Cut: C16
start time: 1740.0
x4: 0
params: (none)

Cut: C18
start time: 1840.0
x4: 0
params: (none)

Cut: C22
start time: 1940.0
x4: 0
params: (none)


===== Actors =====

Actor: SceneSoundCtrlTag[0]
x36: 1
actions: ['Demo_Ctrl']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn', 'Demo_FadeOut', 'Demo_VariableFadeOut', 'Demo_VariableFadeIn']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DemoVoiceEmitTag[1]
x36: 1
actions: ['Demo_VoiceTrigger']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: WorldManagerControl[0]
x36: 7
actions: ['Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_SetPaletteType', 'Demo_EventSetFogDirect', 'Demo_SetDirectionalLight', 'Demo_EventSetCharAmbientScale', 'Demo_EventSetCharMainLightScale']
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

Actor: Enemy_Ganon[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 2, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise', 'Demo_PlayASForDemo']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}


===== Timeline =====

[      0.0] E SceneSoundCtrlTag[0] - Demo_Ctrl (#0, xc=0)
               duration: 100.0
               {BgmCtrlType: Stop, IsWaitFinish: true, SeCtrlType: None}
[      0.0] E Fader[0] - Demo_FadeIn (#1, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#5, xc=0)
               duration: 2290.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: -0.019999999552965164, WindDirY: 0.0, WindDirZ: -0.14000000059604645,
                 WindPower: 4.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#6, xc=1)
               duration: 2290.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetPaletteType (#7, xc=2)
               duration: 2290.0
               {ChangeFrame: 0, EndFrame: 0, IsWaitFinish: true, PaletteType: 18, Speed: 1.0}
[      0.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#8, xc=3)
               duration: 265.0
               {IsWaitFinish: true, angleX: -65.5199966430664, angleY: -239.0399932861328}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=4)
               duration: 635.0
               {Far: 75.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#32, xc=5)
               duration: 2290.0
               {Bscale: 0.5, Gscale: 0.5, IsWaitFinish: true, Rscale: 0.5}
[      0.0] E WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#33, xc=6)
               duration: 2290.0
               {Bscale: 2.0, Gscale: 2.0, IsWaitFinish: true, Rscale: 2.0}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
               duration: 265.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.7999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 8.199999809265137, FocalLengthEnd: 8.199999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C01-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
               duration: 265.0
               {FocusDistEnd: 12.0, FocusDistStart: 12.0, IsWaitFinish: true}
[      0.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#86, xc=0)
               duration: 265.0
               {ASName: C01-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#96, xc=0)
               duration: 265.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#1, xc=0)
[    100.0] L SceneSoundCtrlTag[0] - Demo_Ctrl (#0, xc=0)
[    154.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#74, xc=0)
               duration: 15.0
               {Count: 2, IsWaitFinish: true}
[    169.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#74, xc=0)
[    254.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#75, xc=0)
               duration: 15.0
               {Count: 2, IsWaitFinish: true}
[    265.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#8, xc=3)
[    265.0] L GameRomCamera[0] - Demo_CameraAnim (#34, xc=0)
[    265.0] L GameRomCamera[0] - Demo_FocusDistSetting (#52, xc=1)
[    265.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#86, xc=0)
[    265.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#96, xc=0)
[    265.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#9, xc=3)
               duration: 200.0
               {IsWaitFinish: true, angleX: -38.880001068115234, angleY: -95.04000091552734}
[    265.0] E GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
               duration: 200.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 12.699999809265137, ApertureEnd: 12.699999809265137,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.7999999523162842,
                 DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 6.0, FocalLengthEnd: 6.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    265.0] E GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
               duration: 200.0
               {FocusDistEnd: 3.5, FocusDistStart: 3.5, IsWaitFinish: true}
[    265.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#87, xc=0)
               duration: 200.0
               {ASName: C02-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    265.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#97, xc=0)
               duration: 200.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    269.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#75, xc=0)
[    332.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#76, xc=0)
               duration: 20.0
               {Count: 2, IsWaitFinish: true}
[    352.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#76, xc=0)
[    448.0] E EventControllerRumble[0] - Demo_RumbleSmall (#77, xc=0)
               duration: 15.0
               {Count: 3, IsWaitFinish: true}
[    463.0] L EventControllerRumble[0] - Demo_RumbleSmall (#77, xc=0)
[    465.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#9, xc=3)
[    465.0] L GameRomCamera[0] - Demo_CameraAnim (#35, xc=0)
[    465.0] L GameRomCamera[0] - Demo_FocusDistSetting (#53, xc=1)
[    465.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#87, xc=0)
[    465.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#97, xc=0)
[    465.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#10, xc=3)
               duration: 170.0
               {IsWaitFinish: true, angleX: -38.880001068115234, angleY: -123.12000274658203}
[    465.0] E GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
               duration: 170.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 37.0, ApertureEnd: 37.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7999999523162842, DOFBlurStart: 1.7999999523162842, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 4.599999904632568, FocalLengthEnd: 4.599999904632568,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C03-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    465.0] E GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
               duration: 63.0
               {FocusDistEnd: 3.5, FocusDistStart: 3.5, IsWaitFinish: true}
[    465.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#88, xc=0)
               duration: 170.0
               {ASName: C03-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    528.0] L GameRomCamera[0] - Demo_FocusDistSetting (#54, xc=1)
[    528.0] E GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
               duration: 55.0
               {FocusDistEnd: 14.0, FocusDistStart: 3.5, IsWaitFinish: true}
[    555.0] E EventControllerRumble[0] - Demo_RumbleSmall (#78, xc=0)
               duration: 270.0
               {Count: 41, IsWaitFinish: true}
[    583.0] L GameRomCamera[0] - Demo_FocusDistSetting (#55, xc=1)
[    583.0] E GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
               duration: 52.0
               {FocusDistEnd: 14.0, FocusDistStart: 14.0, IsWaitFinish: true}
[    635.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#10, xc=3)
[    635.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#25, xc=4)
[    635.0] L GameRomCamera[0] - Demo_CameraAnim (#36, xc=0)
[    635.0] L GameRomCamera[0] - Demo_FocusDistSetting (#56, xc=1)
[    635.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#88, xc=0)
[    635.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#11, xc=3)
               duration: 190.0
               {IsWaitFinish: true, angleX: -41.7599983215332, angleY: -114.4800033569336}
[    635.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=4)
               duration: 190.0
               {Far: 50.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: true}
[    635.0] E GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
               duration: 190.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    635.0] E GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
               duration: 190.0
               {FocusDistEnd: 19.0, FocusDistStart: 19.0, IsWaitFinish: true}
[    635.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#89, xc=0)
               duration: 190.0
               {ASName: C04-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    825.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#11, xc=3)
[    825.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#26, xc=4)
[    825.0] L GameRomCamera[0] - Demo_CameraAnim (#37, xc=0)
[    825.0] L GameRomCamera[0] - Demo_FocusDistSetting (#57, xc=1)
[    825.0] L EventControllerRumble[0] - Demo_RumbleSmall (#78, xc=0)
[    825.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#89, xc=0)
[    825.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#12, xc=3)
               duration: 30.0
               {IsWaitFinish: true, angleX: -25.920000076293945, angleY: 294.4800109863281}
[    825.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=4)
               duration: 460.0
               {Far: 75.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[    825.0] E GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
               duration: 30.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    825.0] E GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
               duration: 30.0
               {FocusDistEnd: 9.0, FocusDistStart: 9.0, IsWaitFinish: true}
[    825.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#79, xc=0)
               duration: 148.0
               {Count: 14, IsWaitFinish: true}
[    825.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#90, xc=0)
               duration: 30.0
               {ASName: C05-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    855.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#12, xc=3)
[    855.0] L GameRomCamera[0] - Demo_CameraAnim (#38, xc=0)
[    855.0] L GameRomCamera[0] - Demo_FocusDistSetting (#58, xc=1)
[    855.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#90, xc=0)
[    855.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#13, xc=3)
               duration: 30.0
               {IsWaitFinish: true, angleX: -99.36000061035156, angleY: 294.4800109863281}
[    855.0] E GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
               duration: 30.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    855.0] E GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
               duration: 30.0
               {FocusDistEnd: 9.5, FocusDistStart: 9.5, IsWaitFinish: true}
[    855.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#91, xc=0)
               duration: 30.0
               {ASName: C06-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    885.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#13, xc=3)
[    885.0] L GameRomCamera[0] - Demo_CameraAnim (#39, xc=0)
[    885.0] L GameRomCamera[0] - Demo_FocusDistSetting (#59, xc=1)
[    885.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#91, xc=0)
[    885.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#14, xc=3)
               duration: 30.0
               {IsWaitFinish: true, angleX: -64.08000183105469, angleY: -36.720001220703125}
[    885.0] E GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
               duration: 30.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C07-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    885.0] E GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
               duration: 30.0
               {FocusDistEnd: 12.0, FocusDistStart: 12.0, IsWaitFinish: true}
[    885.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#92, xc=0)
               duration: 30.0
               {ASName: C07-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    915.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#14, xc=3)
[    915.0] L GameRomCamera[0] - Demo_CameraAnim (#40, xc=0)
[    915.0] L GameRomCamera[0] - Demo_FocusDistSetting (#60, xc=1)
[    915.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#92, xc=0)
[    915.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#15, xc=3)
               duration: 60.0
               {IsWaitFinish: true, angleX: -43.20000076293945, angleY: 162.72000122070312}
[    915.0] E GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
               duration: 60.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C08-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    915.0] E GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
               duration: 60.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    915.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#93, xc=0)
               duration: 60.0
               {ASName: C08-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    973.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#79, xc=0)
[    973.0] E EventControllerRumble[0] - Demo_RumbleSmall (#80, xc=0)
               duration: 92.0
               {Count: 17, IsWaitFinish: true}
[    975.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#15, xc=3)
[    975.0] L GameRomCamera[0] - Demo_CameraAnim (#41, xc=0)
[    975.0] L GameRomCamera[0] - Demo_FocusDistSetting (#61, xc=1)
[    975.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#93, xc=0)
[    975.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#16, xc=3)
               duration: 170.0
               {IsWaitFinish: true, angleX: -43.20000076293945, angleY: 216.72000122070312}
[    975.0] E GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
               duration: 170.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 26.0, ApertureEnd: 26.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 5.699999809265137, FocalLengthEnd: 5.699999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C09-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    975.0] E GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
               duration: 170.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    975.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#94, xc=0)
               duration: 170.0
               {ASName: C09-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1065.0] L EventControllerRumble[0] - Demo_RumbleSmall (#80, xc=0)
[   1072.0] E EventControllerRumble[0] - Demo_RumbleLarge (#81, xc=0)
               duration: 26.0
               {Count: 1, IsWaitFinish: true}
[   1098.0] L EventControllerRumble[0] - Demo_RumbleLarge (#81, xc=0)
[   1098.0] E EventControllerRumble[0] - Demo_RumbleSmall (#82, xc=0)
               duration: 76.0
               {Count: 12, IsWaitFinish: true}
[   1145.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#16, xc=3)
[   1145.0] L GameRomCamera[0] - Demo_CameraAnim (#42, xc=0)
[   1145.0] L GameRomCamera[0] - Demo_FocusDistSetting (#62, xc=1)
[   1145.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#94, xc=0)
[   1145.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#17, xc=3)
               duration: 140.0
               {IsWaitFinish: true, angleX: -46.08000183105469, angleY: 243.36000061035156}
[   1145.0] E GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
               duration: 140.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 12.0, ApertureEnd: 12.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 10.0, FocalLengthEnd: 10.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C10-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1145.0] E GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
               duration: 140.0
               {FocusDistEnd: 15.0, FocusDistStart: 13.0, IsWaitFinish: true}
[   1145.0] E Enemy_Ganon[0] - Demo_PlayASForTimeline (#95, xc=0)
               duration: 102.0
               {ASName: C10-Ganon-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1174.0] L EventControllerRumble[0] - Demo_RumbleSmall (#82, xc=0)
[   1174.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#83, xc=0)
               duration: 58.0
               {Count: 7, IsWaitFinish: true}
[   1232.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#83, xc=0)
[   1232.0] E EventControllerRumble[0] - Demo_RumbleLarge (#84, xc=0)
               duration: 58.0
               {Count: 4, IsWaitFinish: true}
[   1240.0] E Fader[0] - Demo_VariableFadeOut (#2, xc=0)
               duration: 35.0
               {Color: 0, FadeTime: 35.0, IsWaitFinish: true}
[   1247.0] L Enemy_Ganon[0] - Demo_PlayASForTimeline (#95, xc=0)
[   1275.0] L Fader[0] - Demo_VariableFadeOut (#2, xc=0)
[   1285.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#17, xc=3)
[   1285.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#27, xc=4)
[   1285.0] L GameRomCamera[0] - Demo_CameraAnim (#43, xc=0)
[   1285.0] L GameRomCamera[0] - Demo_FocusDistSetting (#63, xc=1)
[   1285.0] E Fader[0] - Demo_VariableFadeIn (#3, xc=0)
               duration: 5.0
               {Color: 0, FadeTime: 5.0, IsWaitFinish: true}
[   1285.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#18, xc=3)
               duration: 45.0
               {IsWaitFinish: true, angleX: -46.08000183105469, angleY: 243.36000061035156}
[   1285.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=4)
               duration: 45.0
               {Far: 75.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: true}
[   1285.0] E GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
               duration: 45.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C11-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1285.0] E GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
               duration: 45.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[   1285.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#98, xc=0)
               duration: 45.0
               {ASName: C11-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1290.0] L Fader[0] - Demo_VariableFadeIn (#3, xc=0)
[   1290.0] L EventControllerRumble[0] - Demo_RumbleLarge (#84, xc=0)
[   1290.0] E EventControllerRumble[0] - Demo_RumbleSmall (#85, xc=0)
               duration: 100.0
               {Count: 15, IsWaitFinish: true}
[   1330.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#18, xc=3)
[   1330.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#28, xc=4)
[   1330.0] L GameRomCamera[0] - Demo_CameraAnim (#44, xc=0)
[   1330.0] L GameRomCamera[0] - Demo_FocusDistSetting (#64, xc=1)
[   1330.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#98, xc=0)
[   1330.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#19, xc=3)
               duration: 60.0
               {IsWaitFinish: true, angleX: -12.239999771118164, angleY: -327.6000061035156}
[   1330.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=4)
               duration: 60.0
               {Far: 75.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: -20.0, NearUse: true}
[   1330.0] E GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
               duration: 60.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 83.0, ApertureEnd: 83.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.2000000476837158, DOFBlurStart: 1.2000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C12-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1330.0] E GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
               duration: 60.0
               {FocusDistEnd: 3.5, FocusDistStart: 3.5, IsWaitFinish: true}
[   1330.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#99, xc=0)
               duration: 60.0
               {ASName: C12-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1390.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#19, xc=3)
[   1390.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#29, xc=4)
[   1390.0] L GameRomCamera[0] - Demo_CameraAnim (#45, xc=0)
[   1390.0] L GameRomCamera[0] - Demo_FocusDistSetting (#65, xc=1)
[   1390.0] L EventControllerRumble[0] - Demo_RumbleSmall (#85, xc=0)
[   1390.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#99, xc=0)
[   1390.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#20, xc=3)
               duration: 90.0
               {IsWaitFinish: true, angleX: -46.08000183105469, angleY: 243.36000061035156}
[   1390.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=4)
               duration: 210.0
               {Far: 82.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: true}
[   1390.0] E GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
               duration: 90.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C13-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1390.0] E GameRomCamera[0] - Demo_FocusDistSetting (#66, xc=1)
               duration: 90.0
               {FocusDistEnd: 65.0, FocusDistStart: 65.0, IsWaitFinish: true}
[   1390.0] E GameROMPlayer[0] - Demo_PlayASForDemo (#100, xc=0)
               duration: 90.0
               {ASName: C13-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: -1.0, SeqBank: 0, TargetIndex: -1}
[   1480.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#20, xc=3)
[   1480.0] L GameRomCamera[0] - Demo_CameraAnim (#46, xc=0)
[   1480.0] L GameRomCamera[0] - Demo_FocusDistSetting (#66, xc=1)
[   1480.0] L GameROMPlayer[0] - Demo_PlayASForDemo (#100, xc=0)
[   1480.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#21, xc=3)
               duration: 120.0
               {IsWaitFinish: true, angleX: -46.08000183105469, angleY: 243.36000061035156}
[   1480.0] E GameRomCamera[0] - Demo_CameraAnim (#47, xc=0)
               duration: 120.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C14-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1480.0] E GameRomCamera[0] - Demo_FocusDistSetting (#67, xc=1)
               duration: 120.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[   1600.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#21, xc=3)
[   1600.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#30, xc=4)
[   1600.0] L GameRomCamera[0] - Demo_CameraAnim (#47, xc=0)
[   1600.0] L GameRomCamera[0] - Demo_FocusDistSetting (#67, xc=1)
[   1600.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#22, xc=3)
               duration: 140.0
               {IsWaitFinish: true, angleX: -26.639999389648438, angleY: -39.599998474121094}
[   1600.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=4)
               duration: 690.0
               {Far: 50.0, FarUse: true, FogRatio: 0.6000000238418579, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: true}
[   1600.0] E GameRomCamera[0] - Demo_CameraAnim (#48, xc=0)
               duration: 140.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 42.0, ApertureEnd: 42.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 9.0, FocalLengthEnd: 9.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C15-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1600.0] E GameRomCamera[0] - Demo_FocusDistSetting (#68, xc=1)
               duration: 140.0
               {FocusDistEnd: 9.0, FocusDistStart: 9.0, IsWaitFinish: true}
[   1600.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#101, xc=0)
               duration: 140.0
               {ASName: C15-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1720.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#104, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1721.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#104, xc=1)
[   1740.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#22, xc=3)
[   1740.0] L GameRomCamera[0] - Demo_CameraAnim (#48, xc=0)
[   1740.0] L GameRomCamera[0] - Demo_FocusDistSetting (#68, xc=1)
[   1740.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#101, xc=0)
[   1740.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#23, xc=3)
               duration: 100.0
               {IsWaitFinish: true, angleX: -32.400001525878906, angleY: -98.63999938964844}
[   1740.0] E GameRomCamera[0] - Demo_CameraAnim (#49, xc=0)
               duration: 100.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 13.0, ApertureEnd: 13.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.800000011920929, DOFBlurStart: 0.800000011920929, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 8.699999809265137, FocalLengthEnd: 8.699999809265137,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C16-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1740.0] E GameRomCamera[0] - Demo_FocusDistSetting (#69, xc=1)
               duration: 100.0
               {FocusDistEnd: 1.2000000476837158, FocusDistStart: 1.2000000476837158, IsWaitFinish: true}
[   1740.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#102, xc=0)
               duration: 100.0
               {ASName: C16-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1840.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#23, xc=3)
[   1840.0] L GameRomCamera[0] - Demo_CameraAnim (#49, xc=0)
[   1840.0] L GameRomCamera[0] - Demo_FocusDistSetting (#69, xc=1)
[   1840.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#102, xc=0)
[   1840.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#24, xc=3)
               duration: 450.0
               {IsWaitFinish: true, angleX: -32.400001525878906, angleY: -98.63999938964844}
[   1840.0] E GameRomCamera[0] - Demo_CameraAnim (#50, xc=0)
               duration: 100.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C18-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1840.0] E GameRomCamera[0] - Demo_FocusDistSetting (#70, xc=1)
               duration: 100.0
               {FocusDistEnd: 25.0, FocusDistStart: 25.0, IsWaitFinish: true}
[   1840.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#103, xc=0)
               duration: 390.0
               {ASName: C18-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1940.0] L GameRomCamera[0] - Demo_CameraAnim (#50, xc=0)
[   1940.0] L GameRomCamera[0] - Demo_FocusDistSetting (#70, xc=1)
[   1940.0] E GameRomCamera[0] - Demo_CameraAnim (#51, xc=0)
               duration: 350.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 50.0, SceneName: C22-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1940.0] E GameRomCamera[0] - Demo_FocusDistSetting (#71, xc=1)
               duration: 60.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   2000.0] L GameRomCamera[0] - Demo_FocusDistSetting (#71, xc=1)
[   2000.0] E GameRomCamera[0] - Demo_FocusDistSetting (#72, xc=1)
               duration: 28.0
               {FocusDistEnd: 10.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   2000.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#105, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   2001.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#105, xc=1)
[   2013.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#106, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   2014.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#106, xc=1)
[   2025.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#107, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   2026.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#107, xc=1)
[   2028.0] L GameRomCamera[0] - Demo_FocusDistSetting (#72, xc=1)
[   2028.0] E GameRomCamera[0] - Demo_FocusDistSetting (#73, xc=1)
               duration: 262.0
               {FocusDistEnd: 10.0, FocusDistStart: 10.0, IsWaitFinish: true}
[   2035.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#108, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   2036.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#108, xc=1)
[   2046.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#109, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   2047.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#109, xc=1)
[   2062.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#110, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   2063.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#110, xc=1)
[   2230.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#103, xc=0)
[   2260.0] E Fader[0] - Demo_FadeOut (#4, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   2290.0] L Fader[0] - Demo_FadeOut (#4, xc=0)
[   2290.0] L WorldManagerControl[0] - Demo_SetWind (#5, xc=0)
[   2290.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#6, xc=1)
[   2290.0] L WorldManagerControl[0] - Demo_SetPaletteType (#7, xc=2)
[   2290.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#24, xc=3)
[   2290.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#31, xc=4)
[   2290.0] L WorldManagerControl[0] - Demo_EventSetCharAmbientScale (#32, xc=5)
[   2290.0] L WorldManagerControl[0] - Demo_EventSetCharMainLightScale (#33, xc=6)
[   2290.0] L GameRomCamera[0] - Demo_CameraAnim (#51, xc=0)
[   2290.0] L GameRomCamera[0] - Demo_FocusDistSetting (#73, xc=1)
[   2954.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#111, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[   2955.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#111, xc=1)
