-------- EventFlow: Aoc2Resident --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_CallDemo', 'Demo_AutoSave', 'Demo_DisableAutoSavePausing']
queries: ['CheckFlag', 'IsCurrentMainFieldStage', 'CheckBalladOfHeroActiveTiming', 'IsCurrentCDungeonStage', 'CheckDeadlyQuestEscapeTiming']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void CheckBalladOfHeroRun() {
    switch EventSystemActor.CheckBalladOfHeroActiveTiming() {
      case 0:

        call CheckAoc2TreasureRun()

      case 1:
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo600_0', 'EntryPointName': 'Demo600_0_Call'})
      case 2:
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo600_1', 'EntryPointName': 'Demo600_1_Call'})
    }
}

void CheckAoc2TreasureRun() {
    if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
    && !EventSystemActor.CheckFlag({'FlagName': 'TreasureHunt_Aoc2_RunAutoOrder'})
    && EventSystemActor.IsCurrentMainFieldStage()
    && EventSystemActor.CheckFlag({'FlagName': 'FirstTouchdown'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TreasureHunt_Aoc2_RunAutoOrder'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        EventSystemActor.Demo_DisableAutoSavePausing({'IsWaitFinish': True})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})

        call RunTreasureChallenge({'FlagReady': 'TreasureHunt03_Ready', 'FlagActivated': 'TreasureHunt03_Activated'})


        call RunTreasureChallenge({'FlagReady': 'TreasureHunt04_Ready', 'FlagActivated': 'TreasureHunt04_Activated'})


        call RunTreasureChallenge({'FlagReady': 'TreasureHunt_touzoku05_Ready', 'FlagActivated': 'TreasureHunt_touzoku05_Activated'})


        call RunTreasureChallenge({'FlagReady': 'TreasureHunt_touzoku06_Ready', 'FlagActivated': 'TreasureHunt_touzoku06_Activated'})


        call RunTreasureChallenge({'FlagReady': 'TreasureHunt_touzoku07_Ready', 'FlagActivated': 'TreasureHunt_touzoku07_Activated'})


        call RunTreasureChallenge({'FlagReady': 'TreasureHunt_touzoku08_Ready', 'FlagActivated': 'TreasureHunt_touzoku08_Activated'})


        call RunTreasureChallenge({'FlagReady': 'bf2_collabo_Ready', 'FlagActivated': 'bf2_collabo_Activated'})

    }
}

void RunTreasureChallenge() {
    if EventSystemActor.CheckFlag({'FlagName': 'FlagReady'}) {
        Event284:
        if !EventSystemActor.CheckFlag({'FlagName': 'FlagActivated'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FlagActivated'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FlagReady'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        goto Event284
    }
}

void CheckDeadlyQuestEscape() {
    if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
    && EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'})
    && !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'})
    && !EventSystemActor.IsCurrentCDungeonStage()
    && EventSystemActor.CheckDeadlyQuestEscapeTiming() {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo605_0', 'EntryPointName': 'Demo605_0'})
    }
}

void InOtherArea() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShowLocationProhibitionInDemo'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo200_0', 'EntryPointName': 'Demo200_0'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo600_0', 'EntryPointName': 'Demo600_0'})
    Event310:

    call AocResident.collaboEquip()

}

void InForrest() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShowLocationProhibitionInDemo'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo201_0', 'EntryPointName': 'Demo201_0'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo600_0', 'EntryPointName': 'Demo600_0'})
    goto Event310
}

void InShrineOfResurrection() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ShowLocationProhibitionInDemo'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo200_0', 'EntryPointName': 'Demo200_0'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo600_1', 'EntryPointName': 'Demo600_1'})
    goto Event310
}
