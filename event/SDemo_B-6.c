-------- EventFlow: SDemo_B-6 --------

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Look', 'Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_CallDemo', 'Demo_FlagON']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: ['IsOnLinkTag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void EntryPoint1() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 1, 'Pattern1PosX': -3894.0, 'Pattern1PosZ': 1624.0, 'Pattern1PosY': 398.0, 'AtAppendMode': 1, 'Pattern1AtX': -3895.0, 'Pattern1AtY': 396.0, 'Pattern1AtZ': 1636.5, 'MotionMode': 0, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Cushion': 1.0, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

    call Common.RemainsLithograph()

    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
}

void EntryPoint0() {
    if EventSystemActor.CheckFlag({'FlagName': 'Hideout_LastRoom'}) {
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        } else {
            Starter.Demo_SendSignal({'SignalType': 0, 'Value': False, 'IsWaitFinish': False})
        }
    } else {
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
            Event17:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
            goto Event17
        }
    }
}

void EntryPoint2() {

    call Common.AirStartUP_Player()

    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'FovyAppendMode': 1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'TargetActor1': -1, 'TargetActor2': -1, 'MotionMode': 0, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'Pattern1PosX': -3651.6201171875, 'Pattern1PosY': 441.67999267578125, 'Pattern1PosZ': 1352.0999755859375, 'Pattern1AtX': -3638.510009765625, 'Pattern1AtY': 445.54998779296875, 'Pattern1AtZ': 1355.9000244140625, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

    call Common.Play_ReadRiddle()

    EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_Arrival', 'IsWaitFinish': True})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}
