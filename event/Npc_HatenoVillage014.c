-------- EventFlow: Npc_HatenoVillage014 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_FlagON', 'Demo_AutoSave', 'Demo_FlagOFF', 'Demo_CallDemo', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge', 'Demo_ExitEventPlayer']
queries: ['CheckRupee', 'GeneralChoice4', 'GeneralChoice3', 'CheckPlayerWeaponFired', 'CheckFlag', 'CheckTimeType', 'RandomChoice2', 'RandomChoice4', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage014
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call TsukimiMatome()

    Event51:
    Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk13'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Event166:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk27', 'ASName': ''})
            Event115:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk24', 'ASName': ''})
            } else {
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk22'})
            }
          case 1:
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk28', 'ASName': ''})
            goto Event115
          case 2:
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk29', 'ASName': ''})
            goto Event115
          case 3:
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk30', 'ASName': ''})
            goto Event115
        }
      case 1:
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk18', 'ASName': ''})
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk19'})
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk20', 'ASName': 'Wait'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_LoveInsects_Answer'})
      case 2:
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk16'})
        Event62:
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk17'})
      case 3:
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk15'})
        goto Event62
    }
}

void Near() {
    Event185:
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC014_Ride'}) {
        Npc_HatenoVillage014.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:near00'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC014_Back'}) {
        Npc_HatenoVillage014.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:near01'})
    } else {
        Npc_HatenoVillage014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:near02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Answer_Insects_Tsukimi() {

    call TsukimiMatome()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoNPC014_Favorite'})
    goto Event51
}

void AnswerNear_Insects_Tsukimi() {
    goto Event185
}

void ReportNear_Insects_Tsukimi() {
    goto Event185
}

void FinishNear_Insects_Tsukimi() {
    goto Event185
}

void Inn_Talk() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call TsukimiHello()

    Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk01'})
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
    EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
    Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk25'})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        if EventSystemActor.CheckRupee({'Value': 20}) {
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk04'})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk06'})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk07'})
                Event11:
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk08'})
                Event47:
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk10'})
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
              case 1:
                EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk06'})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                Event139:
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                goto Event11
              case 2:
                EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk06'})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                goto Event139
              case 3:
                Event2:
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk02'})
                Event137:
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
            }
        } else {
            Event4:
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk03'})
            goto Event137
        }
      case 1:
        if EventSystemActor.CheckRupee({'Value': 40}) {
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk05'})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                EventSystemActor.Demo_IncreaseRupee({'Value': -40, 'IsWaitFinish': False})
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk06'})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_MorningExtra', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk07'})
                Event23:
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk09'})
                goto Event47
              case 1:
                EventSystemActor.Demo_IncreaseRupee({'Value': -40, 'IsWaitFinish': False})
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk06'})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NoonExtra', 'EndFade': 0})
                Event141:
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                goto Event23
              case 2:
                EventSystemActor.Demo_IncreaseRupee({'Value': -40, 'IsWaitFinish': False})
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk06'})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NightExtra', 'EndFade': 0})
                goto Event141
              case 3:
                goto Event2
            }
        } else {
            goto Event4
        }
      case 2:
        goto Event2
    }
}

void Finish_Insects_Tsukimi() {
    EventSystemActor.Demo_FlagOFF({'FlagName': 'HatenoNPC014_Ride_Favorite', 'IsWaitFinish': True})

    call TsukimiMatome()

    Event96:
    Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk13'})
    switch EventSystemActor.GeneralChoice4() {
      case 0:

        call TsukimiThink()

        goto Event166
      case 1:

        call TsukimiThink()

        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk19'})
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk20', 'ASName': 'Wait'})
      case 2:
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk16'})
        Event100:
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk17'})
      case 3:
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk15'})
        goto Event100
    }
}

void Report_Insects_Tsukimi() {

    call TsukimiMatome()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoNPC014_Favorite'})
    goto Event96
}

void TsukimiHello() {
    if !Npc_HatenoVillage014.IsOnInstEventFlag() {
        switch EventSystemActor.CheckWeather() {
          case 0:
            switch EventSystemActor.CheckTimeType() {
              case [0, 1]:
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk31'})
              case [2, 3, 4, 5]:
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk32'})
              case [6, 7]:
                Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk33'})
            }
          case [1, 2, 3]:
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk34'})
        }
    }
}

void TsukimiThink() {
    if Npc_HatenoVillage014.IsOnInstEventFlag() {
        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk21', 'ASName': 'Wait'})
        } else {
            Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk23', 'ASName': 'Wait'})
        }
    } else
    if !EventSystemActor.RandomChoice2() {
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk26'})
    } else {
        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk18', 'ASName': ''})
    }
}

void TsukimiMatome() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk00'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC014_Ride'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC014_Ride_2times'}) {
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk12', 'ASName': 'Wait'})
                    Event147:
                    Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk11'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC014_Ride_2times', 'IsWaitFinish': True})
                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
                } else {
                    Npc_HatenoVillage014.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage014:talk14', 'ASName': 'Wait'})
                    goto Event147
                }
            } else {
                goto Event147
            }
        } else
        if !EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC014_Back'}) {

            call Inn_Talk()

            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    }
}
