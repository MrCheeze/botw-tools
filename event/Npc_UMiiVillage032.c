-------- EventFlow: Npc_UMiiVillage032 --------

Actor: Npc_UMiiVillage032
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_MoveToAnchor', 'Demo_ChangePostureWithAS']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_WarpPlayer']
queries: ['CheckTimeType', 'CheckPlayerState', 'CheckFlag', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_UMiiVillage030
entrypoint: None()
actions: ['Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_Talk', 'Demo_ChangePostureWithAS', 'Demo_ChangeEmotion', 'Demo_PlayASForDemo', 'Demo_ChangePosture']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[KatsuradaWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    fork {

        call Ichikara_SakuradaHello()

        if EventSystemActor.CheckFlag({'FlagName': 'UMiiMini_MakeVillage_Marry'}) {
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk11'})
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk12'})
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk13', 'IsCloseMessageDialog': True})
            Npc_UMiiVillage032.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk14', 'ASName': ''})

            fork {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3947.171142578125, 'Pattern1PosY': 235.38375854492188, 'Pattern1PosZ': -1606.06005859375, 'Pattern1AtX': 3946.39306640625, 'Pattern1AtY': 235.5308380126953, 'Pattern1AtZ': -1601.4520263671875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            } {
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            } {
                EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'I-3', 'WarpDestPosName': 'SakuradaGoDemo'})
            } {
                Npc_UMiiVillage032.Demo_TurnAndLookToObject({'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': '', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': False, 'FaceId': 1, 'IsConfront': True, 'ObjectId': 3, 'TurnDirection': 165.0, 'ActorName': ''})
            }


            fork {
                Npc_UMiiVillage030.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
                Npc_UMiiVillage030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 1, 'ActorName': 'Npc_UMiiVillage032', 'IsConfront': True, 'IsValid': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            } {
                Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk16', 'ASName': ''})
            }

            Npc_UMiiVillage030.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk15', 'ASName': ''})

            fork {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3943.083984375, 'Pattern1PosY': 236.03639221191406, 'Pattern1PosZ': -1606.1617431640625, 'Pattern1AtX': 3948.448974609375, 'Pattern1AtY': 235.46334838867188, 'Pattern1AtZ': -1604.0545654296875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            } {
                Npc_UMiiVillage030.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            }


            fork {
                Npc_UMiiVillage032.Demo_MoveToAnchor({'ASKeyName': 'Walk', 'IsWaitFinish': False, 'AnchorName': 'AnchorAction6', 'AnchorUniqueName': 'Go_Hateno', 'IsTurnToAnchorDir': True, 'IsAlignmentAnchor': False})
            } {
                Npc_UMiiVillage030.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'IsValid': False, 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsConfront': True, 'ObjectId': 0, 'ActorName': ''})
                Npc_UMiiVillage030.Demo_PlayASForDemo({'ASName': 'Hello', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                Npc_UMiiVillage030.Demo_MoveToAnchor({'IsWaitFinish': False, 'AnchorName': 'AnchorAction6', 'AnchorUniqueName': 'Go_Hateno', 'IsTurnToAnchorDir': True, 'ASKeyName': 'Walk', 'IsAlignmentAnchor': False})
            }


            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'Auto'})
            } {
                EventBgmCtrlTag.Demo_StartAndKeep({'IsWaitFinish': True, 'BgmName': 'MovingIchikaraBgm'})
            }

            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3941.4384765625, 'Pattern1PosY': 235.57017517089844, 'Pattern1PosZ': -1608.3271484375, 'Pattern1AtX': 3946.436767578125, 'Pattern1AtY': 235.4764404296875, 'Pattern1AtZ': -1606.364013671875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_HatenoVillage032_Go'})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC032_MarryFirst'}) {
                Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk09'})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC032_MarryFirst', 'IsWaitFinish': True})
                Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk10'})
            }
        }
    } {
        switch Npc_UMiiVillage030.CheckActorAction13() {
          case 8:
            Event77:
            Npc_UMiiVillage030.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': 0, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
          case 10:
            Npc_UMiiVillage030.Demo_ChangePosture({'Posture': 'Stand', 'IsWaitFinish': True})
            goto Event77
          case 13:
            EventSystemActor[KatsuradaWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 360})
            goto Event77
        }
    }

}

void Ichikara_SakuradaHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_UMiiVillage032.CheckActorAction13() {
      case 8:
        Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk17'})
        Event19:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case 9:
        Event9:
        if Npc_UMiiVillage032.IsOnInstEventFlag() {
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk00'})
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
                Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk01'})
            } else {
                switch EventSystemActor.CheckTimeType() {
                  case 0:
                    Event3:
                    Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk02'})
                  case 1:
                    goto Event3
                  case 2:
                    Event5:
                    Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk03'})
                  case 3:
                    goto Event5
                  case 4:
                    goto Event5
                  case 5:
                    goto Event5
                  case 6:
                    Event6:
                    Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk04'})
                  case 7:
                    goto Event6
                }
            }
        }
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk08'})
            goto Event19
        } else {
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk07'})
            goto Event19
        }
      case 11:
        if !EventSystemActor.RandomChoice2() {
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk00'})
            Event21:
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk06'})
            goto Event19
        } else {
            Npc_UMiiVillage032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_UMiiVillage032:talk03'})
            goto Event21
        }
      case 12:
        goto Event9
    }
}
