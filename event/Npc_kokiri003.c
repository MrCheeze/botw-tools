-------- EventFlow: Npc_kokiri003 --------

Actor: Npc_kokiri003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer']
queries: ['CheckPlacedItemSaled']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckTimeType', 'CheckFlag', 'GeneralChoice3', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri003_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri003_SoldOut'}) {
            Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk030'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event46:

                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_kokiri003")})

                if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri003_SoldOut'}) {
                    Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk060'})
                } else {
                    Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk040'})
                }
              case 1:
                Event67:
                Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk070'})
              case 2:
                Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk060', 'IsCloseMessageDialog': True})
            }
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1, 2, 3, 4, 5]:
            Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk010'})
            Event29:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                goto Event46
              case 1:
                goto Event67
              case 2:
                Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk040'})
            }
          case [6, 7]:
            Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk020'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                goto Event46
              case 1:
                goto Event67
              case 2:
                Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk050'})
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_kokiri003_Talk'})
        Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Talk000'})
        goto Event29
    }
}

void Sell() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri003_Talk'}) {
        switch Npc_kokiri003.CheckPlacedItemSaled() {
          case [0, 2]:
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Sell010'})
              case 1:
                Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Sell010b'})
              case 2:
                Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Sell010c'})
              case 3:
                Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Sell010d'})
            }
          case 1:
            Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Sell030'})
        }
    } else
    switch Npc_kokiri003.CheckPlacedItemSaled() {
      case [0, 2]:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_kokiri003_Talk'})
        Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Sell000'})
      case 1:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_kokiri003_Talk'})
        Npc_kokiri003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Sell020'})
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_kokiri003_SoldOut'}) {
        Npc_kokiri003.Demo_TalkToPlayer({'IsWaitFinish': True, 'ASKeyName': '', 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Near020'})
    } else
    if EventSystemActor.CheckTimeType() in [0, 1, 2, 3, 4, 5, 6, 7] {
        Npc_kokiri003.Demo_TalkToPlayer({'IsWaitFinish': True, 'ASKeyName': '', 'MessageId': 'EventFlowMsg/Npc_kokiri003:Npc_kokiri003_Near000'})
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_kokiri003")})


    call Sell()

}
