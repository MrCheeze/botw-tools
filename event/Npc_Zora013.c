-------- EventFlow: Npc_Zora013 --------

Actor: Npc_Zora013
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_ExitEventPlayer', 'Demo_FlagOFF', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice2', 'HasPorchItem', 'GeneralChoice4', 'RandomChoice2', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call RetoganHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora013_First'}) {
        if Npc_Zora013.IsOnInstEventFlag() {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk05'})
        } else {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk06'})
        }
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk07'})
        Event199:
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk53'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora013_First', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraMeet03'}) {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk02'})
            Event99:
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk04'})
            goto Event199
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk51'})
        } else {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk03'})
        }
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk52'})
        goto Event99
    }
}

void Near() {
    Event192:
    switch Npc_Zora013.CheckActorAction13() {
      case [0, 2, 4]:
        Event194:
        Npc_Zora013.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 30, 'MessageId': 'EventFlowMsg/Npc_Zora013:near02', 'IsChecked': False})
      case [1, 3, 5]:
        Event207:
        Npc_Zora013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora013:near00', 'DispFrame': 90, 'IsChecked': False})
      case 10:
        Event193:
        Npc_Zora013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora013:near01', 'DispFrame': 30, 'IsChecked': False})
    }
}

void Water_Relic_Activated_Talk() {
    Event116:

    call RetoganHello()

    if Npc_Zora013.IsOnInstEventFlag() {
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk11'})
    } else {
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk13'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora013_CantGetReward'}) {
        Event184:
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk41'})
        Event173:
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraMini_HarvestingStone_Finish'}) {
            if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 1}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 10}) {
                    EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_G', 'Value': -10})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_A'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora013_Reward'})
                    Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora013:talk42'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Zora013_CantGetReward'})
                } else {
                    Event151:
                    Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk30'})
                    Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk32'})
                    Event154:
                    Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk34'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora013_Count', 'IsWaitFinish': True})
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora013_CantGetReward'})
                Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora013:talk44'})
                Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora013:talk43'})
            }
        } else
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_A', 'Count': 2}) {
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 10}) {
                EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'Item_Ore_G', 'Value': -10})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_A'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora013_Reward'})
                Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora013:talk39'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_A'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora013_Reward'})
                Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora013:talk42'})
                Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora013:talk45'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_HarvestingStone_Finish'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Zora013_OreFinishFirst'})
            } else {
                goto Event151
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora013_OreFinishFirst'})
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora013:talk40'})
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora013:talk43'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora013_OreFinishFirst'}) {
        goto Event184
    } else {
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk14'})
        Event122:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_Zora013.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'IsConfront': True, 'FaceId': 2})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora013_Count'}) {
                Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk33'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk35'})
                    Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk36'})
                    Event137:
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 1}) {
                        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk20', 'ASName': ''})
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 2}) {
                            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk21', 'ASName': ''})
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 3}) {
                                Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk22', 'ASName': ''})
                                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 4}) {
                                    Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk23', 'ASName': ''})
                                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 5}) {
                                        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk24', 'ASName': ''})
                                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 6}) {
                                            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk25', 'ASName': ''})
                                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 7}) {
                                                Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk26', 'ASName': ''})
                                                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 8}) {
                                                    Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk27', 'ASName': ''})
                                                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 9}) {
                                                        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk28', 'ASName': ''})
                                                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Ore_G', 'Count': 10}) {
                                                            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk29', 'ASName': 'Point'})
                                                            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora013_Count', 'IsWaitFinish': True})
                                                            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk37', 'ASName': ''})
                                                            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk38', 'ASName': ''})
                                                            goto Event173
                                                        } else {
                                                            goto Event151
                                                        }
                                                    } else {
                                                        goto Event151
                                                    }
                                                } else {
                                                    goto Event151
                                                }
                                            } else {
                                                goto Event151
                                            }
                                        } else {
                                            goto Event151
                                        }
                                    } else {
                                        goto Event151
                                    }
                                } else {
                                    goto Event151
                                }
                            } else {
                                goto Event151
                            }
                        } else {
                            goto Event151
                        }
                    } else {
                        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk30'})
                        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk31'})
                        goto Event154
                    }
                } else {
                    Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk35'})
                    goto Event154
                }
            } else {
                Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk18'})
                goto Event137
            }
          case 1:
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk15'})
            Event126:
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk17'})
            goto Event122
          case 2:
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk16'})
            goto Event126
          case 3:
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk19'})
        }
    }
}

void Water_Relic_Activated_Near() {
    goto Event192
}

void RetoganHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora013.CheckActorAction13() {
      case 0:
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk47'})
        Event96:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk46'})
        } else {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk54'})
        }
        goto Event96
      case 11:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk01'})
        } else {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk00', 'IsCloseMessageDialog': False})
        }
        goto Event96
    }
}

void ReadyNear_RetoganGetStone() {
    switch Npc_Zora013.CheckActorAction13() {
      case [0, 2, 4]:
        goto Event194
      case [1, 3, 5]:
        Event210:
        Npc_Zora013.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora013:near00', 'DispFrame': 300, 'IsChecked': True})
      case 10:
        goto Event193
    }
}

void FinishNear_RetoganGetStone() {
    switch Npc_Zora013.CheckActorAction13() {
      case [0, 2, 4]:
        goto Event194
      case [1, 3, 5]:
        if EventSystemActor.HasPorchItem({'Count': 10, 'PorchItemName': 'Item_Ore_G'}) {
            goto Event210
        } else {
            goto Event207
        }
      case 10:
        goto Event193
    }
}

void Ready_RetoganGetStone() {

    call RetoganHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora013_First'}) {
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk11'})
        Event112:
        if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk10'})
        } else {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk08'})
        }
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk12'})
        Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk09'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ZoraMini_HarvestingStone_Activated'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora013_First', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraMeet03'}) {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk02'})
        } else {
            Npc_Zora013.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora013:talk03'})
        }
        goto Event112
    }
}

void Finish_RetoganGetStone() {
    goto Event116
}
