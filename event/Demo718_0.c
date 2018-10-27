-------- EventFlow: Demo718_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_MovePosFlow', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Ganon
entrypoint: None()
actions: ['Demo_ActivateGuardian', 'Demo_MoveToWall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void OnFloor() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'AtAppendMode': 2, 'Pattern1AtY': 5.0, 'Pattern1AtZ': 5.0, 'FovyAppendMode': 0, 'StartCalcOnly': False, 'Count': 30.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1Fovy': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 1, 'TargetActor2': 1, 'PosAppendMode': 0, 'Pattern1PosZ': 0.0, 'Pattern1PosY': 5.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Enemy_Ganon.Demo_MoveToWall({'IsWaitFinish': True})
    Event4:
    Enemy_Ganon.Demo_ActivateGuardian({'IsWaitFinish': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
}

void OnWall() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'PosAppendMode': 2, 'AtAppendMode': 2, 'Pattern1AtZ': 5.0, 'FovyAppendMode': 0, 'StartCalcOnly': False, 'Count': 30.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1Fovy': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 1, 'Pattern1PosY': -15.0, 'Pattern1AtY': -5.0, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    goto Event4
}
