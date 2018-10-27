-------- EventFlow: Npc_SmallOasis008 --------

Actor: Npc_SmallOasis008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_SwitchPlayerEquipment', 'Demo_IncreaseRupee', 'Demo_FlagON', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckFlag', 'HasPorchItem', 'GeneralChoice4', 'CheckRupee', 'CheckAddPorchItem', 'CheckEquipArmorSeriesType', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SmallOasis008_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_SmallOasis008_Fisrt_boy'}) {
            Event189:
            if Npc_SmallOasis008.IsOnInstEventFlag() {
                Event86:
                Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk04'})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk06'})

                        fork {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        } {
                            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk22'})
                        }

                    } else {
                        Event64:
                        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_053_Lower'}) {
                            if EventSystemActor.HasPorchItem({'PorchItemName': 'Armor_053_Head', 'Count': 1}) {
                                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_053_Upper'}) {
                                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk05', 'IsCloseMessageDialog': True})
                                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                    EventSystemActor.Demo_SwitchPlayerEquipment({'PorchItemName_ArmorHead': 'Armor_053_Head', 'PorchItemName_ArmorUpper': 'Armor_053_Upper', 'PorchItemName_ArmorLower': 'Armor_053_Lower', 'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_Arrow': ''})
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
                                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk01'})

                                    fork {
                                        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                                    } {
                                        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk21'})
                                    }

                                } else {
                                    Event232:

                                    call buy()

                                }
                            } else {
                                goto Event232
                            }
                        } else {
                            goto Event232
                        }
                    }
                } else {

                    call buy()

                }
            } else {
                Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:Npc_SmallOasis008_007'})
                goto Event86
            }
        } else {
            Event187:
            if Npc_SmallOasis008.IsOnInstEventFlag() {
                Event78:
                Npc_SmallOasis008.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SmallOasis008:Npc_SmallOasis008_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk03', 'IsCloseMessageDialog': True})

                    fork {
                        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    } {
                        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk20'})
                    }

                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk15'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SmallOasis008_Talk', 'IsWaitFinish': True})
                } else {
                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk00'})
                    if !EventSystemActor.GeneralChoice2() {

                        call change()

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SmallOasis008_Fisrt_boy'})
                    } else {
                        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk02'})

                        fork {
                            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        } {
                            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk18', 'IsCloseMessageDialog': True})
                        }

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SmallOasis008_Fisrt_boy'})
                    }
                }
            } else {
                Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:Npc_SmallOasis008_006'})
                goto Event78
            }
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_SmallOasis008_Fisrt_boy'}) {
            goto Event189
        } else {
            goto Event187
        }
    }
}

void Near() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event203:
        switch Npc_SmallOasis008.CheckActorAction13() {
          case 1:
            Event205:
            Npc_SmallOasis008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:Near_02'})
          case 3:
            Event206:
            Npc_SmallOasis008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:Near_03'})
          case 9:
            Event207:
            Npc_SmallOasis008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:Near_04'})
        }
      case 1:
        goto Event203
      case 2:
        Event10:
        Npc_SmallOasis008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:Near_00', 'IsChecked': False, 'DispFrame': 90})
      case 3:
        goto Event10
      case 4:
        Event204:
        switch Npc_SmallOasis008.CheckActorAction13() {
          case 1:
            goto Event205
          case 3:
            goto Event206
          case 9:
            goto Event207
        }
      case 5:
        goto Event204
      case 6:
        Event174:
        Npc_SmallOasis008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:Near_01'})
      case 7:
        goto Event174
    }
}

void buy() {
    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Armor_053_Upper', 'Count': 1}) {
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_053_Head'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_053_Lower'}) {
                Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk07'})
                Event114:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk09', 'IsCloseMessageDialog': True})
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckRupee({'Value': 200}) {
                            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -200})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Armor_053_Head'})

                            Event229:
                            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_053_Head'}) {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_053_Lower'}) {
                                    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Armor_053_Upper', 'Count': 1}) {
                                        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk12'})
                                        goto Event114
                                    } else {
                                        Event154:
                                        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk16'})
                                        if !EventSystemActor.GeneralChoice2() {

                                            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_SmallOasis008")})

                                            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk23'})
                                        } else {
                                            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk17'})
                                        }
                                    }
                                } else {
                                    goto Event154
                                }
                            } else {
                                goto Event154
                            }
                        } else {
                            Event147:
                            Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk08'})

                            fork {
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                            } {
                                Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk19'})
                            }

                            if !EventSystemActor.GeneralChoice2() {

                                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_SmallOasis008")})

                                Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk14'})
                            } else {
                                Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk17'})
                            }
                        }
                    } else {
                        Event136:
                        Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk13'})
                        goto Event114
                    }
                  case 1:
                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk10', 'IsCloseMessageDialog': True})
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckRupee({'Value': 200}) {
                            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -200})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Armor_053_Upper'})

                            goto Event229
                        } else {
                            goto Event147
                        }
                    } else {
                        goto Event136
                    }
                  case 2:
                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk11', 'IsCloseMessageDialog': True})
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckRupee({'Value': 200}) {
                            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -200})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Armor_053_Lower'})

                            goto Event229
                        } else {
                            goto Event147
                        }
                    } else {
                        goto Event136
                    }
                  case 3:
                    Npc_SmallOasis008.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis008:talk17'})
                }
            } else {
                goto Event154
            }
        } else {
            goto Event154
        }
    } else {
        goto Event154
    }
}

void change() {
    goto Event64
}
