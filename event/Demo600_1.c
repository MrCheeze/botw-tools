-------- EventFlow: Demo600_1 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_AutoSave', 'Demo_DisableAutoSavePausing', 'Demo_ForceOpenMainScreen', 'Demo_FlagON', 'Demo_AdvanceQuest']
queries: ['CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_02[FinalTrial_Entrance]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 3}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo600_1() {

    call Demo600_0.Demo600_0_C01()

    Event72:
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShowLocationProhibitionInDemo'})

    call Demo600_1_C01()


    call Demo600_1_C02()


    call AocResident.CheckAoc1TreasureRun()


    call Aoc2Resident.CheckAoc2TreasureRun()


    call AocResident.collaboEquip()

    EventSystemActor.Demo_DisableAutoSavePausing({'IsWaitFinish': True})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}

void Demo600_1_C01() {

    fork {
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo600_1:Demo600_1_000'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'LookAround'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'Demo600_1-C01-Link-A-0_Loop'})
    }

}

void Demo600_1_Call() {

    call Demo600_0.Demo600_0_C01_Call()

    goto Event72
}

void Demo600_1_C02() {
    EventSystemActor.Demo_ForceOpenMainScreen({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Ready'})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroes_Activated', 'IsWaitFinish': True})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'QuestName': 'BalladOfHeroes', 'StepName': 'Step01'})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 225})
    } {
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'ActivatedWait'})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_PlayASForDemo({'ASName': 'GetOffStone_Skl', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Demo600_1-C01-Obj_DRCStoneStand_A_01-A-0'})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        FldObj_DownloadTerminal_A_02[FinalTrial_Entrance].Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Demo600_1-C01-Obj_DRCStoneStand_A_01-A-1'})
    }

    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'HorseWait'})
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait'})
    }
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}
