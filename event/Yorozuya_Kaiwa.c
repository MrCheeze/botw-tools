-------- EventFlow: Yorozuya_Kaiwa --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog', 'Demo_FlagOFF', 'Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckItemShopSelect', 'CheckItemShopDecide', 'GeneralChoice2', 'IsItemInStock', 'CheckItemShopPorchVacancy', 'HasEnoughPayment', 'CheckSellResult', 'CheckGameDataInt', 'HasPorchItemByCategory', 'CheckWeather', 'RandomChoice4', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko010[Yorozuya_Kaitori(Self)]
entrypoint: Yorozuya_Kaitori(Self)
actions: ['Demo_TalkNoCloseDialog', 'Demo_SaleReception', 'Demo_ShopFixedItemNum', 'Demo_OpenMessageDialog', 'Demo_BuyItem']
queries: []
params: None

Actor: Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)]
entrypoint: Yorozuya_Kounyu_Rain(Self2)
actions: ['Demo_Talk', 'Demo_SaleReception', 'Demo_ShopFixedItemNum', 'Demo_OpenMessageDialog', 'Demo_SellItem', 'Demo_TalkNoCloseDialog']
queries: ['IsSoldOut']
params: None

Actor: Npc_TripMaster_00[Zucchi_Kaitori(Self)]
entrypoint: Zucchi_Kaitori(Self)
actions: ['Demo_TalkNoCloseDialog', 'Demo_SaleReception', 'Demo_ShopFixedItemNum', 'Demo_Talk', 'Demo_BuyItem']
queries: []
params: None

Actor: Npc_TripMaster_00[Zucchi_Konyu(Self2)]
entrypoint: Zucchi_Konyu(Self2)
actions: ['Demo_Talk', 'Demo_SaleReception', 'Demo_ShopFixedItemNum', 'Demo_SellItem', 'Demo_OpenMessageDialog', 'Demo_ChangeEmotion', 'Demo_TalkNoCloseDialog']
queries: ['IsSoldOut']
params: None

Actor: Npc_Kakariko010[Yorozuya_Kounyu(Self2)]
entrypoint: Yorozuya_Kounyu(Self2)
actions: ['Demo_Talk', 'Demo_SaleReception', 'Demo_ShopFixedItemNum', 'Demo_OpenMessageDialog', 'Demo_SellItem', 'Demo_TalkNoCloseDialog']
queries: ['IsSoldOut']
params: None

Actor: Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)]
entrypoint: Yorozuya_KounyuSetTbl(Self2)
actions: ['Demo_Talk', 'Demo_SaleReception', 'Demo_ShopFixedItemNum', 'Demo_OpenMessageDialog', 'Demo_SellItem', 'Demo_TalkNoCloseDialog']
queries: ['IsSoldOut']
params: None

void Yorozuya_Kaitori() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
    Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_00'})
    Event0:
    Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_SaleReception({'IsWaitFinish': True, 'TableName': 'Normal'})
    if EventSystemActor.CheckItemShopSelect() {
        if EventSystemActor.CheckItemShopDecide() {
            switch EventSystemActor.CheckSellResult() {
              case 0:
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Shop_SelectItemNum', 'Operator': 'Equal', 'Value': 1}) {
                    Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                    Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_01', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    if !EventSystemActor.GeneralChoice2() {
                        Event10:
                        Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_BuyItem({'IsWaitFinish': True})
                        switch EventSystemActor.RandomChoice4() {
                          case 0:
                            Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_02', 'IsWaitFinish': True, 'CloseDialogOption': 0})
                            Event246:
                            switch EventSystemActor.RandomChoice4() {
                              case 0:
                                Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_05'})
                                goto Event0
                              case 1:
                                Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_05b'})
                                goto Event0
                              case 2:
                                Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_05c'})
                                goto Event0
                              case 3:
                                Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_05d'})
                                goto Event0
                            }
                          case 1:
                            Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_02b'})
                            goto Event246
                          case 2:
                            Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_02c'})
                            goto Event246
                          case 3:
                            Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_02d'})
                            goto Event246
                        }
                    } else {
                        Event13:
                        Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_04', 'MessageOpenDelayTime': 0, 'IsWaitAS': False, 'CloseDialogOption': 0})
                        goto Event246
                    }
                } else {
                    Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_13', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Shop_TradeItemNum'}) {
                            Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_33'})
                            Event9:
                            if !EventSystemActor.GeneralChoice2() {
                                goto Event10
                            } else {
                                goto Event13
                            }
                        } else {
                            Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_14', 'IsWaitAS': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0})
                            goto Event9
                        }
                      case 1:
                        Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': True})
                        Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_35'})
                        goto Event9
                      case 2:
                        goto Event13
                    }
                }
              case 1:
                Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_15', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0})
                goto Event246
              case 2:
                Npc_Kakariko010[Yorozuya_Kaitori(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_16', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0})
                goto Event246
            }
        } else
        goto Event246
    }
}

void Yorozuya_Kounyu_Rain() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
    switch EventSystemActor.CheckWeather() {
      case 0:
        Event262:
        if Npc_Kakariko010[Yorozuya_Kounyu(Self2)].IsSoldOut({'TableName': 'Normal'}) {
            Npc_Kakariko010[Yorozuya_Kounyu(Self2)].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_37'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Event15:
                Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_SaleReception({'IsWaitFinish': True, 'TableName': 'Normal'})
                Event35:
                switch EventSystemActor.CheckItemShopSelect() {
                  case 0:
                    if EventSystemActor.CheckItemShopDecide() {
                        if EventSystemActor.IsItemInStock() {
                            if EventSystemActor.HasEnoughPayment() {
                                if EventSystemActor.CheckItemShopPorchVacancy() {
                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Shop_SelectItemNum', 'Operator': 'Equal', 'Value': 1}) {
                                        Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                        Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_10', 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                        Event134:
                                        if !EventSystemActor.GeneralChoice2() {
                                            Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_SellItem({'IsWaitFinish': True})
                                            EventSystemActor.Demo_WaitFrame({'Frame': 0, 'IsWaitFinish': True})
                                            if Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].IsSoldOut({'TableName': 'Current'}) {
                                                Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_36'})
                                                goto Event15
                                            } else
                                            switch EventSystemActor.RandomChoice4() {
                                              case 0:
                                                Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_11'})
                                                goto Event15
                                              case 1:
                                                Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_11b'})
                                                goto Event15
                                              case 2:
                                                Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_11c'})
                                                goto Event15
                                              case 3:
                                                Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_11d'})
                                                goto Event15
                                            }
                                        } else {
                                            Event50:
                                            Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_06'})
                                            goto Event15
                                        }
                                    } else {
                                        Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_31', 'IsOverWriteLabelActorName': True})
                                        switch EventSystemActor.GeneralChoice3() {
                                          case 0:
                                            Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Shop_TradeItemNum'}) {
                                                if EventSystemActor.HasEnoughPayment() {
                                                    if EventSystemActor.CheckItemShopPorchVacancy() {
                                                        Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_56'})
                                                        goto Event134
                                                    } else {
                                                        Event53:
                                                        Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_09'})
                                                        goto Event15
                                                    }
                                                } else {
                                                    Event52:
                                                    Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_08'})
                                                    goto Event15
                                                }
                                            } else
                                            if EventSystemActor.HasEnoughPayment() {
                                                if EventSystemActor.CheckItemShopPorchVacancy() {
                                                    Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_30', 'IsOverWriteLabelActorName': True})
                                                    goto Event134
                                                } else {
                                                    goto Event53
                                                }
                                            } else {
                                                goto Event52
                                            }
                                          case 1:
                                            Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': True})
                                            if EventSystemActor.HasEnoughPayment() {
                                                if EventSystemActor.CheckItemShopPorchVacancy() {
                                                    Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_34'})
                                                    goto Event134
                                                } else {
                                                    goto Event53
                                                }
                                            } else {
                                                goto Event52
                                            }
                                          case 2:
                                            goto Event50
                                        }
                                    }
                                } else {
                                    goto Event53
                                }
                            } else {
                                goto Event52
                            }
                        } else {
                            Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_07'})
                            goto Event15
                        }
                    } else {
                        goto Event50
                    }
                  case 2:
                    Event30:
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                }
            } else {
                goto Event30
            }
        } else {
            Npc_Kakariko010[Yorozuya_Kounyu(Self2)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_12'})
            goto Event15
        }
      case [1, 2, 3]:
        if Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].IsSoldOut({'TableName': 'Rain'}) {
            Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_37'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Event202:
                Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_SaleReception({'IsWaitFinish': True, 'TableName': 'Rain'})
                switch EventSystemActor.CheckItemShopSelect() {
                  case 0:
                    if EventSystemActor.CheckItemShopDecide() {
                        if EventSystemActor.IsItemInStock() {
                            if EventSystemActor.HasEnoughPayment() {
                                if EventSystemActor.CheckItemShopPorchVacancy() {
                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Shop_SelectItemNum', 'Operator': 'Equal', 'Value': 1}) {
                                        Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                        Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_10', 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                        Event220:
                                        if !EventSystemActor.GeneralChoice2() {
                                            Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_SellItem({'IsWaitFinish': True})
                                            EventSystemActor.Demo_WaitFrame({'Frame': 0, 'IsWaitFinish': True})
                                            if Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].IsSoldOut({'TableName': 'Current'}) {
                                                Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_36'})
                                                goto Event202
                                            } else
                                            switch EventSystemActor.RandomChoice4() {
                                              case 0:
                                                Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_11'})
                                                goto Event202
                                              case 1:
                                                Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_11b'})
                                                goto Event202
                                              case 2:
                                                Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_11c'})
                                                goto Event202
                                              case 3:
                                                Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_11d'})
                                                goto Event202
                                            }
                                        } else {
                                            Event209:
                                            Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_06'})
                                            goto Event202
                                        }
                                    } else {
                                        Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_31', 'IsOverWriteLabelActorName': True})
                                        switch EventSystemActor.GeneralChoice3() {
                                          case 0:
                                            Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Shop_TradeItemNum'}) {
                                                if EventSystemActor.HasEnoughPayment() {
                                                    if EventSystemActor.CheckItemShopPorchVacancy() {
                                                        Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_56'})
                                                        goto Event220
                                                    } else {
                                                        Event212:
                                                        Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_09'})
                                                        goto Event202
                                                    }
                                                } else {
                                                    Event211:
                                                    Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_08'})
                                                    goto Event202
                                                }
                                            } else
                                            if EventSystemActor.HasEnoughPayment() {
                                                if EventSystemActor.CheckItemShopPorchVacancy() {
                                                    Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_30', 'IsOverWriteLabelActorName': True})
                                                    goto Event220
                                                } else {
                                                    goto Event212
                                                }
                                            } else {
                                                goto Event211
                                            }
                                          case 1:
                                            Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': True})
                                            if EventSystemActor.HasEnoughPayment() {
                                                if EventSystemActor.CheckItemShopPorchVacancy() {
                                                    Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_34'})
                                                    goto Event220
                                                } else {
                                                    goto Event212
                                                }
                                            } else {
                                                goto Event211
                                            }
                                          case 2:
                                            goto Event209
                                        }
                                    }
                                } else {
                                    goto Event212
                                }
                            } else {
                                goto Event211
                            }
                        } else {
                            Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_07'})
                            goto Event202
                        }
                    } else {
                        goto Event209
                    }
                  case 2:
                    Event206:
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                }
            } else {
                goto Event206
            }
        } else {
            Npc_Kakariko010[Yorozuya_Kounyu_Rain(Self2)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_20'})
            goto Event202
        }
    }
}

void Zucchi_Kaitori() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
    Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_00'})
    Event57:
    Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_SaleReception({'IsWaitFinish': True, 'TableName': 'Normal'})
    if EventSystemActor.CheckItemShopSelect() {
        if EventSystemActor.CheckItemShopDecide() {
            switch EventSystemActor.CheckSellResult() {
              case 0:
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Shop_SelectItemNum', 'Operator': 'Equal', 'Value': 1}) {
                    Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                    Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_01', 'IsOverWriteLabelActorName': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Event106:
                        Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_BuyItem({'IsWaitFinish': True})
                        switch EventSystemActor.RandomChoice4() {
                          case 0:
                            Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_02', 'IsOverWriteLabelActorName': False})
                            Event250:
                            switch EventSystemActor.RandomChoice4() {
                              case 0:
                                Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_05', 'IsOverWriteLabelActorName': False})
                                goto Event57
                              case 1:
                                Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_05b'})
                                goto Event57
                              case 2:
                                Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_05c'})
                                goto Event57
                              case 3:
                                Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_05d'})
                                goto Event57
                            }
                          case 1:
                            Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_02b'})
                            goto Event250
                          case 2:
                            Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_02c'})
                            goto Event250
                          case 3:
                            Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_02d'})
                            goto Event250
                        }
                    } else {
                        Event108:
                        Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_04', 'IsOverWriteLabelActorName': False})
                        goto Event250
                    }
                } else {
                    Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_13', 'IsOverWriteLabelActorName': False})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Shop_TradeItemNum'}) {
                            Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_33'})
                            Event105:
                            if !EventSystemActor.GeneralChoice2() {
                                goto Event106
                            } else {
                                goto Event108
                            }
                        } else {
                            Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_14', 'IsOverWriteLabelActorName': False})
                            goto Event105
                        }
                      case 1:
                        Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': True})
                        Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_35', 'IsOverWriteLabelActorName': False})
                        goto Event105
                      case 2:
                        goto Event108
                    }
                }
              case 1:
                Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_15', 'IsOverWriteLabelActorName': False})
                goto Event57
              case 2:
                Npc_TripMaster_00[Zucchi_Kaitori(Self)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_16', 'IsOverWriteLabelActorName': False})
                goto Event57
            }
        } else
        goto Event250
    }
}

void Zucchi_Konyu() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
    if Npc_TripMaster_00[Zucchi_Konyu(Self2)].IsSoldOut({'TableName': 'Normal'}) {
        Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_37'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Event68:
            Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_SaleReception({'IsWaitFinish': True, 'TableName': 'TableName'})
            switch EventSystemActor.CheckItemShopSelect() {
              case 0:
                if EventSystemActor.CheckItemShopDecide() {
                    if EventSystemActor.IsItemInStock() {
                        if EventSystemActor.HasEnoughPayment() {
                            if EventSystemActor.CheckItemShopPorchVacancy() {
                                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Shop_SelectItemNum', 'Operator': 'Equal', 'Value': 1}) {
                                    Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                    Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_10', 'IsOverWriteLabelActorName': False})
                                    Event148:
                                    if !EventSystemActor.GeneralChoice2() {
                                        Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_SellItem({'IsWaitFinish': True})
                                        EventSystemActor.Demo_WaitFrame({'Frame': 0, 'IsWaitFinish': True})
                                        if Npc_TripMaster_00[Zucchi_Konyu(Self2)].IsSoldOut({'TableName': 'Current'}) {
                                            Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_36', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 1})
                                            Event314:
                                            Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                                            goto Event68
                                        } else
                                        switch EventSystemActor.RandomChoice4() {
                                          case 0:
                                            Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 1})
                                            goto Event314
                                          case 1:
                                            Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11b', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 1})
                                            goto Event314
                                          case 2:
                                            Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11c', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 1})
                                            goto Event314
                                          case 3:
                                            Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11d', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 1})
                                            goto Event314
                                        }
                                    } else {
                                        Event82:
                                        Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_06'})
                                        goto Event314
                                    }
                                } else {
                                    Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_30'})
                                    switch EventSystemActor.GeneralChoice3() {
                                      case 0:
                                        Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                                        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Shop_TradeItemNum'}) {
                                            if EventSystemActor.HasEnoughPayment() {
                                                if EventSystemActor.CheckItemShopPorchVacancy() {
                                                    Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_32'})
                                                    goto Event148
                                                }
                                            }
                                        } else
                                        if EventSystemActor.HasEnoughPayment() {
                                            if EventSystemActor.CheckItemShopPorchVacancy() {
                                                Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_31'})
                                                goto Event148
                                            } else {
                                                Event85:
                                                Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_09'})
                                                goto Event314
                                            }
                                        } else {
                                            Event84:
                                            Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_08'})
                                            goto Event314
                                        }
                                      case 1:
                                        Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': True})
                                        if EventSystemActor.HasEnoughPayment() {
                                            if EventSystemActor.CheckItemShopPorchVacancy() {
                                                Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_34'})
                                                goto Event148
                                            } else {
                                                goto Event85
                                            }
                                        } else {
                                            goto Event84
                                        }
                                      case 2:
                                        goto Event82
                                    }
                                }
                            } else {
                                goto Event85
                            }
                        } else {
                            goto Event84
                        }
                    } else {
                        Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_07'})
                        goto Event314
                    }
                } else {
                    goto Event82
                }
              case 2:
                Event298:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            }
        } else {
            goto Event298
        }
    } else {
        Npc_TripMaster_00[Zucchi_Konyu(Self2)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_12', 'IsOverWriteLabelActorName': False})
        goto Event314
    }
}

void Yorozuya_Kounyu() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
    goto Event262
}

void Yorozuya_KounyuSetTbl() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
    if Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].IsSoldOut({'TableName': 'TableName'}) {
        Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_37'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Event306:
            Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_SaleReception({'IsWaitFinish': True, 'TableName': 'TableName'})
            goto Event35
        } else {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        }
    } else {
        Npc_Kakariko010[Yorozuya_KounyuSetTbl(Self2)].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_12'})
        goto Event306
    }
}
