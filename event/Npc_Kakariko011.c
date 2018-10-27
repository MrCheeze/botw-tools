-------- EventFlow: Npc_Kakariko011 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_FlagON', 'Demo_AutoSave', 'Demo_CallDemo', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge']
queries: ['GeneralChoice2', 'CheckRupee', 'GeneralChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Kakariko011.IsOnInstEventFlag() {
        Event193:
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
        Event3:
        Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk00', 'IsOverWriteLabelActorName': False, 'ASName': ''})
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckRupee({'Value': 20}) {
                Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk02', 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -20})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk04', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk08', 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                    Event195:
                    EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                    Event182:
                    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko011_Talk'}) {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko011_Talk'})
                    }
                  case 1:
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -20})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk14', 'ASName': 'Wait'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk16', 'ASName': 'Wait'})
                    goto Event195
                  case 2:
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -20})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk15', 'ASName': 'Wait'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk17', 'ASName': 'Wait'})
                    goto Event195
                  case 3:
                    Event53:
                    if Npc_Kakariko011.IsOnInstEventFlag() {
                        Event196:
                        EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                        goto Event182
                    } else {
                        Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk03', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                        goto Event196
                    }
                }
            } else {
                Event7:
                Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk05', 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko011_Talk'}) {
                    goto Event53
                } else {
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk11', 'ASName': 'Wait'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk18'})
                        switch EventSystemActor.GeneralChoice4() {
                          case 0:
                            Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk04', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                            Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk08', 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                            goto Event195
                          case 1:
                            Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk14'})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                            Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk16', 'ASName': 'Wait'})
                            goto Event195
                          case 2:
                            Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk15'})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                            Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk17', 'ASName': 'Wait'})
                            goto Event195
                          case 3:
                            Event172:
                            Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk06', 'ASName': 'Wait'})
                            goto Event53
                        }
                    } else {
                        goto Event172
                    }
                }
            }
          case 1:
            if EventSystemActor.CheckRupee({'Value': 40}) {
                Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk02', 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -40})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk04', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_MorningExtra', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk08', 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                    goto Event195
                  case 1:
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -40})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk14'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NoonExtra', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk16', 'ASName': 'Wait'})
                    goto Event195
                  case 2:
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -40})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk15'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NightExtra', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk17', 'ASName': 'Wait'})
                    goto Event195
                  case 3:
                    goto Event53
                }
            } else {
                goto Event7
            }
          case 2:
            Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk12', 'ASName': 'Wait'})
            goto Event3
          case 3:
            Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk13', 'ASName': 'Wait'})
            goto Event196
        }
    } else {
        Npc_Kakariko011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Talk10', 'IsOverWriteLabelActorName': False, 'ASName': ''})
        goto Event193
    }
}

void Near() {
    Npc_Kakariko011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko011:Near01', 'IsChecked': False, 'DispFrame': 90})
}
