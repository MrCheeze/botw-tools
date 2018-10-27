-------- EventFlow: Npc_oasis022 --------

Actor: Npc_oasis022
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice3', 'CheckTimeType', 'GeneralChoice2', 'CheckFlag', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis022_first'}) {
            if Npc_oasis022.IsOnInstEventFlag() {
                Event26:
                Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_12'})
            } else {

                call hello()

                goto Event26
            }
        } else {

            call hello()

            Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_05'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis022_first', 'IsWaitFinish': True})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis022_first'}) {
        if Npc_oasis022.IsOnInstEventFlag() {
            Event42:
            Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_02'})
            Event32:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event33:
                Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_06'})
                Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_07'})
                if !EventSystemActor.GeneralChoice2() {
                    Event31:
                    Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_03'})
                    Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_13'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event33
                    } else
                    Event49:
                    if !EventSystemActor.RandomChoice2() {
                        Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_04'})
                        Event41:
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis022_first', 'IsWaitFinish': True})
                    } else {
                        Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_08'})
                        goto Event41
                    }
                } else
                goto Event49
              case 1:
                goto Event31
              case 2:
                goto Event49
            }
        } else {

            call hello()

            goto Event42
        }
    } else {

        call hello()

        Npc_oasis022.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_01', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        goto Event32
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_09'})
      case [2, 3, 4]:
        Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_10'})
      case [5, 6, 7]:
        Npc_oasis022.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis022:Talk_11'})
    }
}
