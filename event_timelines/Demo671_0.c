-------- Event timeline: Demo671_0 --------
actors: 11
clips: 40
oneshots: 0
cuts: 1
duration: 830.0
subtimelines: ['Demo671_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: Fader
x36: 1
actions: ['Demo_FadeIn', 'Demo_FadeOut']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Sun_A_01[0]
x36: 1
actions: ['Demo_SunMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: Obj_Moon_A_01[1]
x36: 1
actions: ['Demo_MoonMove']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: WorldManagerControl[2]
x36: 2
actions: ['Demo_SetWind', 'Demo_EventSetDirectionalYang']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[3]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_FocusDistSetting']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: RemainsClearTerminal[5]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 22.5, PosZ: 5.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: DgnObj_RemainsClearTerminalBody_A_01[6]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: true, PosX: 0.0, PosY: 22.5, PosZ: 5.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 1
actions: ['Demo_VisibleOff']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: Enemy_SiteBoss_Lsword_R[0]
x36: 2
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 3, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventControllerRumble[4]
x36: 1
actions: ['Demo_RumbleMiddle', 'Demo_RumbleSmall', 'Demo_RumbleLarge']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_ChangeScene']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E Fader - Demo_FadeIn (#0, xc=0)
               duration: 30.0
               {Color: 0, DispMode: NoLogo, Frame: 0, IsWaitFinish: true}
[      0.0] E Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
               duration: 1600.0
               {IsWaitFinish: true}
[      0.0] E Obj_Moon_A_01[1] - Demo_MoonMove (#5, xc=0)
               duration: 1600.0
               {IsWaitFinish: true}
[      0.0] E WorldManagerControl[2] - Demo_EventSetDirectionalYang (#6, xc=0)
               duration: 1600.0
               {IsWaitFinish: true, angleY: 70.0}
[      0.0] E WorldManagerControl[2] - Demo_SetWind (#7, xc=1)
               duration: 1600.0
               {IsAutoWind: true, IsWaitFinish: true, WindDirX: 0.0, WindDirY: 0.0, WindDirZ: 0.0, WindPower: 0.0}
[      0.0] E GameRomCamera[3] - Demo_CameraAnim (#8, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 18.0, ApertureEnd: 18.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.0, DOFBlurStart: 1.0, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 5.0, FocalLengthEnd: 5.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 30.0, SceneName: C01-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[3] - Demo_FocusDistSetting (#16, xc=1)
               duration: 150.0
               {FocusDistEnd: 15.0, FocusDistStart: 15.0, IsWaitFinish: true}
[      0.0] E RemainsClearTerminal[5] - Demo_PlayASForTimeline (#26, xc=0)
               duration: 1600.0
               {ASName: PlayerCloseInWait, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E DgnObj_RemainsClearTerminalBody_A_01[6] - Demo_PlayASForTimeline (#27, xc=0)
               duration: 1600.0
               {ASName: AfterClear, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E GameROMPlayer[0] - Demo_VisibleOff (#28, xc=0)
               duration: 830.0
               {IsWaitFinish: true}
[      0.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#29, xc=0)
               duration: 150.0
               {ASName: Demo671_0-C01-SiteBoss_Lsword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[      0.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#33, xc=1)
               duration: 720.0
               {ASName: DownWaitMaterial, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] L Fader - Demo_FadeIn (#0, xc=0)
[    150.0] L GameRomCamera[3] - Demo_CameraAnim (#8, xc=0)
[    150.0] L GameRomCamera[3] - Demo_FocusDistSetting (#16, xc=1)
[    150.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#29, xc=0)
[    150.0] E GameRomCamera[3] - Demo_CameraAnim (#9, xc=0)
               duration: 230.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 50.0, ApertureEnd: 50.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 2.5, DOFBlurStart: 2.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0,
                 DOFUse: true, EndFrame: -1.0, FocalLength: 4.0, FocalLengthEnd: 4.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C02-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    150.0] E GameRomCamera[3] - Demo_FocusDistSetting (#17, xc=1)
               duration: 230.0
               {FocusDistEnd: 6.0, FocusDistStart: 6.0, IsWaitFinish: true}
[    150.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#30, xc=0)
               duration: 230.0
               {ASName: C02-SiteBoss_Lsword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    356.0] E EventControllerRumble[4] - Demo_RumbleMiddle (#34, xc=0)
               duration: 15.0
               {Count: 1, IsWaitFinish: true}
[    371.0] L EventControllerRumble[4] - Demo_RumbleMiddle (#34, xc=0)
[    380.0] L GameRomCamera[3] - Demo_CameraAnim (#9, xc=0)
[    380.0] L GameRomCamera[3] - Demo_FocusDistSetting (#17, xc=1)
[    380.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#30, xc=0)
[    380.0] E GameRomCamera[3] - Demo_CameraAnim (#10, xc=0)
               duration: 250.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 10.0, ApertureEnd: 10.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.699999988079071, DOFBlurStart: 0.699999988079071, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 7.0, FocalLengthEnd: 7.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: false, OverwriteAtDist: 10.0, SceneName: C03-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[    380.0] E GameRomCamera[3] - Demo_FocusDistSetting (#18, xc=1)
               duration: 63.0
               {FocusDistEnd: 5.0, FocusDistStart: 11.0, IsWaitFinish: true}
[    380.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#31, xc=0)
               duration: 250.0
               {ASName: C03-SiteBoss_Lsword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    380.0] E EventControllerRumble[4] - Demo_RumbleSmall (#35, xc=0)
               duration: 92.0
               {Count: 14, IsWaitFinish: true}
[    443.0] L GameRomCamera[3] - Demo_FocusDistSetting (#18, xc=1)
[    443.0] E GameRomCamera[3] - Demo_FocusDistSetting (#19, xc=1)
               duration: 187.0
               {FocusDistEnd: 5.0, FocusDistStart: 5.0, IsWaitFinish: true}
[    472.0] L EventControllerRumble[4] - Demo_RumbleSmall (#35, xc=0)
[    472.0] E EventControllerRumble[4] - Demo_RumbleMiddle (#36, xc=0)
               duration: 15.0
               {Count: 1, IsWaitFinish: true}
[    487.0] L EventControllerRumble[4] - Demo_RumbleMiddle (#36, xc=0)
[    487.0] E EventControllerRumble[4] - Demo_RumbleSmall (#37, xc=0)
               duration: 155.0
               {Count: 22, IsWaitFinish: true}
[    630.0] L GameRomCamera[3] - Demo_CameraAnim (#10, xc=0)
[    630.0] L GameRomCamera[3] - Demo_FocusDistSetting (#19, xc=1)
[    630.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#31, xc=0)
[    630.0] E GameRomCamera[3] - Demo_CameraAnim (#11, xc=0)
               duration: 320.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    630.0] E GameRomCamera[3] - Demo_FocusDistSetting (#20, xc=1)
               duration: 33.0
               {FocusDistEnd: 2.0, FocusDistStart: 0.699999988079071, IsWaitFinish: true}
[    630.0] E Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#32, xc=0)
               duration: 90.0
               {ASName: C04-SiteBoss_Lsword-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[    642.0] L EventControllerRumble[4] - Demo_RumbleSmall (#37, xc=0)
[    642.0] E EventControllerRumble[4] - Demo_RumbleLarge (#38, xc=0)
               duration: 158.0
               {Count: 8, IsWaitFinish: true}
[    663.0] L GameRomCamera[3] - Demo_FocusDistSetting (#20, xc=1)
[    663.0] E GameRomCamera[3] - Demo_FocusDistSetting (#21, xc=1)
               duration: 287.0
               {FocusDistEnd: 2.0, FocusDistStart: 2.0, IsWaitFinish: true}
[    710.0] E Fader - Demo_FadeOut (#1, xc=0)
               duration: 120.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    720.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#32, xc=0)
[    720.0] L Enemy_SiteBoss_Lsword_R[0] - Demo_PlayASForTimeline (#33, xc=1)
[    774.0] E EventSystemActor[0] - Demo_ChangeScene (#39, xc=0)
               duration: 100.0
               {EntryPointName: LevelUp, EvflName: Demo622_0, FadeType: 1, IsWaitFinish: true, StartType: -1,
                 WarpDestMapName: MainField/H-2, WarpDestPosName: Clear_RemainsFire}
[    800.0] L EventControllerRumble[4] - Demo_RumbleLarge (#38, xc=0)
[    830.0] L Fader - Demo_FadeOut (#1, xc=0)
[    830.0] L GameROMPlayer[0] - Demo_VisibleOff (#28, xc=0)
[    830.0] E Fader - Demo_FadeIn (#2, xc=0)
               duration: 30.0
               {Color: 0, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[    860.0] L Fader - Demo_FadeIn (#2, xc=0)
[    874.0] L EventSystemActor[0] - Demo_ChangeScene (#39, xc=0)
[    950.0] L GameRomCamera[3] - Demo_CameraAnim (#11, xc=0)
[    950.0] L GameRomCamera[3] - Demo_FocusDistSetting (#21, xc=1)
[    950.0] E GameRomCamera[3] - Demo_CameraAnim (#12, xc=0)
               duration: 150.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 30.0, SceneName: C05-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    950.0] E GameRomCamera[3] - Demo_FocusDistSetting (#22, xc=1)
               duration: 150.0
               {FocusDistEnd: 13.0, FocusDistStart: 12.0, IsWaitFinish: true}
[   1100.0] L GameRomCamera[3] - Demo_CameraAnim (#12, xc=0)
[   1100.0] L GameRomCamera[3] - Demo_FocusDistSetting (#22, xc=1)
[   1100.0] E GameRomCamera[3] - Demo_CameraAnim (#13, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 7.0, ApertureEnd: 7.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 0.5, DOFBlurStart: 0.5, DOFEndFrame: 1.0, DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0,
                 FocalLength: 9.0, FocalLengthEnd: 9.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: true,
                 OverwriteAtDist: 50.0, SceneName: C06-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1100.0] E GameRomCamera[3] - Demo_FocusDistSetting (#23, xc=1)
               duration: 120.0
               {FocusDistEnd: 26.0, FocusDistStart: 26.0, IsWaitFinish: true}
[   1220.0] L GameRomCamera[3] - Demo_CameraAnim (#13, xc=0)
[   1220.0] L GameRomCamera[3] - Demo_FocusDistSetting (#23, xc=1)
[   1220.0] E GameRomCamera[3] - Demo_CameraAnim (#14, xc=0)
               duration: 210.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 87.0, ApertureEnd: 87.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 1.7000000476837158, DOFBlurStart: 1.7000000476837158, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 3.0, FocalLengthEnd: 3.0, InterpolateCount: 0.0,
                 IsWaitFinish: true, OverwriteAt: true, OverwriteAtDist: 50.0, SceneName: C07-0, StartFrame: 0.0,
                 TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1220.0] E GameRomCamera[3] - Demo_FocusDistSetting (#24, xc=1)
               duration: 210.0
               {FocusDistEnd: 4.5, FocusDistStart: 5.5, IsWaitFinish: true}
[   1430.0] L GameRomCamera[3] - Demo_CameraAnim (#14, xc=0)
[   1430.0] L GameRomCamera[3] - Demo_FocusDistSetting (#24, xc=1)
[   1430.0] E GameRomCamera[3] - Demo_CameraAnim (#15, xc=0)
               duration: 170.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 36.0, ApertureEnd: 36.0, BgCheck: false,
                 CameraName: '', DOFBlurEnd: 0.6000000238418579, DOFBlurStart: 0.6000000238418579, DOFEndFrame: 1.0,
                 DOFStartFrame: 1.0, DOFUse: true, EndFrame: -1.0, FocalLength: 2.299999952316284, FocalLengthEnd: 2.299999952316284,
                 InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: true, OverwriteAtDist: 50.0, SceneName: C08-0,
                 StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1, TargetActorPosReferenceMode: 1,
                 UniqueName: ''}
[   1430.0] E GameRomCamera[3] - Demo_FocusDistSetting (#25, xc=1)
               duration: 170.0
               {FocusDistEnd: 1.0, FocusDistStart: 1.0, IsWaitFinish: true}
[   1570.0] E Fader - Demo_FadeOut (#3, xc=0)
               duration: 30.0
               {Color: 1, DispMode: Auto, Frame: 0, IsWaitFinish: true}
[   1600.0] L Fader - Demo_FadeOut (#3, xc=0)
[   1600.0] L Obj_Sun_A_01[0] - Demo_SunMove (#4, xc=0)
[   1600.0] L Obj_Moon_A_01[1] - Demo_MoonMove (#5, xc=0)
[   1600.0] L WorldManagerControl[2] - Demo_EventSetDirectionalYang (#6, xc=0)
[   1600.0] L WorldManagerControl[2] - Demo_SetWind (#7, xc=1)
[   1600.0] L GameRomCamera[3] - Demo_CameraAnim (#15, xc=0)
[   1600.0] L GameRomCamera[3] - Demo_FocusDistSetting (#25, xc=1)
[   1600.0] L RemainsClearTerminal[5] - Demo_PlayASForTimeline (#26, xc=0)
[   1600.0] L DgnObj_RemainsClearTerminalBody_A_01[6] - Demo_PlayASForTimeline (#27, xc=0)
