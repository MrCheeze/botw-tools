-------- EventFlow: Npc_oasis006 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_FlagON', 'Demo_AutoSave', 'Demo_CallDemo', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge']
queries: ['CheckRupee', 'GeneralChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis006_talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
            Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk18'})
            Event56:
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
            Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk17'})
            Event67:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.CheckRupee({'Value': 20}) {
                    Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk04', 'IsOverWriteLabelActorName': False})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk06', 'IsOverWriteLabelActorName': False})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk08', 'IsOverWriteLabelActorName': False})
                        Event111:
                        EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                      case 1:
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk06', 'IsOverWriteLabelActorName': False})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk09', 'IsOverWriteLabelActorName': False})
                        goto Event111
                      case 2:
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk06', 'IsOverWriteLabelActorName': False})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk10', 'IsOverWriteLabelActorName': False})
                        goto Event111
                      case 3:
                        Event99:
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk16'})
                        goto Event67
                    }
                } else {
                    Event53:
                    Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk03', 'IsOverWriteLabelActorName': False})
                    Event101:
                    EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                }
              case 1:
                if EventSystemActor.CheckRupee({'Value': 80}) {
                    Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk05', 'IsOverWriteLabelActorName': False})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -80})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk07', 'IsOverWriteLabelActorName': False})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_MorningExtraGerudo', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk11', 'IsOverWriteLabelActorName': False})
                        Event96:
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis006_aroma'})
                        goto Event111
                      case 1:
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -80})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk07', 'IsOverWriteLabelActorName': False})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NoonExtraGerudo', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk12', 'IsOverWriteLabelActorName': False})
                        goto Event96
                      case 2:
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -80})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk07', 'IsOverWriteLabelActorName': False})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NightExtraGerudo', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk13', 'IsOverWriteLabelActorName': False})
                        goto Event96
                      case 3:
                        goto Event99
                    }
                } else {
                    goto Event53
                }
              case 2:
                Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk14', 'IsCloseMessageDialog': True})
                Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk15'})
                goto Event67
              case 3:
                Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk02', 'IsOverWriteLabelActorName': False})
                goto Event101
            }
        } else {
            Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk01', 'IsOverWriteLabelActorName': False})
            goto Event56
        }
    } else {
        Npc_oasis006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis006:Talk19'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis006_talk', 'IsWaitFinish': True})
        goto Event56
    }
}

void Near() {
    Npc_oasis006.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_oasis006:Near01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}
