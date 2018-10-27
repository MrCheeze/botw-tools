-------- EventFlow: Demo013_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_ReturnSavePoint_1', 'Demo_SavePoint1', 'Demo_KokkoAngry', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_Angry', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo013_0() {
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Stop'})
    Starter.Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': 0, 'IsEnabledAnimeDriven': 0, 'ASName': 'Run', 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'PosAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1Fovy': 50.0, 'Count': 15.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 2, 'AtAppendMode': 2, 'LatShiftRange': 0.0, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ActorIgnoringCollision': -1, 'Pattern1PosZ': 2.9549999237060547, 'Pattern1PosX': 0.5199999809265137, 'Pattern1PosY': 2.0, 'LngShiftRange': 120.0, 'Pattern1AtZ': 0.699999988079071, 'Pattern1AtY': 0.800000011920929, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 0, 'Pattern1AtX': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 2, 'PosAppendMode': 0, 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'AtAppendMode': 0, 'Pattern1AtY': 0.0, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'Count': 0.0, 'LngShiftRange': 0.0, 'LatShiftRange': 30.0, 'StartCalcOnly': True, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtZ': 0.0, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        Starter.Demo_Angry({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 55})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 15.0})
    }

}
