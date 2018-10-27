-------- EventFlow: Npc_kokiri005 --------

Actor: Npc_kokiri005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'GeneralChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_kokiri005.IsOnInstEventFlag() {
        Event27:
        Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_Talk010'})
    } else {
        Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_Talk000', 'IsCloseMessageDialog': False})
        goto Event27
    }
}

void IsPlayed_Demo104_0_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Finish'}) {
        Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_GotMSword_Talk000'})
        Event30:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_After_Demo_Talk010', 'IsCloseMessageDialog': True})
            Event39:
            Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_After_Demo_Talk001'})
            goto Event30
          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Finish'}) {
                Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_GotMSword_Talk010', 'IsCloseMessageDialog': True})
                goto Event39
            } else {
                Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_After_Demo_Talk020', 'IsCloseMessageDialog': True})
                goto Event39
            }
          case 2:
            Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_After_Demo_Talk030', 'IsCloseMessageDialog': True})
            goto Event39
          case 3:
            Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_After_Demo_Talk040'})
        }
    } else {
        Npc_kokiri005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Npc_kokiri005_After_Demo_Talk000', 'IsCloseMessageDialog': False})
        goto Event30
    }
}

void Near() {
    Npc_kokiri005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_kokiri005:Near01', 'DispFrame': 90, 'IsChecked': False})
}
