-------- EventFlow: Npc_Goron005 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckTimeType', 'RandomChoice4', 'GeneralChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event58:
    if Npc_Goron005.IsOnInstEventFlag() {
        Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk03', 'ASName': 'Hello'})
        Event46:
        Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk04', 'IsOverWriteLabelActorName': False})
        Event29:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron005_FirstBuy'}) {
                Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk22', 'IsCloseMessageDialog': True})
                Event61:
                Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk25'})
                goto Event29
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron005_FirstBuy', 'IsWaitFinish': True})
                Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk05', 'IsOverWriteLabelActorName': False})
                Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk21', 'IsCloseMessageDialog': True})
                goto Event61
            }
          case 1:

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Goron005")})

            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            goto Event61
          case 2:
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron005_FirstHere'}) {
                Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk23'})
                Event15:
                Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk13', 'IsOverWriteLabelActorName': False})
                Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk15', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                goto Event61
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron005_FirstHere', 'IsWaitFinish': True})
                goto Event15
            }
          case 3:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk07', 'IsOverWriteLabelActorName': False})
        }
    } else {
        Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk24'})
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk00', 'IsOverWriteLabelActorName': False, 'ASName': 'Hello'})
            goto Event46
          case [1, 2, 3, 4, 5]:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk01', 'IsOverWriteLabelActorName': False, 'ASName': 'Hello'})
            goto Event46
          case [6, 7]:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk02', 'IsOverWriteLabelActorName': False, 'ASName': 'Hello'})
            goto Event46
        }
    }
}

void Near() {
    Event13:
    Npc_Goron005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:near00', 'IsChecked': False, 'DispFrame': 90})
}

void Sell() {
    if Npc_Goron005.CheckPlacedItemSaled() in [0, 1, 2] {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:Com_Talk_11'})
          case 1:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:Com_Talk_11b'})
          case 2:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:Com_Talk_11d'})
          case 3:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:Com_Talk_11c'})
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_Goron005")})


    call Sell()

}

void Clear_RemainsFire_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_goron005_ClearFirst'}) {
        goto Event58
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_goron005_ClearFirst', 'IsWaitFinish': True})
        Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk26'})
        goto Event46
    }
}

void Clear_RemainsFire_Near() {
    goto Event13
}

void UpArea_Attention() {
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_Goron005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:Attention00', 'DispFrame': 90, 'IsChecked': False})
      case 1:
        Npc_Goron005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:Attention01', 'DispFrame': 90, 'IsChecked': False})
      case 2:
        Npc_Goron005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:Attention02', 'DispFrame': 90, 'IsChecked': False})
      case 3:
        Npc_Goron005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron005:Attention03', 'DispFrame': 90, 'IsChecked': False})
    }
}

void NPC_Goron005_UpArea_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron005_UpAreaFirst'}) {
        Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk14'})
        Event78:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk17'})
          case 1:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk18'})
          case 2:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk19'})
          case 3:
            Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk20'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron005_UpAreaFirst', 'IsWaitFinish': True})
        Npc_Goron005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron005:talk16'})
        goto Event78
    }
}
