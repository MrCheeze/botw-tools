-------- EventFlow: Npc_Kokiri008 --------

Actor: Npc_Kokiri008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog']
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kokiri008_Talk'}) {
        Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk002'})
    } else {
        Event1:
        Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk000'})
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo104_0'}) {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Event37:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kokiri008_Talk'})
        } else {
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk001'})
            goto Event37
        }
    }
}

void Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Kokiri008_Talk'}) {
        Npc_Kokiri008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Near000', 'IsChecked': False, 'DispFrame': 90})
    }
}

void KorokMini_KorokShiren_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'KorokMini_RiddleShiren_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kokiri008_Finish'}) {
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk602'})
            } else {
                Event51:
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk600'})
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk601'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kokiri008_Finish', 'IsWaitFinish': True})
            }
        } else {
            Event46:
            Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk503'})
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kokiri008_Nazo'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Get_MasterSword_Finish'}) {
                goto Event51
            } else {
                goto Event46
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kokiri008_Nazo2'}) {
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk504'})
            } else {
                Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk500'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk501'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kokiri008_Nazo', 'IsWaitFinish': True})
                } else {
                    Npc_Kokiri008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri008:Npc_Kokiri008_Talk502'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kokiri008_Nazo2', 'IsWaitFinish': True})
                }
            }
        }
    }
}

void First_Talk() {
    goto Event1
}
