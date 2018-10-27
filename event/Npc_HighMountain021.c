-------- EventFlow: Npc_HighMountain021 --------

Actor: Npc_HighMountain021
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer']
queries: ['CheckPlacedItemSaled', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckTimeType', 'CheckWeather', 'RandomChoice4', 'GeneralChoice3', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Sell() {
    switch Npc_HighMountain021.CheckPlacedItemSaled() {
      case 0:
        Event81:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Com_Talk_11'})
          case 1:
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Com_Talk_11b'})
          case 2:
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Com_Talk_11d'})
          case 3:
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Com_Talk_11c'})
        }
      case 1:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk15'})
          case 1:
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk17'})
          case 2:
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk18'})
          case 3:
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk16'})
        }
      case 2:
        goto Event81
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_HighMountain021")})


    call Sell()

}

void Talk() {

    call MisasaHello()

    Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk04'})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk05'})

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_HighMountain021")})

        Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk07'})
      case 1:
        Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk01'})
        if !EventSystemActor.RandomChoice2() {
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk10'})
        } else {
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk11'})
        }
      case 2:
        Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk08'})
    }
}

void Near() {
    Npc_HighMountain021.Demo_TalkToPlayer({'IsWaitFinish': True, 'ASKeyName': 'Act_ShopStaff_Hello', 'MessageId': 'EventFlowMsg/Npc_HighMountain021:near00'})
}

void MisasaHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_HighMountain021.IsOnInstEventFlag() {
        Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk09'})
    } else {
        switch EventSystemActor.CheckWeather() {
          case 0:
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event31:
                Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk02'})
              case 1:
                Event2:
                Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk00'})
              case 2:
                goto Event2
              case 3:
                goto Event2
              case 4:
                goto Event2
              case 5:
                goto Event2
              case 6:
                goto Event31
              case 7:
                goto Event31
            }
          case 1:
            Event32:
            Npc_HighMountain021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:talk03'})
          case 2:
            goto Event32
          case 3:
            goto Event32
        }
    }
}
