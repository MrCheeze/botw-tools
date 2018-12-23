-------- Event timeline: Demo103_0 --------
actors: 6
clips: 18
oneshots: 0
cuts: 1
duration: 1240.0
subtimelines: ['Demo103_0_effect']
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: cut0
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: TerrainCalcCenterTag[0]
x36: 1
actions: ['Demo_TerrainCalcCenter']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventMessageTransmitter1[0]
x36: 1
actions: ['Demo_Msg2CameraKeepState']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EventSystemActor[0]
x36: 1
actions: ['Demo_PlayUiScreen', 'Demo_FlagON', 'Demo_RecoverPlayerEnergy']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameRomCamera[0]
x36: 2
actions: ['Demo_CameraAnim', 'Demo_PermitGfxNear']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: GameROMPlayer[0]
x36: 2
actions: ['Demo_PlayerRailMove', 'Demo_PlayerDestinationMove', 'Demo_PlayerDestinationTurn', 'Demo_LookAtObject', 'Demo_LookAtTheFront']
params: {ArmorHead: '', ArmorLower: '', ArmorUpper: '', Bow: '', CreateMode: 0, DisableBow: false, DisableSheikPad: false,
  DisableShield: false, DisableWeapon: false, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0,
  PosZ: 0.0, RotX: 0.0, RotY: 0.0, RotZ: 0.0, Shield: '', Weapon: ''}

Actor: SceneSoundCtrlTag[0]
x36: 1
actions: ['Demo_Ctrl']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#0, xc=0)
               duration: 1240.0
               IsWaitFinish: true
               level: 0
               meshReso: -1
               pos: [-1024.5, 252.60000610351562, 1800.0]
               type: 0
[      0.0] E EventSystemActor[0] - Demo_RecoverPlayerEnergy (#2, xc=0)
               duration: 1.0
               {IsWaitFinish: true}
[      0.0] E GameRomCamera[0] - Demo_CameraAnim (#5, xc=0)
               duration: 450.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: true, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 110.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C01-1, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[      0.0] E GameRomCamera[0] - Demo_PermitGfxNear (#9, xc=1)
               duration: 1240.0
               {IsWaitFinish: true}
[      0.0] E GameROMPlayer[0] - Demo_PlayerRailMove (#10, xc=0)
               duration: 955.0
               {IsWaitFinish: true, RailName: Demo103_0, StickValue: 1.0}
[      0.0] E SceneSoundCtrlTag[0] - Demo_Ctrl (#17, xc=0)
               duration: 1240.0
               {BgmCtrlType: None, IsWaitFinish: true, SeCtrlType: TitleMute}
[      1.0] L EventSystemActor[0] - Demo_RecoverPlayerEnergy (#2, xc=0)
[    400.0] E EventSystemActor[0] - Demo_PlayUiScreen (#3, xc=0)
               duration: 670.0
               {IsWaitFinish: true, ScreenName: GameTitle}
[    450.0] L GameRomCamera[0] - Demo_CameraAnim (#5, xc=0)
[    450.0] E GameRomCamera[0] - Demo_CameraAnim (#6, xc=0)
               duration: 620.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: true, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C01-2, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[    948.0] E GameROMPlayer[0] - Demo_LookAtObject (#14, xc=1)
               duration: 7.0
               ActorName: ''
               FaceId: 2
               IsValid: true
               IsWaitFinish: true
               ObjectId: 2
               PosOffset: [0.0, 0.0, 0.0]
               TurnDirection: 90.0
               TurnPosition: [0.0, 0.0, 0.0]
               UniqueName: ''
[    955.0] L GameROMPlayer[0] - Demo_PlayerRailMove (#10, xc=0)
[    955.0] L GameROMPlayer[0] - Demo_LookAtObject (#14, xc=1)
[    955.0] E GameROMPlayer[0] - Demo_PlayerDestinationMove (#11, xc=0)
               duration: 115.0
               {DestPosX: -1021.7999877929688, DestPosY: 253.3000030517578, DestPosZ: 1792.5999755859375, IsWaitFinish: true,
                 StickValue: 0.20000000298023224}
[    955.0] E GameROMPlayer[0] - Demo_LookAtTheFront (#15, xc=1)
               duration: 100.0
               {IsValid: true, IsWaitFinish: true}
[   1055.0] L GameROMPlayer[0] - Demo_LookAtTheFront (#15, xc=1)
[   1070.0] L EventSystemActor[0] - Demo_PlayUiScreen (#3, xc=0)
[   1070.0] L GameRomCamera[0] - Demo_CameraAnim (#6, xc=0)
[   1070.0] L GameROMPlayer[0] - Demo_PlayerDestinationMove (#11, xc=0)
[   1070.0] E GameRomCamera[0] - Demo_CameraAnim (#7, xc=0)
               duration: 155.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C03-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1070.0] E GameROMPlayer[0] - Demo_PlayerDestinationMove (#12, xc=0)
               duration: 140.0
               {DestPosX: -1024.5, DestPosY: 252.60000610351562, DestPosZ: 1800.0, IsWaitFinish: true, StickValue: 1.0}
[   1100.0] E EventSystemActor[0] - Demo_FlagON (#4, xc=0)
               duration: 30.0
               {FlagName: Npc_King_Vagrant001_Move, IsWaitFinish: true}
[   1130.0] L EventSystemActor[0] - Demo_FlagON (#4, xc=0)
[   1210.0] L GameROMPlayer[0] - Demo_PlayerDestinationMove (#12, xc=0)
[   1210.0] E GameROMPlayer[0] - Demo_PlayerDestinationTurn (#13, xc=0)
               duration: 30.0
               {DestPosX: -1025.699951171875, DestPosY: 252.10000610351562, DestPosZ: 1806.0999755859375, IsWaitFinish: true}
[   1210.0] E GameROMPlayer[0] - Demo_LookAtObject (#16, xc=1)
               duration: 15.0
               ActorName: ''
               FaceId: 1
               IsValid: true
               IsWaitFinish: true
               ObjectId: 2
               PosOffset: [0.0, 0.0, 0.0]
               TurnDirection: 0.0
               TurnPosition: [0.0, 0.0, 0.0]
               UniqueName: ''
[   1225.0] L GameRomCamera[0] - Demo_CameraAnim (#7, xc=0)
[   1225.0] L GameROMPlayer[0] - Demo_LookAtObject (#16, xc=1)
[   1225.0] E EventMessageTransmitter1[0] - Demo_Msg2CameraKeepState (#1, xc=0)
               duration: 15.0
               {IsWaitFinish: true}
[   1225.0] E GameRomCamera[0] - Demo_CameraAnim (#8, xc=0)
               duration: 15.0
               {Accept1FrameDelay: true, ActorName: '', Aperture: 0.0, ApertureEnd: 0.0, BgCheck: false, CameraName: '',
                 DOFBlurEnd: 2.0, DOFBlurStart: 2.0, DOFEndFrame: 0.0, DOFStartFrame: 0.0, DOFUse: false, EndFrame: -1.0,
                 FocalLength: 0.0, FocalLengthEnd: 0.0, InterpolateCount: 0.0, IsWaitFinish: true, OverwriteAt: false,
                 OverwriteAtDist: 1.0, SceneName: C04-0, StartFrame: 0.0, TargetActor: -1, TargetActorDirReferenceMode: 1,
                 TargetActorPosReferenceMode: 1, UniqueName: ''}
[   1240.0] L TerrainCalcCenterTag[0] - Demo_TerrainCalcCenter (#0, xc=0)
[   1240.0] L EventMessageTransmitter1[0] - Demo_Msg2CameraKeepState (#1, xc=0)
[   1240.0] L GameRomCamera[0] - Demo_CameraAnim (#8, xc=0)
[   1240.0] L GameRomCamera[0] - Demo_PermitGfxNear (#9, xc=1)
[   1240.0] L GameROMPlayer[0] - Demo_PlayerDestinationTurn (#13, xc=0)
[   1240.0] L SceneSoundCtrlTag[0] - Demo_Ctrl (#17, xc=0)
