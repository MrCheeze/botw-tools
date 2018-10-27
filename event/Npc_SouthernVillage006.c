-------- EventFlow: Npc_SouthernVillage006 --------

Actor: Npc_SouthernVillage006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage006.CheckActorAction13() {
      case 0:
        Event3:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage006:talk00'})
      case 1:
        goto Event3
      case 2:
        goto Event3
      case 3:
        goto Event3
      case 4:
        goto Event3
      case 5:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage006:talk01'})
      case 6:
        goto Event3
      case 7:
        goto Event3
      case 8:
        goto Event3
      case 9:
        goto Event3
      case 10:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk06'})
      case 11:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk05'})
      case 12:
        goto Event3
      case 13:
        goto Event3
    }
}

void Near() {
    switch Npc_SouthernVillage006.CheckActorAction13() {
      case 0:
        Event7:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event8:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near03'})
          case 2:
            goto Event8
          case 3:
            goto Event8
        }
      case 1:
        goto Event7
      case 4:
        goto Event7
      case 10:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near00'})
      case 11:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}
