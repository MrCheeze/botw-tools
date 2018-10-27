-------- EventFlow: Demo024_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Look', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitForFrameOrKeyInput', 'Demo_FromCDunToMainField']
queries: ['CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayerWait', 'Demo_DisableUnequipInEvent']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: ['IsOnLinkTag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_AncientBall_06
entrypoint: None()
actions: ['Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void EntryPoint0() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        Event7:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event7
    }
}

void CDungeon022() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'Near': 2.5, 'Angle': 30.0, 'Middle': 30.0, 'Far': 200.0, 'LatMax': 50.0, 'LatMin': -50.0, 'Count': 30.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        Event17:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event17
    }
}

void NoSignalWait120() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
}

void NoSignalWait150() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
}

void NoSignalWait60SE() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMax': 0.0, 'LatMin': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void NoSignalWait60() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
}

void NoSignalWait120SE() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void CDungeon056Entry1() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 15.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
    if EventSystemActor.CheckFlag({'FlagName': 'CDungeon056_Room1_01'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'CDungeon056_Room1_01', 'IsWaitFinish': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        if EventSystemActor.CheckFlag({'FlagName': 'CDungeon056_Room1_03'}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'CDungeon056_Room1_03'})
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'CDungeon056_Room1_02'}) {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'CDungeon056_Room1_02'})
                if EventSystemActor.CheckFlag({'FlagName': 'CDungeon056_Room1_03'}) {
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'CDungeon056_Room1_03'})
                    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
                } else {
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
                }
            } else {
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
            }
        }
    }
}

void CDungeon056Entry2() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 15.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
    if EventSystemActor.CheckFlag({'FlagName': 'CDungeon056_Room1_01'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'CDungeon056_Room1_01', 'IsWaitFinish': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        if EventSystemActor.CheckFlag({'FlagName': 'CDungeon056_Room2_01'}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'CDungeon056_Room2_01'})
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
        } else {
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
        }
    }
}

void RemainsElectric_DrumRotate() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 15.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitForFrameOrKeyInput({'IsWaitFinish': True, 'Frame': 90})
}

void RemainsWind_CrackWall() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'Near': 20.0, 'Middle': 20.0, 'Far': 20.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void RemainsWind_Stake1() {
    if EventSystemActor.CheckFlag({'FlagName': 'RemainsWind_Stake_1'}) {
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        }
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 50.0, 'FovyMax': 50.0, 'Near': 15.0, 'Middle': 15.0, 'Far': 15.0, 'LatMin': 30.0, 'LatMax': 30.0, 'LatMode': 0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
            Event96:
            EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
            goto Event96
        }
    }
}

void RemainsWind_Stake2() {
    if EventSystemActor.CheckFlag({'FlagName': 'RemainsWind_Stake_2'}) {
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        }
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 50.0, 'FovyMax': 50.0, 'Near': 15.0, 'Middle': 15.0, 'Far': 15.0, 'LatMin': 35.0, 'LatMax': 35.0, 'LatMode': 0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
            Event99:
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
            goto Event99
        }
    }
}

void RemainsElectric_FirstRotateDrum1() {
    if !EventSystemActor.CheckFlag({'FlagName': 'RemainsElectric_FirstRotateDrum1'}) {
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 15.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitForFrameOrKeyInput({'IsWaitFinish': True, 'Frame': 180})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsElectric_FirstRotateDrum1'})
    }
}

void RemainsElectric_FirstRotateDrum2() {
    if !EventSystemActor.CheckFlag({'FlagName': 'RemainsElectric_FirstRotateDrum2'}) {
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 15.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitForFrameOrKeyInput({'IsWaitFinish': True, 'Frame': 180})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsElectric_FirstRotateDrum2'})
    }
}

void RemainsElectric_FirstRotateDrum3() {
    if !EventSystemActor.CheckFlag({'FlagName': 'RemainsElectric_FirstRotateDrum3'}) {
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 15.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitForFrameOrKeyInput({'IsWaitFinish': True, 'Frame': 180})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsElectric_FirstRotateDrum3'})
    }
}

void RemainsElectric_FirstRotateNeck() {
    if !EventSystemActor.CheckFlag({'FlagName': 'RemainsElectric_FirstRotateNeck'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PSavePosNotUpdate'})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 15.0, 'ReviseMode': 2})
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        EventSystemActor.Demo_WaitForFrameOrKeyInput({'IsWaitFinish': True, 'Frame': 210})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'PSavePosNotUpdate'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsElectric_FirstRotateNeck'})
    }
}

void RemainsElectric_FirstRotateTail() {
    if !EventSystemActor.CheckFlag({'FlagName': 'RemainsElectric_FirstRotateTail'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PSavePosNotUpdate'})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 15.0, 'ReviseMode': 2})
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        EventSystemActor.Demo_WaitForFrameOrKeyInput({'IsWaitFinish': True, 'Frame': 210})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'PSavePosNotUpdate'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsElectric_FirstRotateTail'})
    }
}

void RemainsFire_Ancient() {
    if EventSystemActor.CheckFlag({'FlagName': 'RemainsFire_AncientSwitch'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'LatMode': 1, 'LatMin': 30.0, 'LatMax': 30.0, 'FovyMin': 60.0, 'FovyMax': 60.0, 'Near': 10.0, 'Middle': 10.0, 'Far': 10.0, 'BgHitJump': True, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
            Event152:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsFire_AncientSwitch'})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
            goto Event152
        }
    }
}

void EntryPoint15() {
    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/DungeonWarpStarter:talk13', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_FromCDunToMainField({'IsWaitFinish': True, 'StartType': 1, 'EvflName': '', 'EntryPointName': ''})
    }
}

void SignalWait30SE() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'Frame': 8, 'IsWaitFinish': True})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        Event177:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': False, 'IsWaitFinish': False})
        goto Event177
    }
}

void NoSignalWait150SE() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void EntryPoint0Long() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'Count': 45.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        Event209:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event209
    }
}

void SignalWait90() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 8})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        Event217:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    } else {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': False, 'IsWaitFinish': False})
        goto Event217
    }
}

void EntryPoint0NoSE() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        Event227:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event227
    }
}

void EntryPoint0LongNoSE() {
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'Count': 45.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        Event235:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event235
    }
}

void RemainsWind_CrackWall_1() {
    if !EventSystemActor.CheckFlag({'FlagName': 'RemainsWind_BreakCrack_1'}) {
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'Near': 20.0, 'Middle': 20.0, 'Far': 20.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsWind_BreakCrack_1'})
    }
}

void RemainsWind_CrackWall_2() {
    if !EventSystemActor.CheckFlag({'FlagName': 'RemainsWind_BreakCrack_2'}) {
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'Near': 20.0, 'Middle': 20.0, 'Far': 20.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsWind_BreakCrack_2'})
    }
}

void Dungeon033() {
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        Event264:
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': False, 'IsWaitFinish': False})
        goto Event264
    }
}

void RemainsFire_Arrow() {
    if EventSystemActor.CheckFlag({'FlagName': 'RemainsFire_OpenArrowShutter'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsFire_OpenArrowShutter'})
    }
}

void RemainsFire_Ball() {
    if EventSystemActor.CheckFlag({'FlagName': 'RemainsFire_OpenBallShutter'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'RemainsFire_OpenBallShutter'})
    }
}

void CDungeon026Entry1() {
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon026_Shutter1'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
            Event296:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon026_Shutter1'})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
            goto Event296
        }
    }
}

void CDungeon026Entry2() {
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon026_Shutter2'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
            Event306:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon026_Shutter2'})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
            goto Event306
        }
    }
}

void CDungeon026Entry3() {
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon026_Shutter3'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
            Event316:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Dungeon026_Shutter2'})
        } else {
            Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
            goto Event316
        }
    }
}

void Dungeon008_1() {
    DgnObj_AncientBall_06.Demo_TrigNullASPlay({'ASName': 'MoveLight', 'IsIgnoreSame': True, 'IsWaitFinish': True, 'ASSlot': 0, 'SequenceBank': 0})
    GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        Event327:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event327
    }
}

void Dungeon008_2() {
    DgnObj_AncientBall_06.Demo_TrigNullASPlay({'ASName': 'MoveLight', 'IsIgnoreSame': True, 'IsWaitFinish': True, 'ASSlot': 0, 'SequenceBank': 0})
    GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void Dungeon028_1() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Dungeon028_1'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Dungeon028_1', 'IsWaitFinish': True})
    }
}

void Dungeon028_4() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Dungeon028_4'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Dungeon028_4', 'IsWaitFinish': True})
    }
}

void Dungeon028_2() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Dungeon028_2'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Dungeon028_2', 'IsWaitFinish': True})
    }
}

void Dungeon028_3() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Dungeon028_3'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Dungeon028_3', 'IsWaitFinish': True})
    }
}

void Dungeon028_5() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Dungeon028_5'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Dungeon028_5', 'IsWaitFinish': True})
    }
}

void Dungeon028_7() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Dungeon028_7'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Dungeon028_7', 'IsWaitFinish': True})
    }
}

void Dungeon036_0() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'BaseAngleCamera': False, 'Back': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 100.0, 'ReviseMode': 2, 'Count': 30.0, 'LatMode': 1, 'BgHitJump': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        Event431:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event431
    }
}

void Dungeon036_1() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'BaseAngleCamera': False, 'Back': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 100.0, 'ReviseMode': 2, 'Count': 30.0, 'LatMode': 1, 'BgHitJump': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        Event439:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event439
    }
}

void Dungeon008_1_none() {
    GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'Near': 2.5, 'Middle': 7.5, 'LatMin': -5.0, 'LatMax': 30.0, 'Count': 15.0, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 10.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 0, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    if Starter.IsOnLinkTag({'SignalType': 'Basic'}) {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': True})
        Event447:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
    } else {
        Starter.Demo_SendSignal({'IsWaitFinish': True, 'SignalType': 0, 'Value': False})
        goto Event447
    }
}

void Dungeon008_2_none() {
    GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'LatMode': 1, 'LatMin': 0.0, 'LatMax': 0.0, 'Near': 2.5, 'Middle': 7.5, 'Far': 100.0, 'ReviseMode': 2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'Sound': 'ReadRiddle', 'SLinkInst': '', 'IsWaitFinish': True})
}

void Dungeon008_1_check() {
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon008_BallExist_1'}) {

        call Dungeon008_1({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z'})

    } else {

        call Dungeon008_1_none({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z'})

    }
}

void Dungeon008_2_check() {
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon008_BallExist_1'}) {

        call Dungeon008_2({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z'})

    } else {

        call Dungeon008_2_none({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z'})

    }
}

void Dungeon008_3_check() {
    if EventSystemActor.CheckFlag({'FlagName': 'Dungeon008_BallExist_2'}) {

        call Dungeon008_1({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z'})

    } else {

        call Dungeon008_1_none({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z'})

    }
}
