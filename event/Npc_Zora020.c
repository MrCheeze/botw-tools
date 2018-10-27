-------- EventFlow: Npc_Zora020 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_FlagON', 'Demo_AutoSave', 'Demo_CallDemo', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge']
queries: ['CheckRupee', 'GeneralChoice4', 'CheckWeather', 'CheckTimeType', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora020
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora020_Talk'}) {
        Event126:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1, 2, 3, 4, 5]:
            Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk03'})
            Event217:
            EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
            EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})
            Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk00'})
            Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk23'})
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
            Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk08'})
            Event107:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.CheckRupee({'Value': 20}) {
                    Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk11'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk13'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk16'})
                        Event225:
                        EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                      case 1:
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk14'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk17'})
                        goto Event225
                      case 2:
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk15'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk18'})
                        goto Event225
                      case 3:
                        Event147:
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk09'})
                        Event222:
                        EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                    }
                } else {
                    Event108:
                    Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk10'})
                    goto Event222
                }
              case 1:
                if EventSystemActor.CheckRupee({'Value': 80}) {
                    Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk12'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -80})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk13'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_MorningExtraZora', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk19'})
                        Event228:
                        EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora020_HappyBed'})
                        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                      case 1:
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -80})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk14'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NoonExtraZora', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk20'})
                        goto Event228
                      case 2:
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -80})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk15'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NightExtraZora', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk21'})
                        goto Event228
                      case 3:
                        goto Event147
                    }
                } else {
                    goto Event108
                }
              case 2:
                Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk22'})
                goto Event107
              case 3:
                goto Event147
            }
          case [6, 7]:
            Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk04'})
            goto Event217
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora020_Talk', 'IsWaitFinish': True})
        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk24'})
        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk05'})
        goto Event217
    }
}

void Water_Relic_RainStop_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora020_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora020_RainFirst'}) {
            goto Event126
        } else
        switch EventSystemActor.CheckWeather() {
          case 0:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora020_RainFirst', 'IsWaitFinish': True})
            Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk06'})
            goto Event217
          case [1, 2, 3]:
            goto Event126
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora020_Talk', 'IsWaitFinish': True})
        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk24'})
        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk05'})
        goto Event217
    }
}

void Water_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora020_NormalFirst'}) {
        goto Event126
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora020_NormalFirst'})
        Npc_Zora020.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora020:talk07'})
        goto Event217
    }
}
