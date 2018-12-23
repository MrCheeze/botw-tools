-------- Event timeline: Demo671_2 --------
actors: 11
clips: 38
oneshots: 0
cuts: 1
duration: 800.0
subtimelines: ['Demo671_2_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
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
actions: ['Demo_SetWind', 'Demo_EventCloudShadowOff', 'Demo_EventSetDirectionalYang']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 3.0, PosZ: -59.5, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_RemainsClearTerminalBody_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 3.0, PosZ: -59.5, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 1
actions: ['Demo_VisibleOff']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Enemy_SiteBoss_Spear_R[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 3, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[0]
x36: 1
actions: ['Demo_RumbleSmall', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_ChangeScene']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader[0] - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 0, DispMode: NoLogo, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 1580.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
               duration: 1580.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
               duration: 1580.0
               {IsAutoWind: false, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=1)
               duration: 660.0
               {IsWaitFinish: true, angleY: -6.0}
[      0.0] E WorldManagerControl[0] - Demo_EventCloudShadowOff (#12, xc=2)
               duration: 1580.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
               duration: 240.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 74.0, ApertureEnd: 5.5, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.5, DOFBlurStart: 0.30000001192092896, DOFEndFrame: 100.0, DOFStartFrame: 88.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 6.739999771118164, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=1)
               duration: 240.0
               {FocusDistEnd: 14.0, FocusDistStart: 14.0, IsWaitFinish: true}
[      0.0] E RemainsClearTerminal[0] - Demo_PlayASForTimeline (#27, xc=0)
               duration: 1580.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#28, xc=0)
               duration: 1580.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_VisibleOff (#29, xc=0)
               duration: 800.0
               {IsWaitFinish: true}
[      0.0] E Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#30, xc=0)
               duration: 240.0
               {ASName: Demo671_2-C01-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#34, xc=1)
               duration: 695.0
               {ASName: DownWaitMaterial, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader[0] - Demo_FadeIn (#0, xc=0)
[    240.0] L GameRomCamera[0] - Demo_CameraAnim (#13, xc=0)
[    240.0] L GameRomCamera[0] - Demo_FocusDistSetting (#20, xc=1)
[    240.0] L Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#30, xc=0)
[    240.0] E GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
               duration: 150.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 13.0, ApertureEnd: 13.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.5, DOFBlurStart: 1.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.300000190734863, FocalLengthEnd: 4.300000190734863,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C02-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[    240.0] E GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=1)
               duration: 150.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    240.0] E Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#31, xc=0)
               duration: 150.0
               {ASName: C02-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    390.0] L GameRomCamera[0] - Demo_CameraAnim (#14, xc=0)
[    390.0] L GameRomCamera[0] - Demo_FocusDistSetting (#21, xc=1)
[    390.0] L Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#31, xc=0)
[    390.0] E GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
               duration: 270.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 18.450000762939453, ApertureEnd: 18.450000762939453,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 5.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    390.0] E GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
               duration: 270.0
               {FocusDistEnd: 7.0, FocusDistStart: 7.0, IsWaitFinish: true}
[    390.0] E Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#32, xc=0)
               duration: 270.0
               {ASName: C03-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    410.0] E EventControllerRumble[0] - Demo_RumbleSmall (#35, xc=0)
               duration: 180.0
               {Count: 62, IsWaitFinish: true}
[    590.0] L EventControllerRumble[0] - Demo_RumbleSmall (#35, xc=0)
[    590.0] E EventControllerRumble[0] - Demo_RumbleLarge (#36, xc=0)
               duration: 138.0
               {Count: 9, IsWaitFinish: true}
[    660.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#7, xc=1)
[    660.0] L GameRomCamera[0] - Demo_CameraAnim (#15, xc=0)
[    660.0] L GameRomCamera[0] - Demo_FocusDistSetting (#22, xc=1)
[    660.0] L Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#32, xc=0)
[    660.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=1)
               duration: 300.0
               {IsWaitFinish: true, angleY: -3.0}
[    660.0] E GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
               duration: 300.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 19.350000381469727, ApertureEnd: 11.699999809265137,
                 BgCheck: false, CameraName: '', DOFBlurEnd: 0.0, DOFBlurStart: 1.5, DOFEndFrame: 140.0, DOFStartFrame: 130.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C04-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    660.0] E GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=1)
               duration: 300.0
               {FocusDistEnd: 9.0, FocusDistStart: 9.0, IsWaitFinish: true}
[    660.0] E Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#33, xc=0)
               duration: 35.0
               {ASName: C04-SiteBoss_Spear-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    690.0] E Fader[0] - Demo_FadeOut (#1, xc=0)
               duration: 120.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    695.0] L Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#33, xc=0)
[    695.0] L Enemy_SiteBoss_Spear_R[0] - Demo_PlayASForTimeline (#34, xc=1)
[    728.0] L EventControllerRumble[0] - Demo_RumbleLarge (#36, xc=0)
[    746.0] E EventSystemActor[0] - Demo_ChangeScene (#37, xc=0)
               duration: 100.0
               {EntryPointName: LevelUp, EvflName: Demo622_2, FadeType: 1, IsWaitFinish: true, StartType: -1,
                 WarpDestMapName: MainField/H-5, WarpDestPosName: Clear_RemainsWater}
[    800.0] L GameROMPlayer[0] - Demo_VisibleOff (#29, xc=0)
[    810.0] L Fader[0] - Demo_FadeOut (#1, xc=0)
[    810.0] E Fader[0] - Demo_FadeIn (#2, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    840.0] L Fader[0] - Demo_FadeIn (#2, xc=0)
[    846.0] L EventSystemActor[0] - Demo_ChangeScene (#37, xc=0)
[    960.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#8, xc=1)
[    960.0] L GameRomCamera[0] - Demo_CameraAnim (#16, xc=0)
[    960.0] L GameRomCamera[0] - Demo_FocusDistSetting (#23, xc=1)
[    960.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=1)
               duration: 240.0
               {IsWaitFinish: true, angleY: 5.699999809265137}
[    960.0] E GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
               duration: 240.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    960.0] E GameRomCamera[0] - Demo_FocusDistSetting (#24, xc=1)
               duration: 240.0
               {FocusDistEnd: 11.0, FocusDistStart: 11.0, IsWaitFinish: true}
[   1200.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#9, xc=1)
[   1200.0] L GameRomCamera[0] - Demo_CameraAnim (#17, xc=0)
[   1200.0] L GameRomCamera[0] - Demo_FocusDistSetting (#24, xc=1)
[   1200.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=1)
               duration: 210.0
               {IsWaitFinish: true, angleY: 0.0}
[   1200.0] E GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
               duration: 210.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 33.0, ApertureEnd: 33.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.699999988079071, DOFBlurStart: 0.0, DOFEndFrame: 80.0, DOFStartFrame: 50.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 3.799999952316284, FocalLengthEnd: 3.799999952316284,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 20.0, SceneName: C06-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1200.0] E GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
               duration: 210.0
               {FocusDistEnd: 3.0, FocusDistStart: 3.0, IsWaitFinish: true}
[   1410.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#10, xc=1)
[   1410.0] L GameRomCamera[0] - Demo_CameraAnim (#18, xc=0)
[   1410.0] L GameRomCamera[0] - Demo_FocusDistSetting (#25, xc=1)
[   1410.0] E WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=1)
               duration: 170.0
               {IsWaitFinish: true, angleY: 3.5}
[   1410.0] E GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
               duration: 170.0
               {Accept1FrameDelay: false, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 20.0, SceneName: C07-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1410.0] E GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
               duration: 170.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   1550.0] E Fader[0] - Demo_FadeOut (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1580.0] L Fader[0] - Demo_FadeOut (#3, xc=0)
[   1580.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   1580.0] L Obj_Moon_A_01[0] - Demo_MoonMove (#5, xc=0)
[   1580.0] L WorldManagerControl[0] - Demo_SetWind (#6, xc=0)
[   1580.0] L WorldManagerControl[0] - Demo_EventSetDirectionalYang (#11, xc=1)
[   1580.0] L WorldManagerControl[0] - Demo_EventCloudShadowOff (#12, xc=2)
[   1580.0] L GameRomCamera[0] - Demo_CameraAnim (#19, xc=0)
[   1580.0] L GameRomCamera[0] - Demo_FocusDistSetting (#26, xc=1)
[   1580.0] L RemainsClearTerminal[0] - Demo_PlayASForTimeline (#27, xc=0)
[   1580.0] L DgnObj_RemainsClearTerminalBody_A_01[0] - Demo_PlayASForTimeline (#28, xc=0)
