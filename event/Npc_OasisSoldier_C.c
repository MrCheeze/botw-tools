-------- EventFlow: Npc_OasisSoldier_C --------

Actor: Npc_OasisSoldier_C
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisSoldier_B
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisSoldier_A
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_OasisSoldier_C.CheckActorAction13() {
      case 0:
        Event5:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_permitted'}) {
            Npc_OasisSoldier_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:talk02'})
        } else {
            Npc_OasisSoldier_C.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        }
      case 1:
        Npc_OasisSoldier_B.Demo_Join({'IsWaitFinish': True})
        Npc_OasisSoldier_A.Demo_Join({'IsWaitFinish': True})
        goto Event5
      case 2:
        Event15:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasissoldier_C_first'}) {
            if !EventSystemActor.RandomChoice2() {
                Npc_OasisSoldier_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:talk03'})
            } else {
                Npc_OasisSoldier_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:talk04'})
            }
        } else {
            Npc_OasisSoldier_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:talk06'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasissoldier_C_first', 'IsWaitFinish': True})
        }
      case 3:
        goto Event15
    }
}

void NearActorsTalk() {
    Event2:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_OasisSoldier_B.Demo_Join({'IsWaitFinish': True})
    Npc_OasisSoldier_A.Demo_Join({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
        Npc_OasisSoldier_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:talk05'})
    } else {
        Npc_OasisSoldier_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:talk01'})
    }
}

void NearActorsNear() {
    Npc_OasisSoldier_C.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:Near_00'})
}

void Electric_Relic_Finished_NearActorsTalk() {
    goto Event2
}

void Electric_Relic_Finished_Near() {
    Event13:
    switch Npc_OasisSoldier_C.CheckActorAction13() {
      case 1:
        Npc_OasisSoldier_C.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:Near_00'})
      case 3:
        Npc_OasisSoldier_C.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:Near_01'})
    }
}

void Near() {
    goto Event13
}

void Electric_Relic_Finished_NearActorsNear() {
    Npc_OasisSoldier_C.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_OasisSoldier_C:Near_01'})
}
