-------- EventFlow: Demo600_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_DisableUnequipInEvent', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_EnableCameraInput', 'Demo_WaitForCloseFade', 'Demo_WaitFrame', 'Demo_ForceOpenMainScreen', 'Demo_AutoSave', 'Demo_DisableAutoSavePausing', 'Demo_FlagON', 'Demo_AdvanceQuest']
queries: ['CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStart', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo600_0() {

    call Demo600_0_C01()

    Event85:
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShowLocationProhibitionInDemo'})

    call Demo600_0_C02()


    call Demo600_0_C03()


    call AocResident.CheckAoc1TreasureRun()


    call Aoc2Resident.CheckAoc2TreasureRun()


    call AocResident.collaboEquip()

    EventSystemActor.Demo_DisableAutoSavePausing({'IsWaitFinish': True})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}

void Demo600_0_C01() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    Event7:
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitForCloseFade({'IsWaitFinish': True, 'OrClosing': False})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
}

void Demo600_0_C03() {
    EventSystemActor.Demo_ForceOpenMainScreen({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Ready'})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroes_Activated', 'IsWaitFinish': True})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'QuestName': 'BalladOfHeroes', 'StepName': 'Step01'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 225})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'HorseWait'})
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait'})
    }
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}

void Demo600_0_C02() {

    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo600_0:Demo600_0_000'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'LookAround'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'Demo600_0-C01-Link-A-0_Loop'})
    }

}

void Demo600_0_Call() {

    call Demo600_0_C01_Call()

    goto Event85
}

void Demo600_0_C01_Call() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'None'})
    goto Event7
}
