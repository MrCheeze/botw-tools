-------- EventFlow: Npc_kokiri004 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_NoDeleteCurrent']
queries: ['CheckFlag', 'CheckTimeType', 'GeneralChoice2', 'GeneralChoice3', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_kokiri004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer', 'Demo_SetAttentionForbidSale']
queries: ['CheckPlacedItemSaled']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Argument
entrypoint: None()
actions: []
queries: ['IsProtectiveGear']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri004_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri004_SoldOut'}) {
            Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk030'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event31:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_kokiri004")})

                if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri004_SoldOut'}) {
                    Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk060'})
                } else {
                    Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk040'})
                }
              case 1:
                Event48:
                Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk070'})
              case 2:
                Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk060'})
            }
        } else {
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event12:
                Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk010'})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    goto Event31
                  case 1:
                    goto Event48
                  case 2:
                    Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk040'})
                }
              case 1:
                goto Event12
              case 2:
                goto Event12
              case 3:
                goto Event12
              case 4:
                goto Event12
              case 5:
                goto Event12
              case 6:
                Event13:
                Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk020'})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    goto Event31
                  case 1:
                    goto Event48
                  case 2:
                    Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk050'})
                }
              case 7:
                goto Event13
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_kokiri004_Talk'})
        Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Talk000'})
        goto Event12
    }
}

void Sell() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri004_Talk'}) {
        switch Npc_kokiri004.CheckPlacedItemSaled() {
          case 0:
            Event56:
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Sell010'})
              case 1:
                Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Sell010b'})
              case 2:
                Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Sell010c'})
              case 3:
                Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Sell010d'})
            }
          case 1:
            Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Sell030'})
          case 2:
            goto Event56
        }
    } else {
        switch Npc_kokiri004.CheckPlacedItemSaled() {
          case 0:
            Event8:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_kokiri004_Talk'})
            Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Sell000'})
          case 1:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_kokiri004_Talk'})
            Npc_kokiri004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Sell020'})
          case 2:
            goto Event8
        }
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri004_SoldOut'}) {
        Npc_kokiri004.Demo_TalkToPlayer({'IsWaitFinish': True, 'ASKeyName': '', 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Near020'})
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event1:
            Npc_kokiri004.Demo_TalkToPlayer({'IsWaitFinish': True, 'ASKeyName': '', 'MessageId': 'EventFlowMsg/Npc_kokiri004:Npc_kokiri004_Near000'})
          case 1:
            goto Event1
          case 2:
            goto Event1
          case 3:
            goto Event1
          case 4:
            goto Event1
          case 5:
            goto Event1
          case 6:
            goto Event1
          case 7:
            goto Event1
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_kokiri004")})


    call Sell()

}
