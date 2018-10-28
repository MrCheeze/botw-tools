-------- EventFlow: Demo650_1 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Look', 'Demo_MovePosFlow', 'Demo_PolarCoordPlayerRelative']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: ['IsOnLinkTag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_DisableUnequipInEvent', 'Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void CDungeon123() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    }
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    } else {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': False, 'IsWaitFinish': False})
    }
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
}

void CDungeon135() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2, 'Angle': 0.0, 'LatMin': 0.0, 'LatMax': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
    }
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void CDungeon127_wind001() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': 'wind001', 'Pattern1PosX': 20.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 18.0, 'Pattern1AtX': 10.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 5.0, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'ActorName1': 'DgnObj_WindGenerator_Dummy_Stoppable'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    GameRomCamera.Demo_PolarCoordPlayerRelative({'FovyCalcMode': 1, 'IsWaitFinish': True, 'LngOffset': 0.0, 'OtherActor': 3, 'FovyParam': 50.0, 'AtCalcMode': 0, 'Time': 0.0, 'AtParam': [0.0, 2.0, 0.0], 'LatOffset': 4.0, 'RadiusOffset': 3.0, 'ReviseMode': 1, 'ActorIgnoringCollision': -1, 'ReverseOrder': True, 'ActorNameForOtherActor': 'SwitchHitOnce', 'UniqueNameForOtherActor': 'switch001'})
}

void CDungeon127_wind002() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': 'wind002', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'ActorName1': 'DgnObj_WindGenerator_Dummy_Stoppable', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 1.0, 'Pattern1PosZ': 20.0, 'Pattern1PosY': 20.0, 'Pattern1AtY': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    GameRomCamera.Demo_PolarCoordPlayerRelative({'FovyCalcMode': 1, 'IsWaitFinish': True, 'LngOffset': 0.0, 'OtherActor': 3, 'FovyParam': 50.0, 'AtCalcMode': 0, 'Time': 0.0, 'AtParam': [0.0, 2.0, 0.0], 'LatOffset': 4.0, 'RadiusOffset': 3.0, 'ReviseMode': 1, 'ActorIgnoringCollision': -1, 'ReverseOrder': True, 'ActorNameForOtherActor': 'SwitchHitOnce', 'UniqueNameForOtherActor': 'switch002'})
}

void CDungeon127_wind003() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'DgnObj_WindGenerator_Dummy_Stoppable', 'UniqueName1': 'wind003', 'Pattern1PosY': 0.0, 'Pattern1PosZ': 18.0, 'Pattern1PosX': -16.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': -20.0, 'Pattern1AtX': 13.0, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    GameRomCamera.Demo_PolarCoordPlayerRelative({'FovyCalcMode': 1, 'IsWaitFinish': True, 'LngOffset': 0.0, 'OtherActor': 3, 'FovyParam': 50.0, 'AtCalcMode': 0, 'Time': 0.0, 'AtParam': [0.0, 2.0, 0.0], 'LatOffset': 4.0, 'RadiusOffset': 3.0, 'ReviseMode': 1, 'ActorIgnoringCollision': -1, 'ReverseOrder': True, 'ActorNameForOtherActor': 'SwitchHitOnce', 'UniqueNameForOtherActor': 'switch003'})
}

void CDungeon127_wind004() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'DgnObj_WindGenerator_Dummy_Stoppable', 'UniqueName1': 'wind004', 'Pattern1PosX': 0.0, 'Pattern1PosZ': 20.0, 'Pattern1PosY': -18.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 4.0, 'Pattern1AtZ': -6.0, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Starter.Demo_SendSignal({'SignalType': 0, 'IsWaitFinish': False, 'Value': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    GameRomCamera.Demo_PolarCoordPlayerRelative({'FovyCalcMode': 1, 'IsWaitFinish': True, 'LngOffset': 0.0, 'OtherActor': 3, 'FovyParam': 50.0, 'AtCalcMode': 0, 'Time': 0.0, 'AtParam': [0.0, 2.0, 0.0], 'LatOffset': 4.0, 'RadiusOffset': 3.0, 'ReviseMode': 1, 'ActorIgnoringCollision': -1, 'ReverseOrder': True, 'ActorNameForOtherActor': 'SwitchHitOnce', 'UniqueNameForOtherActor': 'switch004'})
}
