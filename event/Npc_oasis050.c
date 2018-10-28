-------- EventFlow: Npc_oasis050 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayer', 'Demo_IncreaseGameDataInt']
queries: ['CheckTimeType', 'GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'CheckTime', 'RandomChoice4', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis050[Pauda_Karakara]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_MoveToAnchor', 'Demo_ChangePosture', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis050[Pauda_Ichikara]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage031
entrypoint: None()
actions: ['Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_StartAndKeep']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Near() {
    if Npc_oasis050[Pauda_Karakara].CheckActorAction13() in [0, 1, 10] {
        Npc_oasis050[Pauda_Karakara].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis050[Pauda_Karakara].CheckActorAction13() {
      case [0, 1, 10]:
        if Npc_oasis050[Pauda_Karakara].IsOnInstEventFlag() {
            Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk16', 'IsOverWriteLabelActorName': False, 'ASName': ''})
            Event180:
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                if Npc_oasis050[Pauda_Karakara].IsOnInstEventFlag() {
                    Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis050:talk54'})
                } else {
                    Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis050:talk50'})
                }
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis050_Yes', 'IsWaitFinish': True})
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_No'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_YesNo'}) {
                            Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis050:talk55'})
                        } else {
                            Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis050:talk53'})
                        }
                        Event191:
                        Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis050:talk51'})
                        Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk10', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_No'}) {
                            Event188:
                            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis050_YesNo', 'IsWaitFinish': True})
                        }
                    } else {
                        goto Event191
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis050_No', 'IsWaitFinish': True})
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_Yes'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_YesNo'}) {
                            Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis050:talk55'})
                        } else {
                            Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis050:talk53'})
                        }
                        Event192:
                        Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_oasis050:talk52'})
                        Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk10', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_Yes'}) {
                            goto Event188
                        }
                    } else {
                        goto Event192
                    }
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_BoyHunt'}) {
                Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk17', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                Event12:
                if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor02'}) {
                    Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk11', 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': ''})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk56', 'IsCloseMessageDialog': True, 'ASName': ''})

                        fork {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                            Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk12', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'IsWaitFinish': True})
                        } {
                            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
                        }

                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Npc_oasis050[Pauda_Karakara].Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})

                        fork {
                            Npc_oasis050[Pauda_Karakara].Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                        } {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                        }

                        Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk37', 'ASName': 'Wait'})

                        fork {
                            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'PaudaMove', 'WarpDestMapName': 'B-7'})
                        } {
                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3267.998046875, 'Pattern1PosY': 130.78208923339844, 'Pattern1PosZ': 2577.76904296875, 'Pattern1AtX': -3269.808349609375, 'Pattern1AtY': 130.78208923339844, 'Pattern1AtZ': 2582.742919921875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        }

                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3261.79248046875, 'Pattern1PosY': 130.6988067626953, 'Pattern1PosZ': 2584.458251953125, 'Pattern1AtX': -3266.852783203125, 'Pattern1AtY': 130.53311157226562, 'Pattern1AtZ': 2584.249755859375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'ReviseModeEnd': 0, 'Count': 300.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_oasis050[Pauda_Karakara].Demo_MoveToAnchor({'AnchorName': 'AnchorAction4', 'AnchorUniqueName': 'Go_Ichikara', 'ASKeyName': 'Walk', 'IsWaitFinish': False, 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})

                        fork {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 240})
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
                        } {
                            EventBgmCtrlTag.Demo_StartAndKeep({'IsWaitFinish': True, 'BgmName': 'MovingIchikaraBgm'})
                        }

                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3269.95166015625, 'Pattern1PosY': 130.57945251464844, 'Pattern1PosZ': 2577.193603515625, 'Pattern1AtX': -3270.015625, 'Pattern1AtY': 130.7779083251953, 'Pattern1AtZ': 2582.32373046875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Invite02'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiVillage_NPC050_Reward'})
                        EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'Value': 1, 'GameDataIntName': 'Location_UMiiVillageShopBougu'})
                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                    } else {
                        Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk01', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                    }
                } else {
                    Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk10', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_First'}) {
                Event121:
                Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk19', 'ASName': ''})
                if EventSystemActor.GeneralChoice2() {
                    Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk18', 'ASName': ''})
                }
                Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk06', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk07', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                } else {
                    Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk08', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                }
                Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk09', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis050_BoyHunt'})
                goto Event12
            } else
            if Npc_oasis050[Pauda_Karakara].IsOnInstEventFlag() {
                Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk03', 'ASName': ''})
            } else {
                Npc_oasis050[Pauda_Karakara].Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis050:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            }
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk02', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk05', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis050_First', 'IsWaitFinish': True})
                    goto Event121
                } else {
                    Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk16', 'IsOverWriteLabelActorName': False, 'ASName': ''})
                }
            } else {
                Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk04', 'IsOverWriteLabelActorName': False})
            }
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk13', 'IsOverWriteLabelActorName': False, 'ASName': ''})
            goto Event180
          case [2, 3, 4, 5]:
            Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk14', 'IsOverWriteLabelActorName': False, 'ASName': ''})
            goto Event180
          case [6, 7]:
            Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk15', 'IsOverWriteLabelActorName': False, 'ASName': ''})
            goto Event180
        }
      case 11:
        Npc_oasis050[Pauda_Karakara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk49', 'ASName': ''})
    }
}

void Npc_oasis050_Go_Near() {
    if Npc_oasis050[Pauda_Ichikara].CheckActorAction13() in [8, 9] {
        Npc_oasis050[Pauda_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Npc_oasis050_Go_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_UpArea'}) {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk57', 'ASName': ''})
          case 1:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk58', 'ASName': ''})
          case 2:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk59', 'ASName': ''})
          case 3:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk60', 'ASName': ''})
        }
    } else {
        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk20', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk22', 'ASName': ''})

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_oasis050", sub_name="Pauda_Ichikara")})

            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk23', 'ASName': ''})
          case 1:
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                if Npc_oasis050[Pauda_Ichikara].IsOnInstEventFlag() {
                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk21', 'ASName': ''})
                } else {
                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk21', 'ASName': ''})
                }
                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk28', 'ASName': ''})
            } else
            switch EventSystemActor.CheckTimeType() {
              case [0, 1]:
                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk29', 'ASName': ''})
                Event103:
                if EventSystemActor.CheckFlag({'FlagName': 'Ichikara_NPC050_First'}) {
                    Event100:
                    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Invite03'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Wood04'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Finish'}) {
                                Event300:
                                if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC050_FinishFirst'}) {
                                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk36'})
                                } else {
                                    Event299:
                                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk61'})
                                    EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC050_FinishFirst', 'IsWaitFinish': True})
                                }
                            } else
                            if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC050_Married'}) {
                                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk42', 'ASName': ''})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk43', 'ASName': ''})
                                } else {
                                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk44', 'ASName': ''})
                                }
                            } else {
                                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk34', 'ASName': ''})
                                if !EventSystemActor.GeneralChoice2() {
                                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk39', 'ASName': ''})
                                } else {
                                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk40', 'ASName': ''})
                                }
                                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk41', 'ASName': ''})
                                EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC050_Married', 'IsWaitFinish': True})
                            }
                        } else {
                            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk32', 'IsCloseMessageDialog': False, 'ASName': ''})
                        }
                    } else {
                        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk25', 'ASName': ''})
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Ichikara_NPC050_First', 'IsWaitFinish': True})
                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk24', 'ASName': ''})
                    goto Event100
                }
              case [2, 3, 4]:
                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk30', 'ASName': ''})
                goto Event103
              case [5, 6, 7]:
                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk31', 'ASName': ''})
                goto Event103
            }
          case 2:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk23', 'ASName': ''})
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell({'Arg_Turn': 0})


    call DisplayShop.Armor({'Arg_FlagName': 'Arg_FlagName', 'Arg_CurrentActorName': 'Arg_CurrentActorName', 'Self': ActorIdentifier(name="Npc_oasis050", sub_name="Pauda_Ichikara")})


    call Sell()

}

void Sell() {
    if EventSystemActor.CheckFlag({'FlagName': 'Ichikara_NPC050_SoldOut'}) {
        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk26'})
    } else
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:Com_Talk_11'})
      case 1:
        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:Com_Talk_11b'})
      case 2:
        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:Com_Talk_11c'})
      case 3:
        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:Com_Talk_11d'})
    }
}

void PaudaMarried() {
    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk34'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk39'})
    } else {
        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk40'})
    }
    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk41'})
    EventSystemActor.Demo_FlagON({'FlagName': 'UMiiVillage_NPC050_Married', 'IsWaitFinish': True})
}

void Npc_oasis050_2() {
    Event243:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_UMiiVillage031.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    Npc_UMiiVillage031.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis050_UpArea'}) {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk57'})
          case 1:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk58'})
          case 2:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk59'})
          case 3:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk60'})
        }
    } else {
        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk20', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk22', 'ASName': ''})

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_oasis050", sub_name="Pauda_Ichikara")})

            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk23', 'ASName': ''})
          case 1:
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                if Npc_oasis050[Pauda_Ichikara].IsOnInstEventFlag() {
                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk21', 'ASName': ''})
                } else {
                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk21', 'ASName': ''})
                }
                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk28', 'ASName': ''})
            } else
            switch EventSystemActor.CheckTimeType() {
              case [0, 1]:
                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk29', 'ASName': ''})
                Event248:
                if EventSystemActor.CheckFlag({'FlagName': 'Ichikara_NPC050_First'}) {
                    Event278:
                    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Invite05'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Finish'}) {
                                goto Event300
                            } else
                            if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC050_FinishFirst'}) {
                                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk35'})
                            } else {
                                goto Event299
                            }
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC050_Married'}) {
                            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk46'})
                            if EventSystemActor.CheckTime({'Hour': 5, 'ConditionType': 'ge', 'Minute': 0})
                            && EventSystemActor.CheckTime({'Hour': 21, 'ConditionType': 'le', 'Minute': 0}) {
                                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk48'})
                            } else {
                                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk47'})
                            }
                        } else {
                            Event281:

                            call PaudaMarried()

                        }
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC050_Married'}) {
                        Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk45'})
                    } else {
                        goto Event281
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'Ichikara_NPC050_First', 'IsWaitFinish': True})
                    Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk24', 'ASName': ''})
                    goto Event278
                }
              case [2, 3, 4]:
                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk30', 'ASName': ''})
                goto Event248
              case [5, 6, 7]:
                Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk31', 'ASName': ''})
                goto Event248
            }
          case 2:
            Npc_oasis050[Pauda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis050:talk23', 'ASName': ''})
        }
    }
}

void Npc_oasis050_Invite04_Talk() {
    goto Event243
}
