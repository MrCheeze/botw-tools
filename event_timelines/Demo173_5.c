-------- Event timeline: Demo173_5 --------
actors: 4
clips: 5
oneshots: 0
cuts: 1
duration: 300.0
subtimelines: ['Demo173_5_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: FldObj_Mound_A_01[0]
x36: 1
actions: ['Demo_Idling']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: FldObj_Mound_A_01_Break[0]
x36: 1
actions: ['Demo_PlayASForDemo']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 1
actions: ['Demo_CameraAnim']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: FldObj_MapTowerDemo_A_01[0]
x36: 1
actions: ['Demo_PlayASForTimeline']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E FldObj_Mound_A_01[0] - Demo_Idling (#0, xc=0)
               duration: 40.0
               {DisablePhysics: false, IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#2, xc=0)
               duration: 180.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C01-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E FldObj_MapTowerDemo_A_01[0] - Demo_PlayASForTimeline (#4, xc=0)
               duration: 300.0
               {ASName: C01-FldObj_MapTowerDemo_A_01-A-0, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false,
                 IsWaitFinish: true, MorphingFrame: 0.0, SeqBank: 0, TargetIndex: -1}
[     30.0] E FldObj_Mound_A_01_Break[0] - Demo_PlayASForDemo (#1, xc=0)
               duration: 260.0
               {ASName: Break, ClothWarpMode: 1, IsEnabledAnimeDriven: -1, IsIgnoreSame: false, IsWaitFinish: true,
                 MorphingFrame: -1.0, SeqBank: 0, TargetIndex: -1}
[     40.0] L FldObj_Mound_A_01[0] - Demo_Idling (#0, xc=0)
[    180.0] L GameRomCamera[0] - Demo_CameraAnim (#2, xc=0)
[    180.0] E GameRomCamera[0] - Demo_CameraAnim (#3, xc=0)
               duration: 120.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C02-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    290.0] L FldObj_Mound_A_01_Break[0] - Demo_PlayASForDemo (#1, xc=0)
[    300.0] L GameRomCamera[0] - Demo_CameraAnim (#3, xc=0)
[    300.0] L FldObj_MapTowerDemo_A_01[0] - Demo_PlayASForTimeline (#4, xc=0)
