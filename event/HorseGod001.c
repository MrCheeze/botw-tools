-------- EventFlow: HorseGod001 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CloseMessageDialog', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_IncreasePorchItem', 'Demo_CallDemo', 'Demo_ChkExistenceOfParticipant']
queries: ['CheckDeadHorseResistered', 'GeneralChoice2', 'IsHorseNumMax', 'CheckFlag', 'CheckHorseDeadCause', 'HasPorchItem', 'CheckHorseRegistered']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_ResetBoneCtrl']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: HorseGod001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_HorseReceptionRelease', 'Demo_EndHorseReception', 'Demo_ReleaseHorse', 'Demo_TalkNoMessageStepper', 'Demo_HorseReceptionResurrect', 'Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Warp]
entrypoint: None()
actions: ['Demo_WarpPlayerToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void HorseGodTalk() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GreatFairy5_Appear'})
    EventSystemActor.Demo_ChkExistenceOfParticipant({'ActorName': 'HorseGod001', 'IsWaitFinish': True, 'InstanceName': ''})

    fork {
        HorseGod001.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Act_ReAppearance', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 0.0})
        HorseGod001.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Wait', 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'MorphingFrame': 0.0, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 0})
        EventSystemActor[Warp].Demo_WarpPlayerToAnchor({'UniqueName': 'FairyStandPos', 'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor'})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'HorseGod001', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsValid': True, 'FaceId': 2, 'IsTurnToLookAtPos': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Pattern': 4, 'Power': 0.5, 'Count': 4})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 3})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.369385004043579, 'Pattern1PosY': 3.909209966659546, 'Pattern1PosZ': 4.841765880584717, 'Pattern1AtX': -0.9221190214157104, 'Pattern1AtY': -0.545822024345398, 'Pattern1AtZ': -0.006225999910384417, 'Pattern1Fovy': 30.000015258789062, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpring_E_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.369385004043579, 'Pattern1PosY': 3.909209966659546, 'Pattern1PosZ': 4.841765880584717, 'Pattern1AtX': -0.9221190214157104, 'Pattern1AtY': -0.545822024345398, 'Pattern1AtZ': -0.006225999910384417, 'Pattern1Fovy': 30.000015258789062, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpring_E_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 25.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.636962890625, 'Pattern1PosY': 6.9882049560546875, 'Pattern1PosZ': 7.2295989990234375, 'Pattern1AtX': -0.7536619901657104, 'Pattern1AtY': 3.3117830753326416, 'Pattern1AtZ': 0.524878978729248, 'Pattern1Fovy': 49.945247650146484, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpring_E_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.240478992462158, 'Pattern1PosY': 1.721634030342102, 'Pattern1PosZ': 11.192558288574219, 'Pattern1AtX': -0.06396500021219254, 'Pattern1AtY': 8.433989524841309, 'Pattern1AtZ': 2.3792879581451416, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_FairySpring_E_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.459228992462158, 'Pattern1PosY': 2.645081043243408, 'Pattern1PosZ': 10.852828979492188, 'Pattern1AtX': -0.7431640028953552, 'Pattern1AtY': 8.046585083007812, 'Pattern1AtZ': 1.6323169469833374, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 1, 'ReviseModeEnd': 1, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'TwnObj_FairySpring_E_01', 'Count': 60.0, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy5_HorseRLife'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy5_HorseRLife2nd'}) {
            HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_25', 'ASName': 'Wait'})
            Event79:
            if !EventSystemActor.GeneralChoice2() {
                Event83:
                if EventSystemActor.CheckDeadHorseResistered() {
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_PlantGet_Q', 'Count': 1}) {
                        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_22', 'ASName': 'Wait'})
                        Event7:
                        if EventSystemActor.IsHorseNumMax() {
                            HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_04', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                            if !EventSystemActor.GeneralChoice2() {
                                Event10:
                                HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_05', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                                HorseGod001.Demo_HorseReceptionRelease({'IsWaitFinish': True})
                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                if EventSystemActor.CheckFlag({'FlagName': 'Horse_IsSelected'}) {
                                    HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_07', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_08', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                                        HorseGod001.Demo_EndHorseReception({'IsWaitFinish': True})
                                        HorseGod001.Demo_ReleaseHorse({'IsWaitFinish': True})
                                        Event63:
                                        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_09', 'ASName': 'Wait'})
                                        HorseGod001.Demo_TalkNoMessageStepper({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/HorseGod001:talk_09_01'})
                                        Event23:
                                        HorseGod001.Demo_HorseReceptionResurrect({'IsWaitFinish': True})
                                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                        if EventSystemActor.CheckFlag({'FlagName': 'Horse_IsSelected'}) {
                                            switch EventSystemActor.CheckHorseDeadCause() {
                                              case [0, 4]:
                                                HorseGod001.Demo_EndHorseReception({'IsWaitFinish': True})
                                                HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_11', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                                                Event27:
                                                if !EventSystemActor.GeneralChoice2() {
                                                    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy5_HorseRLife'}) {
                                                        EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Item_PlantGet_Q', 'Value': -1, 'IsWaitFinish': True})
                                                    }
                                                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
                                                    HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_15', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                                                    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'HorseVoice,HorseFootStep,HorseDefault', 'Volume': 0.0, 'FadeOutSec': 2.0, 'FadeInSec': 2.0, 'StartDelaySec': 0.0})
                                                    EventSystemActor.Demo_FlagON({'FlagName': 'GreatFairy5_HorseRLife', 'IsWaitFinish': True})
                                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                                                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo030_0', 'EntryPointName': 'HorseGodRevival', 'EndFade': 0})
                                                } else {
                                                    goto Event63
                                                }
                                              case 1:
                                                HorseGod001.Demo_EndHorseReception({'IsWaitFinish': True})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_12_00'})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_12_01', 'ASName': 'Angry_Talk'})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_12_02', 'ASName': 'Wait'})
                                                goto Event27
                                              case 2:
                                                HorseGod001.Demo_EndHorseReception({'IsWaitFinish': True})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_13_01', 'IsCloseMessageDialog': True})
                                                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_13_02'})
                                                goto Event27
                                              case 3:
                                                HorseGod001.Demo_EndHorseReception({'IsWaitFinish': True})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_14_01'})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_14_02', 'ASName': 'Angry_Talk'})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_14_03', 'ASName': 'Wait'})
                                                goto Event27
                                            }
                                        } else {
                                            HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                                            if !EventSystemActor.GeneralChoice2() {
                                                goto Event63
                                            } else {
                                                Event6:
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_03_00', 'IsCloseMessageDialog': False})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_03_01', 'ASName': 'Angry_Talk', 'IsCloseMessageDialog': False})
                                                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_03_02'})
                                                Event68:

                                                call FairyBackHome()

                                            }
                                        }
                                    } else {
                                        goto Event10
                                    }
                                } else {
                                    HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_06', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        goto Event10
                                    } else {
                                        goto Event6
                                    }
                                }
                            } else {
                                goto Event6
                            }
                        } else {
                            HorseGod001.Demo_TalkNoMessageStepper({'MessageId': 'EventFlowMsg/HorseGod001:talk_10', 'IsWaitFinish': True})
                            goto Event23
                        }
                    } else {
                        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_23', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                        Event85:

                        call FairyBackHome()

                    }
                } else {
                    HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_24', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
                    goto Event85
                }
            } else {
                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_21', 'ASName': 'Wait'})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event83
                } else {
                    goto Event6
                }
            }
        } else {
            HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_17_01'})
            HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_17_02', 'ASName': 'Angry_Talk'})
            HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_17_03'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GreatFairy5_HorseRLife2nd'})
            HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_20', 'ASName': 'Wait'})
            goto Event79
        }
    } else {
        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_00_01', 'ASName': 'Wait', 'IsCloseMessageDialog': True})
        Event2:
        if EventSystemActor.CheckDeadHorseResistered() {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_02_00'})
            HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_02_01', 'ASName': 'Angry_Talk'})
            HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_02_02'})
            if !EventSystemActor.GeneralChoice2() {
                goto Event7
            } else {
                goto Event6
            }
        } else {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            if EventSystemActor.CheckHorseRegistered() {
                HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_01', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
            } else {
                HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_02'})
            }
            goto Event68
        }
    }
}

void HorseGodTalk_First() {
    goto Event2
}

void FairyBackHome() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.234131097793579, 'Pattern1PosY': 17.248992919921875, 'Pattern1PosZ': 9.805740356445312, 'Pattern1AtX': 1.2158199548721313, 'Pattern1AtY': 8.046585083007812, 'Pattern1AtZ': 3.435944080352783, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        HorseGod001.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Act_Spring_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 33})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Pattern': 4, 'Count': 3, 'Power': 0.30000001192092896})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 1})
    }

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'GreatFairy5_Appear'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}
