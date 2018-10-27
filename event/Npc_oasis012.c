-------- EventFlow: Npc_oasis012 --------

Actor: Npc_oasis012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['RandomChoice4', 'GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_oasis012.IsOnInstEventFlag() {
        Event14:
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
                Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_011', 'ASName': ''})
            } else {
                Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_009', 'ASName': ''})
            }
        } else {
            Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_001', 'IsOverWriteLabelActorName': False, 'ASName': ''})
        }
    } else {
        Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_010', 'ASName': ''})
        goto Event14
    }
}

void Near() {
    Npc_oasis012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_Near01', 'IsChecked': False, 'DispFrame': 90})
}

void GerudoMiniJewel_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_oasis012.IsOnInstEventFlag() {
        Event3:
        Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_002'})
        if !EventSystemActor.GeneralChoice2() {
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_004'})
              case 1:
                Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_006'})
              case 2:
                Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_007'})
              case 3:
                Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_005'})
            }
        } else {
            Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_008'})
        }
    } else {
        Npc_oasis012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis012:Npc_oasis012_010', 'ASName': ''})
        goto Event3
    }
}
