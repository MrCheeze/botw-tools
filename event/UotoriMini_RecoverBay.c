-------- EventFlow: UotoriMini_RecoverBay --------

Actor: Npc_SouthernVillage006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_AdvanceQuest']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_SouthernVillage006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage006.CheckActorAction13() {
      case 0:
        Event44:
        if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_RecoverBay_Exterminate'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_RecoverBay_IsTalked'}) {
                Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk12'})
                Event59:
                EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'IsWaitFinish': True, 'QuestName': '', 'StepName': ''})
                Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk11'})
                Event25:
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_RecoverBay_GetReward'})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk04'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_RecoverBay_Finish'})
            } else {
                Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk00'})
                Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk13'})
                goto Event59
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'UotoriMini_RecoverBay_IsTalked'}) {
                Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk01'})
                Event15:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk07'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'UotoriMini_RecoverBay_IsTalked', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UotoriMini_RecoverBay_Activated'})
                } else {
                    Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk08'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'UotoriMini_RecoverBay_IsTalked', 'IsWaitFinish': True})
                }
            } else {
                Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk00'})
                Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk10'})
                goto Event15
            }
        }
      case 1:
        goto Event44
      case 2:
        goto Event44
      case 3:
        goto Event44
      case 4:
        goto Event44
      case 5:
        goto Event44
      case 6:
        goto Event44
      case 7:
        goto Event44
      case 8:
        goto Event44
      case 9:
        goto Event44
      case 10:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk06'})
      case 11:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk05'})
      case 12:
        goto Event44
      case 13:
        goto Event44
    }
}

void Finish_Npc_SouthernVillage006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage006.CheckActorAction13() {
      case 0:
        Event6:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk03'})
        goto Event25
      case 1:
        goto Event6
      case 2:
        goto Event6
      case 3:
        goto Event6
      case 4:
        goto Event6
      case 5:
        goto Event6
      case 6:
        goto Event6
      case 7:
        goto Event6
      case 8:
        goto Event6
      case 9:
        goto Event6
      case 10:
        goto Event6
      case 11:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk05'})
      case 12:
        goto Event6
      case 13:
        goto Event6
    }
}

void Exterminate_Npc_SouthernVillage006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage006.CheckActorAction13() {
      case 0:
        Event42:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk02'})
          case 1:
            Event5:
            Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk09'})
          case 2:
            goto Event5
          case 3:
            goto Event5
        }
      case 1:
        goto Event42
      case 2:
        goto Event42
      case 3:
        goto Event42
      case 4:
        goto Event42
      case 5:
        goto Event42
      case 6:
        goto Event42
      case 7:
        goto Event42
      case 8:
        goto Event42
      case 9:
        goto Event42
      case 10:
        goto Event42
      case 11:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk05'})
      case 12:
        goto Event42
      case 13:
        goto Event42
    }
}

void Ready_Npc_SouthernVillage006_Near() {
    switch Npc_SouthernVillage006.CheckActorAction13() {
      case 0:
        Event36:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event31:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near02', 'IsChecked': True, 'DispFrame': 300})
          case 1:
            Event38:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near03'})
          case 2:
            goto Event38
          case 3:
            goto Event38
        }
      case 1:
        goto Event36
      case 4:
        goto Event36
      case 5:
        goto Event31
      case 6:
        goto Event31
      case 7:
        goto Event31
      case 10:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near00'})
      case 11:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Finish_Npc_SouthernVillage006_Near() {
    switch Npc_SouthernVillage006.CheckActorAction13() {
      case 0:
        Event55:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event53:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near02', 'IsChecked': True, 'DispFrame': 300})
          case 1:
            Event56:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near03'})
          case 2:
            goto Event56
          case 3:
            goto Event56
        }
      case 1:
        goto Event55
      case 4:
        goto Event55
      case 5:
        goto Event53
      case 6:
        goto Event53
      case 7:
        goto Event53
      case 10:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near00', 'IsChecked': True, 'DispFrame': 300})
      case 11:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Exterminate_Npc_SouthernVillage006_Near() {
    switch Npc_SouthernVillage006.CheckActorAction13() {
      case 0:
        Event39:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event40:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near03'})
          case 2:
            goto Event40
          case 3:
            goto Event40
        }
      case 1:
        goto Event39
      case 4:
        goto Event39
      case 10:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near00'})
      case 11:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}
