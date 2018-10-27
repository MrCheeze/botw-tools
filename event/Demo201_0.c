-------- EventFlow: Demo201_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_DisableUnequipInEvent', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_EnableCameraInput', 'Demo_WaitForCloseFade', 'Demo_WaitFrame', 'Demo_AdvanceQuest', 'Demo_ForceOpenMainScreen', 'Demo_AutoSave', 'Demo_DisableAutoSavePausing', 'Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[doushi]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo201_0() {
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitForCloseFade({'IsWaitFinish': True, 'OrClosing': False})
    GameROMPlayer.Demo_DisableUnequipInEvent({'IsWaitFinish': True})
    Event28:
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '100enemy_IsPlayNow_ActivatedDemo'})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo201_0:Demo201_0_Text000'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'LookAround'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 264})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo201_0-C01-Link-A-0_Loop'})
    }

    EventSystemActor.Demo_ForceOpenMainScreen({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '100enemy_Ready'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'QuestName': '100enemy', 'StepName': 'ToDeku'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 225})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'HorseWait'})
        Event27:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        call AocResident.CheckAoc1TreasureRun()


        call Aoc2Resident.CheckAoc2TreasureRun()


        call AocResident.collaboEquip()

        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': '100enemy_IsPlayNow_ActivatedDemo'})
        EventSystemActor.Demo_DisableAutoSavePausing({'IsWaitFinish': True})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait'})
        goto Event27
    }
}

void Demo201_1() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'FadeInSec': 2.0, 'ExceptGroups': '', 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    goto Event28
}
