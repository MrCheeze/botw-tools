-------- EventFlow: Gerudo_Ch_SandWarm --------

Actor: Npc_oasis028
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_CloseMessageDialog', 'Demo_IncreasePorchItem', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'HasPorchItem', 'CheckFlag', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis036
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisSoldier_C
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisSoldier_A
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisSoldier_B
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_oasis028_Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis028.CheckActorAction13() {
      case 0:
        Event77:
        if Npc_oasis028.IsOnInstEventFlag() {
            Event53:
            if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
                Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_16'})
                Event2:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_06'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SandWarm_Activated', 'IsWaitFinish': True})
                } else {
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_19'})
                }
            } else {
                Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_01'})
                goto Event2
            }
        } else {

            call hello()

            goto Event53
        }
      case 1:
        Npc_OasisSoldier_C.Demo_Join({'IsWaitFinish': True})
        Npc_OasisSoldier_A.Demo_Join({'IsWaitFinish': True})
        Npc_OasisSoldier_B.Demo_Join({'IsWaitFinish': True})
        goto Event77
      case 2:
        goto Event77
      case 3:
        Npc_oasis036.Demo_Join({'IsWaitFinish': True})
        goto Event77
      case 4:
        goto Event77
      case 5:
        goto Event77
      case 6:
        goto Event77
      case 7:
        goto Event77
      case 8:
        goto Event77
      case 9:
        goto Event77
      case 10:
        goto Event77
      case 11:
        Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_12'})
      case 12:
        goto Event77
      case 13:
        goto Event77
    }
}

void Finish_Npc_oasis028_Talk() {
    Event7:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis028.CheckActorAction13() {
      case 0:
        Event9:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Enemy_25', 'Count': 1}) {
            if Npc_oasis028.IsOnInstEventFlag() {
                Event8:
                Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_04', 'IsCloseMessageDialog': True})
                if !EventSystemActor.GeneralChoice2() {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHandOver', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Item_Enemy_25', 'Value': -1, 'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_05'})
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_07', 'ASName': ''})
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_08', 'IsCloseMessageDialog': True, 'ASName': ''})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_18'})
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_09'})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'PutRupee_Gold'})

                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_10'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SandWarm_Finish', 'IsWaitFinish': True})
                } else {
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_02'})
                }
            } else {

                call hello()

                goto Event8
            }
        } else {
            if Npc_oasis028.IsOnInstEventFlag() {
                Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_17'})
                Event20:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_06'})
                } else {
                    Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_19'})
                }
            } else {

                call hello()

                Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_03'})
                goto Event20
            }
        }
      case 1:
        goto Event9
      case 2:
        goto Event9
      case 3:
        goto Event9
      case 4:
        goto Event9
      case 5:
        goto Event9
      case 6:
        goto Event9
      case 7:
        goto Event9
      case 8:
        goto Event9
      case 9:
        goto Event9
      case 10:
        goto Event9
      case 11:
        Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_12'})
      case 12:
        goto Event9
      case 13:
        goto Event9
    }
}

void Ready_Npc_oasis028_Near() {
    Event40:
    switch Npc_oasis028.CheckActorAction13() {
      case 0:
        Event6:
        Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_00', 'IsChecked': True, 'DispFrame': 300})
      case 1:
        Event41:
        Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_02', 'DispFrame': 300})
      case 2:
        goto Event6
      case 3:
        goto Event41
      case 4:
        goto Event6
      case 5:
        goto Event6
      case 6:
        goto Event6
      case 7:
        goto Event41
      case 8:
        goto Event6
      case 9:
        goto Event6
      case 10:
        goto Event6
      case 11:
        Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_00', 'DispFrame': 90, 'IsChecked': False})
      case 12:
        goto Event6
      case 13:
        goto Event6
    }
}

void Finish_Npc_oasis028_NearActorsNear() {
    Event74:
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Enemy_25', 'Count': 1}) {
        Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_02', 'DispFrame': 300})
    } else {
        Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_02', 'DispFrame': 90, 'IsChecked': False})
    }
}

void Finish_Npc_oasis028_Near() {
    Event68:
    switch Npc_oasis028.CheckActorAction13() {
      case 0:
        Event66:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Enemy_25', 'Count': 1}) {
            Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_00', 'IsChecked': True, 'DispFrame': 300})
        } else {
            Event64:
            Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_00', 'DispFrame': 90, 'IsChecked': False})
        }
      case 1:
        Event71:
        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Enemy_25', 'Count': 1}) {
            Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_02', 'DispFrame': 300})
        } else {
            Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_02', 'DispFrame': 90, 'IsChecked': False})
        }
      case 2:
        goto Event66
      case 3:
        goto Event71
      case 4:
        goto Event66
      case 5:
        goto Event66
      case 6:
        goto Event66
      case 7:
        goto Event71
      case 8:
        goto Event66
      case 9:
        goto Event66
      case 10:
        goto Event66
      case 11:
        goto Event64
      case 12:
        goto Event66
      case 13:
        goto Event66
    }
}

void Ready_Npc_oasis028_NearActorsNear() {
    Event65:
    Npc_oasis028.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:near_02', 'DispFrame': 300})
}

void Ready_Npc_oasis028_NearActorsTalk() {
    goto Event0
}

void Finish_Npc_oasis028_NearActorsTalk() {
    goto Event7
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event49:
        Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_13'})
      case 1:
        goto Event49
      case 2:
        Event51:
        Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_15'})
      case 3:
        goto Event51
      case 4:
        goto Event51
      case 5:
        Event50:
        Npc_oasis028.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SandWarm:Talk_14'})
      case 6:
        goto Event50
      case 7:
        goto Event50
    }
}

void Ready_Npc_oasis028_Electric_Relic_Deliver_Talk() {
    goto Event0
}

void Ready_Npc_oasis028_Electric_Relic_Deliver_Near() {
    goto Event40
}

void Ready_Npc_oasis028_Electric_Relic_Deliver_NearActorsTalk() {
    goto Event0
}

void Ready_Npc_oasis028_Electric_Relic_Deliver_NearActorsNear() {
    goto Event65
}

void Finish_Npc_oasis028_Electric_Relic_Deliver_Talk() {
    goto Event7
}

void Finish_Npc_oasis028_Electric_Relic_Deliver_Near() {
    goto Event68
}

void Finish_Npc_oasis028_Electric_Relic_Deliver_NearActorsTalk() {
    goto Event7
}

void Finish_Npc_oasis028_Electric_Relic_Deliver_NearActorsNear() {
    goto Event74
}
