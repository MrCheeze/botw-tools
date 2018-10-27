-------- EventFlow: Find_Impa --------

Actor: Npc_Kakariko005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion', 'Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_LookAtObject', 'Demo_StartTurnToPlayer', 'Demo_ResetBoneCtrl']
queries: ['IsWeaponDrawn']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_ExitEventPlayer', 'Demo_EnableCameraInput']
queries: ['CheckFlag', 'CheckWeather', 'GeneralChoice2', 'GeneralChoice3', 'CheckPlayerState', 'CheckTime', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion', 'Demo_BecomeSpeaker', 'Demo_TalkASync', 'Demo_LookAtObject', 'Demo_StartTurnToPlayer', 'Demo_ResetBoneCtrl']
queries: ['IsWeaponDrawn']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerWait', 'Demo_Unequip', 'Demo_Talk', 'Demo_ResetBoneCtrl', 'Demo_RideHorse', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_Kakariko002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_StartTurnToPlayer', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PolarCoordPlayerRelative']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[03]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_Wait', 'Demo_WarpToAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

void Finish_Npc_Kakariko005_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko005_First'}) {
        Event122:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_Talk'}) {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk00', 'IsOverWriteLabelActorName': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk05'})
                } else {
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk06'})
                }
              case 1:
                Event220:
                Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk16'})
                Event226:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk01', 'IsCloseMessageDialog': True})
                    Event233:
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk31'})
                    goto Event226
                  case 1:
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk05', 'IsCloseMessageDialog': True})
                    goto Event233
                  case 2:
                    Npc_Kakariko005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005:Talk30'})
                }
              case 2:
                goto Event220
              case 3:
                goto Event220
            }
        } else {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Find_Impa:Talk12', 'ASName': 'Talk', 'IsWaitFinish': True})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk09', 'ASName': ''})
                } else {
                    Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Find_Impa:Talk07'})
                }
              case 1:
                Event36:
                Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk13', 'ASName': ''})
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk09', 'ASName': ''})
                  case 1:
                    Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk14'})
                  case 2:
                    Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk08', 'ASName': ''})
                }
              case 2:
                goto Event36
              case 3:
                goto Event36
            }
        }
    } else {
        Event107:
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'Find_Impa_Finish'}) {
            goto Event122
        } else {
            EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

            fork {
                SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
            } {
                GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
                GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': True})
            } {
                Npc_Kakariko005.Demo_BecomeSpeaker({'IsWaitFinish': True})
            }

            if EventSystemActor.CheckPlayerRideHorse() {
                LastRiddenHorse_ForEvent.Demo_Wait({'IsWaitFinish': False, 'IsAngryEnable': False, 'IsEatEnable': False, 'IsLoveEnable': False, 'HasToCue': True, 'IsNoMorph': True})
                GameROMPlayer.Demo_RideHorse({'IsWaitFinish': False, 'Horse': ActorIdentifier(name="LastRiddenHorse_ForEvent")})

                fork {
                    GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': False, 'ResetTarget': 0})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk'})
                } {
                    GameRomCamera.Demo_PolarCoordPlayerRelative({'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'OtherActor': 3, 'UniqueNameForOtherActor': '', 'FovyCalcMode': 1, 'Time': 0.0, 'ActorNameForOtherActor': 'Npc_Kakariko007', 'ReviseMode': 1, 'ReverseOrder': True, 'AtCalcMode': 1, 'AtParam': [0.0, 1.25, 0.5], 'LngOffset': -45.0, 'LatOffset': 5.0, 'RadiusOffset': 6.5, 'FovyParam': 48.0})
                } {
                    Npc_Kakariko007.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
                } {
                    Npc_Kakariko005.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
                } {
                    LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'IsWaitFinish': False, 'UniqueName': 'HorseGate', 'AnchorName': 'StartPos'})
                }

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                GameROMPlayer.Demo_TurnAndLookToObjectNow({'ObjectId': 0, 'IsValid': False, 'FaceId': 2, 'ActorName': 'Npc_Kakariko005', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                Event73:

                fork {
                    if Npc_Kakariko005.IsWeaponDrawn() {
                        Npc_Kakariko005.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                        Npc_Kakariko005.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Find_Impa:Talk11', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
                        Npc_Kakariko005.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk23', 'ASName': 'Guard'})
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko005_First_Behind'}) {
                            Npc_Kakariko005.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                            Event1:
                            Npc_Kakariko005.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Find_Impa:Talk11', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'ASName': 'Act_Escort_Detect'})
                            Npc_Kakariko005.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'ASName': 'Act_Escort_Detect', 'MessageId': 'EventFlowMsg/Find_Impa:Talk23'})
                        } else {
                            Npc_Kakariko005.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                            goto Event1
                        }
                    }
                } {
                    if Npc_Kakariko007.IsWeaponDrawn() {
                        Npc_Kakariko007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                        Npc_Kakariko007.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Guard'})
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko005_First_Behind'}) {
                            Npc_Kakariko007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                            Event3:
                            Npc_Kakariko007.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_Escort_Detect', 'MorphingFrame': -1.0})
                        } else {
                            Npc_Kakariko007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                            goto Event3
                        }
                    }
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'TalkSurprise', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                }

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    Npc_Kakariko005.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                    if Npc_Kakariko005.IsWeaponDrawn() {
                        Npc_Kakariko005.Demo_PlayASForDemo({'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'TargetIndex': 0, 'IsIgnoreSame': True})
                        Event85:
                        Npc_Kakariko005.Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    } else {
                        goto Event85
                    }
                } {
                    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                    Npc_Kakariko007.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                    if Npc_Kakariko007.IsWeaponDrawn() {
                        Npc_Kakariko007.Demo_PlayASForDemo({'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'GuardUnequip', 'TargetIndex': 0, 'IsIgnoreSame': True})
                        Event134:

                        fork {
                            Npc_Kakariko007.Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': -1.0})
                        } {
                            EventSystemActor[03].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 22})
                        }

                        Npc_Kakariko007.Demo_BecomeSpeaker({'IsWaitFinish': True})
                        Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Find_Impa:Talk10', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                    } else {
                        goto Event134
                    }
                } {
                    EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                }

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

                fork {
                    Npc_Kakariko005.Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                } {
                    Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Find_Impa:Talk25', 'IsCloseMessageDialog': True})
                } {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                }

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_KakarikoWarrior_Open'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko005_First', 'IsWaitFinish': True})
            } else {
                GameRomCamera.Demo_MovePosFlow({'AtAppendMode': 1, 'PosAppendMode': 2, 'TargetActor1': 1, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 45.0, 'Pattern1AtX': 1807.6700439453125, 'Pattern1AtY': 220.5500030517578, 'Pattern1AtZ': 984.52001953125, 'Pattern1PosY': 2.200000047683716, 'Pattern1PosX': -1.7999999523162842, 'Pattern1PosZ': -2.799999952316284, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                goto Event73
            }
        }
    }
}

void Finish_Npc_Kakariko007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko005_First'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_Talk'}) {
            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Hour': 21, 'Minute': 0}) {
                if EventSystemActor.CheckTime({'ConditionType': 'le', 'Minute': 0, 'Hour': 24}) {
                    Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk17'})
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                      case 1:
                        Event240:
                        Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk13'})
                        Event241:
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk14'})
                        }
                      case 2:
                        goto Event240
                      case 3:
                        goto Event240
                    }
                } else {
                    Event245:
                    Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk16'})
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        Npc_Kakariko007.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                      case 1:
                        Event244:
                        Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:Talk15'})
                        goto Event241
                      case 2:
                        goto Event244
                      case 3:
                        goto Event244
                    }
                }
            } else {
                goto Event245
            }
        } else {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk15'})
              case 1:
                Event43:
                Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk16'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk17'})
                }
              case 2:
                goto Event43
              case 3:
                goto Event43
            }
        }
    } else {
        goto Event107
    }
}

void Finish_Npc_Kakariko002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {

        call Npc_Kakariko002.NakedTalk()

    } else {
        Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk19', 'ASName': 'Talk_Shy'})

        call Finish_Npc_Kakariko002_Near()

    }
}

void Finish_Npc_Kakariko005_Near() {
    Npc_Kakariko005.Demo_StartTurnToPlayer({'IsWaitFinish': True, 'TurnRange': 180.0})
    Npc_Kakariko005.Demo_TalkASync({'MessageId': 'EventFlowMsg/Find_Impa:near00', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
}

void Finish_Npc_Kakariko007_Near() {
    Npc_Kakariko007.Demo_StartTurnToPlayer({'IsWaitFinish': True, 'TurnRange': 180.0})
    Npc_Kakariko007.Demo_TalkASync({'MessageId': 'EventFlowMsg/Find_Impa:near01', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
}

void Finish_Npc_Kakariko002_Near() {
    Npc_Kakariko002.Demo_StartTurnToPlayer({'IsWaitFinish': True, 'TurnRange': 360.0})
    Npc_Kakariko002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:near03', 'DispFrame': 90, 'IsChecked': False})
}

void Kakariko002_FirstTalk_Front() {

    call Kakariko002_FirstTalk_Start()

    Npc_Kakariko002.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_Cleaning_Floor_Notice', 'IsWaitFinish': True, 'MorphingFrame': -1.0})
    Event138:
    Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk18', 'ASName': 'Talk_Shy'})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk22', 'ASName': 'Talk_Shy'})
    Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk26', 'ASName': 'Talk'})
    Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': 'Talk_Shy', 'MessageId': 'EventFlowMsg/Find_Impa:Talk27'})
    Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': 'Talk_Shy', 'MessageId': 'EventFlowMsg/Find_Impa:Talk21'})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Find_Impa:Talk29'})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Kakariko002.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'FaceId': 1})
    Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Find_Impa:Talk28', 'ASName': 'Talk'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko002_First', 'IsWaitFinish': True})
}

void Kakariko002_FirstTalk_Back() {

    call Kakariko002_FirstTalk_Start()

    Npc_Kakariko002.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': True, 'ASName': 'Act_Cleaning_Floor_NoticeBack', 'MorphingFrame': -1.0})
    Npc_Kakariko002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'GameROMPlayer', 'IsValid': True, 'FaceId': 2, 'IsConfront': False})
    goto Event138
}

void Kakariko002_FirstTalk_Start() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko002_First'}) {
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko002_First', 'IsWaitFinish': True})

        call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Kakariko002"), 'Arg_Turn': 2})


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        } {
            Npc_Kakariko002.Demo_PlayASForDemo({'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_Cleaning_Floor', 'IsWaitFinish': False, 'IsIgnoreSame': True, 'MorphingFrame': -1.0, 'TargetIndex': 0})
        }

    }
}
