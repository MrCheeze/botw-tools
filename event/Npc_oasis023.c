-------- EventFlow: Npc_oasis023 --------

Actor: Npc_oasis023
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayer', 'Demo_FlagON', 'Demo_ExitEventPlayer']
queries: ['CheckEquipArmorSeriesType', 'CheckFlag', 'GeneralChoice3', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsElectric[Thunder_Relic01]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsElectric[Thunder_Relic02]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_oasis023.IsOnInstEventFlag() {
        Event104:

        call SINJYU_CK()

        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_GetBack'}) {
            RemainsElectric[Thunder_Relic02].Demo_Join({'IsWaitFinish': False})
            Event77:
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckLower': True, 'CheckType': 'GerudoCloth', 'CheckUpper': True}) {
                if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
                    Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_006', 'IsOverWriteLabelActorName': False})
                } else {
                    Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_004', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    Event44:
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_GetBack'}) {
                            Npc_oasis023.Demo_TurnAndLookToObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'RemainsElectric', 'IsWaitFinish': True, 'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': 'Thunder_Relic02'})
                            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsUseSlowTurn': False, 'IsValid': True, 'FaceId': 2, 'ActorName': 'RemainsElectric', 'IsWaitFinish': True, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': 'Thunder_Relic02', 'IsTurnToLookAtPos': False})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                            GameRomCamera.Demo_MovePosFlow({'ActorName1': 'RemainsElectric', 'UniqueName2': '', 'IsWaitFinish': True, 'FovyAppendMode': 1, 'UniqueName1': 'Thunder_Relic01', 'ActorName2': 'Npc_oasis023', 'PosAppendMode': 3, 'MotionMode': 1, 'TargetActor2': 3, 'Cushion': 0.0, 'LatShiftRange': 30.0, 'LngShiftRange': 30.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'ReviseModeEnd': 0, 'Pattern1PosY': 5.0, 'Count': 30.0, 'StartCalcOnly': True, 'TargetActor1': -1, 'AtAppendMode': 1, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': True, 'Pattern1AtX': -3545.14111328125, 'Pattern1AtY': 164.09800720214844, 'Pattern1AtZ': 3131.18896484375, 'Pattern1Fovy': 20.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            Event66:
                            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                            Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_007'})
                            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 0.0})
                            Npc_oasis023.Demo_TurnAndLookToObject({'IsValid': False, 'FaceId': 2, 'ObjectId': 0, 'IsWaitFinish': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis023', 'IsUseSlowTurn': False, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
                            Event49:
                            Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_012', 'IsCloseMessageDialog': True})
                            goto Event44
                        } else {
                            Npc_oasis023.Demo_TurnAndLookToObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'RemainsElectric', 'UniqueName': 'Thunder_Relic01', 'IsWaitFinish': True, 'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsUseSlowTurn': False, 'IsValid': True, 'FaceId': 2, 'ActorName': 'RemainsElectric', 'UniqueName': 'Thunder_Relic01', 'IsWaitFinish': True, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                            GameRomCamera.Demo_MovePosFlow({'ActorName1': 'RemainsElectric', 'UniqueName2': '', 'IsWaitFinish': True, 'FovyAppendMode': 1, 'UniqueName1': 'Thunder_Relic01', 'ActorName2': 'Npc_oasis023', 'PosAppendMode': 3, 'MotionMode': 1, 'TargetActor2': 3, 'Cushion': 0.0, 'LatShiftRange': 30.0, 'LngShiftRange': 30.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'ReviseModeEnd': 0, 'Pattern1PosY': 5.0, 'Count': 30.0, 'StartCalcOnly': True, 'TargetActor1': -1, 'AtAppendMode': 1, 'Pattern1AtY': 164.67630004882812, 'Pattern1AtX': -3686.569091796875, 'Pattern1AtZ': 3028.280029296875, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': True, 'Pattern1Fovy': 45.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            goto Event66
                        }
                      case 1:
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                        Npc_oasis023.Demo_TurnAndLookToObject({'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': 'Thunder_Relic01', 'IsWaitFinish': True, 'IsConfront': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'TwnObj_ArtifactObservationPost_A_01'})
                        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsUseSlowTurn': False, 'IsValid': True, 'FaceId': 2, 'UniqueName': 'Thunder_Relic01', 'IsWaitFinish': True, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'TwnObj_ArtifactObservationPost_A_01', 'IsTurnToLookAtPos': False})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3756.416748046875, 'Pattern1PosY': 153.57681274414062, 'Pattern1PosZ': 2949.9912109375, 'Pattern1AtX': -3754.776123046875, 'Pattern1AtY': 153.66848754882812, 'Pattern1AtZ': 2950.884033203125, 'Pattern1Fovy': 14.999978065490723, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'MotionMode': 1})
                        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                        Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_005', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 0.0})
                        Npc_oasis023.Demo_TurnAndLookToObject({'IsValid': False, 'FaceId': 2, 'ObjectId': 0, 'IsWaitFinish': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis023', 'IsUseSlowTurn': False, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
                        switch EventSystemActor.CheckTimeType() {
                          case 0:
                            Event48:
                            Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_010', 'IsCloseMessageDialog': True})
                            goto Event49
                          case 1:
                            goto Event48
                          case 2:
                            goto Event48
                          case 3:
                            goto Event48
                          case 4:
                            goto Event48
                          case 5:
                            Event47:
                            Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_009', 'IsCloseMessageDialog': True})
                            goto Event49
                          case 6:
                            goto Event47
                          case 7:
                            goto Event47
                        }
                      case 2:
                        Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_008'})
                    }
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Ch_SnowMT_Finish'}) {
                    Npc_oasis023.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                } else {
                    Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_003'})
                }
            }
        } else {
            RemainsElectric[Thunder_Relic01].Demo_Join({'IsWaitFinish': False})
            goto Event77
        }
    } else {

        call hello()

        goto Event104
    }
}

void DemoStop() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis023")})

    Npc_oasis023.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})

    fork {
        Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_001', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
    } {

        call SDemo_B-7.PlayerReaction_and_Animal_CK()

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'NoLogo'})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'B-7', 'WarpDestPosName': 'WestGate_Stop'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3746.1953125, 'Pattern1PosY': 151.49880981445312, 'Pattern1PosZ': 2956.81201171875, 'Pattern1AtX': -3750.036865234375, 'Pattern1AtY': 150.59620666503906, 'Pattern1AtZ': 2953.294189453125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'NoLogo'})
}

void SINJYU_CK() {
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo125_0'}) {
        if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            if !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis023_SinjyuClear_Female'}) {
                Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis023:Sinjyu_Female_001'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis023_SinjyuClear_Female'})
                Event109:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            }
        } else {
            if !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis023_SinjyuClear_Normal'}) {
                Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis023:Sinjyu_Normal_001'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis023_SinjyuClear_Normal'})
                goto Event109
            }
        }
    }
}

void Near() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckUpper': False, 'CheckHead': True, 'CheckLower': False, 'CheckType': 'Thunder'}) {
        Npc_oasis023.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_oasis023:Near_Raimei_001', 'IsChecked': False})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event111:
        Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_013'})
      case 1:
        goto Event111
      case 2:
        Event112:
        Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_014'})
      case 3:
        goto Event112
      case 4:
        goto Event112
      case 5:
        Event113:
        Npc_oasis023.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis023:Npc_oasis023_015'})
      case 6:
        goto Event113
      case 7:
        goto Event113
    }
}
