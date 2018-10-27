-------- EventFlow: Demo007_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagOFF', 'Demo_AdvanceTime', 'Demo_RecoverPlayerEnergy', 'Demo_RecoverPlayerLife', 'Demo_CallDemo', 'Demo_WaitFrame', 'Demo_EnableCameraInput', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge', 'Demo_AutoSave']
queries: ['GeneralChoice4', 'isBloodyMoonTrig']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_SetWakeUpMtx', 'Demo_LookAtObject', 'Demo_LookAtTheFront', 'Demo_PlayASAdapt', 'Demo_PlayerCleaningAround']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_OnMUAssignSaveForUsed']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo007_0() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})
    EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 3, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    NPC_GodVoice.Demo_Talk({'MessageId': 'DemoMsg/Demo007_0:Demo007_0_Text000', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    switch EventSystemActor.GeneralChoice4() {
      case 0:

        call Demo007_0_Sub({'DestTime': 0})

        Event92:
        Starter.Demo_OnMUAssignSaveForUsed({'IsWaitFinish': True})
        GameROMPlayer.Demo_SetWakeUpMtx({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerCleaningAround({'IsWaitFinish': True})
        EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
        EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 8})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
        } {
            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': False})
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo007_0-C02-Link-A-0', 'ClothWarpMode': 1, 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        }

        EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'SleepingBed', 'IsWaitFinish': True})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
      case 1:

        call Demo007_0_Sub({'DestTime': 1})

        goto Event92
      case 2:

        call Demo007_0_Sub({'DestTime': 2})

        goto Event92
      case 3:
        EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
    }
}

void Demo007_0_Sub() {

    fork {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_INN', 'IsWaitFinish': False})
        EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 'DestTime', 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    }

    if EventSystemActor.isBloodyMoonTrig() {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo011_0', 'EntryPointName': 'Demo011_0', 'IsWaitFinish': True, 'EndFade': 1})
    }
}
