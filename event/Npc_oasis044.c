-------- EventFlow: Npc_oasis044 --------

Actor: Npc_oasis044
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckTimeType', 'CheckFlag', 'GeneralChoice3', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Food_SoldOut'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis044_talk'}) {
                Event30:
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Food_SoldOut'}) {
                    Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_05'})
                    Event2:
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:

                        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_oasis044")})

                        Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_02', 'IsOverWriteLabelActorName': False})
                      case 1:
                        Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_13'})
                        goto Event2
                      case 2:
                        Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_03', 'IsOverWriteLabelActorName': False})
                    }
                } else {
                    if Npc_oasis044.IsOnInstEventFlag() {
                        Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_22', 'IsCloseMessageDialog': True})
                        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                        Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_12'})
                        goto Event2
                    } else {
                        switch EventSystemActor.CheckTimeType() {
                          case 0:
                            Event7:
                            Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_01', 'IsOverWriteLabelActorName': False})
                            goto Event2
                          case 1:
                            goto Event7
                          case 2:
                            Event27:
                            Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_11'})
                            goto Event2
                          case 3:
                            goto Event27
                          case 4:
                            goto Event27
                          case 5:
                            Event1:
                            Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_09'})
                            goto Event2
                          case 6:
                            goto Event1
                          case 7:
                            goto Event1
                        }
                    }
                }
            } else {
                if Npc_oasis044.IsOnInstEventFlag() {
                    Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_22'})
                    Event54:
                    Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_21'})
                    Event55:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis044_talk', 'IsWaitFinish': True})
                    goto Event2
                } else {

                    call hello()

                    goto Event54
                }
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis044_talk'}) {
                goto Event30
            } else {
                if Npc_oasis044.IsOnInstEventFlag() {
                    Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_22'})
                    Event47:
                    Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_17'})
                    goto Event55
                } else {

                    call hello()

                    goto Event47
                }
            }
        }
    } else {
        goto Event30
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Food_SoldOut'}) {
        Npc_oasis044.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_oasis044:Near002'})
    } else {
        Npc_oasis044.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis044:Near001', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Sell() {
    switch Npc_oasis044.CheckPlacedItemSaled() {
      case 0:
        Event37:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_06', 'IsOverWriteLabelActorName': False})
          case 1:
            Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_07', 'IsOverWriteLabelActorName': False})
          case 2:
            Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_14'})
          case 3:
            Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_15'})
        }
      case 1:
        Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_16'})
      case 2:
        goto Event37
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_oasis044")})


    call Sell()

}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event50:
        Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_19'})
      case 1:
        goto Event50
      case 2:
        Event49:
        Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_18'})
      case 3:
        goto Event49
      case 4:
        goto Event49
      case 5:
        Event51:
        Npc_oasis044.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis044:Talk_20'})
      case 6:
        goto Event51
      case 7:
        goto Event51
    }
}
