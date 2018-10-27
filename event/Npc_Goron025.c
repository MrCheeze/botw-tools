-------- EventFlow: Npc_Goron025 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice4', 'GeneralChoice3', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron025[Pupunda_Ichikara]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron025[Pupunda_GoronCity]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron025
entrypoint: None()
actions: []
queries: ['CheckPlacedItemSaled']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron025[Pupunda_GoronCity].CheckActorAction13() {
      case 0:
        Event39:
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor01'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron025_First'}) {
                Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk05'})
                Event43:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk12'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk13'})
                    } else {
                        Event47:
                        Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk04'})
                    }
                } else {
                    goto Event47
                }
            } else {
                Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk10'})
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron025_First', 'IsWaitFinish': True})
                    Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk11'})
                    goto Event43
                } else {
                    goto Event47
                }
            }
        } else {
            Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk00', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk01', 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk03'})
                } else {
                    Event15:
                    Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk02', 'IsOverWriteLabelActorName': False})
                }
            } else {
                goto Event15
            }
        }
      case 1:
        goto Event39
      case 12:
        goto Event39
    }
}

void Near() {
    switch Npc_Goron025[Pupunda_GoronCity].CheckActorAction13() {
      case 0:
        Event9:
        Npc_Goron025[Pupunda_GoronCity].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:near01', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        goto Event9
      case 2:
        Event8:
        Npc_Goron025[Pupunda_GoronCity].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:near00', 'IsChecked': False, 'DispFrame': 90})
      case 3:
        goto Event8
      case 4:
        goto Event8
      case 5:
        goto Event8
      case 6:
        goto Event8
      case 7:
        goto Event8
      case 8:
        goto Event8
      case 9:
        goto Event8
      case 10:
        goto Event8
      case 11:
        goto Event8
      case 12:
        goto Event8
      case 13:
        goto Event8
    }
}

void Sell() {
    switch Npc_Goron025.CheckPlacedItemSaled() {
      case 0:
        Event60:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:Com_Talk_11'})
          case 1:
            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:Com_Talk_11b'})
          case 2:
            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:Com_Talk_11c'})
          case 3:
            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:Com_Talk_11d'})
        }
      case 1:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk29'})
          case 1:
            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk30'})
          case 2:
            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk32'})
          case 3:
            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk31'})
        }
      case 2:
        goto Event60
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_Goron025", sub_name="Pupunda_Ichikara")})


    call Sell()

}

void NPC_Goron025_Go_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Goron025[Pupunda_Ichikara].IsOnInstEventFlag() {
        Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk23'})
        Event78:
        Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk22'})
        switch EventSystemActor.GeneralChoice3() {
          case 0:

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Goron025", sub_name="Pupunda_Ichikara")})

            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk26'})
          case 1:
            Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk06'})
            Event97:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron025_IchikaraFirst'}) {
                    Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk28', 'IsCloseMessageDialog': True})
                    Event103:
                    Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk16'})
                    goto Event97
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron025_IchikaraFirst', 'IsWaitFinish': True})
                    Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk21', 'IsCloseMessageDialog': True})
                    goto Event103
                }
              case 1:
                Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk25', 'IsCloseMessageDialog': True})
                goto Event103
              case 2:
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron025_Greda'}) {
                    Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk15', 'IsCloseMessageDialog': True})
                    goto Event103
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron025_Greda', 'IsWaitFinish': True})
                    Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk14', 'IsCloseMessageDialog': True})
                    goto Event103
                }
              case 3:
                Event83:
                Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk23'})
            }
          case 2:
            goto Event83
        }
    } else {
        Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk20'})
        goto Event78
    }
}

void NPC_Goron025_Go_Near() {
    switch Npc_Goron025[Pupunda_Ichikara].CheckActorAction13() {
      case 8:
        Event90:
        Npc_Goron025[Pupunda_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:near03', 'IsChecked': False, 'DispFrame': 90})
      case 9:
        goto Event90
    }
}

void Npc_Goron025_Ride_Near() {
    Npc_Goron025[Pupunda_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Goron025:near06'})
}

void Npc_Goron025_Ride_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk33', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 1:
        Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk34', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 2:
        Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk35', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 3:
        Npc_Goron025[Pupunda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron025:talk36', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}
