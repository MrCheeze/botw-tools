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
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
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
        } else
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
      case 10:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk06'})
      case 11:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk05'})
    }
}

void Finish_Npc_SouthernVillage006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage006.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk03'})
        goto Event25
      case 11:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk05'})
    }
}

void Exterminate_Npc_SouthernVillage006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage006.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk02'})
          case [1, 2, 3]:
            Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk09'})
        }
      case 11:
        Npc_SouthernVillage006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:talk05'})
    }
}

void Ready_Npc_SouthernVillage006_Near() {
    switch Npc_SouthernVillage006.CheckActorAction13() {
      case [0, 1, 4]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event31:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near02', 'IsChecked': True, 'DispFrame': 300})
          case [1, 2, 3]:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near03'})
        }
      case [5, 6, 7]:
        goto Event31
      case 10:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near00'})
      case 11:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Finish_Npc_SouthernVillage006_Near() {
    switch Npc_SouthernVillage006.CheckActorAction13() {
      case [0, 1, 4]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event53:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near02', 'IsChecked': True, 'DispFrame': 300})
          case [1, 2, 3]:
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near03'})
        }
      case [5, 6, 7]:
        goto Event53
      case 10:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near00', 'IsChecked': True, 'DispFrame': 300})
      case 11:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Exterminate_Npc_SouthernVillage006_Near() {
    switch Npc_SouthernVillage006.CheckActorAction13() {
      case [0, 1, 4]:
        if EventSystemActor.CheckWeather() in [1, 2, 3] {
            Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near03'})
        }
      case 10:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near00'})
      case 11:
        Npc_SouthernVillage006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/UotoriMini_RecoverBay:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}
