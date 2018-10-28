-------- EventFlow: Demo050_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_EnableCameraInput']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo050_Fire() {

    call Demo050_Common()

}

void Demo050_Wind() {

    call Demo050_Common()

}

void Demo050_Electric() {

    call Demo050_Common()

}

void Demo050_Water() {

    call Demo050_Common()

}

void Demo050_Common() {
    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'})
    && EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'})
    && EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsElectric'})
    && EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWater'}) {
        EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'LookAround', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        } {
            NPC_CaptionVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo050_0:sinjyu_clear_04'})
        }

    }
}
