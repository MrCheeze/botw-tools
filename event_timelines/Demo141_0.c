-------- Event timeline: Demo141_0 --------
actors: 9
clips: 14
oneshots: 0
cuts: 1
duration: 400.0
subtimelines: ['Demo141_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: cut0
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_PlayUiActorName']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Fader[0]
x36: 1
actions: ['Demo_FadeIn']
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
x36: 2
actions: ['Demo_SetWind', 'Demo_EventCloudShadowOff']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleMiddle']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Enemy_SiteBoss_Bow_Castle[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 2, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#1, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
               duration: 400.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
               duration: 400.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
               duration: 400.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.10000000149011612, WindDirY: 0.0, WindDirZ: -0.11999999731779099,
                 WindPower: 3.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
               duration: 400.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#6, xc=0)
               duration: 400.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: DemoCamera,
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 0.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#7, xc=1)
               duration: 190.0
               {FocusDistEnd: 10.0, FocusDistStart: 8.5, IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#11, xc=0)
               duration: 400.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Enemy_SiteBoss_Bow_Castle[0] - Demo_PlayASForTimeline (#12, xc=0)
               duration: 400.0
               {ASName: Demo141_0-C02-SiteBoss_Bow-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: true,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: 0}
[      0.0] E Enemy_SiteBoss_Bow_Castle[0] - Demo_PlayASForTimeline (#13, xc=1)
               duration: 400.0
               {ASName: Wait_Battle, ClothWarpMode: 1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: false,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: 2}
[     30.0] L Fader[0] - Demo_FadeIn (#1, xc=0)
[    190.0] L GameRomCamera[0] - Demo_FocusDistSetting (#7, xc=1)
[    190.0] E GameRomCamera[0] - Demo_FocusDistSetting (#8, xc=1)
               duration: 15.0
               {FocusDistEnd: 3.5, FocusDistStart: 10.0, IsWaitFinish: true}
[    194.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#10, xc=0)
               duration: 176.0
               {Count: 10, IsWaitFinish: true}
[    200.0] E EventSystemActor[0] - Demo_PlayUiActorName (#0, xc=0)
               duration: 180.0
               {ActorName: Enemy_SiteBoss_Bow_Castle, ActorType: 0, IsWaitFinish: true}
[    205.0] L GameRomCamera[0] - Demo_FocusDistSetting (#8, xc=1)
[    205.0] E GameRomCamera[0] - Demo_FocusDistSetting (#9, xc=1)
               duration: 195.0
               {FocusDistEnd: 4.199999809265137, FocusDistStart: 3.5, IsWaitFinish: true}
[    370.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#10, xc=0)
[    380.0] L EventSystemActor[0] - Demo_PlayUiActorName (#0, xc=0)
[    400.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    400.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    400.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[    400.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
[    400.0] L GameRomCamera[0] - Demo_CameraAnim (#6, xc=0)
[    400.0] L GameRomCamera[0] - Demo_FocusDistSetting (#9, xc=1)
[    400.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#11, xc=0)
[    400.0] L Enemy_SiteBoss_Bow_Castle[0] - Demo_PlayASForTimeline (#12, xc=0)
[    400.0] L Enemy_SiteBoss_Bow_Castle[0] - Demo_PlayASForTimeline (#13, xc=1)
