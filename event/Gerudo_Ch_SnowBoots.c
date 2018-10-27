-------- EventFlow: Gerudo_Ch_SnowBoots --------

Actor: Npc_OasisHylia_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ChangePostureWithAS', 'Demo_TalkASync', 'Demo_ChangeBoots']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_FlagOFF']
queries: ['CheckSelectPicture', 'CheckEquipArmorSeriesType', 'CheckFlag', 'GeneralChoice2', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_OasisHylia_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_OasisHylia_002.CheckActorAction13() {
      case 0:
        Event24:
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowBoots_First_lady'}) {
                if Npc_OasisHylia_002.IsOnInstEventFlag() {
                    Event90:
                    Npc_OasisHylia_002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                    if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': True, 'CheckHead': False, 'CheckUpper': False, 'CheckType': 'Desert'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowBoots_sand_first'}) {
                            Event88:
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_23'})
                            Event91:
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_24'})
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_25'})
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_19'})
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_20'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_Activated', 'IsWaitFinish': True})
                            Event234:
                            if Npc_OasisHylia_002.CheckActorAction13() == 10 {
                                Npc_OasisHylia_002.Demo_ChangePostureWithAS({'Posture': 'Sit', 'IsWaitFinish': True})
                            }
                        } else {
                            Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_26'})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_sand_first', 'IsWaitFinish': True})
                            goto Event91
                        }
                    } else {
                        goto Event88
                    }
                } else {

                    call Gerudo_Ch_SnowMT.hello()

                    goto Event90
                }
            } else {
                Npc_OasisHylia_002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': True, 'CheckHead': False, 'CheckUpper': False, 'CheckType': 'Desert'}) {
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_11', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_sand_first', 'IsWaitFinish': True})
                    Event61:
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_12', 'IsCloseMessageDialog': True})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_13'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_14'})
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_15'})
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_16'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_17'})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_18'})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_19'})
                        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_20'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_Activated', 'IsWaitFinish': True})
                        goto Event234
                    } else {
                        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_21'})
                        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_22'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_First_lady', 'IsWaitFinish': True})
                        goto Event234
                    }
                } else {
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_10', 'IsCloseMessageDialog': True})
                    goto Event61
                }
            }
        } else {
            Event35:
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowMT_First'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowBoots_First_boy'}) {
                    Event41:
                    Npc_OasisHylia_002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_07'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_First_boy', 'IsWaitFinish': True})
                } else {
                    Npc_OasisHylia_002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_09'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_First_boy', 'IsWaitFinish': True})
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowBoots_First_boy'}) {
                    goto Event41
                } else {
                    Npc_OasisHylia_002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_05'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_First_boy', 'IsWaitFinish': True})
                }
            }
        }
      case 1:
        goto Event24
      case 2:
        goto Event24
      case 3:
        goto Event24
      case 4:
        goto Event24
      case 5:
        goto Event24
      case 6:
        goto Event24
      case 7:
        goto Event24
      case 8:
        goto Event24
      case 9:
        goto Event24
      case 10:
        goto Event24
      case 11:
        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_36'})
      case 12:
        goto Event24
      case 13:
        goto Event24
    }
}

void Finish_Npc_OasisHylia_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_OasisHylia_002.CheckActorAction13() {
      case 0:
        Event119:
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowBoots_Full'}) {
                if Npc_OasisHylia_002.IsOnInstEventFlag() {
                    Event191:
                    Npc_OasisHylia_002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_30', 'IsCloseMessageDialog': True})
                    Event17:
                    Npc_OasisHylia_002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_03'})
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_141_Lower'}) {
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

                        call GetDemo.GetItemByName({'CheckTargetActorName': 'Armor_141_Lower', 'IsInvalidOpenPouch': True})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SnowBoots_Boots'})
                        Npc_OasisHylia_002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_04'})
                        Npc_OasisHylia_002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_28'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_SnowBoots_Finish'})
                        Event233:
                        if Npc_OasisHylia_002.CheckActorAction13() == 10 {
                            Npc_OasisHylia_002.Demo_ChangePostureWithAS({'Posture': 'Sit', 'IsWaitFinish': True})
                        }
                    } else {
                        Npc_OasisHylia_002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_29'})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_Full', 'IsWaitFinish': True})
                        goto Event233
                    }
                } else {

                    call Gerudo_Ch_SnowMT.hello()

                    goto Event191
                }
            } else {
                if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_RuinStatueKnightSword_B_01'}) {
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_27', 'IsCloseMessageDialog': True})
                    Npc_OasisHylia_002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_00', 'IsCloseMessageDialog': True})

                    call Common.Lookpicture_for_Ch_SnowBoots({'Self': ActorIdentifier(name="Npc_OasisHylia_002"), 'ActorName': 'FldObj_RuinStatueKnightSword_B_01'})

                    Npc_OasisHylia_002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_02'})
                    goto Event17
                } else {
                    if Npc_OasisHylia_002.IsOnInstEventFlag() {
                        Event148:
                        Npc_OasisHylia_002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                        if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': True, 'CheckHead': False, 'CheckUpper': False, 'CheckType': 'Desert'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowBoots_sand_first'}) {
                                Event201:
                                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_35'})
                                Event198:
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_33'})
                                    Event200:
                                    Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_34'})
                                    goto Event233
                                } else {
                                    goto Event200
                                }
                            } else {
                                Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_26'})
                                EventSystemActor.Demo_FlagON({'FlagName': 'Gerudo_Ch_SnowBoots_sand_first', 'IsWaitFinish': True})
                                goto Event198
                            }
                        } else {
                            goto Event201
                        }
                    } else {

                        call Gerudo_Ch_SnowMT.hello()

                        goto Event148
                    }
                }
            }
        } else {

            call boy()

        }
      case 1:
        goto Event119
      case 2:
        goto Event119
      case 3:
        goto Event119
      case 4:
        goto Event119
      case 5:
        goto Event119
      case 6:
        goto Event119
      case 7:
        goto Event119
      case 8:
        goto Event119
      case 9:
        goto Event119
      case 10:
        goto Event119
      case 11:
        Npc_OasisHylia_002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:Talk_36'})
      case 12:
        goto Event119
      case 13:
        goto Event119
    }
}

void boy() {
    goto Event35
}

void Ready_Npc_OasisHylia_002_Near() {
    switch Npc_OasisHylia_002.CheckActorAction13() {
      case 0:
        Event229:
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True}) {
            Npc_OasisHylia_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:near00', 'DispFrame': 300, 'IsChecked': True})
        } else {
            Event227:
            Npc_OasisHylia_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:near00', 'DispFrame': 90, 'IsChecked': False})
        }
      case 1:
        goto Event229
      case 2:
        goto Event229
      case 3:
        goto Event229
      case 4:
        goto Event229
      case 5:
        goto Event229
      case 6:
        goto Event229
      case 7:
        goto Event229
      case 8:
        goto Event229
      case 9:
        goto Event229
      case 10:
        goto Event229
      case 11:
        goto Event227
      case 12:
        goto Event229
      case 13:
        goto Event229
    }
}

void Finish_Npc_OasisHylia_002_Near() {
    switch Npc_OasisHylia_002.CheckActorAction13() {
      case 0:
        Event230:
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True, 'CheckLower': True}) {
            if EventSystemActor.CheckSelectPicture({'ActorName': 'FldObj_RuinStatueKnightSword_B_01'}) {
                Npc_OasisHylia_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:near00', 'DispFrame': 300, 'IsChecked': True})
            } else {
                Event212:
                Npc_OasisHylia_002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gerudo_Ch_SnowBoots:near00', 'IsChecked': False, 'DispFrame': 90})
            }
        } else {
            goto Event212
        }
      case 1:
        goto Event230
      case 2:
        goto Event230
      case 3:
        goto Event230
      case 4:
        goto Event230
      case 5:
        goto Event230
      case 6:
        goto Event230
      case 7:
        goto Event230
      case 8:
        goto Event230
      case 9:
        goto Event230
      case 10:
        goto Event230
      case 11:
        goto Event212
      case 12:
        goto Event230
      case 13:
        goto Event230
    }
}
