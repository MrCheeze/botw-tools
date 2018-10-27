-------- EventFlow: TwnObj_DemonStatue_A_01 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_DemonStatue_A_01
entrypoint: None()
actions: ['Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo035_0', 'EntryPointName': 'Demo035_Talk'})
}

void Ready_DevilSeal() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo035_0', 'EntryPointName': 'Demo035_Ready'})
}

void Finish_DevilSeal() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo035_0', 'EntryPointName': 'Demo035_Finish'})
}

void GiveUtsuwa_DevilSeal() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo035_0', 'EntryPointName': 'Demo035_GiveUtsuwa'})
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_DevilSeal_Finish'}) {
        Event525:
        TwnObj_DemonStatue_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo035_0:near00', 'DispFrame': 90, 'IsChecked': False})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_DevilSeal_Activated'}) {
            goto Event525
        } else {
            TwnObj_DemonStatue_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo035_0:near00', 'DispFrame': 300, 'IsChecked': True})
        }
    }
}
