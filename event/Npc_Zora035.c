-------- EventFlow: Npc_Zora035 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt', 'Demo_SetGameDataInt', 'Demo_WaitFrame', 'Demo_ExitEventPlayer']
queries: ['CheckFlag', 'RandomChoice2', 'GeneralChoice2', 'CheckGameDataInt', 'CheckAddPorchItem', 'RandomChoiceExceptOnFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora035
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call JiatoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora035_First'}) {
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk05', 'IsCloseMessageDialog': False})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora035_First', 'IsWaitFinish': True})
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk00'})
        Npc_Zora035.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk01', 'IsCloseMessageDialog': False})
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk02', 'IsCloseMessageDialog': False})
        if EventSystemActor.GeneralChoice2() in [0, 1] {
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk03', 'IsCloseMessageDialog': False})
        }
    }
}

void Near() {
    switch Npc_Zora035.CheckActorAction13() {
      case [0, 10]:
        Npc_Zora035.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora035:near00', 'DispFrame': 90, 'IsChecked': False})
      case 1:
        Npc_Zora035.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora035:near01', 'DispFrame': 90, 'IsChecked': False})
    }
}

void Water_Relic_Finished_Near() {
    if Npc_Zora035.CheckActorAction13() {
        Npc_Zora035.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora035:near02', 'DispFrame': 90, 'IsChecked': False})
    }
}

void Water_Relic_Finished_Talk() {

    call JiatoHello()

    Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk15'})
    Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk35'})
}

void Ready_JiatoSekihi() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'AfterTalk_WaterRelic'}) {
        if Npc_Zora035.IsOnInstEventFlag() {
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk15'})
            Event147:
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk16'})
            Event141:
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk12'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk14'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_ReliefSearch_Activated'})
            } else {
                Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk13'})
            }
        } else {
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk17'})
            goto Event147
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AfterTalk_WaterRelic'})
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk09'})
        Npc_Zora035.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'TwnObj_ZoraLithograph_A_01', 'IsValid': True, 'UniqueName': 'ZoraLithograph_Mess_01', 'TurnDirection': 0.0, 'IsConfront': False})
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk10'})
        Npc_Zora035.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk11', 'IsCloseMessageDialog': False})
        goto Event141
    }
}

void Finish_JiatoSekihi() {

    call JiatoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'ZoraMini_ReliefSearch_RewardWait'}) {
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
            Npc_Zora035.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': False, 'IsConfront': True})
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk38'})
            Event177:

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_A'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_ReliefSearch_Finish'})
        } else {
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk37'})
        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Operator': 'GreaterThan', 'Value': 0}) {
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk15'})
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk18'})
        if !EventSystemActor.GeneralChoice2() {
            Event156:
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Operator': 'GreaterThan', 'Value': 1}) {
                Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk20'})
                Event110:

                call Sub_RandomHint()

                Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk32'})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event156
                } else {
                    Event154:
                    Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk19'})
                }
            } else {
                Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk21'})
                goto Event110
            }
        } else {
            goto Event154
        }
    } else {
        Npc_Zora035.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': False, 'IsConfront': True})
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk33', 'IsCloseMessageDialog': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk34', 'IsCloseMessageDialog': True})
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
            goto Event177
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk36'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_ReliefSearch_RewardWait'})
        }
    }
}

void Sub_RandomHint() {
    switch EventSystemActor.RandomChoiceExceptOnFlag({'CheckFlag0': 'ZoraRelief_Check_01', 'CheckFlag1': 'ZoraRelief_Check_02', 'CheckFlag2': 'ZoraRelief_Check_03', 'CheckFlag3': 'ZoraRelief_Check_04', 'CheckFlag4': 'ZoraRelief_Check_05', 'CheckFlag5': 'ZoraRelief_Check_06', 'CheckFlag6': 'ZoraRelief_Check_07', 'CheckFlag7': 'ZoraRelief_Check_08', 'CheckFlag8': 'ZoraRelief_Check_09', 'CheckFlag9': 'ZoraRelief_Check_10'}) {
      case 0:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk22'})
      case 1:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk23'})
      case 2:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk24'})
      case 3:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk25'})
      case 4:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk26'})
      case 5:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk27'})
      case 6:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk28'})
      case 7:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk29'})
      case 8:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk30'})
      case [9, 10]:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk31'})
    }
}

void ReadyNear_JiatoSekihi() {
    if Npc_Zora035.CheckActorAction13() {
        Npc_Zora035.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora035:near01', 'DispFrame': 300, 'IsChecked': True})
    }
}

void Sub_ReliefCounter() {
    if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_01'}) {
        EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
        Event34:
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_02'}) {
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
            Event35:
            if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_03'}) {
                EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
                Event36:
                if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_04'}) {
                    EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
                    Event37:
                    if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_05'}) {
                        EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
                        Event38:
                        if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_06'}) {
                            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
                            Event39:
                            if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_07'}) {
                                EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
                                Event40:
                                if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_08'}) {
                                    EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
                                    Event41:
                                    if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_09'}) {
                                        EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
                                        Event42:
                                        if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_10'}) {
                                            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'ZoraMini_ReliefSearch_Count', 'Value': -1})
                                        }
                                    } else
                                    goto Event42
                                } else
                                goto Event41
                            } else
                            goto Event40
                        } else
                        goto Event39
                    } else
                    goto Event38
                } else
                goto Event37
            } else
            goto Event36
        } else
        goto Event35
    } else
    goto Event34
}

void JiatoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora035.CheckActorAction13() {
      case 0:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk04', 'IsCloseMessageDialog': False})
        Event127:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk06', 'IsCloseMessageDialog': False})
            goto Event127
        } else {
            Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk07', 'IsCloseMessageDialog': False})
            goto Event127
        }
      case 11:
        Npc_Zora035.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora035:talk08', 'IsCloseMessageDialog': False})
        goto Event127
    }
}

void FinishNear_JiatoSekihi() {

    call FinishNear()

}

void FinishNear() {
    if Npc_Zora035.CheckActorAction13() {
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_01'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_02'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_03'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_04'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_05'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_06'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_07'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_08'}) {
                                        if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_09'}) {
                                            if EventSystemActor.CheckFlag({'FlagName': 'ZoraRelief_Check_10'}) {
                                                Npc_Zora035.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora035:near01', 'DispFrame': 300, 'IsChecked': True})
                                            } else {
                                                Event136:
                                                Npc_Zora035.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora035:near01', 'DispFrame': 90, 'IsChecked': False})
                                            }
                                        } else {
                                            goto Event136
                                        }
                                    } else {
                                        goto Event136
                                    }
                                } else {
                                    goto Event136
                                }
                            } else {
                                goto Event136
                            }
                        } else {
                            goto Event136
                        }
                    } else {
                        goto Event136
                    }
                } else {
                    goto Event136
                }
            } else {
                goto Event136
            }
        } else {
            goto Event136
        }
    }
}
