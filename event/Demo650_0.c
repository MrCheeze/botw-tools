-------- EventFlow: Demo650_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitForKeyInput', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_FlagON']
queries: ['CheckProConUse', 'CheckFlag', 'KeyInputCheck']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Look']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerControl', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

void Demo650_0_GyroNazotokiSE_DLC_130() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerControl({'IsWaitFinish': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'GyroTiltControlGuide', 'IsWaitFinish': False})
    ListenerCtrlTag.Demo_SetMode({'Mode': 'Gyro', 'IsWaitFinish': True})
    GameRomCamera.Demo_Look({'IsWaitFinish': True, 'BaseAngleCamera': False, 'Back': False, 'BgHitJump': False, 'Angle': 0.0, 'Count': 15.0, 'TargetUniqueName': '', 'FovyMin': 35.0, 'FovyMax': 65.0, 'Far': 200.0, 'LatMode': 1, 'Near': 20.0, 'Middle': 20.0, 'ReviseMode': 2, 'LatMax': 0.0, 'LatMin': 0.0})
    if !EventSystemActor.CheckProConUse() {
        Event10:
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
            goto Event10
        }
    } else {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo043_0:talk00', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event10
    }
}

void EntryGyro_130_1() {

    call Demo650_0_GyroNazotokiSE_DLC_130({'arg_TargetPosX': 'arg_TargetPosX', 'arg_TargetPosY': 'arg_TargetPosY', 'arg_TargetPosZ': 'arg_TargetPosZ', 'arg_TargetMatrixY_x': 'arg_TargetMatrixY_x', 'arg_TargetMatrixY_y': 'arg_TargetMatrixY_y', 'arg_TargetMatrixY_z': 'arg_TargetMatrixY_z', 'arg_TargetMatrixZ_x': 'arg_TargetMatrixZ_x', 'arg_TargetMatrixZ_y': 'arg_TargetMatrixZ_y', 'arg_TargetMatrixZ_z': 'arg_TargetMatrixZ_z', 'arg_FlagGyro': 'Dungeon130_Gyro_1', 'arg_FlagOpen': 'Dungeon130_Gyro_1_open'})

}
