-------- EventFlow: Npc_Goron023 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_IncreaseGameDataInt']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice4', 'RandomChoice2', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron023[Gureda_GoronCity]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_OpenMessageDialogTrig', 'Demo_ChangePostureWithAS']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron023[Gureda_Ichikara]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron025[Pupunda_GoronCity]
entrypoint: None()
actions: ['Demo_MoveToAnchor', 'Demo_ChangePosture', 'Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_StartAndKeep']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call GureadaFear()

    switch Npc_Goron023[Gureda_GoronCity].CheckActorAction13() {
      case [0, 1]:
        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor01'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron023_Name'}) {
                if Npc_Goron023[Gureda_GoronCity].IsOnInstEventFlag() {
                    Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk22'})
                    Event133:
                    switch EventSystemActor.GeneralChoice4() {
                      case 2:
                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk27'})
                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk26'})
                        Event135:
                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk25'})
                      case 3:
                        Event1:
                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk17'})
                    }
                } else {
                    Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk21'})
                    goto Event133
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron023_Name', 'IsWaitFinish': True})
                Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk23'})
                Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk18'})
                Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk24'})
                goto Event135
            }
        } else
        if Npc_Goron023[Gureda_GoronCity].IsOnInstEventFlag() {
            Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk14'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk26'})
                Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk25'})
            } else {
                goto Event1
            }
        } else {
            Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk00', 'IsOverWriteLabelActorName': False})
            if EventSystemActor.GeneralChoice2() in [0, 1] {
                goto Event1
            }
        }
      case 2:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk02', 'IsOverWriteLabelActorName': False})
        } else {
            Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk32'})
        }
      case 3:
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron023_First'}) {
            Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk05', 'IsOverWriteLabelActorName': False})
            Event22:
            if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_LookFor01'}) {
                Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk07', 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk08', 'IsOverWriteLabelActorName': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk19', 'IsCloseMessageDialog': True})

                        fork {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                            Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk20'})
                        } {
                            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})
                        }

                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk09', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        Npc_Goron023[Gureda_GoronCity].Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk31'})
                        Npc_Goron023[Gureda_GoronCity].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 5, 'ActorName': 'Npc_Goron025', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'FaceId': 1, 'IsValid': False})
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk15', 'IsCloseMessageDialog': False, 'ASName': ''})
                        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1651.1920166015625, 'Pattern1PosY': 432.9458312988281, 'Pattern1PosZ': -1965.8851318359375, 'Pattern1AtX': 1656.5323486328125, 'Pattern1AtY': 431.8368835449219, 'Pattern1AtZ': -1966.22216796875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk16', 'ASName': 'Hello'})
                        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Npc_Goron025', 'UniqueName': 'Pupunda_GoronCity', 'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 0, 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
                        Npc_Goron025[Pupunda_GoronCity].Demo_ChangePosture({'IsWaitFinish': False, 'Posture': 'Stand'})
                        Npc_Goron025[Pupunda_GoronCity].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                        Npc_Goron025[Pupunda_GoronCity].Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Goron023:talk30', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1655.5108642578125, 'Pattern1PosY': 432.91729736328125, 'Pattern1PosZ': -1968.924560546875, 'Pattern1AtX': 1660.0155029296875, 'Pattern1AtY': 431.8180236816406, 'Pattern1AtZ': -1966.11083984375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'Count': 300.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                        fork {
                            Npc_Goron023[Gureda_GoronCity].Demo_MoveToAnchor({'ASKeyName': 'Walk', 'IsWaitFinish': False, 'AnchorName': 'AnchorAction4', 'AnchorUniqueName': 'Go_Ichikara', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
                        } {
                            Npc_Goron025[Pupunda_GoronCity].Demo_MoveToAnchor({'IsWaitFinish': False, 'AnchorName': 'AnchorAction4', 'ASKeyName': 'Run', 'AnchorUniqueName': 'Go_Ichikara', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
                        }


                        fork {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
                        } {
                            EventBgmCtrlTag.Demo_StartAndKeep({'IsWaitFinish': True, 'BgmName': 'MovingIchikaraBgm'})
                        }

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'UMiiMini_MakeVillage_Invite01'})
                        EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Location_UMiiVillageShopJewel', 'Value': 1})
                        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
                    } else {
                        Event26:
                        Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk17'})
                    }
                } else {
                    goto Event26
                }
            } else {
                Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk10'})
            }
        } else {
            Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk03', 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron023_First', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron023_Name'}) {
                    Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk29'})
                    Event139:
                    Npc_Goron023[Gureda_GoronCity].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk28', 'IsWaitFinish': True})
                    goto Event22
                } else {
                    Npc_Goron023[Gureda_GoronCity].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk04', 'IsOverWriteLabelActorName': False})
                    goto Event139
                }
            } else {
                goto Event1
            }
        }
    }
}

void Near() {
    switch Npc_Goron023[Gureda_GoronCity].CheckActorAction13() {
      case 0:
        Npc_Goron023[Gureda_GoronCity].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:near00', 'IsChecked': False, 'DispFrame': 90})
      case [1, 2]:
        Npc_Goron023[Gureda_GoronCity].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:near01', 'IsChecked': False, 'DispFrame': 90})
      case 3:
        Npc_Goron023[Gureda_GoronCity].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:near02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void NPC_Goron023_Go_Talk() {

    call GuredaHello()

    if Npc_Goron023[Gureda_Ichikara].CheckActorAction13() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13] {
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron023_Invite01First'}) {
            Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk124'})
            if !EventSystemActor.RandomChoice2() {
                Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk125'})
            } else {
                Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk126'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron023_Invite01First', 'IsWaitFinish': True})
            Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk120'})
        }
    }
}

void NPC_Goron023_Go_Near() {
    if Npc_Goron023[Gureda_Ichikara].CheckActorAction13() == 9 {
        Npc_Goron023[Gureda_Ichikara].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron023:near03', 'IsChecked': False, 'DispFrame': 90})
    }
}

void UMiiMini_MakeVillage_Marry_Talk() {

    call GuredaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron023_FinishFirst'}) {
        Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk129'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron023_FinishFirst', 'IsWaitFinish': True})
        Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk130'})
    }
}

void UMiiMini_MakeVillage_Invite04_Talk() {

    call GuredaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron023_MarryFirst'}) {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3981.88427734375, 'Pattern1PosY': 236.15487670898438, 'Pattern1PosZ': -1604.952392578125, 'Pattern1AtX': 3977.40625, 'Pattern1AtY': 236.65362548828125, 'Pattern1AtZ': -1607.94775390625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Goron023[Gureda_Ichikara].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsConfront': True, 'IsValid': True, 'FaceId': 1, 'TurnPosition': [3946.0, 239.0, -1634.0], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk133'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron023_MarryFirst', 'IsWaitFinish': True})
        Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk132'})
    }
}

void GuredaHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call GureadaFear()

    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk122'})
      case 1:
        Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk123'})
      case 2:
        Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk127'})
      case 3:
        Npc_Goron023[Gureda_Ichikara].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron023:talk128'})
    }
}

void GureadaFear() {
    if Npc_Goron023[Gureda_Ichikara].CheckActorAction({'ActionName': 'Root/Terror'}) {
        Npc_Goron023[Gureda_Ichikara].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }
}
