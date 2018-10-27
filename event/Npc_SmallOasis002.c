-------- EventFlow: Npc_SmallOasis002 --------

Actor: Npc_SmallOasis002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckTimeType', 'GeneralChoice2', 'CheckFlag', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SmallOasis002.CheckActorAction13() {
      case 0:
        Event23:

        call GinemaHello()

        if EventSystemActor.CheckFlag({'FlagName': 'Npc_SmallOasis002_First'}) {
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk12', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                switch EventSystemActor.CheckTimeType() {
                  case 0:
                    Event39:
                    Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk20', 'ASName': ''})
                  case 1:
                    goto Event39
                  case 2:
                    goto Event39
                  case 3:
                    goto Event39
                  case 4:
                    Event33:
                    Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk19', 'ASName': ''})
                  case 5:
                    goto Event33
                  case 6:
                    goto Event33
                  case 7:
                    goto Event33
                }
            } else {
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk15', 'ASName': ''})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SmallOasis002_First', 'IsWaitFinish': True})
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk07', 'ASName': ''})
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk03', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk04', 'ASName': ''})
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk14', 'ASName': ''})
                Event10:
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk06', 'ASName': ''})
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk09', 'ASName': ''})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Oasis_Drug_Challenge_Activated'})
            } else {
                Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk05', 'ASName': ''})
                goto Event10
            }
        }
      case 1:
        goto Event23
      case 2:
        goto Event23
      case 3:
        goto Event23
      case 4:
        goto Event23
      case 5:
        goto Event23
      case 6:
        goto Event23
      case 7:
        goto Event23
      case 8:
        goto Event23
      case 9:
        goto Event23
      case 10:
        goto Event23
      case 11:
        if Npc_SmallOasis002.IsOnInstEventFlag() {
            goto Event23
        } else {
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk10', 'ASName': ''})
            goto Event23
        }
      case 12:
        goto Event23
      case 13:
        goto Event23
    }
}

void GinemaHello() {
    if !Npc_SmallOasis002.IsOnInstEventFlag() {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event24:
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk00', 'ASName': ''})
          case 1:
            goto Event24
          case 2:
            Event1:
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk01', 'ASName': ''})
          case 3:
            goto Event1
          case 4:
            goto Event1
          case 5:
            goto Event1
          case 6:
            Event3:
            Npc_SmallOasis002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:talk02', 'ASName': ''})
          case 7:
            goto Event3
        }
    }
}

void Near() {
    if Npc_SmallOasis002.CheckActorAction13() == 11 {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near02', 'IsChecked': False})
          case 1:
            Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near03', 'IsChecked': False})
          case 2:
            Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near04', 'IsChecked': False})
          case 3:
            Npc_SmallOasis002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_SmallOasis002:near05', 'IsChecked': False})
        }
    }
}
