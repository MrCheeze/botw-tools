-------- Event timeline: Demo118_0 --------
actors: 12
clips: 64
oneshots: 0
cuts: 9
duration: 1900.0
subtimelines: ['Demo118_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 285.0
x4: 0
params: (none)

Cut: C03
start time: 655.0
x4: 0
params: (none)

Cut: C04
start time: 875.0
x4: 0
params: (none)

Cut: C05
start time: 980.0
x4: 0
params: (none)

Cut: C06
start time: 1080.0
x4: 0
params: (none)

Cut: C07
start time: 1330.0
x4: 0
params: (none)

Cut: C08
start time: 1520.0
x4: 0
params: (none)

Cut: C09
start time: 1730.0
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
actions: ['Demo_EventSetDirectionalYang', 'Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_EventCloudShadowPos', 'Demo_EventSetCloudShadowMove']
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

Actor: DemoVoiceEmitTag[0]
x36: 1
actions: []
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 17.75, PosZ: 22.0, RotX: 0.0, RotY: 180.0,
  RotZ: 0.0}

Actor: DgnObj_RemainsClearTerminalBody_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 17.75, PosZ: 22.0, RotX: 0.0, RotY: 180.0,
  RotZ: 0.0}

Actor: Obj_HeartUtuwa_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Enemy_SiteBoss_Bow[0]
x36: 3
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 2, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
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
               duration: 1900.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 1900.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 285.0
               {IsWaitFinish: true, angleY: 115.0}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#15, xc=1)
               duration: 1900.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.04399999976158142, WindDirY: 0.0, WindDirZ: -0.25999999046325684,
                 WindPower: 10.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#16, xc=2)
               duration: 1130.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
               duration: 285.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 7.0, FocalLengthEnd: 7.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
               duration: 285.0
               {FocusDistEnd: 17.0, FocusDistStart: 25.0, IsWaitFinish: true}
[      0.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#46, xc=0)
               duration: 1900.0
               {ASName: OffWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: false,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#47, xc=0)
               duration: 1900.0
               {ASName: Standby, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#50, xc=0)
               duration: 285.0
               {ASName: Demo118_0-C01-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#55, xc=1)
               duration: 200.0
               {ASName: Demo_Appear, ClothWarpMode: -1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#56, xc=2)
               duration: 1015.0
               {ASName: DownWaitMaterial, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#57, xc=0)
               duration: 1730.0
               {ASName: C01-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    200.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#55, xc=1)
[    285.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#6, xc=0)
[    285.0] L GameRomCamera[0] - Demo_CameraAnim (#23, xc=0)
[    285.0] L GameRomCamera[0] - Demo_FocusDistSetting (#32, xc=1)
[    285.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#50, xc=0)
[    285.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
               duration: 370.0
               {IsWaitFinish: true, angleY: 115.0}
[    285.0] E GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
               duration: 370.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 180.0, ApertureEnd: 180.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 7.0, FocalLengthEnd: 7.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    285.0] E GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
               duration: 125.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    285.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#51, xc=0)
               duration: 370.0
               {ASName: C02-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    372.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#43, xc=0)
               duration: 15.0
               {Count: 1, IsWaitFinish: true}
[    387.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#43, xc=0)
[    410.0] L GameRomCamera[0] - Demo_FocusDistSetting (#33, xc=1)
[    410.0] E GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
               duration: 85.0
               {FocusDistEnd: 9.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    495.0] L GameRomCamera[0] - Demo_FocusDistSetting (#34, xc=1)
[    495.0] E GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
               duration: 160.0
               {FocusDistEnd: 9.0, FocusDistStart: 9.0, IsWaitFinish: true}
[    655.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=0)
[    655.0] L GameRomCamera[0] - Demo_CameraAnim (#24, xc=0)
[    655.0] L GameRomCamera[0] - Demo_FocusDistSetting (#35, xc=1)
[    655.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#51, xc=0)
[    655.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
               duration: 220.0
               {IsWaitFinish: true, angleY: 115.0}
[    655.0] E GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
               duration: 220.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 0.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 7.0, FocalLengthEnd: 7.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    655.0] E GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
               duration: 220.0
               {FocusDistEnd: 20.0, FocusDistStart: 20.0, IsWaitFinish: true}
[    655.0] E EventControllerRumble[0] - Demo_RumbleSmall (#44, xc=0)
               duration: 162.0
               {Count: 23, IsWaitFinish: true}
[    655.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#52, xc=0)
               duration: 220.0
               {ASName: C03-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    817.0] L EventControllerRumble[0] - Demo_RumbleSmall (#44, xc=0)
[    817.0] E EventControllerRumble[0] - Demo_RumbleLarge (#45, xc=0)
               duration: 229.0
               {Count: 16, IsWaitFinish: true}
[    875.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=0)
[    875.0] L GameRomCamera[0] - Demo_CameraAnim (#25, xc=0)
[    875.0] L GameRomCamera[0] - Demo_FocusDistSetting (#36, xc=1)
[    875.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#52, xc=0)
[    875.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
               duration: 105.0
               {IsWaitFinish: true, angleY: 115.0}
[    875.0] E GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
               duration: 105.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 140.0, ApertureEnd: 140.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.5, FocalLengthEnd: 4.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    875.0] E GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
               duration: 105.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[    875.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#53, xc=0)
               duration: 105.0
               {ASName: C04-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    980.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=0)
[    980.0] L GameRomCamera[0] - Demo_CameraAnim (#26, xc=0)
[    980.0] L GameRomCamera[0] - Demo_FocusDistSetting (#37, xc=1)
[    980.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#53, xc=0)
[    980.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
               duration: 100.0
               {IsWaitFinish: true, angleY: 115.0}
[    980.0] E GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
               duration: 100.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 30.0, ApertureEnd: 30.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 0.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 7.0, FocalLengthEnd: 7.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C05-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    980.0] E GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
               duration: 100.0
               {FocusDistEnd: 13.0, FocusDistStart: 13.0, IsWaitFinish: true}
[    980.0] E Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#54, xc=0)
               duration: 35.0
               {ASName: C05-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1010.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 120.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1015.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#54, xc=0)
[   1015.0] L Enemy_SiteBoss_Bow[0] - Demo_PlayASForTimeline (#56, xc=2)
[   1046.0] L EventControllerRumble[0] - Demo_RumbleLarge (#45, xc=0)
[   1080.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=0)
[   1080.0] L GameRomCamera[0] - Demo_CameraAnim (#27, xc=0)
[   1080.0] L GameRomCamera[0] - Demo_FocusDistSetting (#38, xc=1)
[   1080.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
               duration: 250.0
               {IsWaitFinish: true, angleY: 145.0}
[   1080.0] E GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
               duration: 250.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 482.0, ApertureEnd: 482.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.30000001192092896, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 14.0, FocalLengthEnd: 14.0,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1080.0] E GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
               duration: 250.0
               {FocusDistEnd: 22.0, FocusDistStart: 22.0, IsWaitFinish: true}
[   1130.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[   1130.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#16, xc=2)
[   1130.0] E Fader[0] - Demo_FadeIn (#2, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 1, IsWaitFinish: true}
[   1130.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#17, xc=2)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: -0.36000001430511475, setPos_y: 0.029999999329447746}
[   1131.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#17, xc=2)
[   1131.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#18, xc=2)
               duration: 199.0
               {IsWaitFinish: true, setSpeed_x: -0.000699999975040555, setSpeed_y: 0.0}
[   1160.0] L Fader[0] - Demo_FadeIn (#2, xc=0)
[   1330.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=0)
[   1330.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#18, xc=2)
[   1330.0] L GameRomCamera[0] - Demo_CameraAnim (#28, xc=0)
[   1330.0] L GameRomCamera[0] - Demo_FocusDistSetting (#39, xc=1)
[   1330.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
               duration: 190.0
               {IsWaitFinish: true, angleY: 115.0}
[   1330.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#19, xc=2)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: -0.10000000149011612, setPos_y: -0.05999999865889549}
[   1330.0] E GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
               duration: 190.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 1.0, ApertureEnd: 1.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.10000000149011612, DOFBlurStart: 0.10000000149011612, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 1.0, FocalLengthEnd: 1.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C07-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1330.0] E GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
               duration: 190.0
               {FocusDistEnd: 21.0, FocusDistStart: 21.0, IsWaitFinish: true}
[   1331.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#19, xc=2)
[   1331.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#20, xc=2)
               duration: 399.0
               {IsWaitFinish: true, setSpeed_x: -0.000699999975040555, setSpeed_y: 0.0}
[   1520.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#12, xc=0)
[   1520.0] L GameRomCamera[0] - Demo_CameraAnim (#29, xc=0)
[   1520.0] L GameRomCamera[0] - Demo_FocusDistSetting (#40, xc=1)
[   1520.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
               duration: 210.0
               {IsWaitFinish: true, angleY: 115.0}
[   1520.0] E GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 41.0, ApertureEnd: 41.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.5, FocalLengthEnd: 4.5, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 50.0, SceneName: C08-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1520.0] E GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
               duration: 210.0
               {FocusDistEnd: 4.5, FocusDistStart: 4.5, IsWaitFinish: true}
[   1520.0] E Obj_HeartUtuwa_A_01[0] - Demo_PlayASForTimeline (#48, xc=0)
               duration: 210.0
               {ASName: C08-Item_HeartUtuwa-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1651.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#59, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1652.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#59, xc=1)
[   1669.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#60, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1670.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#60, xc=1)
[   1686.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#61, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1687.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#61, xc=1)
[   1707.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#62, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Right}
[   1708.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#62, xc=1)
[   1726.0] E GameROMPlayer[0] - Demo_EmitEquipmentNoise (#63, xc=1)
               duration: 1.0
               {IsWaitFinish: true, Speed: Dash, SteppingFoot: Left}
[   1727.0] L GameROMPlayer[0] - Demo_EmitEquipmentNoise (#63, xc=1)
[   1730.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#13, xc=0)
[   1730.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#20, xc=2)
[   1730.0] L GameRomCamera[0] - Demo_CameraAnim (#30, xc=0)
[   1730.0] L GameRomCamera[0] - Demo_FocusDistSetting (#41, xc=1)
[   1730.0] L Obj_HeartUtuwa_A_01[0] - Demo_PlayASForTimeline (#48, xc=0)
[   1730.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#57, xc=0)
[   1730.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=0)
               duration: 170.0
               {IsWaitFinish: true, angleY: 115.0}
[   1730.0] E WorldManagerControl[0] - Demo_EventCloudShadowPos (#21, xc=2)
               duration: 1.0
               {IsWaitFinish: true, setPos_x: 0.00800000037997961, setPos_y: -0.029999999329447746}
[   1730.0] E GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
               duration: 170.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 60.0, ApertureEnd: 60.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 2.0, FocalLengthEnd: 2.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 100.0, SceneName: C09-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1730.0] E GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
               duration: 185.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   1730.0] E Obj_HeartUtuwa_A_01[0] - Demo_PlayASForTimeline (#49, xc=0)
               duration: 170.0
               {ASName: C09-Item_HeartUtuwa-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1730.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#58, xc=0)
               duration: 170.0
               {ASName: C09-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[   1731.0] L WorldManagerControl[0] - Demo_EventCloudShadowPos (#21, xc=2)
[   1731.0] E WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#22, xc=2)
               duration: 169.0
               {IsWaitFinish: true, setSpeed_x: -0.000699999975040555, setSpeed_y: 0.0}
[   1870.0] E Fader[0] - Demo_FadeOut (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1900.0] L Fader[0] - Demo_FadeOut (#3, xc=0)
[   1900.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   1900.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   1900.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#14, xc=0)
[   1900.0] L WorldManagerControl[0] - Demo_SetWind (#15, xc=1)
[   1900.0] L WorldManagerControl[0] - Demo_EventSetCloudShadowMove (#22, xc=2)
[   1900.0] L GameRomCamera[0] - Demo_CameraAnim (#31, xc=0)
[   1900.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#46, xc=0)
[   1900.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#47, xc=0)
[   1900.0] L Obj_HeartUtuwa_A_01[0] - Demo_PlayASForTimeline (#49, xc=0)
[   1900.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#58, xc=0)
[   1915.0] L GameRomCamera[0] - Demo_FocusDistSetting (#42, xc=1)
