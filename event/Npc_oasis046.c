-------- EventFlow: Npc_oasis046 --------

Actor: Npc_oasis046
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckTimeType', 'GeneralChoice2', 'RandomChoice2', 'CheckFlag', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerud_Meat_SoldOut'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis046_talk'}) {
                Event45:
                if EventSystemActor.CheckFlag({'FlagName': 'Gerud_Meat_SoldOut'}) {
                    Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_16'})
                    Event2:
                    if !EventSystemActor.GeneralChoice2() {

                        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_oasis046")})

                        Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_03', 'IsOverWriteLabelActorName': False})
                    } else {
                        if !EventSystemActor.RandomChoice2() {
                            Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_03', 'IsOverWriteLabelActorName': False})
                        } else {
                            Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_13'})
                        }
                    }
                } else {
                    if Npc_oasis046.IsOnInstEventFlag() {
                        Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_17'})
                        goto Event2
                    } else {
                        switch EventSystemActor.CheckTimeType() {
                          case 0:
                            Event7:
                            Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_01', 'IsOverWriteLabelActorName': False})
                            Event40:
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_14'})
                                goto Event2
                            } else {
                                Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_15'})
                                goto Event2
                            }
                          case 1:
                            goto Event7
                          case 2:
                            Event37:
                            Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_12'})
                            goto Event40
                          case 3:
                            goto Event37
                          case 4:
                            goto Event37
                          case 5:
                            Event1:
                            Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_10'})
                            goto Event40
                          case 6:
                            goto Event1
                          case 7:
                            goto Event1
                        }
                    }
                }
            } else {
                if Npc_oasis046.IsOnInstEventFlag() {
                    Event64:
                    Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_24'})
                    Event68:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis046_talk', 'IsWaitFinish': True})
                    goto Event2
                } else {

                    call hello()

                    goto Event64
                }
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis046_talk'}) {
                goto Event45
            } else {
                if Npc_oasis046.IsOnInstEventFlag() {
                    Event63:
                    Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_23'})
                    goto Event68
                } else {

                    call hello()

                    goto Event63
                }
            }
        }
    } else {
        goto Event45
    }
}

void Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Gerud_Meat_SoldOut'}) {
        Npc_oasis046.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis046:Near001', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Sell() {
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_06', 'IsOverWriteLabelActorName': False})
      case 1:
        Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_07', 'IsOverWriteLabelActorName': False})
      case 2:
        Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_18'})
      case 3:
        Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_19'})
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_oasis046")})


    call Sell()

}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event60:
        Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_20'})
      case 1:
        goto Event60
      case 2:
        Event61:
        Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_21'})
      case 3:
        goto Event61
      case 4:
        goto Event61
      case 5:
        Event59:
        Npc_oasis046.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis046:Talk_22'})
      case 6:
        goto Event59
      case 7:
        goto Event59
    }
}
