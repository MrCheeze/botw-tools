-------- EventFlow: Npc_Kakariko006 --------

Actor: Npc_Kakariko006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_SetAttentionForbidSale', 'Demo_BecomeSpeaker', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion', 'Demo_PlayASForDemo', 'Demo_ChangePosture', 'Demo_ChangePostureWithAS']
queries: ['CheckActorAction13', 'CheckPlacedItemSaled']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayer', 'Demo_CloseMessageDialog', 'Demo_NoDeleteCurrent', 'Demo_WaitFrame', 'Demo_EnableCameraInput', 'Demo_FlagOFF']
queries: ['CheckWeather', 'CheckFlag', 'GeneralChoice2', 'CheckAddPorchItem', 'CheckGameDataInt', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt', 'Demo_Talk', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff', 'Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko008
entrypoint: None()
actions: []
queries: ['CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_Front'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko006_FrontTalk'})
        Event327:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Event90:
        switch Npc_Kakariko006.CheckActorAction13() {
          case 0:
            Event69:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_first'}) {
                Event92:
                switch Npc_Kakariko006.CheckActorAction13() {
                  case 0:
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_inPumpkinPatch'}) {
                        Event279:
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_SoldOut'}) {
                            Npc_Kakariko006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk02', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                        } else {
                            Npc_Kakariko006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk00', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'IsCloseMessageDialog': True})
                            Npc_Kakariko006.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                            Npc_Kakariko006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True})
                            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk18'})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk35', 'ASName': 'Talk'})
                            } else {
                                Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk36', 'ASName': 'Talk'})
                            }
                        }
                    } else {
                        Npc_Kakariko006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    }
                  case 1:
                    goto Event279
                  case 2:
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_inPumpkinPatch'}) {
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk43'})
                          case 1:
                            Event238:
                            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk46'})
                          case 2:
                            goto Event238
                          case 3:
                            goto Event238
                        }
                    } else {
                        Npc_Kakariko006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    }
                  case 3:
                    if !EventSystemActor.RandomChoice2() {
                        Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk07', 'IsOverWriteLabelActorName': False})
                    } else {
                        Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk44'})
                    }
                  case 10:
                    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Finish'}) {
                        Event109:
                        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_006in006house'}) {
                            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk23'})
                        } else {
                            switch EventSystemActor.CheckWeather() {
                              case 0:
                                Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk22'})
                              case 1:
                                Event236:
                                Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk45'})
                              case 2:
                                goto Event236
                              case 3:
                                goto Event236
                            }
                        }
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Ready'}) {
                            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk47'})
                        } else {
                            goto Event109
                        }
                    }
                  case 11:
                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk37'})
                  case 12:
                    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_006_DosDos'}) {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko006_detected'})
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_dosdos'}) {
                            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk49', 'ASName': ''})
                            if !EventSystemActor.GeneralChoice2() {
                                Event314:
                                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_excuse'}) {
                                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk50'})
                                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk51'})
                                } else {
                                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk27', 'ASName': ''})
                                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk30', 'ASName': ''})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko006_excuse'})
                                }
                            } else {
                                Event127:
                                Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk28', 'ASName': 'Talk'})
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko006_dosdos'})
                            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk20', 'ASName': ''})
                            if !EventSystemActor.GeneralChoice2() {
                                goto Event314
                            } else {
                                goto Event127
                            }
                        }
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_detected'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_r_after_detected'}) {
                                Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk52'})
                                Event345:
                                if !EventSystemActor.GeneralChoice2() {
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                                    Npc_Kakariko006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [1835.5, 260.1199951171875, 896.97998046875], 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1847.643798828125, 'Pattern1PosY': 253.89329528808594, 'Pattern1PosZ': 977.2902221679688, 'Pattern1AtX': 1847.382568359375, 'Pattern1AtY': 254.41734313964844, 'Pattern1AtZ': 972.481689453125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': True, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 2, 'ActorIgnoringCollision': -1, 'Count': 45.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk12', 'IsCloseMessageDialog': True})
                                    GameRomCamera.Demo_ReturnSavePoint_1({'Count': 0.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
                                } else {
                                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk13'})
                                }
                            } else {
                                Event98:
                                switch EventSystemActor.CheckWeather() {
                                  case 0:
                                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk10'})
                                    goto Event345
                                  case 1:
                                    Event117:
                                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk26'})
                                    goto Event345
                                  case 2:
                                    goto Event117
                                  case 3:
                                    goto Event117
                                }
                            }
                        } else {
                            goto Event98
                        }
                    }
                }
            } else {

                call HatakeFirst()

                Event271:
                Npc_Kakariko006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True})
                Npc_Kakariko006.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Npc_Kakariko006', 'ObjectId': 0, 'IsWaitFinish': False, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})

                fork {
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk16'})
                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk56', 'ASName': ''})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                }

                Event176:

                fork {
                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk29', 'ASName': 'Detect', 'IsCloseMessageDialog': True})
                    Npc_Kakariko006.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'TalkSurprise', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
                }

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk19'})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk34'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko006_first'})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Fruit_J'}) {
                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk55'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko006_GavePumpkin'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Fruit_J'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko006_GavePumpkin'})
                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk21'})
                } else {
                    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk39'})
                }
            }
          case 1:
            goto Event69
          case 2:
            goto Event69
          case 3:
            goto Event69
          case 4:
            goto Event69
          case 5:
            goto Event69
          case 6:
            goto Event69
          case 7:
            goto Event69
          case 8:
            goto Event69
          case 9:
            goto Event69
          case 10:
            goto Event69
          case 11:
            goto Event92
          case 12:
            goto Event69
          case 13:
            goto Event69
        }
    } else {
        goto Event327
    }
}

void Near() {
    switch Npc_Kakariko006.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near05', 'IsChecked': False, 'DispFrame': 90})
          case 1:
            Event134:
            Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near06', 'IsChecked': False, 'DispFrame': 90})
          case 2:
            goto Event134
          case 3:
            goto Event134
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_SoldOut'}) {
                Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near04', 'IsChecked': False, 'DispFrame': 90})
            } else {
                Npc_Kakariko006.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
            }
          case 1:
            Event240:
            Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near01'})
          case 2:
            goto Event240
          case 3:
            goto Event240
        }
      case 2:
        Event135:
        Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near07', 'IsChecked': False, 'DispFrame': 90})
      case 3:
        if Npc_Kakariko008.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
            Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near08', 'IsChecked': False, 'DispFrame': 90})
        } else {
            goto Event135
        }
      case 10:
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_006in006house'}) {
            Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near11', 'DispFrame': 90})
        } else {
            Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near10', 'IsChecked': False, 'DispFrame': 90})
        }
      case 11:
        Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near09', 'IsChecked': False, 'DispFrame': 90})
      case 12:
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_006_DosDos'}) {
            Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near03', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Near02', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void Sell() {
    switch Npc_Kakariko006.CheckPlacedItemSaled() {
      case 0:

        call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

        Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk01', 'IsOverWriteLabelActorName': False})
      case 1:

        call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

        Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk02', 'IsOverWriteLabelActorName': False})
      case 2:

        call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

        Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk54'})
    }
}

void PlumDemo() {

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.0762939453125, 'Pattern1PosY': 1.6373900175094604, 'Pattern1PosZ': 1.610595941543579, 'Pattern1AtX': 0.07617200165987015, 'Pattern1AtY': 1.6373900175094604, 'Pattern1AtZ': -0.12133800238370895, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko006', 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        Npc_Kakariko006.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Kakariko006.Demo_TurnAndLookToObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'IsConfront': True, 'IsWaitFinish': False})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.0762939453125, 'Pattern1PosY': 1.6373900175094604, 'Pattern1PosZ': 1.610595941543579, 'Pattern1AtX': 0.07617200165987015, 'Pattern1AtY': 1.6373900175094604, 'Pattern1AtZ': -0.12133800238370895, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko006', 'MotionMode': 0, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'StartCalcOnly': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk09', 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})

    fork {
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'G-6', 'WarpDestPosName': 'DemoPlum', 'IsWaitFinish': True})
    } {
        Npc_Kakariko006.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_Kakariko006.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_Kakariko006.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction3'})
    }

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_Kakariko008', 'IsValid': True, 'FaceId': 2, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.102783203125, 'Pattern1PosY': 1.972519040107727, 'Pattern1PosZ': -0.2929689884185791, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.6499940156936646, 'Pattern1AtZ': 0.0, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'StartCalcOnly': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'NoConnect': True, 'CameraReset': True})
    Npc_Kakariko006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Plum_Count', 'Operator': 'GreaterThanOrEqualTo', 'Value': 5}) {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Kakariko_Plum_Count', 'Operator': 'GreaterThanOrEqualTo', 'Value': 9}) {
            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk42'})
        } else {
            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk41'})
        }
    } else {
        Npc_Kakariko006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk08', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void ClerkAsk() {
    EventSystemActor.Demo_FlagOFF({'FlagName': 'IsOpenShopInfo_Demo', 'IsWaitFinish': True})

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})

    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk06', 'IsOverWriteLabelActorName': False})
    if !EventSystemActor.GeneralChoice2() {

        call Demo002_0.Demo002_0({'Arg_FlagName': 'Arg_FlagName', 'Arg_CurrentActorName': 'Arg_CurrentActorName'})

        Npc_Kakariko006.Demo_SetAttentionForbidSale({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

        call Sell()

    } else {
        EventSystemActor.Demo_NoDeleteCurrent({'IsWaitFinish': True})
        Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk03'})
    }
}

void PlumBomb() {

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        Npc_Kakariko006.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Kakariko006.Demo_TurnAndLookToObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'FaceId': 2, 'IsWaitFinish': False, 'IsConfront': True})
    }

    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.0762939453125, 'Pattern1PosY': 1.6373900175094604, 'Pattern1PosZ': 1.610595941543579, 'Pattern1AtX': 0.07617200165987015, 'Pattern1AtY': 1.6373900175094604, 'Pattern1AtZ': -0.12133800238370895, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko006', 'MotionMode': 0, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'StartCalcOnly': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Kakariko006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk08', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
}

void Kakariko006_Surprise() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Kakariko006")})

    Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Detect', 'MessageId': 'EventFlowMsg/Npc_Kakariko006:SupriseHouse'})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_first'}) {
        Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:SupriseHouse_00', 'ASName': 'Talk'})
    } else {

        fork {
            Npc_Kakariko006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:SupriseHouse_01', 'ASName': 'Wait'})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        }


        call FirstMT()

    }
}

void FirstTalk() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Kakariko006")})

    switch Npc_Kakariko006.CheckActorAction13() {
      case 0:
        Event357:
        Npc_Kakariko006.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk48', 'IsWaitFinish': True, 'ASName': ''})
        Event339:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

        call HatakeFirst()

        goto Event271
      case 1:
        Npc_Kakariko006.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk48', 'ASName': 'Talk_Farmer', 'IsWaitFinish': True})
        goto Event339
      case 2:
        goto Event357
      case 3:
        goto Event357
      case 4:
        goto Event357
      case 5:
        goto Event357
      case 6:
        goto Event357
      case 7:
        goto Event357
      case 8:
        goto Event357
      case 9:
        goto Event357
      case 10:
        goto Event357
      case 11:
        goto Event357
      case 12:
        goto Event357
      case 13:
        goto Event357
    }
}

void FirstMT() {
    goto Event176
}

void OnlyCheck() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 4, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko006:Talk53', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True})
}

void HatakeFirst() {
    switch Npc_Kakariko006.CheckActorAction13() {
      case 0:
        Event328:
        Npc_Kakariko006.Demo_BecomeSpeaker({'IsWaitFinish': True})
      case 1:
        Event329:
        Npc_Kakariko006.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
        goto Event328
      case 2:
        goto Event328
      case 3:
        goto Event329
      case 4:
        goto Event328
      case 5:
        goto Event328
      case 6:
        goto Event328
      case 7:
        goto Event328
      case 8:
        goto Event328
      case 9:
        goto Event328
      case 10:
        goto Event328
      case 11:
        goto Event328
      case 12:
        goto Event328
      case 13:
        goto Event328
    }
}

void Check_Ninjin_Dosdos() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Kakariko006")})

    goto Event90
}

void SupriseCheck() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3600})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko006_FrontTalk'})
}
