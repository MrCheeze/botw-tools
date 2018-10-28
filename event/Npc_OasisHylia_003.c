-------- EventFlow: Npc_OasisHylia_003 --------

Actor: Npc_OasisHylia_003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_OasisHylia_003_first'}) {
        if Npc_OasisHylia_003.IsOnInstEventFlag() {
            Npc_OasisHylia_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_003:Talk_04'})
        } else {
            Npc_OasisHylia_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_003:Talk_05'})
        }
        Event4:
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis006_aroma'}) {
                Npc_OasisHylia_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_003:Talk_02'})
            } else {
                Npc_OasisHylia_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_003:Talk_01'})
            }
            Event10:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_OasisHylia_003_first', 'IsWaitFinish': True})
        } else {
            Npc_OasisHylia_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_003:Talk_03'})
            goto Event10
        }
    } else {
        Npc_OasisHylia_003.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisHylia_003:Talk_00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        goto Event4
    }
}

void Near() {
    Npc_OasisHylia_003.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_OasisHylia_003:Near_00'})
}
