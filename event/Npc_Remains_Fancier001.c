-------- EventFlow: Npc_Remains_Fancier001 --------

Actor: Npc_Remains_Fancier001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Remains_Fancier001.IsOnInstEventFlag() {
        Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Remains_Fancier001:Talk003', 'ASName': 'Act_Remains_Fancier'})
    } else {
        Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Remains_Fancier001:Talk000', 'ASName': 'Act_Remains_Fancier'})
    }
}

void Near() {
    Npc_Remains_Fancier001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Remains_Fancier:Near_00', 'DispFrame': 90, 'IsChecked': False})
}

void Remains_Fancier_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Remains_Fancier001.IsOnInstEventFlag() {
        Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Remains_Fancier001:Talk002', 'ASName': ''})
    } else {
        Npc_Remains_Fancier001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Remains_Fancier001:Talk001', 'ASName': ''})
    }
}

void Remains_Fancier_Finish_Near() {
    Npc_Remains_Fancier001.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Remains_Fancier001:Near'})
}
