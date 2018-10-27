-------- EventFlow: Npc_MamonoShop --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_IncreasePorchItem', 'Demo_DefeatedHugeEnemyCount', 'Demo_XLinkEventCreate']
queries: ['GeneralChoice2', 'CheckFlag', 'IsItemInStock', 'CheckItemShopDecide', 'CheckItemShopPorchVacancy', 'HasEnoughPayment', 'CheckItemShopSelect', 'HasPorchItemByCategory', 'GeneralChoice4', 'RandomChoice4', 'CheckSellResult', 'CheckGameDataInt', 'RandomChoice2', 'GeneralChoice3', 'RandomChoice8', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_MamonoShop
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SaleCollectedItem', 'Demo_TalkNoMessageStepper', 'Demo_SellItem', 'Demo_BuyItem', 'Demo_PurchaseEnemyMaterial', 'Demo_ShopFixedItemNum', 'Demo_TurnAndLookToObject', 'Demo_ForbidSettingInstEventFlag', 'Demo_TalkNoCloseDialog']
queries: ['CheckActorAction13', 'IsOnInstEventFlag', 'IsSoldOut']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator[KirutonSmoke]
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Npc_MamonoShop.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})

    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MamonoShop_DarkSeries'})
    switch Npc_MamonoShop.CheckActorAction13() {
      case [2, 3, 4, 5]:
        if EventSystemActor.CheckFlag({'FlagName': 'KirutonDokuro_Delete'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_DefaultFlow'}) {
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'Black', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_Forward'}) {

                        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

                        Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk98'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_DarkSeries'})
                        Event685:
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_Forward'})
                        if EventSystemActor.CheckFlag({'FlagName': 'GameClear'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_MonsterTalkMenuFirst'}) {
                                Event35:
                                Npc_MamonoShop.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk17', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True})
                                Event170:
                                switch EventSystemActor.GeneralChoice4() {
                                  case 0:
                                    Event191:

                                    call Mamonoya_Shop_Buy()

                                  case 1:
                                    Event136:
                                    if !EventSystemActor.HasPorchItemByCategory({'Category': 11, 'Count': 1}) {
                                        Event216:
                                        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk04'})
                                        Event108:
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
                                        Event748:
                                        Npc_MamonoShop.Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk19', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False})
                                        Npc_MamonoShop.Demo_PurchaseEnemyMaterial({'IsWaitFinish': True})
                                        Event109:
                                        switch EventSystemActor.CheckItemShopSelect() {
                                          case 0:
                                            if EventSystemActor.CheckItemShopDecide() {
                                                if EventSystemActor.IsItemInStock() {
                                                    if EventSystemActor.HasEnoughPayment() {
                                                        if EventSystemActor.CheckItemShopPorchVacancy() {
                                                            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Shop_SelectItemNum', 'Operator': 'Equal', 'Value': 1}) {
                                                                Npc_MamonoShop.Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                                                switch EventSystemActor.RandomChoice4() {
                                                                  case 0:
                                                                    Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk34'})
                                                                    Event112:
                                                                    if !EventSystemActor.GeneralChoice2() {
                                                                        Npc_MamonoShop.Demo_SellItem({'IsWaitFinish': True})
                                                                        EventSystemActor.Demo_WaitFrame({'Frame': 0, 'IsWaitFinish': True})
                                                                        if Npc_MamonoShop.IsSoldOut({'TableName': 'Current'}) {
                                                                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk93', 'IsOverWriteLabelActorName': False})
                                                                            Event667:
                                                                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                                                            Npc_MamonoShop.Demo_SaleCollectedItem({'IsWaitFinish': True, 'TableName': 'Current'})
                                                                            goto Event109
                                                                        } else {
                                                                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk35', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                                                            goto Event667
                                                                        }
                                                                    } else {
                                                                        Event101:
                                                                        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk27', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                                                        goto Event667
                                                                    }
                                                                  case 1:
                                                                    Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk33'})
                                                                    goto Event112
                                                                  case 2:
                                                                    Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk32'})
                                                                    goto Event112
                                                                  case 3:
                                                                    Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk31'})
                                                                    goto Event112
                                                                }
                                                            } else {
                                                                Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk68'})
                                                                switch EventSystemActor.GeneralChoice3() {
                                                                  case 0:
                                                                    Npc_MamonoShop.Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                                                    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Shop_TradeItemNum'}) {
                                                                        if EventSystemActor.HasEnoughPayment() {
                                                                            if EventSystemActor.CheckItemShopPorchVacancy() {
                                                                                Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk70'})
                                                                                goto Event112
                                                                            } else {
                                                                                Event132:
                                                                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk30'})
                                                                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                                                                goto Event667
                                                                            }
                                                                        } else {
                                                                            Event106:
                                                                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk29', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                                                            goto Event667
                                                                        }
                                                                    } else
                                                                    if EventSystemActor.HasEnoughPayment() {
                                                                        if EventSystemActor.CheckItemShopPorchVacancy() {
                                                                            Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk69'})
                                                                            goto Event112
                                                                        } else {
                                                                            goto Event132
                                                                        }
                                                                    } else {
                                                                        goto Event106
                                                                    }
                                                                  case 1:
                                                                    Npc_MamonoShop.Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': True})
                                                                    if EventSystemActor.HasEnoughPayment() {
                                                                        if EventSystemActor.CheckItemShopPorchVacancy() {
                                                                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk91', 'IsOverWriteLabelActorName': False})
                                                                            goto Event112
                                                                        } else {
                                                                            goto Event132
                                                                        }
                                                                    } else {
                                                                        goto Event106
                                                                    }
                                                                  case 2:
                                                                    goto Event101
                                                                }
                                                            }
                                                        } else {
                                                            goto Event132
                                                        }
                                                    } else {
                                                        goto Event106
                                                    }
                                                } else {
                                                    Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk28', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                                    goto Event667
                                                }
                                            } else {
                                                goto Event101
                                            }
                                          case 1:
                                            if EventSystemActor.CheckItemShopDecide() {
                                                if !EventSystemActor.CheckSellResult() {
                                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Shop_SelectItemNum', 'Operator': 'Equal', 'Value': 1}) {
                                                        Npc_MamonoShop.Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                                        Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk31'})
                                                        Event190:
                                                        if !EventSystemActor.GeneralChoice2() {
                                                            Npc_MamonoShop.Demo_BuyItem({'IsWaitFinish': True})
                                                            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_Change'}) {
                                                                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MamonoShop_FirstTalk'})
                                                                Event128:
                                                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk26'})
                                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_DefaultFlow'})
                                                                Event196:

                                                                call OpenBuyWindow()

                                                            } else
                                                            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_FirstTalk'}) {
                                                                goto Event128
                                                            } else {
                                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_FirstTalk'})
                                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_Change'})
                                                                goto Event128
                                                            }
                                                        } else {
                                                            Event127:
                                                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk25'})
                                                            goto Event196
                                                        }
                                                    } else {
                                                        Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk23'})
                                                        switch EventSystemActor.GeneralChoice3() {
                                                          case 0:
                                                            Npc_MamonoShop.Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                                            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Shop_TradeItemNum'}) {
                                                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk71'})
                                                                goto Event190
                                                            } else {
                                                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk24'})
                                                                goto Event190
                                                            }
                                                          case 1:
                                                            Npc_MamonoShop.Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': True})
                                                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk92', 'IsOverWriteLabelActorName': False})
                                                            goto Event190
                                                          case 2:
                                                            goto Event127
                                                        }
                                                    }
                                                } else {
                                                    Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk22'})
                                                    goto Event108
                                                }
                                            } else {
                                                Event511:
                                                Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk12', 'IsCloseMessageDialog': True})
                                            }
                                          case 2:
                                            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_FirstTalk'}) {

                                                call MainBranchFirst()

                                            } else
                                            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_Change'}) {

                                                call MainBranch()

                                            } else {
                                                goto Event511
                                            }
                                        }
                                    } else {
                                        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk16'})
                                        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'CurrentMamo'}) {
                                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk18'})
                                        } else {
                                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk13'})
                                            if !EventSystemActor.GeneralChoice2() {

                                                call Mamonoya_Shop_Buy()

                                            } else {
                                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk12', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                            }
                                        }
                                    }
                                  case 2:

                                    call GiantChallenge()

                                  case 3:
                                    Event198:
                                    Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk12', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                                }
                            } else {
                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk99'})
                                EventSystemActor.Demo_FlagON({'FlagName': 'MamonoShop_MonsterTalkMenuFirst', 'IsWaitFinish': True})
                                goto Event35
                            }
                        } else {
                            Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk17B'})
                            Event727:
                            switch EventSystemActor.GeneralChoice3() {
                              case 0:
                                goto Event191
                              case 1:
                                goto Event136
                              case 2:
                                goto Event198
                            }
                        }
                    } else {

                        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})


                        call KirutonBack_Dark()

                        goto Event685
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_Forward'}) {

                    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

                    goto Event685
                } else {

                    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})


                    call KirutonBack()

                    goto Event685
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_4PointFirst'}) {
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'Black', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_Forward'}) {

                        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

                        Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk98'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_DarkSeries'})
                        Event682:
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_Forward'})
                        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk01'})
                        if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_MamonoMaterial'}) {
                            Event582:
                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk03'})
                            Event134:
                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk00'})
                            switch EventSystemActor.GeneralChoice4() {
                              case 0:
                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk05'})
                                if !EventSystemActor.HasPorchItemByCategory({'Category': 11, 'Count': 1}) {
                                    goto Event216
                                } else {
                                    Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk15'})
                                    Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk18'})
                                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MamonoShop_Forward'})
                                }
                              case 1:

                                call WhatsMamo()

                                goto Event134
                              case 2:

                                call WhatsMamonoSozai()

                                goto Event134
                              case 3:
                                Event214:
                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk09'})
                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk02'})
                            }
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_WhatsMamo'}) {
                            goto Event582
                        } else {
                            Event1:
                            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk82'})
                            switch EventSystemActor.GeneralChoice3() {
                              case 0:

                                call WhatsMamo()

                                Event555:
                                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk76'})
                                goto Event134
                              case 1:

                                call WhatsMamonoSozai()

                                goto Event555
                              case 2:
                                goto Event214
                            }
                        }
                    } else {

                        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})


                        call KirutonBack_Dark()

                        goto Event682
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_Forward'}) {

                    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

                    goto Event682
                } else {

                    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})


                    call KirutonBack()

                    goto Event682
                }
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_4PointFirst'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk40'})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk95'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_Forward'})
                goto Event1
            }
        } else {

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_StopTalk'}) {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk40'})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk95'})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk43'})
                if !EventSystemActor.GeneralChoice2() {
                    Event155:
                    Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk46'})
                    if EventSystemActor.GeneralChoice4() in [0, 1, 2, 3] {
                        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk47'})
                        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk48'})
                        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk39'})
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_MamonoShop'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'KirutonDokuro_Delete', 'IsWaitFinish': True})
                        Event204:
                        EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                        Dm_Locator[KirutonSmoke].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ShopDisappear', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MamonoShop_Forward'})
                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade', 'IsWaitFinish': True})
                        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkSurprise', 'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                    }
                } else
                Event493:
                if !EventSystemActor.RandomChoice2() {
                    Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk74'})
                    Event154:
                    Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk45'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_StopTalk'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MamonoShop_Forward'})
                } else {
                    Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk75'})
                    goto Event154
                }
            } else {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk40'})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk53'})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk73'})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk54'})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk41'})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk49'})
                NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk50', 'IsCloseMessageDialog': True})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk57', 'IsCloseMessageDialog': False})
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk44'})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event155
                } else
                goto Event493
            }
        }
      case [6, 7, 8, 9]:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk59'})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_OpenStop'})
        goto Event204
    }
}

void Mamonoya_Shop_Buy() {
    Event517:
    if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_1stClear'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_2ndClear'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_3rdClear'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_4thClear'}) {

                    call ShopPlusFirst({'FlagName': 'MamonoShop_NewItem_04', 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk80', 'ShopTblName': 'Mamono_E'})

                    goto Event109
                } else {

                    call ShopPlusFirst({'FlagName': 'MamonoShop_NewItem_03', 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk79', 'ShopTblName': 'Mamono_D'})

                    goto Event109
                }
            } else {

                call ShopPlusFirst({'FlagName': 'MamonoShop_NewItem_02', 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk78', 'ShopTblName': 'Mamono_C'})

                goto Event109
            }
        } else {

            call ShopPlusFirst({'FlagName': 'MamonoShop_NewItem_01', 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk77', 'ShopTblName': 'Mamono_B'})

            goto Event109
        }
    } else {

        call StartShopBuyMamo({'ShopTblName': 'Mamono_A'})

        goto Event109
    }
}

void OpenBuyWindow() {
    goto Event748
}

void GiantChallenge() {
    if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_ChallengeTalk'}) {
        Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk38'})
        Event122:
        switch EventSystemActor.GeneralChoice4() {
          case 0:

            call BeatGolem()

          case 1:

            call BeatGiant()

          case 2:

            call BeatSandworm()

          case 3:
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk20'})
            goto Event170
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'MamonoShop_ChallengeTalk', 'IsWaitFinish': True})
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk37'})
        goto Event122
    }
}

void BeatGiant() {
    if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_BigEnemy_Giant_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_BigEnemy_Giant_Finish'}) {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk66'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk205'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk107'})
            Event370:

            call MainBranch()

        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'DefeatedForestGiantNum', 'Value': 40}) {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk63'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk203'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk64'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_ProofGiantKiller'})

            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk204'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk65'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_BigEnemy_Giant_Finish'})
        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 0, 'GameDataIntName': 'DefeatedForestGiantNum'}) {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk202'})
            goto Event370
        } else {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk61'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk201'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk62'})
            goto Event370
        }
    } else {
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk200'})
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk60'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_BigEnemy_Giant_Activated'})
        goto Event370
    }
}

void BeatGolem() {
    if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_BigEnemy_Golem_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_BigEnemy_Golem_Finish'}) {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk66'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk105'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk67'})
            Event394:

            call MainBranch()

        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'DefeatedGolemNum', 'Value': 40}) {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk63'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk103'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk64'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_ProofGolemKiller'})

            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk104'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk65'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_BigEnemy_Golem_Finish'})
        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 0, 'GameDataIntName': 'DefeatedGolemNum'}) {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk102'})
            goto Event394
        } else {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk61'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk101'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk62'})
            goto Event394
        }
    } else {
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk100'})
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk60'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_BigEnemy_Golem_Activated'})
        goto Event394
    }
}

void MainBranch() {
    if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_OpenStore'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'GameClear'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_MonsterTalkMenuFirst'}) {
                Event119:
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk20'})
                goto Event170
            } else {
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk99'})
                EventSystemActor.Demo_FlagON({'FlagName': 'MamonoShop_MonsterTalkMenuFirst', 'IsWaitFinish': True})
                goto Event119
            }
        } else {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk20B'})
            goto Event727
        }
    } else {
        Event613:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_OpenStore'})
        if EventSystemActor.CheckFlag({'FlagName': 'GameClear'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_MonsterTalkMenuFirst'}) {
                Event557:
                Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk81', 'IsCloseMessageDialog': False})
                goto Event170
            } else {
                Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk99'})
                EventSystemActor.Demo_FlagON({'FlagName': 'MamonoShop_MonsterTalkMenuFirst', 'IsWaitFinish': True})
                goto Event557
            }
        } else {
            Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk81B'})
            goto Event727
        }
    }
}

void BeatSandworm() {
    if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_BigEnemy_Sandworm_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_BigEnemy_Sandworm_Finish'}) {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk66'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk305'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk106'})
            Event305:

            call MainBranch()

        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 4, 'GameDataIntName': 'DefeatedSandwormNum'}) {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk63'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk303'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk64'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_ProofSandwormKiller'})

            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk304'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk65'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_BigEnemy_Sandworm_Finish'})
        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 0, 'GameDataIntName': 'DefeatedSandwormNum'}) {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk302'})
            goto Event305
        } else {
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk61'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk301'})
            Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk62'})
            goto Event305
        }
    } else {
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk300'})
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk60'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_BigEnemy_Sandworm_Activated'})
        goto Event305
    }
}

void OpenShopWindow() {
    goto Event517
}

void WhatsMamonoSozai() {
    if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_MamonoMaterial'}) {
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk06'})
        Event221:
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk14'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'MamonoShop_MamonoMaterial', 'IsWaitFinish': True})
        goto Event221
    }
}

void WhatsMamo() {
    if EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_WhatsMamo'}) {
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk06'})
        Event210:
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk07'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'MamonoShop_WhatsMamo', 'IsWaitFinish': True})
        goto Event210
    }
}

void ShopPlusFirst() {
    if EventSystemActor.CheckFlag({'FlagName': 'FlagName'}) {
        Event572:

        call StartShopBuyMamo({'ShopTblName': 'ShopTblName'})

    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FlagName'})
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk83'})
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId'})
        goto Event572
    }
}

void KirutonBack() {
    if !Npc_MamonoShop.IsOnInstEventFlag() {
        if !EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_Forward'}) {
            switch EventSystemActor.RandomChoice8() {
              case 0:
                Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk86', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                Event692:
                Npc_MamonoShop.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsConfront': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
                Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk96', 'IsCloseMessageDialog': True, 'ASName': 'Talk_Surprised'})
              case 1:
                Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk85', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                goto Event692
              case 2:
                Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk10', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                goto Event692
              case 3:
                Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk84', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                goto Event692
              case 4:
                Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk87', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                goto Event692
              case 5:
                Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk88', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                goto Event692
              case 6:
                Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk89', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                goto Event692
              case 7:
                Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk90', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                goto Event692
            }
        }
    }
}

void MainBranchFirst() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_DefaultFlow'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MamonoShop_FirstTalk'})
    goto Event613
}

void StartShopBuyMamo() {
    if Npc_MamonoShop.IsSoldOut({'TableName': 'ShopTblName'}) {
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk94'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
            Event658:
            Npc_MamonoShop.Demo_SaleCollectedItem({'IsWaitFinish': True, 'TableName': 'ShopTblName'})
        } else {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentMamo', 'Operator': 'LessThanOrEqualTo', 'Value': 9}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk72', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        Event749:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        goto Event658
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
        Npc_MamonoShop.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk21', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        goto Event749
    }
}

void KirutonBack_Dark() {
    if !Npc_MamonoShop.IsOnInstEventFlag() {
        if !EventSystemActor.CheckFlag({'FlagName': 'MamonoShop_Forward'}) {
            Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk97'})
            Npc_MamonoShop.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsConfront': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
            Npc_MamonoShop.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk96', 'IsCloseMessageDialog': True, 'ASName': 'Talk_Surprised'})
            Npc_MamonoShop.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_MamonoShop:talk98'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MamonoShop_DarkSeries'})
        }
    }
}
