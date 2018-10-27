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
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:

        call Npc_SouthernVillage013.NormalTalk()

      case 10:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk13'})
      case 11:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk04'})
    }
}

void Finish_Npc_SouthernVillage013_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage013.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk02'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_SinkTreasure_Finish'})
      case 11:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk04'})
    }
}

void Salvage_Npc_SouthernVillage013_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage013.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:

        call Npc_SouthernVillage013.NormalTalk()

      case 10:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk13'})
      case 11:
        Npc_SouthernVillage013.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:talk04'})
    }
}

void Ready_Npc_SouthernVillage013_Near() {
    Event12:
    switch Npc_SouthernVillage013.CheckActorAction13() {
      case 0:
        if EventSystemActor.CheckWeather() in [1, 2, 3] {
            Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near03', 'DispFrame': 300, 'IsChecked': True})
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near02', 'DispFrame': 300, 'IsChecked': True})
          case [1, 2, 3]:
            Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near03', 'DispFrame': 300, 'IsChecked': True})
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
      case [0, 1]:
        if EventSystemActor.CheckWeather() in [1, 2, 3] {
            Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near03'})
        }
      case 10:
        Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near04'})
      case 11:
        Npc_SouthernVillage013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_SinkTreasure:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}
