-------- EventFlow: Npc_oasis002 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckTimeType', 'GeneralChoice2', 'CheckFlag', 'RandomChoice3', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis002_talk'}) {
            Event32:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Arrow_SoldOut'}) {
                if !Npc_oasis002.IsOnInstEventFlag() {

                    call hello()

                }
                Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_04'})
                Event2:
                if !EventSystemActor.GeneralChoice2() {

                    call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_oasis002")})

                    Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_02', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Arrow_SoldOut'}) {
                    Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_19'})
                } else {
                    Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_03', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                }
            } else
            if !Npc_oasis002.IsOnInstEventFlag() {

                call hello()

            }
            switch EventSystemActor.RandomChoice3() {
              case 0:
                Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event2
              case 1:
                Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_11'})
                goto Event2
              case 2:
                Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_09'})
                goto Event2
            }
        } else
        if !Npc_oasis002.IsOnInstEventFlag() {

            call hello()

        }
        Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_18'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis002_talk', 'IsWaitFinish': True})
        goto Event2
    } else
    goto Event32
}

void Near() {
    Npc_oasis002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis002:Near001', 'IsChecked': False, 'DispFrame': 90})
}

void Sell() {
    switch Npc_oasis002.CheckPlacedItemSaled() {
      case [0, 2]:
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_06', 'IsOverWriteLabelActorName': False})
          case 1:
            Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_15'})
          case 2:
            Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_16'})
        }
      case 1:
        if !EventSystemActor.RandomChoice2() {
            Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_07', 'IsOverWriteLabelActorName': False})
        } else {
            Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_17'})
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_oasis002")})


    call Sell()

}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_12'})
      case [2, 3, 4]:
        Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_13'})
      case [5, 6, 7]:
        Npc_oasis002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis002:Talk_14'})
    }
}
