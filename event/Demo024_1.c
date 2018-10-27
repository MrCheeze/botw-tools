-------- EventFlow: Demo024_1 --------

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: ['IsOnLinkTag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void NoSignalWait60SE() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMax': 0.0, 'LatMin': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void NoSignalWait60() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
}

void NoSignalWait120SE() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void EntryPoint0() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        Event21:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event21
    }
}
