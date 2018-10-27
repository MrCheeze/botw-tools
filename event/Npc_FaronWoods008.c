-------- EventFlow: Npc_FaronWoods008 --------

Actor: Npc_FaronWoods008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOwnedHorseAssociated', 'CheckTypeOfWildHorseAssociated', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_FaronWoods008.CheckActorAction13() {
      case 0:
        Event2:
        switch Npc_FaronWoods008.IsOwnedHorseAssociated({'IsRidden': False}) {
          case 0:
            Event3:
            switch Npc_FaronWoods008.CheckTypeOfWildHorseAssociated() {
              case 0:
                Event6:
                Npc_FaronWoods008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_FaronWoods008:talk04'})
              case 1:
                goto Event6
              case 2:
                goto Event6
              case 3:
                Event19:
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    Npc_FaronWoods008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods008:talk00', 'IsWaitFinish': True, 'ASName': ''})
                  case 1:
                    Npc_FaronWoods008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_FaronWoods008:talk01'})
                  case 2:
                    Npc_FaronWoods008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_FaronWoods008:talk02'})
                  case 3:
                    Npc_FaronWoods008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_FaronWoods008:talk03'})
                }
              case 4:
                goto Event6
              case 5:
                goto Event6
              case 6:
                goto Event6
              case 7:
                goto Event6
            }
          case 1:
            goto Event3
          case 2:
            goto Event19
          case 3:
            goto Event3
          case 4:
            goto Event3
        }
      case 1:
        goto Event2
      case 2:
        goto Event2
      case 3:
        goto Event2
      case 4:
        goto Event2
      case 5:
        goto Event2
      case 6:
        goto Event2
      case 7:
        goto Event2
      case 8:
        goto Event2
      case 9:
        goto Event2
      case 10:
        goto Event2
      case 11:
        Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk11'})
        Npc_FaronWoods008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:talk12'})
      case 12:
        goto Event2
      case 13:
        goto Event2
    }
}

void Near() {
    if Npc_FaronWoods008.CheckActorAction13() == 11 {
        Npc_FaronWoods008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_GiantHorse:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}
