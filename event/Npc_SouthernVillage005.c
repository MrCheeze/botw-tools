-------- EventFlow: Npc_SouthernVillage005 --------

Actor: Npc_SouthernVillage005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_SetAttentionForbidSale', 'Demo_LookAtObject']
queries: ['CheckPlacedItemSaled']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_NoDeleteCurrent', 'Demo_EnableCameraInput']
queries: ['GeneralChoice3', 'CheckTimeType', 'CheckWeather', 'CheckFlag', 'GeneralChoice2', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Argument
entrypoint: None()
actions: []
queries: ['IsProtectiveGear']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage005_IsTalked'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_SouthernVillage005_SoldOut'}) {
            Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk12'})
            if !EventSystemActor.GeneralChoice2() {
                Event10:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_SouthernVillage005")})

                Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk02'})
            } else {
                Event7:
                Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk01'})
            }
        } else {
            switch EventSystemActor.CheckWeather() {
              case 0:
                switch EventSystemActor.CheckTimeType() {
                  case 0:
                    Event14:
                    Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk08'})
                    Event22:
                    Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk03'})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk04'})
                      case 1:
                        goto Event10
                      case 2:
                        goto Event7
                    }
                  case 1:
                    goto Event14
                  case 2:
                    Event3:
                    Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk09'})
                    goto Event22
                  case 3:
                    goto Event3
                  case 4:
                    Event9:
                    Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk10'})
                    goto Event22
                  case 5:
                    goto Event9
                  case 6:
                    Event15:
                    Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk11'})
                    goto Event22
                  case 7:
                    goto Event15
                }
              case 1:
                Event17:
                Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk07'})
                goto Event22
              case 2:
                goto Event17
              case 3:
                goto Event17
            }
        }
    } else {
        Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk00'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage005_IsTalked', 'IsWaitFinish': True})
        goto Event22
    }
}

void Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_SouthernVillage005_SoldOut'}) {
        Npc_SouthernVillage005.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Near00'})
    }
}

void Sell() {
    switch Npc_SouthernVillage005.CheckPlacedItemSaled() {
      case 0:
        Event50:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk02'})
          case 1:
            Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Com_Talk_11b'})
          case 2:
            Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Com_Talk_11c'})
          case 3:
            Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Com_Talk_11d'})
        }
      case 1:
        Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk05'})
      case 2:
        goto Event50
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage005_IsTalked'}) {
        Event49:

        call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_SouthernVillage005")})


        call Sell()

    } else {
        Npc_SouthernVillage005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:talk00'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SourthernVillage005_IsTalked'})
        goto Event49
    }
}

void AttentionDemo() {
    Npc_SouthernVillage005.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_SouthernVillage005.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Near01'})
}
