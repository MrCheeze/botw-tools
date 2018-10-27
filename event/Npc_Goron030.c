-------- EventFlow: Npc_Goron030 --------

Actor: Npc_Goron030
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice4', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Activated'}) {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron030_Yunbo', 'IsWaitFinish': True})
        Event9:
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_First'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_Cannon'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_Cannon2'}) {
                    Event130:
                    Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk03', 'IsOverWriteLabelActorName': False})
                    Event60:
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_Help4'}) {
                                Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk17'})
                                Event80:
                                Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk06', 'IsCloseMessageDialog': True})
                                Event105:
                                Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk00'})
                                goto Event60
                            } else {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron030_Help4'})
                                goto Event80
                            }
                        } else {
                            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_GoGoronCity'}) {
                                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_Help3'}) {
                                    Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk17'})
                                    Event104:
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                                    Npc_Goron030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': False, 'ObjectId': 3, 'FaceId': 0, 'ActorName': '', 'IsConfront': False, 'TurnDirection': 260.0})
                                    GameROMPlayer.Demo_LookAtObject({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 260.0})
                                    EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'FaceId': 1, 'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 260.0, 'IsTurnToLookAtPos': False})
                                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1639.7291259765625, 'Pattern1PosY': 530.0181274414062, 'Pattern1PosZ': -2654.0556640625, 'Pattern1AtX': 1633.032470703125, 'Pattern1AtY': 529.959716796875, 'Pattern1AtZ': -2641.447021484375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                    Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk09', 'IsOverWriteLabelActorName': False, 'ASName': 'Point', 'IsCloseMessageDialog': True})
                                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                                    Npc_Goron030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'TurnDirection': -80.0, 'ObjectId': 0, 'IsConfront': True})
                                    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
                                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'FaceId': 2, 'ActorName': 'Npc_Goron030', 'IsTurnToLookAtPos': False})
                                    goto Event105
                                } else {
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron030_Help3'})
                                    goto Event104
                                }
                            } else {
                                if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Storage'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_Help2'}) {
                                        Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk17'})
                                        Event113:
                                        Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk25'})
                                        goto Event105
                                    } else {
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron030_Help2'})
                                        goto Event113
                                    }
                                } else {
                                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                                    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_Help'}) {
                                        Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk17'})
                                        Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk22', 'IsCloseMessageDialog': True})
                                        Event152:
                                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1639.7283935546875, 'Pattern1PosY': 532.7044677734375, 'Pattern1PosZ': -2636.158935546875, 'Pattern1AtX': 1638.565673828125, 'Pattern1AtY': 529.23974609375, 'Pattern1AtZ': -2641.960205078125, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                        Npc_Goron030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 1, 'TurnDirection': 180.0, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                                        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'FaceId': 1, 'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 180.0, 'IsTurnToLookAtPos': False})
                                        EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                                        GameROMPlayer.Demo_LookAtObject({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 180.0})
                                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 124.19537353515625, 'Pattern1PosY': -3.047913074493408, 'Pattern1PosZ': 137.16943359375, 'Pattern1AtX': 107.78692626953125, 'Pattern1AtY': -0.10900899767875671, 'Pattern1AtZ': 118.934814453125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_GoronStorage_A_01', 'Count': 30.0, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'MotionMode': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                        Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk14', 'IsCloseMessageDialog': True, 'ASName': 'Point'})

                                        fork {
                                            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                                        } {
                                            Npc_Goron030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
                                        }

                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                                        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'FaceId': 2, 'ActorName': 'Npc_Goron030', 'IsTurnToLookAtPos': False})
                                        Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk15', 'IsCloseMessageDialog': True})
                                        goto Event105
                                    } else {
                                        Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk08', 'IsOverWriteLabelActorName': False})
                                        if !EventSystemActor.GeneralChoice2() {
                                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk13', 'IsCloseMessageDialog': True})
                                            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron030_Help', 'IsWaitFinish': True})
                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_NorthMine'})
                                            goto Event152
                                        } else {
                                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk02', 'IsOverWriteLabelActorName': False})
                                        }
                                    }
                                }
                            }
                        }
                      case 1:
                        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_Intro'}) {
                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk17'})
                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk19'})
                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk21', 'IsCloseMessageDialog': True})
                            goto Event105
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron030_Intro', 'IsWaitFinish': True})
                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk01', 'IsOverWriteLabelActorName': False})
                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk19'})
                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk20', 'IsCloseMessageDialog': True})
                            goto Event105
                        }
                      case 2:
                        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_Coco'}) {
                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk17'})
                            Event11:
                            Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk04', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                            goto Event105
                        } else {
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron030_Coco'})
                            goto Event11
                        }
                      case 3:
                        Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk02', 'IsOverWriteLabelActorName': False})
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron030_Cannon2'})
                    Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk23'})
                    goto Event60
                }
            } else {
                goto Event130
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron030_First', 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron030_Cannon'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron030_Cannon2'})
                Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk23'})
                goto Event60
            } else {
                Npc_Goron030.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk05'})
                goto Event60
            }
        }
    } else {
        goto Event9
    }
}

void Talk_Cannon() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1644.154052734375, 'Pattern1PosY': 530.8714599609375, 'Pattern1PosZ': -2650.67041015625, 'Pattern1AtX': 1641.126953125, 'Pattern1AtY': 529.7775268554688, 'Pattern1AtZ': -2646.36962890625, 'Pattern1Fovy': 50.00001907348633, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Goron030.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'IsConfront': True})
    Npc_Goron030.Demo_Talk({'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron030:talk16', 'IsBecomingSpeaker': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron030_Cannon'})
}

void Near() {
    Npc_Goron030.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron030:near00', 'IsChecked': False, 'DispFrame': 90})
}

void NPC_Goron030_Cannon_Talk() {
    goto Event0
}
