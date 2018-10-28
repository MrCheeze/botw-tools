-------- EventFlow: MagneticFld --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckEquipArmorSeriesType', 'CheckTimeType', 'CheckFlag', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_oasis009_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis009_SinjyuClear_Female'}) {
                Event107:
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_permitted'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'MagneticFld_assassin'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'MagneticFld_assassin_GJ'}) {
                                Event68:
                                if Npc_oasis009.IsOnInstEventFlag() {
                                    Event75:
                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_013'})
                                    Event60:
                                    if !EventSystemActor.GeneralChoice2() {
                                        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_002', 'IsCloseMessageDialog': True})

                                        call StatueCamera_1()

                                        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_008', 'IsCloseMessageDialog': True})

                                        call StatueCamera_2()

                                        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_009'})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_Activated'})
                                    } else {
                                        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_003'})
                                    }
                                } else {

                                    call hello()

                                    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                                        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_004'})
                                        goto Event60
                                    } else {
                                        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_000'})
                                        if !EventSystemActor.GeneralChoice2() {
                                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_005'})
                                        } else {
                                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_001'})
                                        }
                                        goto Event60
                                    }
                                }
                            } else {
                                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_025'})
                                GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'ASName': 'TalkYes', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_026'})
                                EventSystemActor.Demo_FlagON({'FlagName': 'MagneticFld_assassin_GJ', 'IsWaitFinish': True})
                            }
                        } else
                        goto Event68
                    } else
                    Event120:
                    if Npc_oasis009.IsOnInstEventFlag() {
                        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_024', 'IsCloseMessageDialog': True})
                        Event113:
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:
                            if EventSystemActor.CheckFlag({'FlagName': 'MagneticFld_assassin_first'}) {
                                Event216:

                                call AsassinCamera_1()

                                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_018', 'IsCloseMessageDialog': True})

                                call AsassinCamera_2()

                                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_019', 'IsCloseMessageDialog': True})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_002', 'IsCloseMessageDialog': True})

                                    call StatueCamera_1()

                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_008', 'IsCloseMessageDialog': True})

                                    call StatueCamera_2()

                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_009'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_Activated'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_assassin'})
                                } else
                                if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_023'})
                                } else {
                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_032'})
                                }
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_assassin'})
                            } else
                            if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_017', 'IsCloseMessageDialog': True})
                            } else {
                                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_020', 'IsCloseMessageDialog': True})
                            }
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_assassin_first'})
                            goto Event216
                          case 1:
                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_002', 'IsCloseMessageDialog': True})

                            call StatueCamera_1()

                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_008', 'IsCloseMessageDialog': True})

                            call StatueCamera_2()

                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_021'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_Activated'})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckFlag({'FlagName': 'MagneticFld_assassin_first'}) {
                                    Event224:

                                    call AsassinCamera_1()

                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_018', 'IsCloseMessageDialog': True})

                                    call AsassinCamera_2()

                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_022'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_assassin'})
                                } else
                                if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_017', 'IsCloseMessageDialog': True})
                                } else {
                                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_020', 'IsCloseMessageDialog': True})
                                }
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_assassin_first'})
                                goto Event224
                            } else {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_assassin'})
                                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_003'})
                            }
                          case 2:
                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_003'})
                        }
                    } else {

                        call hello()

                        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_028', 'IsCloseMessageDialog': True})
                            goto Event113
                        } else {
                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_000'})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_016', 'IsCloseMessageDialog': True})
                            } else {
                                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_031', 'IsCloseMessageDialog': True})
                            }
                            goto Event113
                        }
                    }
                } else
                goto Event68
            } else {
                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Sinjyu_Female_001'})
                Event240:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_002', 'IsCloseMessageDialog': True})

                    call StatueCamera_1()

                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_008', 'IsCloseMessageDialog': True})

                    call StatueCamera_2()

                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_009'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MagneticFld_Activated'})
                    Event270:
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis009_SinjyuClear_Female'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis009_SinjyuClear_Normal'})
                } else {
                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_030'})
                    goto Event270
                }
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis009_SinjyuClear_Normal'}) {
            goto Event107
        } else {
            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Sinjyu_Normal_001'})
            goto Event240
        }
    } else
    goto Event107
}

void Finish_Npc_oasis009_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis009_SinjyuClear_Female'}) {
                Event273:
                if !Npc_oasis009.IsOnInstEventFlag() {

                    call hello()

                }
                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Sinjyu_Female_002'})
                Event257:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_006'})
                } else {
                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_029'})
                }
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis009_SinjyuClear_Female'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis009_SinjyuClear_Normal'})
            } else {
                Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Sinjyu_Normal_002'})
                goto Event257
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis009_SinjyuClear_Normal'}) {
            goto Event273
        } else {
            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Sinjyu_Normal_002'})
            goto Event257
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_permitted'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Deliver'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MagneticFld_assassin'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'MagneticFld_assassin_GJ'}) {
                    Event89:
                    if Npc_oasis009.IsOnInstEventFlag() {
                        Event93:

                        call 2nd()

                    } else {

                        call hello()

                        if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_014'})
                        } else {
                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_015'})
                        }
                        if !EventSystemActor.GeneralChoice2() {
                            goto Event93
                        } else {
                            Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_003'})
                        }
                    }
                } else {
                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_025'})
                    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'ASName': 'TalkYes', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_026'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'MagneticFld_assassin_GJ', 'IsWaitFinish': True})
                }
            } else
            goto Event89
        } else {

            call assassin()

        }
    } else
    goto Event89
}

void Ready_Npc_oasis009_Near() {
    Npc_oasis009.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': True, 'MessageId': 'EventFlowMsg/MagneticFld:near00'})
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_010'})
      case [2, 3, 4]:
        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_011'})
      case [5, 6, 7]:
        Npc_oasis009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MagneticFld:Talk_012'})
    }
}

void 2nd() {
    goto Event75
}

void assassin() {
    goto Event120
}

void StatueCamera_1() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_oasis009.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 2, 'IsValid': True, 'TurnPosition': [-3992.051025390625, 146.57989501953125, 2864.660888671875], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnDirection': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'IsValid': False, 'FaceId': 2, 'TurnPosition': [-3992.051025390625, 146.57989501953125, 2864.660888671875], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': True, 'IsWaitFinish': False, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis009', 'Pattern1PosX': 0.0, 'Pattern1PosY': 5.0, 'Pattern1PosZ': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'AtAppendMode': 1, 'MotionMode': 1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'CollisionInterpolateSkip': True, 'Count': 30.0, 'Pattern1Fovy': 10.0, 'Pattern1AtZ': 2863.174560546875, 'Pattern1AtX': -3995.322509765625, 'Pattern1AtY': 149.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void StatueCamera_2() {
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    Npc_oasis009.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0]})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 2, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'Npc_oasis009', 'IsUseSlowTurn': True, 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
}

void AsassinCamera_1() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_oasis009.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'ObjectId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnDirection': 0.0, 'TurnPosition': [-4254.14208984375, 218.014892578125, 1958.8699951171875]})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'IsValid': False, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': True, 'IsWaitFinish': False, 'TurnPosition': [-4254.14208984375, 218.014892578125, 1958.8699951171875], 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis009', 'Pattern1PosX': 0.0, 'Pattern1PosY': 5.0, 'Pattern1PosZ': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'AtAppendMode': 1, 'MotionMode': 1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'Count': 20.0, 'CollisionInterpolateSkip': True, 'Pattern1AtZ': 1958.8704833984375, 'Pattern1AtY': 218.014892578125, 'Pattern1AtX': -4254.14208984375, 'Pattern1Fovy': 15.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void AsassinCamera_2() {
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    Npc_oasis009.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0]})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 2, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsValid': True, 'ActorName': 'Npc_oasis009', 'IsUseSlowTurn': True, 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
}
