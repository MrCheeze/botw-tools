-------- EventFlow: Npc_oasis045 --------

Actor: Npc_oasis045
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckTimeType', 'GeneralChoice2', 'CheckFlag', 'RandomChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis045_talk'}) {
            Event29:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Fruits_SoldOut'}) {
                Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_13'})
                Event2:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_05', 'IsOverWriteLabelActorName': False})

                    call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_oasis045")})

                    Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_09'})
                } else {
                    Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_03', 'IsOverWriteLabelActorName': False})
                }
            } else {
                if Npc_oasis045.IsOnInstEventFlag() {
                    Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_12'})
                    goto Event2
                } else {
                    switch EventSystemActor.CheckTimeType() {
                      case 0:
                        Event1:
                        Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_01', 'IsOverWriteLabelActorName': False})
                        goto Event2
                      case 1:
                        goto Event1
                      case 2:
                        Event7:
                        Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_02'})
                        goto Event2
                      case 3:
                        goto Event7
                      case 4:
                        goto Event7
                      case 5:
                        Event26:
                        Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_11'})
                        goto Event2
                      case 6:
                        goto Event26
                      case 7:
                        goto Event26
                    }
                }
            }
        } else {
            Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_18'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis045_talk', 'IsWaitFinish': True})
            goto Event2
        }
    } else {
        goto Event29
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Fruits_SoldOut'}) {
        Npc_oasis045.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_oasis045:Near002'})
    } else {
        Npc_oasis045.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis045:Near001', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Sell() {
    switch Npc_oasis045.CheckPlacedItemSaled() {
      case 0:
        Event32:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_06', 'IsOverWriteLabelActorName': False})
          case 1:
            Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_14'})
          case 2:
            Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_15'})
          case 3:
            Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_16'})
        }
      case 1:
        if !EventSystemActor.RandomChoice2() {
            Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_17'})
        } else {
            Npc_oasis045.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis045:Talk_07', 'IsOverWriteLabelActorName': False})
        }
      case 2:
        goto Event32
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_oasis045")})


    call Sell()

}
