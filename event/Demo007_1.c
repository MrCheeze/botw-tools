-------- EventFlow: Demo007_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceTime', 'Demo_FlagON', 'Demo_CallDemo', 'Demo_EnableCameraInput', 'Demo_WaitFrame', 'Demo_CloseClockTime', 'Demo_OpenClockTime', 'Demo_AutoSave']
queries: ['GeneralChoice4', 'CheckFlag', 'isBloodyMoonTrig']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
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
actions: ['Demo_SetFixed', 'Demo_SetDynamic']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo007_1() {
    Starter.Demo_SetFixed({'IsWaitFinish': False})
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_LookAtObject({'ObjectId': 3, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'FireWood_First'}) {
        EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
        NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo007_1:Demo007_1_Text001', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        Event3:
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call Demo007_1_Sub({'DestTime': 0})

            Event81:
            Starter.Demo_SetDynamic({'IsWaitFinish': False})
          case 1:

            call Demo007_1_Sub({'DestTime': 1})

            goto Event81
          case 2:

            call Demo007_1_Sub({'DestTime': 2})

            goto Event81
          case 3:
            EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
            goto Event81
        }
    } else {
        NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo007_1:Demo007_1_Text000', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
        NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo007_1:Demo007_1_Text001', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FireWood_First'})
        goto Event3
    }
}

void Demo007_1_Sub() {

    fork {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 3, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo007_1-C01-Link-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': 'DestTime', 'DirectTime': -1, 'PassTime': -1, 'ActReset': True})
    } {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo007_1_FireWood', 'IsWaitFinish': False})
    }

    SoundTriggerTag.Demo_SoundTriggerFade({'Sound': 'Demo007_1_FireWood', 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    if EventSystemActor.isBloodyMoonTrig() {
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo011_0', 'EntryPointName': 'Demo011_0', 'IsWaitFinish': True, 'EndFade': 1})
    }
    EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
    SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Fanfare'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

    fork {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo007_1-C02-Link-A-0', 'IsWaitFinish': True, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}
