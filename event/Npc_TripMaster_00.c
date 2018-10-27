-------- EventFlow: Npc_TripMaster_00 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_FlagOFF', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice3', 'HasPorchItem', 'RandomChoice4', 'CheckAddPorchItem', 'GeneralChoice2', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_TripMaster_00
entrypoint: None()
actions: ['Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_TripMaster_00[TripMaster(Self)]
entrypoint: TripMaster(Self)
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: None

Actor: Npc_TripMaster_00[Random(Self)]
entrypoint: Random(Self)
actions: ['Demo_Talk']
queries: []
params: None

void Talk() {

    call TripMaster({'Self': ActorIdentifier(name="Npc_TripMaster_00")})

}

void TripMaster() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_00_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_1stClear'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_Arrow'}) {
                Event53:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_Insect'}) {

                    fork {
                        EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
                    } {
                        if !EventSystemActor.RandomChoice2() {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_18', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        } else {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_30', 'IsCloseMessageDialog': True})
                        }
                    }

                    Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_31'})
                    Event86:
                    Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_17'})
                    Event16:
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:

                        call Yorozuya_Kaiwa.Zucchi_Konyu({'TableName': 'Normal', 'Self2': 'Self'})

                        Event150:
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TripMaster_Thanks', 'IsWaitFinish': True})
                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_36'})
                        goto Event16
                      case 1:

                        call Yorozuya_Kaiwa.Zucchi_Kaitori({'Self': 'Self'})

                        goto Event150
                      case 2:
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_Thanks'}) {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_02', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False})
                            Event152:
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_TripMaster_Thanks', 'IsWaitFinish': True})
                        } else {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False})
                            goto Event152
                        }
                    }
                } else
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_AA'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_GanbariTalk'}) {

                        fork {
                            EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
                        } {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_19', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        }

                        Event46:
                        switch EventSystemActor.RandomChoice4() {
                          case 0:
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_24', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_16'}) {

                                    call Demo001_0.SetCookResult2({'CookMaterial_01': 'Animal_Insect_F', 'CookMaterial_02': 'Item_Enemy_05'})

                                    Event56:
                                    EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Animal_Insect_AA', 'Value': -1, 'IsWaitFinish': True})
                                    if !EventSystemActor.RandomChoice2() {
                                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_16', 'IsOverWriteLabelActorName': False})
                                        Event55:
                                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TripMaster_Insect', 'IsWaitFinish': True})
                                        Event52:
                                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_25', 'IsOverWriteLabelActorName': False})
                                        goto Event86
                                    } else {
                                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_33'})
                                        goto Event55
                                    }
                                } else {
                                    Event50:
                                    Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_14', 'IsOverWriteLabelActorName': False})
                                    goto Event52
                                }
                            } else {
                                Event51:
                                Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_15', 'IsOverWriteLabelActorName': False})
                                goto Event52
                            }
                          case 1:
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_22', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_02'}) {

                                    call Demo001_0.SetCookResult2({'CookMaterial_02': 'Item_Enemy_05', 'CookMaterial_01': 'Animal_Insect_M'})

                                    goto Event56
                                } else {
                                    goto Event50
                                }
                            } else {
                                goto Event51
                            }
                          case 2:
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_23', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_01'}) {

                                    call Demo001_0.SetCookResult4({'CookMaterial_01': 'Animal_Insect_H', 'CookMaterial_02': 'Animal_Insect_Z', 'CookMaterial_03': 'Item_Mushroom_A', 'CookMaterial_04': 'Item_Enemy_05'})

                                    goto Event56
                                } else {
                                    goto Event50
                                }
                            } else {
                                goto Event51
                            }
                          case 3:
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_10', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_08'}) {

                                    call Demo001_0.SetCookResult3({'CookMaterial_03': 'Item_Enemy_05', 'CookMaterial_01': 'Animal_Insect_A', 'CookMaterial_02': 'Animal_Insect_A'})

                                    goto Event56
                                } else {
                                    goto Event50
                                }
                            } else {
                                goto Event51
                            }
                        }
                    } else {

                        call Random({'Self': 'Self'})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_TripMaster_GanbariTalk'})
                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_09', 'IsOverWriteLabelActorName': False})
                        goto Event46
                    }
                } else
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_G', 'Count': 1}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_SwordTalk'}) {

                        fork {
                            EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
                        } {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_20', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        }

                        Event59:
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TripMaster_Sword', 'IsWaitFinish': True})
                        if !EventSystemActor.RandomChoice2() {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_35'})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_11'}) {

                                    call Demo001_0.SetCookResult4({'CookMaterial_01': 'Animal_Insect_G', 'CookMaterial_02': 'Item_Enemy_07', 'CookMaterial_03': 'Item_Enemy_00', 'CookMaterial_04': 'Item_Enemy_00'})

                                    Event60:
                                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_Sword'}) {
                                        EventSystemActor.Demo_IncreasePorchItem({'Value': -1, 'PorchItemName': 'Animal_Insect_G', 'IsWaitFinish': True})
                                        Event61:
                                        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_TripMaster_Sword', 'IsWaitFinish': True})
                                        if !EventSystemActor.RandomChoice2() {
                                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_13', 'IsOverWriteLabelActorName': False})
                                            goto Event55
                                        } else {
                                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_32'})
                                            goto Event55
                                        }
                                    } else {
                                        EventSystemActor.Demo_IncreasePorchItem({'Value': -1, 'PorchItemName': 'Animal_Insect_P', 'IsWaitFinish': True})
                                        goto Event61
                                    }
                                } else {
                                    Event44:
                                    Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_14', 'IsOverWriteLabelActorName': False})
                                    goto Event52
                                }
                            } else {
                                Event45:
                                Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_12', 'IsOverWriteLabelActorName': False})
                                goto Event52
                            }
                        } else {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_08', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_G_05'}) {

                                    call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Mushroom_L', 'CookMaterial_02': 'Item_Meat_01', 'CookMaterial_03': 'Item_Material_03', 'CookMaterial_04': 'Item_Ore_H'})

                                    goto Event60
                                } else {
                                    goto Event44
                                }
                            } else {
                                goto Event45
                            }
                        }
                    } else {

                        call Random({'Self': 'Self'})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_TripMaster_SwordTalk'})
                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_05', 'IsOverWriteLabelActorName': False})
                        goto Event59
                    }
                } else
                if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_P'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_ArmorTalk'}) {

                        fork {
                            EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
                        } {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_21', 'IsOverWriteLabelActorName': False})
                        }

                        Event157:
                        if !EventSystemActor.RandomChoice2() {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_07', 'IsOverWriteLabelActorName': False})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_12'}) {

                                    call Demo001_0.SetCookResult4({'CookMaterial_01': 'Animal_Insect_P', 'CookMaterial_02': 'Item_Enemy_07', 'CookMaterial_03': 'Item_Enemy_00', 'CookMaterial_04': 'Item_Enemy_00'})

                                    goto Event60
                                } else {
                                    goto Event44
                                }
                            } else {
                                goto Event45
                            }
                        } else {
                            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_34'})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_N_03'}) {

                                    call Demo001_0.SetCookResult4({'CookMaterial_01': 'Item_Plant_H', 'CookMaterial_02': 'Item_Material_04', 'CookMaterial_03': 'Item_Material_06', 'CookMaterial_04': 'Item_Ore_H'})

                                    goto Event60
                                } else {
                                    goto Event44
                                }
                            } else {
                                goto Event45
                            }
                        }
                    } else {

                        call Random({'Self': 'Self'})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_TripMaster_ArmorTalk'})
                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_06', 'IsOverWriteLabelActorName': False})
                        goto Event157
                    }
                } else
                if Npc_TripMaster_00[TripMaster(Self)].IsOnInstEventFlag() {
                    if !EventSystemActor.RandomChoice2() {
                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_04', 'IsOverWriteLabelActorName': False})
                        goto Event86
                    } else {
                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_26'})
                        goto Event86
                    }
                } else {
                    Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_03', 'IsOverWriteLabelActorName': True})
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_02_Talk'}) {

                        call Npc_TripMaster_02.TripMaster_02_Talk({'Self': 'Self'})

                        goto Event86
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_TripMaster_15_Talk'}) {

                        call Npc_TripMaster_15.TripMaster_15_Talk({'Self': 'Self'})

                        goto Event86
                    } else {
                        goto Event86
                    }
                }
            } else {

                fork {
                    EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
                } {
                    Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_talk_17', 'IsCloseMessageDialog': True})
                }

                Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_talk_20'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Obj_AncientArrow_A_01'}) {

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_AncientArrow_A_01'})

                    Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_talk_18'})
                    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor002_First'}) {
                        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_talk_19'})
                        Event109:
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TripMaster_Arrow', 'IsWaitFinish': True})
                        goto Event52
                    } else {
                        goto Event109
                    }
                } else {
                    Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_14', 'IsOverWriteLabelActorName': False})
                    goto Event52
                }
            }
        } else
        goto Event53
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TripMaster_00_Talk', 'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
        } {
            Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_00', 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        }

        Npc_TripMaster_00[TripMaster(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_37'})
        goto Event16
    }
}

void Near() {
    if Npc_TripMaster_00.CheckActorAction13() in [0, 1, 2, 12] {
        Npc_TripMaster_00.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Near', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Random() {

    fork {
        EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
    } {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_TripMaster_00[Random(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_11', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
          case 1:
            Npc_TripMaster_00[Random(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_27', 'IsCloseMessageDialog': True})
          case 2:
            Npc_TripMaster_00[Random(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_28', 'IsCloseMessageDialog': True})
          case 3:
            Npc_TripMaster_00[Random(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:talk_29', 'IsCloseMessageDialog': True})
        }
    }

}
