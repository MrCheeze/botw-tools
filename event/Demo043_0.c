-------- EventFlow: Demo043_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Look', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitForKeyInput', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame']
queries: ['CheckProConUse', 'CheckFlag', 'KeyInputCheck']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayerControl', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: ListenerCtrlTag
entrypoint: None()
actions: ['Demo_SetMode']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void EntryGyro0() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerControl({'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': False})
    ListenerCtrlTag.Demo_SetMode({'Mode': 'Gyro', 'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'Near': 20.0, 'Middle': 20.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 200.0, 'LatMode': 1, 'ReviseMode': 2})
    if !EventSystemActor.CheckProConUse() {
        Event2:
        EventSystemActor.Demo_WaitForKeyInput({'IsWaitFinish': True, 'ValidInput': 1})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
    } else {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo043_0:talk00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event2
    }
}

void EntryGyro1() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerControl({'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': False})
    ListenerCtrlTag.Demo_SetMode({'Mode': 'Gyro', 'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 200.0, 'LatMode': 1, 'Near': 20.0, 'Middle': 20.0, 'ReviseMode': 2})
    if !EventSystemActor.CheckProConUse() {
        Event4:
        EventSystemActor.Demo_WaitForKeyInput({'IsWaitFinish': True, 'ValidInput': 1})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
    } else {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo043_0:talk00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event4
    }
}

void EntryGyro_030_1() {

    call GyroShutter_CheckCamera({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'arg_FlagGyro': 'Dungeon030_Gyro_1', 'arg_FlagOpen': 'Dungeon030_Gyro_1_Open'})

}

void GyroShutter() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerControl({'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': False})
    ListenerCtrlTag.Demo_SetMode({'Mode': 'Gyro', 'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 200.0, 'LatMode': 1, 'Near': 20.0, 'Middle': 20.0, 'ReviseMode': 0, 'BgHitJump': True})
    if !EventSystemActor.CheckProConUse() {
        Event48:
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagOpen'}) {
            EventSystemActor.Demo_WaitForKeyInput({'IsWaitFinish': True, 'ValidInput': 1})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagGyro'}) {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else
        if EventSystemActor.KeyInputCheck({'ValidInput': 1}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
            goto Event48
        }
    } else {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo043_0:talk00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event48
    }
}

void EntryGyro_030_3() {

    call GyroShutter({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'arg_FlagGyro': 'Dungeon030_Gyro_3', 'arg_FlagOpen': 'Dungeon030_Gyro_3_Open'})

}

void EntryGyro_039_1() {

    call GyroShutter({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'arg_FlagGyro': 'Dungeon039_Gyro_1', 'arg_FlagOpen': 'Dungeon039_Gyro_1_Open'})

}

void EntryGyro_048_1() {

    call GyroShutter({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'arg_FlagGyro': 'Dungeon048_Gyro_1', 'arg_FlagOpen': 'Dungeon048_Gyro_1_Open'})

}

void GyroShutter2() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerControl({'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': False})
    ListenerCtrlTag.Demo_SetMode({'Mode': 'Gyro', 'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 200.0, 'LatMode': 1, 'Near': 10.0, 'Middle': 10.0, 'ReviseMode': 2})
    if !EventSystemActor.CheckProConUse() {
        Event66:
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagOpen'}) {
            EventSystemActor.Demo_WaitForKeyInput({'IsWaitFinish': True, 'ValidInput': 1})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagGyro'}) {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else
        if EventSystemActor.KeyInputCheck({'ValidInput': 1}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
            goto Event66
        }
    } else {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo043_0:talk00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event66
    }
}

void GyroNazotokiSE() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerControl({'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': False})
    ListenerCtrlTag.Demo_SetMode({'Mode': 'Gyro', 'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 200.0, 'LatMode': 1, 'Near': 20.0, 'Middle': 20.0, 'ReviseMode': 2})
    if !EventSystemActor.CheckProConUse() {
        Event80:
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagOpen'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'Dungeon040_DoorGyro_SE', 'IsWaitFinish': True})
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'ReadRiddle_Delay'})
            EventSystemActor.Demo_WaitForKeyInput({'IsWaitFinish': True, 'ValidInput': 1})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagGyro'}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else
        if EventSystemActor.KeyInputCheck({'ValidInput': 1}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
            goto Event80
        }
    } else {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo043_0:talk00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event80
    }
}

void EntryGyro_030_2() {

    call GyroShutter({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'arg_FlagGyro': 'Dungeon030_Gyro_2', 'arg_FlagOpen': 'Dungeon030_Gyro_2_Open'})

}

void EntryGyro_040_1() {

    call GyroNazotokiSE({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'arg_FlagGyro': 'Dungeon040_Gyro_1', 'arg_FlagOpen': 'Dungeon040_Gyro_1_Open'})

}

void EntryGyro_013_1() {
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Dungeon013_Temp_1', 'IsWaitFinish': True})

    call GyroNazotokiSE_013({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'arg_FlagGyro': 'Dungeon013_Gyro_1', 'arg_FlagOpen': 'Dungeon013_Gyro_1_Open'})

    EventSystemActor.Demo_FlagOFF({'FlagName': 'Dungeon013_Temp_1', 'IsWaitFinish': True})
}

void EntryGyro_013_2() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Dungeon013_Temp_2'})

    call GyroNazotokiSE_013({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'arg_FlagGyro': 'Dungeon013_Gyro_2', 'arg_FlagOpen': 'Dungeon013_Gyro_2_open'})

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Dungeon013_Temp_2'})
}

void GyroShutter_CheckCamera() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerControl({'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': False})
    ListenerCtrlTag.Demo_SetMode({'Mode': 'Gyro', 'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 200.0, 'LatMode': 1, 'Near': 20.0, 'Middle': 20.0, 'BgHitJump': True, 'ReviseMode': 2})
    if !EventSystemActor.CheckProConUse() {
        Event116:
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagOpen'}) {
            EventSystemActor.Demo_WaitForKeyInput({'IsWaitFinish': True, 'ValidInput': 1})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagGyro'}) {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else
        if EventSystemActor.KeyInputCheck({'ValidInput': 1}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
            goto Event116
        }
    } else {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo043_0:talk00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event116
    }
}

void GyroNazotokiSE_013() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerControl({'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': False})
    ListenerCtrlTag.Demo_SetMode({'Mode': 'Gyro', 'IsWaitFinish': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'LatMin': 43.0, 'LatMax': 43.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 200.0, 'LatMode': 1, 'Near': 20.0, 'Middle': 20.0, 'ReviseMode': 2})
    if !EventSystemActor.CheckProConUse() {
        Event133:
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagOpen'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'Dungeon040_DoorGyro_SE', 'IsWaitFinish': True})
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'ReadRiddle_Delay'})
            EventSystemActor.Demo_WaitForKeyInput({'IsWaitFinish': True, 'ValidInput': 1})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
            Event142:
            GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'IsWaitFinish': True, 'Count': 1.0})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'arg_FlagGyro'}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
            goto Event142
        } else
        if EventSystemActor.KeyInputCheck({'ValidInput': 1}) {
            EventSystemActor.Demo_FlagOFF({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': True})
            goto Event142
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
            goto Event133
        }
    } else {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo043_0:talk00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event133
    }
}
