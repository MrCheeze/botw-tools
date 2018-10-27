-------- EventFlow: Npc_SmallOasis001 --------

Actor: Npc_SmallOasis001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SmallOasis001[town01]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnInner', 'Demo_DestinationTurnStarter']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SmallOasis001.CheckActorAction13() {
      case 0:
        if Npc_SmallOasis001.IsOnInstEventFlag() {
            Event33:
            if EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon032'}) {
                Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_50'})
            } else {
                Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_11'})
            }
        } else {
            Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_56'})
            goto Event33
        }
      case 1:
        Event8:
        if Npc_SmallOasis001.IsOnInstEventFlag() {
            Npc_SmallOasis001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'TurnDirection': -139.8928985595703, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
            if EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon032'}) {
                Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_51', 'ASName': ''})
                Npc_SmallOasis001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_52', 'ASName': ''})
                Event39:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_02', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': ''})
                    Npc_SmallOasis001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'TurnDirection': -139.8928985595703, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3210.794189453125, 'Pattern1PosY': 130.65126037597656, 'Pattern1PosZ': 2581.455810546875, 'Pattern1AtX': -3212.708984375, 'Pattern1AtY': 131.50030517578125, 'Pattern1AtZ': 2575.416259765625, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    GameROMPlayer.Demo_PlayerTurnInner({'IsWaitFinish': True})
                    Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_53', 'IsCloseMessageDialog': True, 'ASName': ''})

                    fork {
                        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                    } {
                        GameROMPlayer.Demo_DestinationTurnStarter({'IsWaitFinish': True})
                    }

                    Event23:
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SmallOasis001_first', 'IsWaitFinish': True})
                } else {
                    Event4:
                    Npc_SmallOasis001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_03', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                    goto Event23
                }
            } else {
                Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_04', 'ASName': ''})
                Npc_SmallOasis001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_05', 'ASName': ''})
                Event5:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_02', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': ''})
                    Npc_SmallOasis001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'TurnDirection': -139.8928985595703, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3210.794189453125, 'Pattern1PosY': 130.65126037597656, 'Pattern1PosZ': 2581.455810546875, 'Pattern1AtX': -3212.708984375, 'Pattern1AtY': 131.50030517578125, 'Pattern1AtZ': 2575.416259765625, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    GameROMPlayer.Demo_PlayerTurnInner({'IsWaitFinish': True})
                    Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_10', 'IsCloseMessageDialog': True, 'ASName': ''})

                    fork {
                        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                    } {
                        GameROMPlayer.Demo_DestinationTurnStarter({'IsWaitFinish': True})
                    }

                    goto Event23
                } else {
                    goto Event4
                }
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon032'}) {
                Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_54', 'ASName': ''})
                goto Event39
            } else {
                Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_01', 'ASName': ''})
                goto Event5
            }
        }
      case 2:
        goto Event8
      case 3:
        goto Event8
      case 4:
        goto Event8
      case 5:
        goto Event8
      case 6:
        goto Event8
      case 7:
        goto Event8
      case 8:
        goto Event8
      case 9:
        goto Event8
      case 10:
        if EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon032'}) {
            Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_55'})
        } else {
            Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_09', 'ASName': ''})
        }
      case 11:
        Npc_SmallOasis001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_06', 'IsOverWriteLabelActorName': False})
      case 12:
        goto Event8
      case 13:
        goto Event8
    }
}

void Clear_RemainsElectric_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SmallOasis001_first'}) {
        Npc_SmallOasis001[town01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_07', 'ASName': ''})
    } else {
        Npc_SmallOasis001[town01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:Talk_08', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SmallOasis001_first', 'IsWaitFinish': True})
    }
}

void Near() {
    if Npc_SmallOasis001.CheckActorAction13() {
        if !EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon032'}) {
            Npc_SmallOasis001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SmallOasis001:near00'})
        }
    }
}
