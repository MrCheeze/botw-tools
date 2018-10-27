-------- EventFlow: DisplayShop --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_NoDeleteCurrent', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['GeneralChoice2', 'CheckItemShopPorchVacancy', 'HasEnoughPayment', 'CheckGameDataInt', 'CheckPorchInItem', 'CheckContainerItem', 'CheckAddPorchItem', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Argument
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_OnMUAssignSaveForUsed']
queries: ['IsWeapon']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko010[Multiple(Self)]
entrypoint: Multiple(Self)
actions: ['Demo_ChangeChoiceNumFor3DShop', 'Demo_ShopFixedItemNum', 'Demo_Talk', 'Demo_SellItem', 'Demo_SetAttentionForbidSale', 'Demo_OpenMessageDialog']
queries: []
params: None

Actor: Npc_Kakariko010[Single(Self)]
entrypoint: Single(Self)
actions: ['Demo_Talk', 'Demo_SetAttentionForbidSale']
queries: []
params: None

Actor: Npc_Kakariko010[Armor(Self)]
entrypoint: Armor(Self)
actions: ['Demo_ChangeChoiceNumFor3DShop', 'Demo_ShopFixedItemNum', 'Demo_Talk', 'Demo_SellItem', 'Demo_SetAttentionForbidSale']
queries: []
params: None

Actor: Npc_Kakariko010[Jewelry(Self)]
entrypoint: Jewelry(Self)
actions: ['Demo_Talk']
queries: []
params: None

void Multiple() {
    if Argument.IsWeapon() in [1, 0] {
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Shop_PlacedItemStockNum'}) {
            Npc_Kakariko010[Multiple(Self)].Demo_ChangeChoiceNumFor3DShop({'IsWaitFinish': True})
            Npc_Kakariko010[Multiple(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
            Npc_Kakariko010[Multiple(Self)].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_50'})
            if !EventSystemActor.GeneralChoice2() {
                Event81:
                if EventSystemActor.HasEnoughPayment() {
                    if EventSystemActor.CheckItemShopPorchVacancy() {
                        Npc_Kakariko010[Multiple(Self)].Demo_SellItem({'IsWaitFinish': True})
                        Npc_Kakariko010[Multiple(Self)].Demo_SetAttentionForbidSale({'IsWaitFinish': True})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
                    } else {
                        Event83:
                        Npc_Kakariko010[Multiple(Self)].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_55'})
                        Event60:
                        EventSystemActor.Demo_NoDeleteCurrent({'IsWaitFinish': True})
                        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
                    }
                } else {
                    Event82:
                    Npc_Kakariko010[Multiple(Self)].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_54'})
                    goto Event60
                }
            } else {
                Event73:
                Npc_Kakariko010[Multiple(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_53'})
                goto Event60
            }
        } else {
            Npc_Kakariko010[Multiple(Self)].Demo_ChangeChoiceNumFor3DShop({'IsWaitFinish': True})
            Npc_Kakariko010[Multiple(Self)].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_51'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_Kakariko010[Multiple(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Shop_TradeItemNum'}) {
                    Npc_Kakariko010[Multiple(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_56'})
                    Event71:
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event81
                    } else {
                        goto Event73
                    }
                } else {
                    Npc_Kakariko010[Multiple(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_52'})
                    goto Event71
                }
              case 1:
                Npc_Kakariko010[Multiple(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': True})
                if EventSystemActor.HasEnoughPayment() {
                    if EventSystemActor.CheckItemShopPorchVacancy() {
                        Npc_Kakariko010[Multiple(Self)].Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_34'})
                        goto Event71
                    } else {
                        goto Event83
                    }
                } else {
                    goto Event82
                }
              case 2:
                goto Event73
            }
        }
    }
}

void Single() {
    if Argument.IsWeapon() in [1, 0] {
        Npc_Kakariko010[Single(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_60', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {

            call Demo002_0.Demo002_1({'Arg_FlagName': 'Arg_FlagName', 'Arg_CurrentActorName': 'Arg_CurrentActorName'})

            Npc_Kakariko010[Single(Self)].Demo_SetAttentionForbidSale({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
        } else {
            EventSystemActor.Demo_NoDeleteCurrent({'IsWaitFinish': True})
            Npc_Kakariko010[Single(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_61'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    }
}

void Armor() {
    if Argument.IsWeapon() in [1, 0] {
        EventSystemActor.Demo_NoDeleteCurrent({'IsWaitFinish': True})
        Npc_Kakariko010[Armor(Self)].Demo_ChangeChoiceNumFor3DShop({'IsWaitFinish': True})
        Npc_Kakariko010[Armor(Self)].Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
        Npc_Kakariko010[Armor(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_60', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko010[Armor(Self)].Demo_SellItem({'IsWaitFinish': True})
            Npc_Kakariko010[Armor(Self)].Demo_SetAttentionForbidSale({'IsWaitFinish': True})
            Argument.Demo_OnMUAssignSaveForUsed({'IsWaitFinish': False})
            Argument.Demo_PlayASForDemo({'ASName': 'VisibleOff', 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0})

            call GetDemo.ShowGetDemoDialogByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Arg_CurrentActorName'})

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
        } else {
            Npc_Kakariko010[Armor(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_61'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    }
}

void Jewelry() {
    EventSystemActor.Demo_NoDeleteCurrent({'IsWaitFinish': True})
    Npc_Kakariko010[Jewelry(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_60'})
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        if EventSystemActor.CheckPorchInItem({'PorchItemName': 'Arg_CurrentActorName'}) {
            if EventSystemActor.CheckContainerItem({'PorchItemName': 'Arg_CurrentActorName'}) {
                Event143:

                call GerudoMiniJewel.sound()


                call GetDemo.GetItemByActorIdentifier_VisibleOn({'Arg_IsInvalidOpenPouch': False, 'Current': ActorIdentifier(name="Argument"), 'Arg_CurrentActorName': 'Arg_CurrentActorName'})


                call GetDemo.OpenOperationAndShortCutGuide({'CheckTargetActorName': 'Arg_CurrentActorName'})

            } else
            if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Arg_CurrentActorName', 'Count': 1}) {
                goto Event143
            } else {

                call GetDemo.GetItemPouchFullWithNameByCurrent_VisibleOn_NoChkEquipItemType({'PorchItemName': 'Arg_CurrentActorName', 'Arg_IsInvalidOpenPouch': True, 'Current': ActorIdentifier(name="Argument")})

            }
        } else {
            goto Event143
        }
    } else {
        Npc_Kakariko010[Jewelry(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Yorozuya_Kaiwa:Com_Talk_61'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}
