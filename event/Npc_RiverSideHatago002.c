-------- EventFlow: Npc_RiverSideHatago002 --------

Actor: Npc_RiverSideHatago002
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreasePorchItem', 'Demo_CloseMessageDialog', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_DeletePorchItemInEquip']
queries: ['CheckPlayerState', 'HasPorchItem', 'GeneralChoice2', 'CheckAddPorchItem', 'RandomChoice3', 'CheckEquipment', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_RiverSideHatago002.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            if Npc_RiverSideHatago002.IsOnInstEventFlag() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sleep03'})
            } else {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sleep02'})
            }
        } else
        if Npc_RiverSideHatago002.IsOnInstEventFlag() {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sleep01'})
        } else {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sleep00'})
        }
    } else
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_047', 'Count': 1}) {
        Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSword00'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Reward'}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSword01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_B'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Sword_047', 'EquipItemName': 'Weapon_Sword_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                } else {
                    Event54:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellPorchFull'})
                }
            } else {
                Event25:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_notSell'})
            }
        } else
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSword01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_B', 'Count': 1}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Sword_047', 'EquipItemName': 'Weapon_Sword_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                    Event234:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_RiverSideHatago002_Sword', 'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

                    call CheckReward()

                } else {
                    goto Event54
                }
            } else {
                goto Event25
            }
          case 1:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSword02'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_C'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Sword_047', 'EquipItemName': 'Weapon_Sword_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_C'})

                    goto Event234
                } else {
                    goto Event54
                }
            } else {
                goto Event25
            }
          case 2:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSword03'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_D'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Sword_047', 'EquipItemName': 'Weapon_Sword_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_D'})

                    goto Event234
                } else {
                    goto Event54
                }
            } else {
                goto Event25
            }
        }
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Lsword_047'}) {
        Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponLSword00'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Reward'}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponLSword01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_B'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Lsword_047', 'EquipItemName': 'Weapon_Lsword_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                } else {
                    Event79:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellPorchFull'})
                }
            } else {
                Event90:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_notSell'})
            }
        } else
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponLSword01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_B', 'Count': 1}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Lsword_047', 'EquipItemName': 'Weapon_Lsword_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                    Event237:
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_RiverSideHatago002_Lsword'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

                    call CheckReward()

                } else {
                    goto Event79
                }
            } else {
                goto Event90
            }
          case 1:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponLSword02'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_C'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Lsword_047', 'EquipItemName': 'Weapon_Lsword_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_C'})

                    goto Event237
                } else {
                    goto Event79
                }
            } else {
                goto Event90
            }
          case 2:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponLSword03'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_D'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Lsword_047', 'EquipItemName': 'Weapon_Lsword_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_D'})

                    goto Event237
                } else {
                    goto Event79
                }
            } else {
                goto Event90
            }
        }
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_047'}) {
        Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSpear00'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Reward'}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSpear01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_B'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Spear_047', 'EquipItemName': 'Weapon_Spear_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                } else {
                    Event100:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellPorchFull'})
                }
            } else {
                Event111:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_notSell'})
            }
        } else
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSpear01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_B', 'Count': 1}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Spear_047', 'EquipItemName': 'Weapon_Spear_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                    Event240:
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_RiverSideHatago002_Spear'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

                    call CheckReward()

                } else {
                    goto Event100
                }
            } else {
                goto Event111
            }
          case 1:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSpear02'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_C'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Spear_047', 'EquipItemName': 'Weapon_Spear_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_C'})

                    goto Event240
                } else {
                    goto Event100
                }
            } else {
                goto Event111
            }
          case 2:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponSpear03'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_D'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Spear_047', 'EquipItemName': 'Weapon_Spear_047'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_D'})

                    goto Event240
                } else {
                    goto Event100
                }
            } else {
                goto Event111
            }
        }
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Bow_033'}) {
        Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponBow00'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Reward'}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponBow01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_B'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Bow_033', 'EquipItemName': 'Weapon_Bow_033'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                } else {
                    Event121:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellPorchFull'})
                }
            } else {
                Event132:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_notSell'})
            }
        } else
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponBow01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_B', 'Count': 1}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Bow_033', 'EquipItemName': 'Weapon_Bow_033'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                    Event243:
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_RiverSideHatago002_Bow'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

                    call CheckReward()

                } else {
                    goto Event121
                }
            } else {
                goto Event132
            }
          case 1:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponBow02'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_C'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Bow_033', 'EquipItemName': 'Weapon_Bow_033'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_C'})

                    goto Event243
                } else {
                    goto Event121
                }
            } else {
                goto Event132
            }
          case 2:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponBow03'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_D'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Bow_033', 'EquipItemName': 'Weapon_Bow_033'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_D'})

                    goto Event243
                } else {
                    goto Event121
                }
            } else {
                goto Event132
            }
        }
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_033'}) {
        Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponShield00'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Reward'}) {
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponShield01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_B'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Shield_033', 'EquipItemName': 'Weapon_Shield_033'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                } else {
                    Event142:
                    Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellPorchFull'})
                }
            } else {
                Event153:
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_notSell'})
            }
        } else
        switch EventSystemActor.RandomChoice3() {
          case 0:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponShield01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_B', 'Count': 1}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Shield_033', 'EquipItemName': 'Weapon_Shield_033'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_B'})

                    Event246:
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_RiverSideHatago002_Shield'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

                    call CheckReward()

                } else {
                    goto Event142
                }
            } else {
                goto Event153
            }
          case 1:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponShield02'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_C'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Shield_033', 'EquipItemName': 'Weapon_Shield_033'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_C'})

                    goto Event246
                } else {
                    goto Event142
                }
            } else {
                goto Event153
            }
          case 2:
            Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellWeaponShield03'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDone'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_D'}) {

                    call WeaponHandOver({'PorchItemName': 'Weapon_Shield_033', 'EquipItemName': 'Weapon_Shield_033'})


                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_D'})

                    goto Event246
                } else {
                    goto Event142
                }
            } else {
                goto Event153
            }
        }
    } else {
        Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_01'})
    }
}

void WeaponHandOver() {
    if EventSystemActor.CheckEquipment({'EquipItemName': 'EquipItemName'}) {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'PorchItemName': 'PorchItemName', 'DeleteNum': 1})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    } else {
        EventSystemActor.Demo_IncreasePorchItem({'Value': -1, 'IsWaitFinish': True, 'PorchItemName': 'PorchItemName'})
    }
}

void CheckReward() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Sword'})
    && EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Lsword'})
    && EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Spear'})
    && EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Bow'})
    && EventSystemActor.CheckFlag({'FlagName': 'Npc_RiverSideHatago002_Shield'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_RiverSideHatago002_Reward', 'IsWaitFinish': True})
        Npc_RiverSideHatago002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_RiverSideHatago002:talk_sellDiamond'})
    }
}
