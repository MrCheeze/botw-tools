-------- EventFlow: Npc_oasis043 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckTimeType', 'GeneralChoice2', 'CheckFlag', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis043
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis043_talk'}) {
            Event33:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Mush_SoldOut'}) {
                Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_19'})
                Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_12'})
                Event2:
                if !EventSystemActor.GeneralChoice2() {

                    call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_oasis043")})

                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Mush_SoldOut'}) {
                        Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_14'})
                    } else {
                        Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_02', 'IsOverWriteLabelActorName': False})
                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Mush_SoldOut'}) {
                        Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_13'})
                    } else {
                        Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_03', 'IsOverWriteLabelActorName': False})
                    }
                }
            } else {
                if Npc_oasis043.IsOnInstEventFlag() {
                    Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_19'})
                    Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_09'})
                    goto Event2
                } else {
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event7:
                        Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_10'})
                        goto Event2
                      case 1:
                        goto Event7
                      case 2:
                        Event1:
                        Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_01', 'IsOverWriteLabelActorName': False})
                        goto Event2
                      case 3:
                        goto Event1
                      case 4:
                        goto Event1
                      case 5:
                        Event30:
                        Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_11'})
                        goto Event2
                      case 6:
                        goto Event30
                      case 7:
                        goto Event30
                    }
                }
            }
        } else {
            if Npc_oasis043.IsOnInstEventFlag() {
                Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_19'})
                Event69:
                Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_04'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis043_talk', 'IsWaitFinish': True})
                goto Event2
            } else {
                switch EventSystemActor.CheckTimeType() {
                  case 0:
                    Event72:
                    Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_05'})
                    goto Event69
                  case 1:
                    goto Event72
                  case 2:
                    Event70:
                    Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_17'})
                    goto Event69
                  case 3:
                    goto Event70
                  case 4:
                    goto Event70
                  case 5:
                    Event73:
                    Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_18'})
                    goto Event69
                  case 6:
                    goto Event73
                  case 7:
                    goto Event73
                }
            }
        }
    } else {
        goto Event33
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Mush_SoldOut'}) {
        Npc_oasis043.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_oasis043:Near002'})
    } else {
        Npc_oasis043.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis043:Near001', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Sell() {
    switch Npc_oasis043.CheckPlacedItemSaled() {
      case 0:
        Event43:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_07', 'IsOverWriteLabelActorName': False})
          case 1:
            Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_06', 'IsOverWriteLabelActorName': False})
          case 2:
            Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_15'})
          case 3:
            Npc_oasis043.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis043:Talk_16'})
        }
      case 1:
        goto Event43
      case 2:
        goto Event43
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_oasis043")})


    call Sell()

}
