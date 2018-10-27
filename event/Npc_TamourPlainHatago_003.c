-------- EventFlow: Npc_TamourPlainHatago_003 --------

Actor: Npc_TamourPlainHatago_003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_ChangePostureWithAS', 'Demo_ChangeEmotion']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_WaitFrame', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_ExitEventPlayer']
queries: ['GeneralChoice2', 'CheckFlag', 'HasPorchItem', 'CheckPlayerState', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_TamourPlainHatago_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ChangePostureWithAS', 'Demo_WarpToScheduleAnchor', 'Demo_LookAtObject', 'Demo_ChangeEmotion', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ReserveConnectTime', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event187:

    call TsuyaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC003_NormalFirst'}) {
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk24'})
        Event105:
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk31'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'MinakkareHatago_NPC003_NormalFirst', 'IsWaitFinish': True})
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk12'})
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk20'})
        goto Event105
    }
}

void Near() {
    switch Npc_TamourPlainHatago_003.CheckActorAction13() {
      case 10:
        Npc_TamourPlainHatago_003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:near02', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_TamourPlainHatago_003.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
      case 12:
        Npc_TamourPlainHatago_003.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:near01', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    }
}

void DragonflySisters003_LittleSister() {
    Event184:

    call TsuyaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC003_Dislike'}) {
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk10'})
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk29'})
        Event42:
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk09'})
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk16'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareMini_Dragonfly_LittleSister'})
    } else {
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk00'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk03'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareHatago_NPC003_Dislike'})
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk05'})
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk14'})
                if !EventSystemActor.GeneralChoice2() {
                    Event52:
                    Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk15'})
                    Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk13'})
                    goto Event42
                } else {
                    goto Event52
                }
            } else {
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk04'})
            }
        } else {
            Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk01'})
        }
    }
}

void DragonflySisters003_Finish() {
    goto Event187
}

void DragonflySisters003_Ready() {

    call TsuyaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'MinakkareHatago_NPC003_Like'}) {
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk10'})
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk08'})
        Event22:
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk09'})
    } else {
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk00'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk03'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareHatago_NPC003_Like'})
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk05'})
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk11'})
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk13'})
                goto Event22
            } else {
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk04'})
            }
        } else {
            Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk01'})
        }
    }
}

void DragonflySisters003_Dragonfly() {
    goto Event184
}

void DragonflySisters003_Give() {

    call TsuyaHello()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Animal_Insect_C', 'Count': 1}) {
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_T'}) {
            if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Animal_Insect_I'}) {
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareMini_Dragonfly_EventShowDF'})
                EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'I-3', 'WarpDestPosName': 'TsuyaDemo', 'IsWaitFinish': True})
                Npc_TamourPlainHatago_002.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
                Npc_TamourPlainHatago_003.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': '003_give_1'})
                Npc_TamourPlainHatago_003.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_TamourPlainHatago_003', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                Npc_TamourPlainHatago_003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'ActorName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2, 'IsValid': True})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3133.712646484375, 'Pattern1PosY': 308.0089416503906, 'Pattern1PosZ': -1660.4320068359375, 'Pattern1AtX': 3136.078369140625, 'Pattern1AtY': 307.9259033203125, 'Pattern1AtZ': -1665.2452392578125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk12'})
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk17', 'IsCloseMessageDialog': True})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHandOver', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk18', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Animal_Insect_C', 'Value': -1, 'IsWaitFinish': True})
                EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Animal_Insect_T', 'Value': -1, 'IsWaitFinish': True})
                EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Animal_Insect_I', 'Value': -1, 'IsWaitFinish': True})

                fork {
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3136.869140625, 'Pattern1PosY': 308.75653076171875, 'Pattern1PosZ': -1660.8494873046875, 'Pattern1AtX': 3135.35498046875, 'Pattern1AtY': 308.16973876953125, 'Pattern1AtZ': -1666.041015625, 'Pattern1Fovy': 40.00001525878906, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                } {
                    Npc_TamourPlainHatago_003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': 'Npc_TamourPlainHatago_002', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 1, 'FaceId': 2})
                }


                fork {
                    Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk19', 'IsCloseMessageDialog': True})
                } {
                    Npc_TamourPlainHatago_002.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_TamourPlainHatago_003', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                } {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_TamourPlainHatago_002', 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
                    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'Talk'})
                }

                Npc_TamourPlainHatago_002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_TamourPlainHatago_002.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Surprise', 'IsOnlyFace': False})
                Npc_TamourPlainHatago_002.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

                fork {
                    Npc_TamourPlainHatago_002.Demo_Talk({'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk21', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsBecomingSpeaker': False})
                } {
                    Npc_TamourPlainHatago_003.Demo_MoveToAnchor({'ASKeyName': 'Run', 'IsWaitFinish': False, 'IsTurnToAnchorDir': False, 'AnchorUniqueName': '003_give_2', 'AnchorName': 'DestinationAnchor', 'IsAlignmentAnchor': False})
                }

                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                Npc_TamourPlainHatago_002.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Surprise', 'IsOnlyFace': False})
                Npc_TamourPlainHatago_002.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk30', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                Npc_TamourPlainHatago_003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsConfront': True, 'FaceId': 2, 'ActorName': ''})
                Npc_TamourPlainHatago_003.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': '003_give_2'})
                Npc_TamourPlainHatago_003.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                Npc_TamourPlainHatago_003.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                Npc_TamourPlainHatago_002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Sit'})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'ActorName': 'Npc_TamourPlainHatago_002'})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                GameRomCamera.Demo_ReserveConnectTime({'IsWaitFinish': True, 'InterpolateTime': 0.0})
                GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MinakkareMini_Dragonfly_EventShowDF'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MinakkareMini_Dragonfly_Give'})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            } else {
                Event112:
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk12'})
                Event87:
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk22'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk23'})
                } else {
                    Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk25'})
                    if !EventSystemActor.GeneralChoice2() {
                        Event93:
                        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk28'})
                    } else {
                        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk27'})
                        goto Event93
                    }
                }
            }
        } else {
            goto Event112
        }
    } else {
        goto Event112
    }
}

void DragonflySisters003_Through() {

    call TsuyaHello()

    Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk12'})
    goto Event87
}

void TsuyaHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_TamourPlainHatago_003.CheckActorAction13() {
      case 0:
        Event179:
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            if !EventSystemActor.RandomChoice2() {
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk32'})
                Event180:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk33'})
                goto Event180
            }
        }
      case 1:
        goto Event179
      case 10:
        if Npc_TamourPlainHatago_003.IsOnInstEventFlag() {
            Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk07'})
            Event176:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        } else {
            Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk06'})
            goto Event176
        }
      case 11:
        Npc_TamourPlainHatago_003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TamourPlainHatago_003:talk02'})
        goto Event176
      case 12:
        goto Event179
    }
}
