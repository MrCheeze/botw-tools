-------- EventFlow: TwnObj_ZoraLithograph_A_01 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_OpenMessageDialogOfUnique']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_OpenMessageDialog']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call ZoraLithographCam()

    Starter.Demo_OpenMessageDialogOfUnique({'IsWaitFinish': True, 'MstxtName': 'SignboardStone'})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameROMPlayer.Demo_OpenMessageDialog({'IsWaitFinish': True, 'Label': 'Talk_ZoraRelief_Mess_08_01', 'Mstxt': 'EventFlowMsg/FldObj_RockZoraRelief_A_M_01_ma'})
}

void ZoraLithographCam() {
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameRomCamera.Demo_MovePosFlow({'Count': 30.0, 'TargetActor1': 0, 'AtAppendMode': 2, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 0.0, 'FovyAppendMode': 0, 'StartCalcOnly': True, 'ReviseModeEnd': 1, 'PosAppendMode': 2, 'MotionMode': 0, 'IsWaitFinish': True, 'Pattern1PosY': 1.5, 'Pattern1PosZ': 5.0, 'Pattern1AtZ': 2.0, 'Pattern1AtY': 1.7999999523162842, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}
