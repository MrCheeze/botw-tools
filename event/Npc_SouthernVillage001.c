-------- EventFlow: Npc_SouthernVillage001 --------

Actor: Npc_SouthernVillage001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_AutoSave', 'Demo_CallDemo', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge']
queries: ['CheckRupee', 'GeneralChoice4', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk01', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
    EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
    Npc_SouthernVillage001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk07'})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        if EventSystemActor.CheckRupee({'Value': 20}) {
            Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk06', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -20})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk05', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                Event105:
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
              case 1:
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -20})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk05', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event105
              case 2:
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -20})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk05', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event105
              case 3:
                Event43:
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk03', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                Event103:
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
            }
        } else {
            Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk04', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event103
        }
      case 1:
        if EventSystemActor.CheckRupee({'Value': 40}) {
            Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk06', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -40})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_MorningExtra', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk05', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                Event104:
                EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
              case 1:
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -40})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NoonExtra', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk05', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event104
              case 2:
                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -40})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk02', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NightExtra', 'EndFade': 0})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk05', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event104
              case 3:
                goto Event43
            }
        } else {
            Npc_SouthernVillage001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Talk04', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event103
        }
      case 2:
        goto Event43
    }
}

void Near() {
    Npc_SouthernVillage001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage001:Near00', 'IsChecked': False, 'DispFrame': 90})
}
