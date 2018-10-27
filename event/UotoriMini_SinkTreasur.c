-------- EventFlow: UotoriMini_SinkTreasure --------

Actor: Npc_SouthernVillage013
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_SouthernVillage013_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage013.CheckActorAction13() {
      case 0:
        Event52:

        call Npc_SouthernVillage013.NormalTalk()

      case 1:
        goto Event52
      case 2:
        goto Event52
      case 3:
        goto Event52
      case 4:
        goto Event52
      case 5:
        goto Event52
      case 6:
        goto Event52
      case 7:
        goto Event52
      case 8:
        goto Event52
      case 9:
        goto Event52
      case 10:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk13'})
      case 11:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk04'})
      case 12:
        goto Event52
      case 13:
        goto Event52
    }
}

void Finish_Npc_SouthernVillage013_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage013.CheckActorAction13() {
      case 0:
        Event3:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk02'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_SinkTreasure_Finish'})
      case 1:
        goto Event3
      case 2:
        goto Event3
      case 3:
        goto Event3
      case 4:
        goto Event3
      case 5:
        goto Event3
      case 6:
        goto Event3
      case 7:
        goto Event3
      case 8:
        goto Event3
      case 9:
        goto Event3
      case 10:
        goto Event3
      case 11:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk04'})
      case 12:
        goto Event3
      case 13:
        goto Event3
    }
}

void Salvage_Npc_SouthernVillage013_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage013.CheckActorAction13() {
      case 0:
        Event53:

        call Npc_SouthernVillage013.NormalTalk()

      case 1:
        goto Event53
      case 2:
        goto Event53
      case 3:
        goto Event53
      case 4:
        goto Event53
      case 5:
        goto Event53
      case 6:
        goto Event53
      case 7:
        goto Event53
      case 8:
        goto Event53
      case 9:
        goto Event53
      case 10:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk13'})
      case 11:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk04'})
      case 12:
        goto Event53
      case 13:
        goto Event53
    }
}

void Ready_Npc_SouthernVillage013_Near() {
    Event12:
    switch Npc_SouthernVillage013.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event42:
            Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near03', 'DispFrame': 300, 'IsChecked': True})
          case 2:
            goto Event42
          case 3:
            goto Event42
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near02', 'DispFrame': 300, 'IsChecked': True})
          case 1:
            Event44:
            Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near03', 'DispFrame': 300, 'IsChecked': True})
          case 2:
            goto Event44
          case 3:
            goto Event44
        }
      case 10:
        Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near04'})
      case 11:
        Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Finish_Npc_SouthernVillage013_Near() {
    goto Event12
}

void Salvage_Npc_SouthernVillage013_Near() {
    switch Npc_SouthernVillage013.CheckActorAction13() {
      case 0:
        Event39:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event40:
            Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near03'})
          case 2:
            goto Event40
          case 3:
            goto Event40
        }
      case 1:
        goto Event39
      case 10:
        Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near04'})
      case 11:
        Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}
