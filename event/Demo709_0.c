-------- EventFlow: Demo709_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo709_0() {
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': True, 'TargetActor1': 0, 'ActorName1': '', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 60.0, 'Pattern1AtX': -0.3880000114440918, 'Pattern1AtY': -46.79499816894531, 'Pattern1AtZ': 3.555000066757202, 'Pattern1PosX': -73.23899841308594, 'Pattern1PosY': -104.0790023803711, 'Pattern1PosZ': 118.54000091552734, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}
