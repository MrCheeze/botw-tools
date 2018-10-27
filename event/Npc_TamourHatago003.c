-------- EventFlow: Npc_TamourHatago003 --------

Actor: Npc_TamourHatago003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_SetExtraEnergyOfPlayer', 'Demo_StartLifeUpDemo', 'Demo_SetDispStaminaGauge', 'Demo_SetDispHeartGauge', 'Demo_WaitUntilLifeUpDemoEnd']
queries: ['GeneralChoice2', 'RandomChoice4', 'CheckRupee', 'CheckExtraEnergyOfPlayer']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': False, 'IsDisplayEx': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_TamourHatago003.IsOnInstEventFlag() {
        Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk05'})
        Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk13'})
        if !EventSystemActor.GeneralChoice2() {
            Event16:
            Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk04'})
            Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk06'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk04'})
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk07', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckRupee({'Value': 10}) {
                        EventSystemActor.Demo_IncreaseRupee({'Value': -10, 'IsWaitFinish': True})
                        Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk08'})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                        Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk11', 'IsCloseMessageDialog': True})
                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                        switch EventSystemActor.RandomChoice4() {
                          case [0, 1]:
                            switch EventSystemActor.CheckExtraEnergyOfPlayer({'Threshold': 10}) {
                              case [0, 1]:
                                EventSystemActor.Demo_SetExtraEnergyOfPlayer({'IsWaitFinish': True, 'ProcessingMode': 0, 'Value': 5})
                                EventSystemActor.Demo_StartLifeUpDemo({'IsWaitFinish': True})
                                EventSystemActor.Demo_WaitUntilLifeUpDemoEnd({'IsWaitFinish': True})
                                Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk12'})
                                Event31:
                                Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk09'})
                              case 2:
                                Event39:
                                Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk12'})
                                Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk14'})
                                goto Event31
                            }
                          case [2, 3]:
                            goto Event39
                        }
                    } else {
                        Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk10'})
                        Event15:
                        Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk01'})
                    }
                } else {
                    goto Event15
                }
            } else {
                goto Event15
            }
        } else {
            goto Event15
        }
    } else {
        Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk00'})
        Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk02'})
        Npc_TamourHatago003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:talk03'})
        if !EventSystemActor.GeneralChoice2() {
            goto Event16
        } else {
            goto Event15
        }
    }
}

void Near() {
    Npc_TamourHatago003.Demo_TalkToPlayer({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TamourHatago003:near00', 'ASKeyName': 'Wait'})
}
