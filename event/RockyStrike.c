-------- EventFlow: RockyStrike --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Look']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void BreakRock() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}
