-------- EventFlow: SnowBall --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: ['CheckCurrentMap']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_SnowBallDoor_A_02[ChallengeC-2]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_SnowBallDoor_A_02[FieldB-1]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_SnowBallDoor_A_02[StoneDoor_OpenDemo(FldObj_SnowBallDoor_A_02)]
entrypoint: StoneDoor_OpenDemo(FldObj_SnowBallDoor_A_02)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

void FieldB-1_HugeStoneDoor_Open() {

    call StoneDoor_OpenDemo({'FldObj_SnowBallDoor_A_02': ActorIdentifier(name="FldObj_SnowBallDoor_A_02", sub_name="FieldB-1")})

}

void Challenge_HugeStoneDoor_Open() {

    call StoneDoor_OpenDemo({'FldObj_SnowBallDoor_A_02': ActorIdentifier(name="FldObj_SnowBallDoor_A_02", sub_name="ChallengeC-2")})

}

void StoneDoor_OpenDemo() {

    call Common.AirStartUP_Player()

    EventCameraRumble.Demo_Rumble({'IsWaitFinish': False, 'Count': 1, 'Sideways': False, 'Pattern': 1, 'Power': 1.0})
    FldObj_SnowBallDoor_A_02[StoneDoor_OpenDemo(FldObj_SnowBallDoor_A_02)].Demo_PlayASForDemo({'ASName': 'Down', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsIgnoreSame': False})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    if EventSystemActor.CheckCurrentMap({'MapName': 'C-2'}) {
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'Pattern1PosX': -2415.580078125, 'Pattern1PosY': 284.8299865722656, 'Pattern1PosZ': -2292.800048828125, 'Pattern1AtX': -2393.0, 'Pattern1AtZ': -2279.840087890625, 'Pattern1AtY': 283.0899963378906, 'StartCalcOnly': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } else {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3799.05517578125, 'Pattern1PosY': 378.2416076660156, 'Pattern1PosZ': -3576.5224609375, 'Pattern1AtX': -3803.476318359375, 'Pattern1AtY': 375.688232421875, 'Pattern1AtZ': -3581.205078125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True, 'StartCalcOnly': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 85})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': False, 'Sideways': False, 'Count': 1, 'Pattern': 1, 'Power': 5.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})

    call Common.Play_ReadRiddle_NoWait()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
}
