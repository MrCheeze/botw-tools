-------- EventFlow: FironeMini_TerribleThunder --------

Actor: Npc_LakeSideHatago006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_LakeSideHatago006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_TerribleThuner_IsTalked'}) {
                Npc_LakeSideHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            } else {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk00'})
            }
            if !EventSystemActor.GeneralChoice2() {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk09'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThuner_IsTalked'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThunder_Activated'})
            } else {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk10'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThuner_IsTalked'})
            }
          case [1, 2, 3]:
            if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_TerribleThuner_IsTalked'}) {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk06'})
            } else {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk08'})
            }
            if !EventSystemActor.GeneralChoice2() {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk09'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThuner_IsTalked'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThunder_Activated'})
            } else {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk10'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThuner_IsTalked'})
            }
        }
      case 11:
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk05'})
    }
}

void Remove_Npc_LakeSideHatago006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_LakeSideHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case [1, 2, 3]:
            Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk07'})
        }
      case 11:
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk05'})
    }
}

void Finish_Npc_LakeSideHatago006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk12'})
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk13'})
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk14'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Armor_046_Head'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThunder_GetReward'})
        Npc_LakeSideHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThunder_Finish'})
      case 11:
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk05'})
    }
}

void Ready_Npc_LakeSideHatago006_Near() {
    Event46:
    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near00', 'DispFrame': 300, 'IsChecked': True})
          case [1, 2, 3]:
            Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near01'})
        }
      case 11:
        Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near03'})
    }
}

void Remove_Npc_LakeSideHatago006_Near() {
    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near00', 'IsChecked': False, 'DispFrame': 90})
          case [1, 2, 3]:
            Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near01', 'IsChecked': False, 'DispFrame': 90})
        }
      case 11:
        Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Finish_Npc_LakeSideHatago006_Near() {
    goto Event46
}
