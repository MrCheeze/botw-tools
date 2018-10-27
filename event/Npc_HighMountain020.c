-------- EventFlow: Npc_HighMountain020 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_AutoSave', 'Demo_CallDemo', 'Demo_OpenClockTime', 'Demo_CloseClockTime', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge']
queries: ['CheckRupee', 'GeneralChoice4', 'CheckWeather', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain020
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event175:
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 0:
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event53:
            Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk12', 'ASName': ''})
            Event57:
            Npc_HighMountain020.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk13', 'IsWaitFinish': True, 'ASName': ''})
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            EventSystemActor.Demo_OpenClockTime({'IsWaitFinish': True})
            Event1:
            Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk00', 'ASName': ''})
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                if EventSystemActor.CheckRupee({'Value': 20}) {
                    Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk03', 'ASName': ''})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk14', 'ASName': ''})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Morning', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk05', 'ASName': ''})
                        Event149:
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk04', 'ASName': ''})
                        EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                      case 1:
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk15', 'ASName': ''})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Noon', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk06', 'ASName': ''})
                        goto Event149
                      case 2:
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk16', 'ASName': ''})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_Night', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk07'})
                        goto Event149
                      case 3:
                        Event6:
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk01', 'ASName': ''})
                        Event178:
                        EventSystemActor.Demo_CloseClockTime({'IsWaitFinish': True})
                    }
                } else {
                    Event3:
                    Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk02', 'ASName': ''})
                    goto Event178
                }
              case 1:
                if EventSystemActor.CheckRupee({'Value': 80}) {
                    Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk03', 'ASName': ''})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -80})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk14', 'ASName': ''})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_MorningExtraRito', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk17', 'ASName': ''})
                        goto Event149
                      case 1:
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -80})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk15', 'ASName': ''})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NoonExtraRito', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk18', 'ASName': ''})
                        goto Event149
                      case 2:
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -80})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk16', 'ASName': ''})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo007_2', 'EntryPointName': 'INN_NightExtraRito', 'EndFade': 0})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk19', 'ASName': ''})
                        goto Event149
                      case 3:
                        goto Event6
                    }
                } else {
                    goto Event3
                }
              case 2:
                Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk20', 'ASName': ''})
                goto Event1
              case 3:
                Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk01', 'ASName': ''})
                goto Event178
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
            Event54:
            Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk11', 'ASName': ''})
            goto Event57
          case 7:
            goto Event54
        }
      case 1:
        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk10', 'ASName': ''})
        goto Event57
      case 2:
        Event51:
        Npc_HighMountain020.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:talk08', 'ASName': ''})
        goto Event57
      case 3:
        goto Event51
    }
}

void Near() {
    Event187:
    Npc_HighMountain020.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain020:near00', 'DispFrame': 90, 'IsChecked': False})
}

void Rito_Npc_HighMountain020_Near_Talk() {
    goto Event175
}

void Rito_Npc_HighMountain020_Near_Near() {
    goto Event187
}
