-------- EventFlow: Gerudo_Ch_SnowMT --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_DeletePorchItemInEquip', 'Demo_SwitchPlayerEquipment']
queries: ['GeneralChoice2', 'CheckSelectPicture', 'CheckFlag', 'GeneralChoice3', 'CheckEquipArmorSeriesType', 'CheckTimeType', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisHylia_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_BecomeSpeaker', 'Demo_WarpToScheduleAnchor', 'Demo_ChangeBoots']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: ['IsEquippedWithLowerBody']
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_OasisHylia_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_OasisHylia_002.Demo_BecomeSpeaker({'IsWaitFinish': True})
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowMt_First_lady'}) {
            if Npc_OasisHylia_002.IsOnInstEventFlag() {
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk31'})
                Event120:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Event32:
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk09'})
                    if !EventSystemActor.GeneralChoice2() {
                        Event93:
                        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk25'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk02'})
                        } else {
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk39'})
                        }
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk15'})
                            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_140_Lower'}) {
                                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk33'})

                                call GetDemo.GetItemByName({'CheckTargetActorName': 'Armor_140_Lower', 'IsInvalidOpenPouch': True})

                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SnowMT_boots_get'})
                                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk32'})
                                Event98:
                                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Gerudo_Ch_SnowMT', 'ForceRunTelop': True, 'StepName': ''})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk03'})
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SnowMt_First_lady'})
                            } else {
                                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk34'})
                                goto Event98
                            }
                        } else {
                            Event35:
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk11'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SnowMt_First_lady'})
                        }
                    } else {
                        goto Event35
                    }
                  case 1:
                    goto Event93
                  case 2:
                    goto Event35
                }
            } else {

                call hello()

                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk29'})
                goto Event120
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowMt_First_lady0'}) {
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk40'})
            Event30:
            if !EventSystemActor.GeneralChoice2() {
                goto Event32
            } else {
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk11'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowMt_First_lady0', 'IsWaitFinish': True})
            }
        } else {

            call hello()

            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk07'})
            goto Event30
        }
    } else
    Event36:
    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowMT_First'}) {
        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk17'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk19', 'IsCloseMessageDialog': True})
            Event34:
            if !EventSystemActor.GeneralChoice2() {
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk13'})
            } else {
                Event51:
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk10'})
            }
            EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowMT_First', 'IsWaitFinish': True})
        } else {
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk10'})
        }
    } else {
        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk00'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk08'})
            goto Event34
        } else {
            goto Event51
        }
    }
}

void Finish_Npc_OasisHylia_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowMT_full'}) {
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk43', 'IsCloseMessageDialog': True})
            Event176:
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk23', 'IsCloseMessageDialog': True})
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_049_Lower'}) {
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk46', 'IsCloseMessageDialog': True})
                Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
                Npc_OasisHylia_002.Demo_ChangeBoots({'IsWaitFinish': True, 'BootsNumber': 1})

                fork {
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_OasisHylia_002_SandBoots'})
                } {
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_OasisHylia_002_SnowBoots'})
                } {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_OasisHylia_002_Barefoot'})
                }

                EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})

                call GetDemo.GetItemByName({'CheckTargetActorName': 'Armor_049_Lower', 'IsInvalidOpenPouch': True})

                EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowMT_Boots', 'IsWaitFinish': True})
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk45', 'IsCloseMessageDialog': True})
                Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
                EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'PorchItemName': 'Armor_140_Lower', 'DeleteNum': 1})
                if GameROMPlayer.IsEquippedWithLowerBody() {
                    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'PorchItemName_ArmorLower': 'Armor_049_Lower', 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_Arrow': ''})
                }
                Npc_OasisHylia_002.Demo_ChangeBoots({'IsWaitFinish': True, 'BootsNumber': 3})

                fork {
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_OasisHylia_002_SandBoots'})
                } {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_OasisHylia_002_SnowBoots'})
                } {
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_OasisHylia_002_Barefoot'})
                }

                Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk24'})
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk11', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
                Npc_OasisHylia_002.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SnowMT_Finish'})
                GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            } else {
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk42'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SnowMT_full'})
            }
        } else
        if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_RuinStatueKnight_SnowMT_01'}) {
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk05', 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHello', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk06', 'IsCloseMessageDialog': True})

            call Common.LookPicture({'Self': ActorIdentifier(name="Npc_OasisHylia_002"), 'ActorName': 'FldObj_RuinStatueKnight_SnowMT_01'})

            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk14', 'IsCloseMessageDialog': True})
            goto Event176
        } else
        if !Npc_OasisHylia_002.IsOnInstEventFlag() {

            call hello()

        }
        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowMT_boots_get'}) {
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk21'})
            Event66:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event67:
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk30'})
                Event69:
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk22', 'IsCloseMessageDialog': False})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    goto Event67
                  case 1:
                    Event68:
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk16', 'IsCloseMessageDialog': True})
                    goto Event69
                  case 2:
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk03'})
                }
              case 1:
                goto Event68
              case 2:
                Event125:
                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk11'})
            }
        } else {
            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk35'})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_140_Lower'}) {
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk36', 'IsCloseMessageDialog': True})

                    call GetDemo.GetItemByName({'CheckTargetActorName': 'Armor_140_Lower', 'IsInvalidOpenPouch': True})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SnowMT_boots_get'})
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk37'})
                    goto Event66
                } else {
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk38'})
                    goto Event66
                }
            } else {
                goto Event125
            }
        }
    } else {

        call boy()

    }
}

void Finish_Npc_OasisHylia_002_Near() {
    if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_RuinStatueKnight_SnowMT_01'}) {
        Npc_OasisHylia_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Near00', 'IsChecked': True, 'DispFrame': 300})
    } else {
        Npc_OasisHylia_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Ready_Npc_OasisHylia_002_Near() {
    Npc_OasisHylia_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Near00', 'IsChecked': True, 'DispFrame': 300})
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk26', 'IsCloseMessageDialog': True})
      case [2, 3, 4]:
        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk28', 'IsCloseMessageDialog': True})
      case [5, 6, 7]:
        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowMT:Talk27', 'IsCloseMessageDialog': True})
    }
}

void boy() {
    goto Event36
}
