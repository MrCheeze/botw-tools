-------- Event timeline: Demo141_2 --------
actors: 9
clips: 16
oneshots: 0
cuts: 1
duration: 400.0
subtimelines: ['Demo141_2_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
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

Actor: Enemy_SiteBoss_Sword_Castle[0]
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
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#7, xc=1)
               duration: 148.0
               {FocusDistEnd: 2.799999952316284, FocusDistStart: 2.5, IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayASForTimeline (#13, xc=0)
               duration: 400.0
               {ASName: C02-Link-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Enemy_SiteBoss_Sword_Castle[0] - Demo_PlayASForTimeline (#14, xc=0)
               duration: 400.0
               {ASName: Demo141_2-C02-SiteBoss_Sword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: true,
                 IsWaitFinish: true, MorphingFrame: -1.0, SeqBank: 0, TargetIndex: 0}
[      0.0] E Enemy_SiteBoss_Sword_Castle[0] - Demo_PlayASForTimeline (#15, xc=1)
               duration: 400.0
               {ASName: Wait_Battle, ClothWarpMode: 1, IsEnabledAnimeDriven: 0, IsIgnoreSame: false, IsWaitFinish: false,
                 MorphingFrame: -1.0, SeqBank: 0, TargetIndex: 2}
[     30.0] L Fader[0] - Demo_FadeIn (#1, xc=0)
[    148.0] L GameRomCamera[0] - Demo_FocusDistSetting (#7, xc=1)
[    148.0] E GameRomCamera[0] - Demo_FocusDistSetting (#8, xc=1)
               duration: 20.0
               {FocusDistEnd: 8.5, FocusDistStart: 2.799999952316284, IsWaitFinish: true}
[    150.0] E EventSystemActor[0] - Demo_PlayUiActorName (#0, xc=0)
               duration: 180.0
               {ActorName: Enemy_SiteBoss_Sword_Castle, ActorType: 0, IsWaitFinish: true}
[    152.0] E EventControllerRumble[0] - Demo_RumbleMiddle (#12, xc=0)
               duration: 122.0
               {Count: 7, IsWaitFinish: true}
[    168.0] L GameRomCamera[0] - Demo_FocusDistSetting (#8, xc=1)
[    168.0] E GameRomCamera[0] - Demo_FocusDistSetting (#9, xc=1)
               duration: 5.0
               {FocusDistEnd: 8.5, FocusDistStart: 8.5, IsWaitFinish: true}
[    173.0] L GameRomCamera[0] - Demo_FocusDistSetting (#9, xc=1)
[    173.0] E GameRomCamera[0] - Demo_FocusDistSetting (#10, xc=1)
               duration: 11.0
               {FocusDistEnd: 4.5, FocusDistStart: 8.5, IsWaitFinish: true}
[    184.0] L GameRomCamera[0] - Demo_FocusDistSetting (#10, xc=1)
[    184.0] E GameRomCamera[0] - Demo_FocusDistSetting (#11, xc=1)
               duration: 216.0
               {FocusDistEnd: 6.0, FocusDistStart: 4.5, IsWaitFinish: true}
[    274.0] L EventControllerRumble[0] - Demo_RumbleMiddle (#12, xc=0)
[    330.0] L EventSystemActor[0] - Demo_PlayUiActorName (#0, xc=0)
[    400.0] L Obj_Sun_A_01[0] - Demo_SunMove (#2, xc=0)
[    400.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#3, xc=0)
[    400.0] L WorldManagerControl[0] - Demo_SetWind (#4, xc=0)
[    400.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#5, xc=1)
[    400.0] L GameRomCamera[0] - Demo_CameraAnim (#6, xc=0)
[    400.0] L GameRomCamera[0] - Demo_FocusDistSetting (#11, xc=1)
[    400.0] L GameROMPlayer[0] - Demo_PlayASForTimeline (#13, xc=0)
[    400.0] L Enemy_SiteBoss_Sword_Castle[0] - Demo_PlayASForTimeline (#14, xc=0)
[    400.0] L Enemy_SiteBoss_Sword_Castle[0] - Demo_PlayASForTimeline (#15, xc=1)
