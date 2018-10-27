-------- EventFlow: Npc_AncientDoctor --------

Actor: Npc_AncientDoctor
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_IncreasePorchItem', 'Demo_IncreaseGameDataInt', 'Demo_CallDemo', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_AutoSave']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckPlayerState', 'CheckTimeType', 'GeneralChoice4', 'GeneralChoice3', 'HasPorchItem', 'CheckGameDataInt', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_AncientAssistant001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_BindSheikPad', 'Demo_UnbindSheikPad', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

void Talk() {
    Event359:

    call PuruaGreeting()

    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk60', 'IsOverWriteLabelActorName': False})
    Event325:
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk61', 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk62', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk63', 'IsCloseMessageDialog': True})
                Event468:
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk71'})
                goto Event325
            } else {
                Event345:
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk70', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Byebye'})
            }
        } else {
            Event340:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk70', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Byebye'})
        }
      case 1:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Checkit', 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk64'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk66', 'IsOverWriteLabelActorName': False, 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk67', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk68', 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk69', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    goto Event468
                } else {
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk70', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Byebye'})
                }
            } else {
                goto Event345
            }
        } else {
            goto Event340
        }
      case 2:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Checkit', 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk65'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk66', 'IsOverWriteLabelActorName': False, 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk72', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk73', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                goto Event468
            } else {
                goto Event345
            }
        } else {
            goto Event340
        }
      case 3:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk70', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Byebye'})
    }
}

void Finish_ItemPowerUp() {

    call PuruaGreeting()

    if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Finish'}) {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk75'})
        Event305:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Hateno_SheikPad_PowerUp_First'}) {
                Event448:
                if EventSystemActor.HasPorchItem({'Count': 3, 'PorchItemName': 'Item_Enemy_27'}) {
                    Event488:

                    call SelectPowerUp()

                } else
                if EventSystemActor.HasPorchItem({'Count': 3, 'PorchItemName': 'Item_Enemy_29'}) {
                    goto Event488
                } else
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Enemy_30', 'Count': 3}) {
                    goto Event488
                } else {
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk45'})

                    call PuruaExplain()

                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk87'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Hateno_SheikPad_PowerUp_First', 'IsWaitFinish': True})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk88'})
                Event462:
                switch EventSystemActor.GeneralChoice4() {
                  case 1:
                    goto Event448
                  case 2:
                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk89'})

                    call PuruaExplain()

                    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk90'})
                    goto Event462
                  case 3:

                    call PuruaBye()

                }
            }
          case 1:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk76'})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk79'})
            if !EventSystemActor.RandomChoice2() {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk81', 'IsCloseMessageDialog': True})
                Event487:
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk78'})
                goto Event305
            } else {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk83'})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk80', 'IsCloseMessageDialog': True})
                goto Event487
            }
          case 2:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk91', 'IsCloseMessageDialog': True})
            goto Event487
          case 3:

            call PuruaBye()

        }
    } else {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk05'})
        goto Event305
    }
}

void Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_SheikPad_PowerUp_Finish'}) {
        Event447:
        Npc_AncientDoctor.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:near00', 'IsChecked': False, 'DispFrame': 90})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_SheikPad_PowerUp_Activated'}) {
        goto Event447
    } else {
        Npc_AncientDoctor.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:near00', 'DispFrame': 300, 'IsChecked': True})
    }
}

void AllFinished() {
    goto Event359
}

void SelectPowerUp() {
    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk31', 'IsOverWriteLabelActorName': False})
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk50', 'IsOverWriteLabelActorName': False})
        Event207:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if EventSystemActor.HasPorchItem({'Count': 3, 'PorchItemName': 'Item_Enemy_27'}) {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk38', 'ASName': 'Talk_Special'})

                call PowerUpDemo({'Value': -3, 'FlagName': 'Hateno_SheikSensorLv2_Choice', 'PorchItemName': 'Item_Enemy_27'})

                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3775.1337890625, 'Pattern1PosY': 358.6440124511719, 'Pattern1PosZ': 2122.081298828125, 'Pattern1AtX': 3776.270263671875, 'Pattern1AtY': 358.0885009765625, 'Pattern1AtZ': 2126.962890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'ActorName1': 'Npc_AncientAssistant001', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_AncientAssistant001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': 'Npc_AncientDoctor', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1, 'FaceId': 1, 'IsConfront': True})

                fork {
                    Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_AncientAssistant001', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                } {
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Npc_AncientAssistant001', 'UniqueName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Talk'})
                }

                EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientAssistant001_SSLv2Get', 'IsWaitFinish': True})
                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk74', 'IsCloseMessageDialog': True})
                Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk77'})
                if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_SheikSensorLv2'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_RemoteBombLv2'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_StopTimerLv2'}) {
                            Event228:
                            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk58', 'IsOverWriteLabelActorName': False})
                            EventSystemActor.Demo_FlagON({'FlagName': 'Hateno_SheikPad_PowerUp_Finish', 'IsWaitFinish': True})
                        } else {
                            Event516:
                            EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                        }
                    } else {
                        goto Event516
                    }
                } else {
                    goto Event516
                }
            } else {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk95'})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk84'})
                Event402:
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk96'})

                call SelectPowerUp()

            }
          case 1:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk55', 'IsOverWriteLabelActorName': False})
            goto Event207
          case 2:
            Event438:

            call PuruaBye()

        }
      case 1:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk51'})
        Event212:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if EventSystemActor.HasPorchItem({'Count': 3, 'PorchItemName': 'Item_Enemy_29'}) {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk39', 'ASName': 'Talk_Special'})

                call PowerUpDemo({'Value': -3, 'FlagName': 'Hateno_RemoteBombLv2_Choice', 'PorchItemName': 'Item_Enemy_29'})

                Event227:
                if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_SheikSensorLv2'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_RemoteBombLv2'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_StopTimerLv2'}) {
                            goto Event228
                        } else {
                            Event93:
                            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk59', 'ASName': 'Talk_Checkit2'})
                            goto Event516
                        }
                    } else {
                        goto Event93
                    }
                } else {
                    goto Event93
                }
            } else {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk95'})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk85'})
                goto Event402
            }
          case 1:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk56'})
            goto Event212
          case 2:
            goto Event438
        }
      case 2:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk52'})
        Event211:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Enemy_30', 'Count': 3}) {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk40', 'ASName': 'Talk_Special'})

                call PowerUpDemo({'FlagName': 'Hateno_StopTimerLv2_Choice', 'PorchItemName': 'Item_Enemy_30', 'Value': -3})

                goto Event227
            } else {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk95'})
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk86'})
                goto Event402
            }
          case 1:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk57'})
            goto Event211
          case 2:
            goto Event438
        }
      case 3:
        goto Event438
    }
}

void PuruaGreeting() {

    call PuruaDeskTalk()

    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_Damnation'}) {
        Event30:
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            if Npc_AncientDoctor.IsOnInstEventFlag() {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk04', 'IsOverWriteLabelActorName': False})
            } else {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk03', 'IsOverWriteLabelActorName': False})
            }
        } else
        if Npc_AncientDoctor.IsOnInstEventFlag() {
            if !EventSystemActor.RandomChoice2() {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk09', 'ASName': 'Talk_Checkit'})
            } else {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk35', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Special'})
            }
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk32', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Checkit'})
          case [2, 3, 4, 5]:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk33', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Checkit2'})
          case [6, 7]:
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk34', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Peace'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_Diary_Read'}) {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk12', 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk13', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            Event173:
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk06'})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk15', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            GameROMPlayer.Demo_BindSheikPad({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'SheikPadLookPicture', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'SheikPadLookPictureLoop', 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'SheikPadLookPictureOff', 'NoErrorCheck': False})
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Talk'})
                GameROMPlayer.Demo_UnbindSheikPad({'IsWaitFinish': True})
            } {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk23', 'IsCloseMessageDialog': True})
            }

            EventSystemActor.Demo_FlagOFF({'FlagName': 'AncientLabo_Diary_Read', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AncientLabo_AncientDoctor001_Damnation'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk14', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            goto Event173
        }
    } else
    goto Event30
}

void PuruaBye() {
    if !EventSystemActor.RandomChoice2() {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk42', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Byebye'})
    } else {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Byebye', 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk43'})
    }
}

void PuruaExplain() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_SheikSensorLv2'}) {
        Event451:
        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_RemoteBombLv2'}) {
            Event452:
            if !EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_StopTimerLv2'}) {
                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk86'})
            }
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk85'})
            goto Event452
        }
    } else {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk84'})
        goto Event451
    }
}

void Explain_ItemPowerUp() {

    call PuruaGreeting()

    Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk92'})
    Event483:
    switch EventSystemActor.GeneralChoice4() {
      case 1:
        Npc_AncientDoctor.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk93', 'IsWaitFinish': True})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk84'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk85'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk86'})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk87'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Hateno_SheikPad_PowerUp_Explain'})
      case 2:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk91', 'IsCloseMessageDialog': True})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk94'})
        goto Event483
      case 3:

        call PuruaBye()

    }
}

void PuruaDeskTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_UpArea'}) {
        if !EventSystemActor.RandomChoice2() {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk26', 'ASName': ''})
            Event515:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk27', 'ASName': 'Talk_Soliloquy'})
            goto Event515
        }
    }
}

void PowerUpDemo() {
    switch EventSystemActor.GeneralChoice4() {
      case 0:
        Event523:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FlagName'})
        EventSystemActor.Demo_IncreasePorchItem({'IsWaitFinish': True, 'PorchItemName': 'PorchItemName', 'Value': 'Value'})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo032_0', 'EntryPointName': 'Demo032_0', 'EndFade': 0})
        EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'GameDataIntName': 'Hateno_SheikPad_Lv2_Total', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Hateno_SheikPad_PowerUp_Huh', 'IsWaitFinish': True})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk44', 'IsCloseMessageDialog': True})
      case 1:
        EventSystemActor.Demo_FlagON({'FlagName': 'Hateno_SheikPad_PowerUp_Huh', 'IsWaitFinish': True})
        goto Event523
      case 2:
        if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Hateno_SheikPad_Lv2_Total', 'Value': 2}) {
            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor:talk49'})
            Event535:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {

            call SelectPowerUp()

            goto Event535
        }
      case 3:

        call PuruaBye()

        goto Event535
    }
}
