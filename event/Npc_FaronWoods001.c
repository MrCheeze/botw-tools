-------- EventFlow: Npc_FaronWoods001 --------

Actor: Npc_FaronWoods001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice3', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_FaronWoods001.CheckActorAction13() {
      case 0:
        Event1:
        Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Event4:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            EventSystemActor.Demo_FlagON({'FlagName': 'FironeMini_HorseEnemy_TalkGiantHorse', 'IsWaitFinish': True})
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:talk03'})
            Event8:
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:talk05'})
            goto Event4
          case 1:
            EventSystemActor.Demo_FlagON({'FlagName': 'FironeMini_HorseEnemy_TalkMaron', 'IsWaitFinish': True})
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:talk02'})
            goto Event8
          case 2:
            Npc_FaronWoods001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:talk04'})
        }
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
      case 8:
        goto Event1
      case 9:
        goto Event1
      case 10:
        goto Event1
      case 11:
        Npc_FaronWoods001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FaronWoods001:talk01', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
      case 12:
        goto Event1
      case 13:
        goto Event1
    }
}

void NearSub() {
    switch Npc_FaronWoods001.CheckActorAction13() {
      case 0:
        Event22:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event23:
            Npc_FaronWoods001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:Near00', 'DispFrame': 'DispFrame', 'IsChecked': 'IsChecked'})
          case 2:
            goto Event23
          case 3:
            goto Event23
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_FaronWoods001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:Near01', 'DispFrame': 'DispFrame', 'IsChecked': 'IsChecked'})
          case 1:
            goto Event23
          case 2:
            goto Event23
          case 3:
            goto Event23
        }
      case 2:
        goto Event22
      case 3:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_FaronWoods001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:Near03', 'DispFrame': 'DispFrame', 'IsChecked': 'IsChecked'})
          case 1:
            goto Event23
          case 2:
            goto Event23
          case 3:
            goto Event23
        }
      case 10:
        Npc_FaronWoods001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:Near04', 'DispFrame': 'DispFrame', 'IsChecked': 'IsChecked'})
      case 11:
        Npc_FaronWoods001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_FaronWoods001:Near02'})
    }
}

void Near() {

    call NearSub({'DispFrame': 90, 'IsChecked': False})

}
