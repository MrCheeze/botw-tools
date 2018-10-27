-------- EventFlow: Npc_HighMountain010 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_IncreaseGameDataInt']
queries: ['CheckFlag', 'CheckPlayerState', 'GeneralChoice2', 'CheckTimeType', 'RandomChoice2', 'GeneralChoice3', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain010[Peda_Rito]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_MoveToAnchor', 'Demo_ChangePosture', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain010[Peda_Ichikara]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckPlacedItemSaled', 'CheckActorAction13']
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

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
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
    if !Npc_HighMountain010[Peda_Rito].CheckActorAction13() {
        Event39:
        Npc_HighMountain010[Peda_Rito].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:near00', 'IsChecked': False, 'DispFrame': 90})
    } else {
        goto Event39
    }
}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !Npc_HighMountain010[Peda_Rito].CheckActorAction13() {
        Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk06'})
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            if Npc_HighMountain010[Peda_Rito].IsOnInstEventFlag() {
                if !EventSystemActor.RandomChoice2() {
                    Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk19', 'ASName': ''})
                } else {
                    Event130:
                    Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk18', 'ASName': ''})
                }
            } else {
                goto Event130
            }
        } else {
            if Npc_HighMountain010[Peda_Rito].IsOnInstEventFlag() {
                Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk14', 'ASName': ''})
                Event90:
                if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010p_First'}) {
                        Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk16', 'ASName': ''})
                        Event93:
                        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor03'}) {
                            Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk03', 'ASName': ''})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk34', 'IsCloseMessageDialog': True, 'ASName': ''})

                                fork {
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                                    Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk35', 'IsCloseMessageDialog': True, 'ASName': ''})
                                } {
                                    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
                                }

                                Npc_HighMountain010[Peda_Rito].Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})

                                fork {
                                    Npc_HighMountain010[Peda_Rito].Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                                } {
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                                }

                                Npc_HighMountain010[Peda_Rito].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                                Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk07', 'ASName': 'Talk', 'IsCloseMessageDialog': False})
                                if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsWind'}) {
                                    Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk00', 'ASName': 'Talk', 'IsCloseMessageDialog': False})
                                    Event216:
                                    Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk33', 'ASName': 'Talk', 'IsCloseMessageDialog': True})

                                    fork {
                                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3594.153564453125, 'Pattern1PosY': 291.9629211425781, 'Pattern1PosZ': -1824.28857421875, 'Pattern1AtX': -3596.8779296875, 'Pattern1AtY': 289.289794921875, 'Pattern1AtZ': -1818.7894287109375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                    } {
                                        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'B-3', 'WarpDestPosName': 'PedaMove', 'IsWaitFinish': True})
                                    }

                                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'UniqueName': 'Peda_Rito', 'FaceId': 2, 'ActorName': 'Npc_HighMountain010', 'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                                    Npc_HighMountain010[Peda_Rito].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 1, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                                    Npc_HighMountain010[Peda_Rito].Demo_PlayASForDemo({'ASName': 'Hello', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                                    Npc_HighMountain010[Peda_Rito].Demo_MoveToAnchor({'IsWaitFinish': False, 'AnchorName': 'AnchorAction4', 'AnchorUniqueName': 'Go_Ichikara', 'ASKeyName': 'Walk', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})

                                    fork {
                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
                                    } {
                                        EventBgmCtrlTag.Demo_StartAndKeep({'IsWaitFinish': True, 'BgmName': 'MovingIchikaraBgm'})
                                    }

                                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Rito_NPC010p_Go_UMiiVillage'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Invite03'})
                                    EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'Value': 1, 'GameDataIntName': 'Location_UMiiVillageShopYorozu'})
                                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3594.96337890625, 'Pattern1PosY': 290.6139831542969, 'Pattern1PosZ': -1817.4010009765625, 'Pattern1AtX': -3597.62109375, 'Pattern1AtY': 289.4253234863281, 'Pattern1AtZ': -1812.036376953125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                                } else {
                                    Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk17', 'ASName': 'Talk', 'IsCloseMessageDialog': False})
                                    goto Event216
                                }
                            } else {
                                Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk05', 'ASName': ''})
                            }
                        } else {
                            Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk04', 'ASName': ''})
                        }
                    } else {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC010p_First'})
                        Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk09', 'ASName': ''})
                        goto Event93
                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010p_First_WindRelic'}) {
                        Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk15', 'ASName': ''})
                        goto Event93
                    } else {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC010p_First_WindRelic'})
                        Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk08', 'ASName': ''})
                        if !EventSystemActor.GeneralChoice2() {
                            Event99:
                            Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk02', 'ASName': ''})
                            goto Event93
                        } else {
                            Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk01', 'ASName': ''})
                            goto Event99
                        }
                    }
                }
            } else {
                switch EventSystemActor.CheckTimeType() {
                  case 0:
                    Event105:
                    Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk10', 'ASName': ''})
                    goto Event90
                  case 1:
                    goto Event105
                  case 2:
                    Event107:
                    Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk11', 'ASName': ''})
                    goto Event90
                  case 3:
                    goto Event107
                  case 4:
                    goto Event107
                  case 5:
                    goto Event107
                  case 6:
                    Event108:
                    Npc_HighMountain010[Peda_Rito].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk12', 'ASName': ''})
                    goto Event90
                  case 7:
                    goto Event108
                }
            }
        }
    }
}

void Sell() {
    if !Npc_HighMountain010[Peda_Ichikara].CheckPlacedItemSaled() {
        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk25'})
    } else {
        if !EventSystemActor.RandomChoice2() {
            Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk26'})
        } else {
            Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk27'})
        }
    }
}

void ClerkAsk() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 0})


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_HighMountain010", sub_name="Peda_Ichikara")})


    call Sell()

}

void Rito_NPC010p_Go_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk20', 'ASName': 'Hello'})
    switch EventSystemActor.GeneralChoice3() {
      case 0:

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_HighMountain010", sub_name="Peda_Ichikara")})

        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk24'})
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010p_IchikaraFirst'}) {
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event231:
                Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk29', 'ASName': ''})
                Event178:
                if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Invite04'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Finish'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010p_NormalFirst'}) {
                                Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk47'})
                            } else {
                                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC010p_NormalFirst', 'IsWaitFinish': True})
                                Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk46'})
                            }
                        } else {
                            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010p_FinishFirst'}) {
                                Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk45'})
                            } else {
                                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC010p_FinishFirst', 'IsWaitFinish': True})
                                Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk44'})
                            }
                        }
                    } else {
                        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk40'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk41'})
                        } else {
                            Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk42'})
                        }
                    }
                } else {
                    Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk32'})
                    if !EventSystemActor.RandomChoice2() {
                        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk39'})
                    } else {
                        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk43'})
                    }
                }
              case 1:
                goto Event231
              case 2:
                Event230:
                Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk30', 'ASName': ''})
                goto Event178
              case 3:
                goto Event230
              case 4:
                goto Event230
              case 5:
                goto Event230
              case 6:
                Event229:
                Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk31', 'ASName': ''})
                goto Event178
              case 7:
                goto Event229
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC010p_IchikaraFirst', 'IsWaitFinish': True})
            Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk22', 'ASName': ''})
            Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk23'})
        }
      case 2:
        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk24'})
    }
}

void Rito_NPC010p_Go_Near() {
    switch Npc_HighMountain010[Peda_Ichikara].CheckActorAction13() {
      case 8:
        Event143:
        Npc_HighMountain010[Peda_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:near01', 'IsChecked': False, 'DispFrame': 90})
      case 9:
        goto Event143
    }
}

void PedaRide() {
    Event252:
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_HighMountain010[Peda_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:near02'})
      case 1:
        Npc_HighMountain010[Peda_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:near03'})
      case 2:
        Npc_HighMountain010[Peda_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:near04'})
      case 3:
        Npc_HighMountain010[Peda_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:near05'})
    }
}

void Rito_NPC010p_Ride_Near() {
    goto Event252
}

void Rito_NPC010p_Ride_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk48'})
      case 1:
        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk49'})
      case 2:
        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk50'})
      case 3:
        Npc_HighMountain010[Peda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain010:talk51'})
    }
}
