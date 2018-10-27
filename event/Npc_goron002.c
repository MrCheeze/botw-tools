-------- EventFlow: Npc_goron002 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckTimeType', 'RandomChoice4', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_goron002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckPlacedItemSaled']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckTimeType() {
      case 0:
        Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk00', 'IsOverWriteLabelActorName': False})
        Event43:
        Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron002:talk13'})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk04', 'IsOverWriteLabelActorName': False})

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_goron002")})

            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk07', 'IsOverWriteLabelActorName': False})
          case 1:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk05', 'IsOverWriteLabelActorName': False})
          case 2:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk07', 'IsOverWriteLabelActorName': False})
        }
      case 1:
        Event9:
        Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk01', 'IsOverWriteLabelActorName': False})
        goto Event43
      case 2:
        goto Event9
      case 3:
        goto Event9
      case 4:
        goto Event9
      case 5:
        goto Event9
      case 6:
        Event16:
        Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk02', 'IsOverWriteLabelActorName': False})
        goto Event43
      case 7:
        goto Event16
    }
}

void Sell() {
    switch Npc_goron002.CheckPlacedItemSaled() {
      case 0:
        Event46:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron002:Com_Talk_11'})
          case 1:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron002:Com_Talk_11b'})
          case 2:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron002:Com_Talk_11d'})
          case 3:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_goron002:Com_Talk_11c'})
        }
      case 1:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk09', 'IsOverWriteLabelActorName': False})
          case 1:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk10', 'IsOverWriteLabelActorName': False})
          case 2:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk08', 'IsOverWriteLabelActorName': False})
          case 3:
            Npc_goron002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_goron002:talk11', 'IsOverWriteLabelActorName': False})
        }
      case 2:
        goto Event46
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_goron002")})


    call Sell()

}

void Near() {
    Npc_goron002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_goron002:near00', 'IsChecked': False, 'DispFrame': 90})
}
