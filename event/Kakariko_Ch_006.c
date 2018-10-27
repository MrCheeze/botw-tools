-------- EventFlow: Kakariko_Ch_006 --------

Actor: Npc_Kakariko010
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Finish_Npc_Kakariko010_Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Npc_Kakariko010.Talk()

}

void Ready_Npc_Kakariko010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko010_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_006_first'}) {
            Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk08'})
            Event26:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk04'})
                Event18:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_006_Activated'})
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_006_Finish'}) {

                        call Npc_Kakariko010.Talk()

                    } else {
                        Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk07'})
                    }
                  case 1:
                    Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk05', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk11'})
                    goto Event18
                  case 2:
                    Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk06'})
                }
              case 1:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Kakariko010")})

                Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk10'})
                goto Event26
              case 2:
                Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk09'})
            }
        } else {
            Npc_Kakariko010.Demo_Talk({'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Ch_006_first', 'IsWaitFinish': True})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk04'})
                goto Event18
            } else {
                Npc_Kakariko010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Talk06'})
            }
        }
    } else {

        call Npc_Kakariko010.first()

    }
}

void Light_Npc_Kakariko010_Talk() {
    goto Event1
}

void Ready_Npc_Kakariko010_Near() {
    Npc_Kakariko010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Near02'})
}

void Finish_Npc_Kakariko010_Near() {
    Npc_Kakariko010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Near01'})
}

void Light_Npc_Kakariko010_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko010_Talk'}) {
        Npc_Kakariko010.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_006:Near00'})
    }
}
