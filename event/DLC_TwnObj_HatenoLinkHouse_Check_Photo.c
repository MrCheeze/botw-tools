-------- EventFlow: DLC_TwnObj_HatenoLinkHouse_Check_Photo --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_WarpPlayerToAnchor', 'Demo_FlagON']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerGoStraightAnchor', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerGoStraightAhead', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo647_0', 'EntryPointName': 'Demo647_0', 'IsWaitFinish': True, 'EndFade': 0})
}

void 1st_Event() {
    GameRomCamera.Demo_MovePosFlow({'ReviseModeEnd': 0, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 3311.780029296875, 'Pattern1PosZ': 2286.239990234375, 'Pattern1PosY': 240.5, 'Pattern1AtX': 3307.929931640625, 'Pattern1AtY': 240.5500030517578, 'Pattern1AtZ': 2287.639892578125, 'Count': 30.0, 'MotionMode': 0})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'DLC_TwnObj_HatenoLinkHouse_Check_Photo', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameROMPlayer.Demo_PlayerGoStraightAhead({'IsWaitFinish': True, 'StickValue': 0.0, 'DestPosY': 238.88999938964844, 'DestPosX': 3309.97998046875, 'DestPosZ': 2287.6298828125})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'ObjectId': 0, 'ActorName': 'DLC_TwnObj_HatenoLinkHouse_Check_Photo', 'IsTurnToLookAtPos': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'IsUseSlowTurn': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_DispPict_1stEvent'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo647_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'Demo647_0_1st'})
}
