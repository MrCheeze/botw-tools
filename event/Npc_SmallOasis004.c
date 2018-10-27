-------- EventFlow: Npc_SmallOasis004 --------

Actor: Npc_SmallOasis004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_AutoSave', 'Demo_CallDemo', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge']
queries: ['CheckRupee', 'GeneralChoice4', 'CheckFlag', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Defeat'}) {
        Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk14'})
        Event70:
        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
        EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
        Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk19'})
        Event18:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckRupee({'Value': 20}) {
                Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk04', 'IsOverWriteLabelActorName': False})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk06', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk08', 'IsOverWriteLabelActorName': False})
                    Event73:
                    EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                  case 1:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk06', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk09', 'IsOverWriteLabelActorName': False})
                    goto Event73
                  case 2:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk06', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_SmallOasis004.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk10', 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True})
                    goto Event73
                  case 3:
                    Event61:

                    call cancel()

                }
            } else {
                Event4:
                Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk03', 'IsOverWriteLabelActorName': False})
                goto Event61
            }
          case 1:
            if EventSystemActor.CheckRupee({'Value': 40}) {
                Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk05', 'IsOverWriteLabelActorName': False})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -40, 'IsWaitFinish': False})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk07', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_MorningExtra', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk11', 'IsOverWriteLabelActorName': False})
                    goto Event73
                  case 1:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -40, 'IsWaitFinish': False})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk07', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NoonExtra', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk12', 'IsOverWriteLabelActorName': False})
                    goto Event73
                  case 2:
                    EventSystemActor.Demo_IncreaseRupee({'Value': -40, 'IsWaitFinish': False})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk07', 'IsOverWriteLabelActorName': False})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NightExtra', 'EndFade': 0})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                    Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk13', 'IsOverWriteLabelActorName': False})
                    goto Event73
                  case 3:
                    goto Event61
                }
            } else {
                goto Event4
            }
          case 2:
            Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk15', 'IsCloseMessageDialog': True})
            Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk16'})
            goto Event18
          case 3:
            Event59:
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
                Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk17'})
                Event72:
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
            } else {
                Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk02', 'IsOverWriteLabelActorName': False})
                goto Event72
            }
        }
    } else
    if Npc_SmallOasis004.IsOnInstEventFlag() {
        Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk18'})
        goto Event70
    } else {
        Npc_SmallOasis004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:Talk01', 'IsOverWriteLabelActorName': False})
        goto Event70
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Defeat'}) {
        Npc_SmallOasis004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:near01'})
    } else {
        Npc_SmallOasis004.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis004:near00'})
    }
}

void cancel() {
    goto Event59
}
