-------- EventFlow: MacuseIseki --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_LookStone', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_EnableCameraInput', 'Demo_FlagON', 'Demo_OpenMessageDialog', 'Demo_CallDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_SignboardStone_Macuse
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_FldObj_SignboardStone_Macuse_Talk() {
    GameROMPlayer.Demo_LookAtObject({'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    GameRomCamera.Demo_LookStone({'IsWaitFinish': True, 'NoConnect': False, 'CameraReset': True})
    FldObj_SignboardStone_Macuse.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/SignboardStone:Talk_Macuse'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MacuseIseki_Activated'})
}

void EntryPoint0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Mute', 'SeCtrlType': 'WorldMute'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4550.4580078125, 'Pattern1PosY': 114.51567077636719, 'Pattern1PosZ': -2164.560791015625, 'Pattern1AtX': 4545.77392578125, 'Pattern1AtY': 111.14636993408203, 'Pattern1AtZ': -2161.207275390625, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Common.RemainsLithogragh_Hole()

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 3, 'IsValid': True, 'FaceId': 1, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'IsWaitFinish': False, 'EntryPointName': 'DungeonArrival', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MacuseIseki_Finish'})
}
