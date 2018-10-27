-------- EventFlow: Npc_Zora011 --------

Actor: Npc_Zora011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_IncreasePorchItem', 'Demo_SetGameDataInt', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckWeather', 'GeneralChoice4', 'HasPorchItem', 'CheckAddPorchItem', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event18:

    call PonteHello()

    if Npc_Zora011.IsOnInstEventFlag() {
        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk01', 'IsCloseMessageDialog': False})
        Event38:
        switch Npc_Zora011.CheckActorAction13() {
          case 0:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora011_Father', 'IsWaitFinish': True})
            if Npc_Zora011.IsOnInstEventFlag() {
                Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk06', 'IsCloseMessageDialog': False})
                Event42:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk21', 'IsCloseMessageDialog': True})
                    Npc_Zora011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk19'})
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_A', 'Count': 5}) {
                        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk27', 'IsCloseMessageDialog': False})
                        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_PlantGet_H'}) {
                            EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Animal_Insect_A', 'Value': -5, 'IsWaitFinish': True})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_PlantGet_H'})

                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Zora_FlogMini_Getitem'})
                            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk34'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Zora_FlogMini_Finish'})
                        } else {
                            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk33'})
                        }
                    } else {
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_A', 'Count': 4}) {
                            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk26', 'IsCloseMessageDialog': False})
                            EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'Npc_Zora011_HaveFrog', 'Value': 4, 'IsWaitFinish': True})
                            Event159:
                            EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk28', 'IsCloseMessageDialog': False})
                            Event155:
                            switch EventSystemActor.CheckWeather() {
                              case 0:
                                Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk32'})
                                Event158:
                                Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk31'})
                              case 1:
                                Event157:
                                Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk30'})
                                goto Event158
                              case 2:
                                goto Event157
                              case 3:
                                goto Event157
                            }
                        } else {
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_A', 'Count': 3}) {
                                Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk25', 'IsCloseMessageDialog': False})
                                EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'Npc_Zora011_HaveFrog', 'Value': 3, 'IsWaitFinish': True})
                                goto Event159
                            } else {
                                if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_A', 'Count': 2}) {
                                    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk24', 'IsCloseMessageDialog': False})
                                    EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'Npc_Zora011_HaveFrog', 'Value': 2, 'IsWaitFinish': True})
                                    goto Event159
                                } else {
                                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_A', 'Count': 1}) {
                                        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk23', 'IsCloseMessageDialog': False})
                                        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'Npc_Zora011_HaveFrog', 'Value': 1, 'IsWaitFinish': True})
                                        goto Event159
                                    } else {
                                        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk22'})
                                        goto Event155
                                    }
                                }
                            }
                        }
                    }
                  case 1:
                    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk16', 'IsCloseMessageDialog': True})
                    Event45:
                    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk14', 'IsCloseMessageDialog': False})
                    goto Event42
                  case 2:
                    if EventSystemActor.CheckFlag({'FlagName': 'ZoraMini_FlowedWife_Finish'}) {
                        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk35', 'IsCloseMessageDialog': True})
                        goto Event45
                    } else {
                        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk13', 'IsCloseMessageDialog': True})
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora011_Father'}) {
                            if !EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora011_GotFrog'}) {
                                goto Event45
                            }
                        } else {
                            goto Event45
                        }
                    }
                  case 3:
                    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk15', 'IsCloseMessageDialog': False})
                }
            } else {
                Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk05', 'IsCloseMessageDialog': False})
                goto Event42
            }
          case 1:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora011_Father', 'IsWaitFinish': True})
            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk12', 'IsCloseMessageDialog': False})
            goto Event42
          case 12:
            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk11', 'IsCloseMessageDialog': False})
            goto Event42
        }
    } else {
        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk00', 'IsCloseMessageDialog': False})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora011_First'}) {
            goto Event38
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora011_First', 'IsWaitFinish': True})
            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk02', 'IsCloseMessageDialog': False})
            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk07', 'IsCloseMessageDialog': False})
            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk08', 'IsCloseMessageDialog': False})
        }
    }
}

void Water_Relic_Finished_Talk() {

    call PonteHello()

    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk01', 'IsCloseMessageDialog': False})
    if !EventSystemActor.RandomChoice2() {
        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk36'})
        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk37'})
    } else {
        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk39'})
    }
}

void PonteHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora011.CheckActorAction13() {
      case 10:
        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk03', 'IsCloseMessageDialog': False})
        Event23:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case 11:
        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk04', 'IsCloseMessageDialog': False})
        goto Event23
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Zora_FlogMini_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Zora_FlogMini_Finish'}) {
                Event100:
                switch Npc_Zora011.CheckActorAction13() {
                  case 0:
                    Event104:
                    Npc_Zora011.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora011:near01', 'IsChecked': False})
                  case 1:
                    goto Event104
                  case 12:
                    Npc_Zora011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora011:near00', 'DispFrame': 90, 'IsChecked': False})
                }
            } else {
                switch Npc_Zora011.CheckActorAction13() {
                  case 0:
                    Event178:
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_A', 'Count': 5}) {
                        Npc_Zora011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora011:near01', 'DispFrame': 300, 'IsChecked': True})
                    } else {
                        Npc_Zora011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora011:near01', 'DispFrame': 300, 'IsChecked': False})
                    }
                  case 1:
                    goto Event178
                  case 12:
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_A', 'Count': 5}) {
                        Npc_Zora011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora011:near00', 'DispFrame': 300, 'IsChecked': True})
                    } else {
                        Npc_Zora011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora011:near00', 'DispFrame': 300, 'IsChecked': False})
                    }
                }
            }
        } else {
            switch Npc_Zora011.CheckActorAction13() {
              case 0:
                Event183:
                Npc_Zora011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora011:near01', 'DispFrame': 300, 'IsChecked': True})
              case 1:
                goto Event183
              case 12:
                Npc_Zora011.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora011:near00', 'DispFrame': 300, 'IsChecked': True})
            }
        }
    } else {
        goto Event100
    }
}

void FrogPonteReady() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora011.CheckActorAction13() {
      case 0:
        Event89:
        if Npc_Zora011.IsOnInstEventFlag() {
            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk01', 'IsCloseMessageDialog': False})
            Event98:
            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk17', 'IsCloseMessageDialog': False})
            Event99:
            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk18', 'IsCloseMessageDialog': False})
            Event127:
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Zora011_GotFrog'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Zora_FlogMini_Activated', 'IsWaitFinish': True})
        } else {
            Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk00', 'IsCloseMessageDialog': False})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora011_First'}) {
                goto Event98
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora011_First', 'IsWaitFinish': True})
                Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk02', 'IsCloseMessageDialog': False})
                Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk07', 'IsCloseMessageDialog': False})
                if EventSystemActor.CheckFlag({'FlagName': 'ZoraMini_FlowedWife_Finish'}) {
                    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk38'})
                    goto Event127
                } else {
                    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk08', 'IsCloseMessageDialog': False})
                    Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk20', 'IsCloseMessageDialog': False})
                    goto Event99
                }
            }
        }
      case 1:
        goto Event89
      case 10:
        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk03', 'IsCloseMessageDialog': False})
      case 11:
        Npc_Zora011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora011:talk04', 'IsCloseMessageDialog': False})
      case 12:
        goto Event89
    }
}

void FrogPonteFinish() {
    goto Event18
}
