-------- EventFlow: Demo024_2 --------

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_LoopEnd', 'Demo_WaitForFrameOrKeyInput', 'Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_Look', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: ['IsOnLinkTag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void OnlySE() {
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'ReadRiddle_Delay'})
}

void OnlySESignal() {
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'ReadRiddle_Delay'})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': False})
    }
}

void RemainsElectric_NeckCapstan() {
    Event7:
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'TargetUniqueName': '', 'LatMode': 1, 'Count': 30.0, 'Near': 2.0, 'Middle': 5.0, 'Far': 10.0, 'LatMin': 0.0, 'LatMax': 180.0, 'FovyMin': 0.0, 'FovyMax': 180.0, 'ReviseMode': 2})
    if EventSystemActor.CheckFlag({'FlagName': 'RemainsElectric_NeckCapstanArea'}) {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event7
    }
}

void EntryPoint0() {
    if !EventSystemActor.CheckFlag({'FlagName': 'RemainsElectric_FirstRotateTail'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsElectric_FirstRotateTail'})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 15.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitForFrameOrKeyInput({'IsWaitFinish': True, 'Frame': 180})
    }
}

void OpenWindow() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Count': 0.0, 'Pattern1PosX': -6.360000133514404, 'Pattern1PosY': 2.559999942779541, 'Pattern1PosZ': -40.95000076293945, 'Pattern1AtX': -0.7099999785423279, 'Pattern1AtY': 10.09000015258789, 'Pattern1AtZ': -25.049999237060547, 'Pattern1Fovy': 65.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 180})
    GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0})
}
