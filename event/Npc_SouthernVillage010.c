-------- EventFlow: Npc_SouthernVillage010 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_AppearRupee', 'Demo_IncreaseRupee']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckWeather', 'RandomChoice8', 'RandomChoice2', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SouthernVillage010
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage010.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage010_IsTalked'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage010_LoanRupee'}) {

                    call ResultLoanRupee()

                } else {
                    Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk04'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage010_IsTalked', 'IsWaitFinish': True})
                Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk00'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                } else {
                    Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk02'})
                }
            }
          case [1, 2, 3]:

            call LoanRupee()

        }
      case 10:
        Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk05'})
      case 11:
        Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk03'})
    }
}

void Near() {
    switch Npc_SouthernVillage010.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        if EventSystemActor.CheckWeather() in [1, 2, 3] {
            Npc_SouthernVillage010.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:Near00'})
        }
      case 11:
        Npc_SouthernVillage010.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:Near01'})
    }
}

void LoanRupee() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage010_LoanRupee'}) {

        call ResultLoanRupee()

    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage010_FirstLoanRupee'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage010_IsTalked'}) in [1, 0] {
            Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk10'})
            if !EventSystemActor.GeneralChoice2() {

                call LoanRupeeOn()

            } else {
                Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk09'})
            }
        }
    } else {
        Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk18'})
        Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk19'})
        Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk08'})
        if !EventSystemActor.GeneralChoice2() {

            call LoanRupeeOn()

        } else {
            Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk09'})
        }
    }
}

void ResultLoanRupee() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage010_CheckLoanRupee'}) {
        Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk11'})
    } else
    switch EventSystemActor.RandomChoice8() {
      case 0:
        if EventSystemActor.RandomChoice2() in [0, 1] {
            Event57:
            Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk13'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_SourthernVillage010_LoanRupee', 'IsWaitFinish': True})
        }
      case 1:
        if EventSystemActor.RandomChoice2() in [0, 1] {
            goto Event57
        }
      case 2:
        if EventSystemActor.RandomChoice2() in [0, 1] {
            goto Event57
        }
      case 3:
        if EventSystemActor.RandomChoice2() in [0, 1] {
            goto Event57
        }
      case 4:
        if EventSystemActor.RandomChoice2() in [0, 1] {
            goto Event57
        }
      case 5:
        if !EventSystemActor.RandomChoice2() {
            goto Event57
        } else {
            Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk12'})
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            EventSystemActor.Demo_IncreaseRupee({'Value': 1000, 'IsWaitFinish': True})
            EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
            Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk14'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_SourthernVillage010_LoanRupee', 'IsWaitFinish': True})
        }
      case 6:
        if EventSystemActor.RandomChoice2() in [0, 1] {
            goto Event57
        }
      case 7:
        if EventSystemActor.RandomChoice2() in [0, 1] {
            goto Event57
        }
    }
}

void LoanRupeeOn() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'CurrentRupee', 'Value': 100}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage010_FirstLoanRupee'}) {
            Event78:
            Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk15'})
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            EventSystemActor.Demo_IncreaseRupee({'Value': -100, 'IsWaitFinish': True})
            EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
            Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk16'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage010_LoanRupee', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage010_FirstLoanRupee', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage010_CheckLoanRupee', 'IsWaitFinish': True})
        } else {
            Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk20'})
            if !EventSystemActor.GeneralChoice2() {
                goto Event78
            } else {
                Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk09'})
            }
        }
    } else {
        Npc_SouthernVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage010:talk17'})
    }
}
