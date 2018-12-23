-------- Event timeline: Demo141_4 --------
actors: 8
clips: 27
oneshots: 0
cuts: 2
duration: 585.0
subtimelines: ['Demo141_4_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 225.0
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
x36: 5
actions: ['Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_SetDirectionalLight', 'Demo_EventSetFogDirect', 'Demo_SetPaletteType']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 3
actions: ['Demo_CameraAnim', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayASForTimeline', 'Demo_EmitEquipmentNoise']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: TwnObj_GanonCocoon_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 15.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 585.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 585.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 585.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.10000000149011612, WindDirY: 0.0, WindDirZ: -0.11999999731779099,
                 WindPower: 3.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
               duration: 585.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetDirectionalLight (#6, xc=2)
               duration: 585.0
               {IsWaitFinish: true, angleX: -46.08000183105469, angleY: -2.4000000953674316}
[      0.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=3)
               duration: 225.0
               {Far: 80.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: -10.0, NearUse: true}
[      0.0] E WorldManagerControl[0] - Demo_SetPaletteType (#9, xc=4)
               duration: 585.0
               {ChangeFrame: 0, EndFrame: 0, IsWaitFinish: true, PaletteType: 16, Speed: 1.0}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
               duration: 225.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=2)
               duration: 225.0
               {FocusDistEnd: 8.0, FocusDistStart: 8.0, IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#17, xc=0)
               duration: 225.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     15.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[     21.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#18, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Left}
[     22.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#18, xc=1)
[     47.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#19, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[     48.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#19, xc=1)
[     73.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#20, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Left}
[     74.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#20, xc=1)
[     99.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#21, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[    100.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#21, xc=1)
[    126.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#22, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Left}
[    127.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#22, xc=1)
[    150.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#23, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[    151.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#23, xc=1)
[    183.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#24, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Left}
[    184.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#24, xc=1)
[    210.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#25, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: '', SteppingFoot: Right}
[    211.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#25, xc=1)
[    225.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#7, xc=3)
[    225.0] L GameRomCamera[0] - Demo_CameraAnim (#10, xc=0)
[    225.0] L GameRomCamera[0] - Demo_FocusDistSetting (#14, xc=2)
[    225.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#17, xc=0)
[    225.0] E WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=3)
               duration: 360.0
               {Far: 50.0, FarUse: true, FogRatio: 0.8999999761581421, InstantSW: true, IsWaitFinish: true,
                 Near: 0.0, NearUse: true}
[    225.0] E GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
               duration: 360.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    225.0] E GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=2)
               duration: 360.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[    225.0] E TwnObj_GanonCocoon_A_01[0] - Demo_PlayASForTimeline (#26, xc=0)
               duration: 360.0
               {ASName: C02-TwnObj_GanonCocoon_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    434.0] E EventControllerRumble[0] - Demo_RumbleSmall (#16, xc=0)
               duration: 111.0
               {Count: 14, IsWaitFinish: true}
[    450.0] E GameRomCamera[0] - Demo_XLinkEventCreate (#12, xc=1)
               duration: 120.0
               {ELinkKey: Demo_RadialBlurType01, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    545.0] L EventControllerRumble[0] - Demo_RumbleSmall (#16, xc=0)
[    570.0] L GameRomCamera[0] - Demo_XLinkEventCreate (#12, xc=1)
[    570.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 15.0
               {Color: 1, DispMode: Auto, Frame: 2, IsWaitFinish: true}
[    570.0] E GameRomCamera[0] - Demo_XLinkEventFade (#13, xc=1)
               duration: 3.0
               {ELinkKey: Demo_RadialBlurType01, IsWaitFinish: true, SLinkKey: ''}
[    573.0] L GameRomCamera[0] - Demo_XLinkEventFade (#13, xc=1)
[    585.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    585.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    585.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    585.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[    585.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
[    585.0] L WorldManagerControl[0] - Demo_SetDirectionalLight (#6, xc=2)
[    585.0] L WorldManagerControl[0] - Demo_EventSetFogDirect (#8, xc=3)
[    585.0] L WorldManagerControl[0] - Demo_SetPaletteType (#9, xc=4)
[    585.0] L GameRomCamera[0] - Demo_CameraAnim (#11, xc=0)
[    585.0] L GameRomCamera[0] - Demo_FocusDistSetting (#15, xc=2)
[    585.0] L TwnObj_GanonCocoon_A_01[0] - Demo_PlayASForTimeline (#26, xc=0)
