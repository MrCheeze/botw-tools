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
      case 0:
        Event50:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_TerribleThuner_IsTalked'}) {
                Npc_LakeSideHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                Event17:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk09'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThuner_IsTalked'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThunder_Activated'})
                } else {
                    Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk10'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThuner_IsTalked'})
                }
            } else {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk00'})
                goto Event17
            }
          case 1:
            Event31:
            if EventSystemActor.CheckFlag({'FlagName': 'FironeMini_TerribleThuner_IsTalked'}) {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk06'})
                Event34:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk09'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThuner_IsTalked'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThunder_Activated'})
                } else {
                    Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk10'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThuner_IsTalked'})
                }
            } else {
                Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk08'})
                goto Event34
            }
          case 2:
            goto Event31
          case 3:
            goto Event31
        }
      case 1:
        goto Event50
      case 2:
        goto Event50
      case 3:
        goto Event50
      case 4:
        goto Event50
      case 5:
        goto Event50
      case 6:
        goto Event50
      case 7:
        goto Event50
      case 8:
        goto Event50
      case 9:
        goto Event50
      case 10:
        goto Event50
      case 11:
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk05'})
      case 12:
        goto Event50
      case 13:
        goto Event50
    }
}

void Remove_Npc_LakeSideHatago006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case 0:
        Event51:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_LakeSideHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 1:
            Event26:
            Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk07'})
          case 2:
            goto Event26
          case 3:
            goto Event26
        }
      case 1:
        goto Event51
      case 2:
        goto Event51
      case 3:
        goto Event51
      case 4:
        goto Event51
      case 5:
        goto Event51
      case 6:
        goto Event51
      case 7:
        goto Event51
      case 8:
        goto Event51
      case 9:
        goto Event51
      case 10:
        goto Event51
      case 11:
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk05'})
      case 12:
        goto Event51
      case 13:
        goto Event51
    }
}

void Finish_Npc_LakeSideHatago006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case 0:
        Event56:
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk12'})
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk13'})
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk14'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Armor_046_Head'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThunder_GetReward'})
        Npc_LakeSideHatago006.Demo_Talk({'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FironeMini_TerribleThunder_Finish'})
      case 1:
        goto Event56
      case 2:
        goto Event56
      case 3:
        goto Event56
      case 4:
        goto Event56
      case 5:
        goto Event56
      case 6:
        goto Event56
      case 7:
        goto Event56
      case 8:
        goto Event56
      case 9:
        goto Event56
      case 10:
        goto Event56
      case 11:
        Npc_LakeSideHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:talk05'})
      case 12:
        goto Event56
      case 13:
        goto Event56
    }
}

void Ready_Npc_LakeSideHatago006_Near() {
    Event46:
    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case 0:
        Event53:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near00', 'DispFrame': 300, 'IsChecked': True})
          case 1:
            Event49:
            Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near01'})
          case 2:
            goto Event49
          case 3:
            goto Event49
        }
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
        goto Event53
      case 11:
        Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near03'})
      case 12:
        goto Event53
      case 13:
        goto Event53
    }
}

void Remove_Npc_LakeSideHatago006_Near() {
    switch Npc_LakeSideHatago006.CheckActorAction13() {
      case 0:
        Event52:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near00', 'IsChecked': False, 'DispFrame': 90})
          case 1:
            Event44:
            Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near01', 'IsChecked': False, 'DispFrame': 90})
          case 2:
            goto Event44
          case 3:
            goto Event44
        }
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
        goto Event52
      case 11:
        Npc_LakeSideHatago006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FironeMini_TerribleThunder:Near02', 'IsChecked': False, 'DispFrame': 90})
      case 12:
        goto Event52
      case 13:
        goto Event52
    }
}

void Finish_Npc_LakeSideHatago006_Near() {
    goto Event46
}
