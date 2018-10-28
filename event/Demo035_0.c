-------- EventFlow: Demo035_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagOFF', 'Demo_AutoSave', 'Demo_FlagON', 'Demo_IncreaseRupee', 'Demo_IncreasePlayerMaxHeart', 'Demo_IncreasePlayerMaxStamina', 'Demo_WarpPlayer', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_IncreaseGameDataInt', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge']
queries: ['GeneralChoice3', 'CheckFlag', 'GeneralChoice2', 'ComparePlayerMaxStamina', 'ComparePlayerMaxHeart', 'CheckPlayerWeaponFired', 'CheckRupee', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_DemonStatue_A_01
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk', 'Demo_XLinkEventCreate', 'Demo_ResetBoneCtrl', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetDiffuseAttenuate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo035_Talk() {

    call DemonCamera()

    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk17', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk31', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    Event1:
    switch EventSystemActor.GeneralChoice3() {
      case 0:

        call EntryPoint1()

      case 1:
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk18', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        goto Event1
      case 2:
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk01', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        TwnObj_DemonStatue_A_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DemonStatue_Aureole', 'SLinkKey': 'DemonStatue_Aureole'})
    }
}

void EntryPoint1() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsDisplay': True, 'IsGetDemo': False})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsDisplay': True})
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'Value': 1, 'GameDataIntName': 'NpcDemonStatue_UtuwaSum'}) {
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk26'})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Event76:
            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk68'})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsDisplay': False})
                Event122:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_DemonStatue_SellFlow', 'IsWaitFinish': True})
                if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 4}) {
                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk41', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    Event121:

                    call EntryPoint1()

                } else {
                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk21', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})

                    call EntryPoint7()


                    fork {

                        call EntryPoint15()

                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        EventSystemActor.Demo_IncreasePlayerMaxHeart({'IsWaitFinish': True, 'Value': -1, 'IsMoveCenter': True})
                    }

                    if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 4}) {
                        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk37', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        Event145:

                        call EntryPoint1()

                    } else {
                        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk34', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:

                            call EntryPoint4()

                          case 1:
                            Event89:

                            call EntryPoint1()

                          case 2:
                            Event181:

                            call EntryPoint2()

                        }
                    }
                }
              case 1:
                EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsGetDemo': False, 'IsDisplay': False})
                Event123:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_DemonStatue_SellFlow', 'IsWaitFinish': True})
                if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 6}) {
                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk42', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    goto Event121
                } else {
                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk23', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})

                    call EntryPoint7()


                    fork {

                        call EntryPoint15()

                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        EventSystemActor.Demo_IncreasePlayerMaxStamina({'IsWaitFinish': True, 'Value': -1, 'IsMoveCenter': True})
                    }

                    if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 6}) {
                        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk38', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        goto Event145
                    } else {
                        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk36', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:

                            call EntryPoint6()

                          case 1:
                            goto Event89
                          case 2:
                            goto Event181
                        }
                    }
                }
              case 2:
                Event176:

                call EntryPoint2()

            }
          case 1:
            if EventSystemActor.CheckRupee({'Value': 120}) {
                TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk69'})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsDisplay': False})
                    Event86:
                    if EventSystemActor.CheckRupee({'Value': 120}) {
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_DemonStatue_SellFlow', 'IsWaitFinish': True})
                        if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 30}) {
                            TwnObj_DemonStatue_A_01.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk20', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})

                            call EntryPoint7()


                            fork {

                                call EntryPoint16()

                            } {
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                EventSystemActor.Demo_IncreasePlayerMaxHeart({'IsWaitFinish': True, 'Value': 1, 'IsMoveCenter': True})
                            }

                            if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 30}) {
                                if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'NpcDemonStatue_UtuwaSum', 'Value': 1}) {
                                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk33', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                    switch EventSystemActor.GeneralChoice3() {
                                      case 0:

                                        call EntryPoint3()

                                      case 1:
                                        goto Event89
                                      case 2:
                                        goto Event181
                                    }
                                } else {
                                    Event289:

                                    call EntryPoint1()

                                }
                            } else {
                                TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk39', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                goto Event145
                            }
                        } else {
                            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk43', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                            goto Event121
                        }
                    } else {
                        Event85:
                        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk05', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_DemonStatue_SellFlow', 'IsWaitFinish': True})

                        call EntryPoint1()

                    }
                  case 1:
                    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsGetDemo': False, 'IsDisplay': False})
                    Event84:
                    if EventSystemActor.CheckRupee({'Value': 120}) {
                        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_DemonStatue_SellFlow', 'IsWaitFinish': True})
                        if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 15}) {
                            TwnObj_DemonStatue_A_01.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk22', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})

                            call EntryPoint7()


                            fork {

                                call EntryPoint16()

                            } {
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                EventSystemActor.Demo_IncreasePlayerMaxStamina({'IsWaitFinish': True, 'Value': 1, 'IsMoveCenter': True})
                            }

                            if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 15}) {
                                if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'NpcDemonStatue_UtuwaSum', 'Value': 1}) {
                                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk35', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                    switch EventSystemActor.GeneralChoice3() {
                                      case 0:

                                        call EntryPoint5()

                                      case 1:
                                        goto Event89
                                      case 2:
                                        goto Event181
                                    }
                                } else {
                                    goto Event289
                                }
                            } else {
                                TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk40', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                goto Event145
                            }
                        } else {
                            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk44', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                            goto Event121
                        }
                    } else {
                        goto Event85
                    }
                  case 2:
                    Event375:

                    call EntryPoint2()

                }
            } else {
                goto Event85
            }
          case 2:
            goto Event176
        }
    } else {
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk47', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        if !EventSystemActor.GeneralChoice2() {
            goto Event76
        } else {
            goto Event375
        }
    }
}

void EntryPoint2() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_DemonStatue_Operation'}) {
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk16', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    } else {
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk04', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    }
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_DemonStatue_Operation', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_DemonStatue_SellFlow', 'IsWaitFinish': True})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    TwnObj_DemonStatue_A_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DemonStatue_Aureole', 'SLinkKey': 'DemonStatue_Aureole'})
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void EntryPoint3() {
    goto Event86
}

void EntryPoint4() {
    goto Event122
}

void EntryPoint5() {
    goto Event84
}

void EntryPoint6() {
    goto Event123
}

void EntryPoint7() {
    if !EventSystemActor.GeneralChoice2() {
        TwnObj_DemonStatue_A_01.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk45', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_DemonStatue_SellFlow'}) {
            EventSystemActor.Demo_IncreaseRupee({'Value': 100, 'IsWaitFinish': True})
        } else {
            EventSystemActor.Demo_IncreaseRupee({'Value': -120, 'IsWaitFinish': True})
        }
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_DemonStatue_Operation', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_DemonStatue_FirstSell'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_DemonStatue_SellFlow'}) {
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'Value': 1, 'GameDataIntName': 'NpcDemonStatue_UtuwaSum'})
        } else {
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'Value': -1, 'GameDataIntName': 'NpcDemonStatue_UtuwaSum'})
        }
    } else {

        call EntryPoint1()

    }
}

void Demo035_Ready() {

    call DemoCamera_first()

    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk52'})
    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk53'})
    if !EventSystemActor.GeneralChoice2() {
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk54'})
    } else {
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk32'})
    }
    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk77'})
    Event291:
    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk89'})
    if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 4}) {
        if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 6}) {
            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk80'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_DevilSeal_Activated'})
            Event356:
            TwnObj_DemonStatue_A_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DemonStatue_Aureole', 'SLinkKey': 'DemonStatue_Aureole'})
        } else {
            EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplay': True, 'IsDisplayEx': True})
            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk78'})

            call Give_First()

            EventSystemActor.Demo_IncreasePlayerMaxStamina({'IsWaitFinish': True, 'Value': -1, 'IsMoveCenter': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk82'})
            Event274:
            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk65'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_DevilSeal_Activated'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_DevilSeal_GiveUtsuwa'})
            goto Event356
        }
    } else {
        EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsDisplay': True, 'IsGetDemo': False})
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk78'})

        call Give_First()

        EventSystemActor.Demo_IncreasePlayerMaxHeart({'IsWaitFinish': True, 'Value': -1, 'IsMoveCenter': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk82'})
        goto Event274
    }
}

void Demo035_Finish() {

    call DemonCamera()

    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk58'})
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsDisplay': True, 'IsGetDemo': False})
        EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsDisplay': True})
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC028_DemonStatue_FinishFirst'}) {
            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk86'})
            Event34:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                EventSystemActor.Demo_SetDispStaminaGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsDisplay': False})
                if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 30}) {
                    TwnObj_DemonStatue_A_01.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk87'})

                    call Take_First()

                    EventSystemActor.Demo_IncreasePlayerMaxHeart({'IsWaitFinish': True, 'Value': 1, 'IsMoveCenter': True})
                    Event423:
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk88'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_DevilSeal_Finish', 'IsWaitFinish': True})
                    Event357:
                    TwnObj_DemonStatue_A_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DemonStatue_Aureole', 'SLinkKey': 'DemonStatue_Aureole'})
                } else {
                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk43', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    Event368:
                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk16', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    goto Event357
                }
              case 1:
                EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsGetDemo': False, 'IsDisplay': False})
                if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 15}) {
                    TwnObj_DemonStatue_A_01.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk87'})

                    call Take_First()

                    EventSystemActor.Demo_IncreasePlayerMaxStamina({'IsWaitFinish': True, 'Value': 1, 'IsMoveCenter': True})
                    goto Event423
                } else {
                    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo035_0:talk44', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                    goto Event368
                }
              case 2:
                TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk59'})
                goto Event357
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC028_DemonStatue_FinishFirst'})
            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk84'})
            TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk85'})
            goto Event34
        }
    } else {
        TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk59'})
        goto Event357
    }
}

void DemonCamera() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Mute', 'SeCtrlType': 'None'})

    fork {
        if !EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        }
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'TargetActor': 0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False})
        } {
            GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'DemoWait', 'ClothWarpMode': 1})
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'I-7', 'WarpDestPosName': 'DemonPos', 'IsWaitFinish': True})
        }

        GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': False})
    } {
        TwnObj_DemonStatue_A_01.Demo_BecomeSpeaker({'IsWaitFinish': True})

        fork {
            TwnObj_DemonStatue_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DemonStatue_Aureole', 'SLinkKey': 'DemonStatue_Aureole', 'IsTargetDemoSLinkUser': True})
        } {
            WorldManagerControl.Demo_EventSetDiffuseAttenuate({'IsWaitFinish': True, 'diameter': 0.20000000298023224})
        }

    }

}

void Demo035_GiveUtsuwa() {

    call DemonCamera()

    TwnObj_DemonStatue_A_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo035_0:talk57'})
    goto Event291
}

void Demo035_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_DevilSeal_Finish'}) {
        Event184:
        TwnObj_DemonStatue_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo035_0:near00', 'DispFrame': 90, 'IsChecked': False})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_DevilSeal_Activated'}) {
        goto Event184
    } else {
        TwnObj_DemonStatue_A_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo035_0:near00', 'DispFrame': 300, 'IsChecked': True})
    }
}

void EntryPoint15() {
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo035_0-C01-Link-EnergyDrain', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 36})
    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_HeartDown', 'SLinkKey': 'Demo_HeartDown', 'IsTargetDemoSLinkUser': False})
}

void EntryPoint16() {
    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_HeartUp', 'SLinkKey': 'Demo_HeartUp', 'IsTargetDemoSLinkUser': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 14})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo035_0-C01-Link-Recover', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
}

void DemoCamera_first() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Mute', 'SeCtrlType': 'None'})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'TargetActor': 0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'I-7', 'WarpDestPosName': 'DemonPos', 'IsWaitFinish': True})
        }

    } {
        if !EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        }
    } {
        TwnObj_DemonStatue_A_01.Demo_BecomeSpeaker({'IsWaitFinish': True})

        fork {
            TwnObj_DemonStatue_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DemonStatue_Aureole', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'DemonStatue_Aureole'})
        } {
            WorldManagerControl.Demo_EventSetDiffuseAttenuate({'IsWaitFinish': True, 'diameter': 0.20000000298023224})
        }

    }

    GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
}

void Give_First() {
    TwnObj_DemonStatue_A_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': 'DemonStatue_Aureole', 'ELinkKey': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'TargetActor': 0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'Accept1FrameDelay': False, 'SceneName': 'C02-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo035_0-C01-Link-EnergyDrain', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 36})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_HeartDown', 'SLinkKey': 'Demo_HeartDown', 'IsTargetDemoSLinkUser': False})
    }

    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-1', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    TwnObj_DemonStatue_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'DemonStatue_Aureole', 'ELinkKey': ''})
}

void Take_First() {
    TwnObj_DemonStatue_A_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': 'DemonStatue_Aureole', 'ELinkKey': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'TargetActor': 0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'Accept1FrameDelay': False, 'SceneName': 'C02-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_HeartUp', 'SLinkKey': 'Demo_HeartUp', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 14})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo035_0-C01-Link-Recover', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-1', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': True})
    TwnObj_DemonStatue_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'DemonStatue_Aureole', 'ELinkKey': ''})
}
