-------- EventFlow: SunazarashiRace --------

Actor: Npc_oasis038
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_IncreaseGameDataInt', 'Demo_LoopEnd', 'Demo_AdvanceQuest', 'Demo_DisableMiniGameTime', 'Demo_DisappearNumTargets', 'Demo_WarpPlayer', 'Demo_CallDemo', 'Demo_EnableCameraInput', 'Demo_SetGameDataInt', 'Demo_RollbackQuest', 'Demo_ExitEventPlayer', 'Demo_ChangeScene', 'Demo_AppearCheckPointNum', 'Demo_DisappearCheckPointNum', 'Demo_WaitForCloseFade', 'Demo_AppearRaceResult', 'Demo_DisappearRaceResult']
queries: ['GeneralChoice2', 'CheckRupee', 'HasPorchItemByCategory', 'CheckPlayerState', 'CheckFlag', 'GeneralChoice3', 'CheckGameDataInt', 'GeneralChoice4', 'CheckEquipArmorSeriesType', 'CheckPlayerEquip', 'CheckDistanceForWarp', 'CheckElapsedTimeOfMiniGame', 'CheckPlayerRideSunazarashi']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis039
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_BecomeSpeaker', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl', 'Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera', 'Demo_MultiTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayerWakeBoardEnd', 'Demo_PlayASAdapt', 'Demo_Join', 'Demo_PlayerTurnAndLookToObject', 'Demo_Talk']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_MiniGameTimerWrite']
queries: ['CompareGameDataTime']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_A[race]
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_ChampionshipBall_01
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['Demo_MiniGameTime']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_oasis038_Talk() {
    Event681:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis039', 'Actor2': 'Npc_oasis038'})


    fork {
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait', 'IsIgnoreSame': False})
    } {
        Npc_oasis039.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    }

    Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0000', 'ASName': 'Act_Champion_Wait'})
    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_First'}) {
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0030'})
        Event739:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            Event524:
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0007', 'IsCloseMessageDialog': True})

            fork {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0032'})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            }

            Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0000', 'IsCloseMessageDialog': True, 'ASName': 'Act_Champion_Wait'})
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

            fork {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0025', 'IsCloseMessageDialog': True})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            }

            Event735:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis038_First', 'IsWaitFinish': True})
            EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'SunazarashiRace_BestTime_L', 'IsWaitFinish': True, 'Value': 1})
            EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'SunazarashiRace_BestTime_M', 'IsWaitFinish': True, 'Value': 30})
            EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'SunazarashiRace_BestTime_S', 'Value': 0, 'IsWaitFinish': True})
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0013', 'IsCloseMessageDialog': True})

            fork {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3771.359130859375, 'Pattern1PosY': 157.71250915527344, 'Pattern1PosZ': 3113.12451171875, 'Pattern1AtX': -3777.472412109375, 'Pattern1AtY': 154.5746307373047, 'Pattern1AtZ': 3115.4150390625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            } {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0014'})
            } {
                Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
            }

            GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'UniqueName2': '', 'ActorSpecify3': -1, 'ActorName3': '', 'UniqueName3': '', 'ActorName1': 'Npc_oasis039', 'ActorName2': 'Npc_oasis038'})
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0015', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                Event561:
                EventSystemActor.Demo_FlagON({'FlagName': 'SunazarashiRace_Activated', 'IsWaitFinish': True})
                EventSystemActor.Demo_AdvanceQuest({'QuestName': 'SunazarashiRace', 'StepName': 'Step1', 'ForceRunTelop': True, 'IsWaitFinish': True})
                if !EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1}) {
                    if EventSystemActor.CheckPlayerEquip({'PlayerEquipType': 1}) {
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0022', 'IsCloseMessageDialog': False})
                        if !EventSystemActor.GeneralChoice2() {
                            if EventSystemActor.CheckRupee({'Value': 50}) {
                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -50})
                                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0023'})
                                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
                                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0042', 'IsCloseMessageDialog': True})

                                call RaceStart()

                            } else {
                                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0040'})
                                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
                                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0041', 'IsCloseMessageDialog': False})
                            }
                        } else {

                            fork {
                                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0026'})
                            } {
                                Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Talk_Shock', 'MorphingFrame': -1.0})
                            }

                        }
                    } else {
                        Event606:
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S1_007'})
                    }
                } else {
                    goto Event606
                }
            } else {
                Event775:

                fork {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0016', 'IsCloseMessageDialog': True})
                } {
                    Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Talk_Shock', 'MorphingFrame': -1.0})
                }

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_First'})
            }
          case 1:

            call accepted()

          case 2:
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0008'})

            fork {
                Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0000', 'IsCloseMessageDialog': False, 'ASName': 'Act_Champion_Wait'})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            }


            fork {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0029', 'IsCloseMessageDialog': True})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            }


            fork {
                Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            }

            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0031'})
            goto Event739
          case 3:

            call nothanks()

        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis038_First'}) {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0028', 'IsCloseMessageDialog': False})
            Event277:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                goto Event524
              case 1:
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0006', 'IsCloseMessageDialog': False})
                Event734:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis038_First', 'IsWaitFinish': True})
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0009', 'IsCloseMessageDialog': True})
                goto Event277
              case 2:
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0008'})

                fork {
                    Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0000', 'IsCloseMessageDialog': False, 'ASName': 'Act_Champion_Wait'})
                } {
                    Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                }


                fork {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0029', 'IsCloseMessageDialog': True})
                } {
                    Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                }


                fork {
                    Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                } {
                    Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                }

                goto Event734
              case 3:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

                fork {
                    Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Talk_Almost', 'MorphingFrame': -1.0})
                    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
                } {
                    Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                }

                if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckType': 'GerudoCloth'}) {

                    fork {
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0010'})
                    } {
                        Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                    }

                    Event274:
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0011'})
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0012'})
                    goto Event735
                } else {

                    fork {
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0027'})
                    } {
                        Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                    }

                    goto Event274
                }
            }
        } else {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0005', 'IsCloseMessageDialog': False})
            goto Event277
        }
    }
}

void Ready_Npc_oasis039_Near() {
    Event9:
    Npc_oasis039.Demo_TalkASync({'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_R_Near', 'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True})
}

void Ready_Npc_oasis039_Talk() {
    goto Event681
}

void Step1_Npc_oasis038_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis039', 'Actor2': 'Npc_oasis038'})


    fork {
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
    } {
        Npc_oasis039.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    }

    Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0000', 'ASName': 'Act_Champion_Wait'})
    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S2_004'})
}

void Step1_Npc_oasis039_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis039', 'Actor2': 'Npc_oasis038'})


    fork {
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
    } {
        Npc_oasis039.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    }

    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S1_001', 'IsOverWriteLabelActorName': False})
    Event208:
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkHello', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
        if !EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1}) {
            if EventSystemActor.CheckPlayerEquip({'PlayerEquipType': 1}) {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S1_002', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                if EventSystemActor.CheckRupee({'Value': 50}) {
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -50})
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S1_003', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})

                    call RaceStart()

                } else {
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0040', 'IsCloseMessageDialog': False})
                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0041'})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
                }
            } else {
                Event115:
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S1_007', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
            }
        } else {
            goto Event115
        }
      case 1:
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S1_100'})
        goto Event208
      case 2:

        fork {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0016'})
        } {
            Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Talk_Shock', 'MorphingFrame': -1.0})
        }

        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
    }
}

void EntryPoint1() {
    FldObj_ChampionshipBall_01.Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3773.013916015625, 'Pattern1PosY': 163.52694702148438, 'Pattern1PosZ': 3120.65673828125, 'Pattern1AtX': -3776.904052734375, 'Pattern1AtY': 160.3000030517578, 'Pattern1AtZ': 3119.067138671875, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Common.RemainsLithogragh_Hole()

    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'FaceId': 1, 'IsUseSlowTurn': False, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'IsWaitFinish': False, 'EntryPointName': 'DungeonArrival', 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Finish'})
}

void GateCnt01() {
    if !EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Gate01'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'SunazarashiRace_Gate01', 'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Value': 1, 'IsWaitFinish': True})
    }
}

void Step2_Npc_oasis039_EachFrame() {
    EventSystemActor[0].Demo_MiniGameTime({'CountMode': 2, 'CountStartTime': -1, 'IsShowTimeUI': True, 'IsWaitFinish': True, 'MaxTime': -1})
    Event189:
    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Step1'}) {
        if EventSystemActor.CheckPlayerRideSunazarashi({'SunazarashiType': 2, 'SunazarashiName': 'race'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Field2'}) {
                EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                goto Event189
            } else {
                Event259:
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': False, 'QuestName': 'SunazarashiRace', 'StepName': 'IfGetOff', 'ForceRunTelop': False})
            }
        } else {
            goto Event259
        }
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event189
    }
}

void GateCnt02() {
    if !EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Gate02'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'SunazarashiRace_Gate02', 'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Value': 1, 'IsWaitFinish': True})
    }
}

void GateCnt03() {
    if !EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Gate03'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'SunazarashiRace_Gate03', 'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Value': 1, 'IsWaitFinish': True})
    }
}

void GateCnt04() {
    if !EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Gate04'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'SunazarashiRace_Gate04', 'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Value': 1, 'IsWaitFinish': True})
    }
}

void GateCnt05() {
    if !EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Gate05'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'SunazarashiRace_Gate05', 'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Value': 1, 'IsWaitFinish': True})
    }
}

void Finish_Npc_oasis038_Talk() {
    Event685:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis039', 'Actor2': 'Npc_oasis038'})


    fork {
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
    } {
        Npc_oasis039.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    }

    Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis038_S3_001', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Champion_Wait'})
    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis038_S3_002'})
    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S3_001', 'IsOverWriteLabelActorName': False})
}

void Finish_Npc_oasis039_Talk() {
    goto Event685
}

void IfGetOff_Npc_oasis039_StepStart() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 1}) {
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
        Animal_SunazarashiSP_A[race].Demo_Idling({'IsWaitFinish': False})
        Event672:

        fork {
            EventSystemActor.Demo_AppearRaceResult({'IsWaitFinish': True, 'ResultType': 1})
        } {
            SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
            EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm', 'FadeSec': 0.30000001192092896})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Field2'}) {
            Npc_oasis039.Demo_Talk({'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S2_001', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            Event173:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_DisappearRaceResult({'IsWaitFinish': True})
            EventSystemActor.Demo_DisappearCheckPointNum({'IsWaitFinish': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            if EventSystemActor.CheckPlayerState({'PlayerState': 1}) {
                GameROMPlayer.Demo_PlayerWakeBoardEnd({'IsWaitFinish': True})
                Event354:
                EventSystemActor.Demo_AdvanceQuest({'QuestName': 'SunazarashiRace', 'StepName': 'Step3', 'IsWaitFinish': True, 'ForceRunTelop': False})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Field1'})
                EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                EventSystemActor.Demo_DisappearNumTargets({'IsWaitFinish': True})
                if !EventSystemActor.CheckDistanceForWarp({'WarpDestMapName': 'B-8', 'WarpDestPosName': 'Demo330_1_b2_010'}) {
                    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'Demo330_1_b2_010', 'WarpDestMapName': 'B-8'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    Event494:

                    call Miss()


                    call RaceStart()

                } else {
                    EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'WarpDestPosName': 'Demo330_1_b2_010', 'StartType': -1, 'WarpDestMapName': 'MainField/B-8', 'EvflName': 'SunazarashiRace', 'EntryPointName': 'IfGetOff_AfterSceneChange', 'FadeType': 2})
                }
            } else {
                goto Event354
            }
        } else {
            Npc_oasis039.Demo_Talk({'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S2_003', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            goto Event173
        }
    } else {
        goto Event672
    }
}

void Ready_Npc_oasis038_NearActorsTalk() {
    goto Event681
}

void Ready_Npc_oasis039_NearActorsNear() {
    goto Event9
}

void Ready_Npc_oasis039_NearActorsTalk() {
    goto Event681
}

void RaceStart() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})

    call Common.DisableSaveAndWarp()

    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Retry01'}) {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo330_0', 'EntryPointName': 'Demo330_0_1', 'EndFade': 0})
        Event618:
        EventSystemActor.Demo_AppearCheckPointNum({'IconType': 1, 'GameDataIntTargetCounter': 'SunazarashiRace_GateCnt', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Step1'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'SunazarashiRace_Retry01', 'IsWaitFinish': True})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo330_0', 'EntryPointName': 'Demo330_0', 'EndFade': 0})
        goto Event618
    }
}

void Miss() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.025390999391674995, 'Pattern1PosY': 1.6667629480361938, 'Pattern1PosZ': -4.008179187774658, 'Pattern1AtX': 0.025390999391674995, 'Pattern1AtY': 1.6667629480361938, 'Pattern1AtZ': 1.727905035018921, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'FovyAppendMode': 1, 'StartCalcOnly': True, 'MotionMode': 1, 'Count': 0.0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': True, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0})
        GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'UniqueName2': '', 'ActorSpecify3': -1, 'ActorName3': '', 'UniqueName3': '', 'ActorName1': 'Npc_oasis039', 'ActorName2': 'Npc_oasis038'})
    } {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    } {
        Npc_oasis039.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_oasis039.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    } {
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis038.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
    }

    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_Miss01'})
        Event485:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0000', 'IsCloseMessageDialog': True, 'ASName': 'Act_Champion_Wait'})
        if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
            EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'StepName': 'Ready', 'QuestName': 'SunazarashiRace_mini'})
            Event504:

            call RaceFlagOFF()

            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_Miss03'})
                if !EventSystemActor.GeneralChoice2() {
                    Event609:
                    if !EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1}) {
                        if EventSystemActor.CheckPlayerEquip({'PlayerEquipType': 1}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
                                if EventSystemActor.CheckRupee({'Value': 100}) {
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -100})
                                    Event479:
                                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis038_S1_001'})
                                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
                                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_R_005', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                                } else {
                                    Event480:
                                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0040'})
                                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
                                    Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Talk_0041'})

                                    call Common.EnableSaveAndWarp()

                                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
                                }
                            } else {
                                if EventSystemActor.CheckRupee({'Value': 50}) {
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': False, 'Value': -50})
                                    goto Event479
                                } else {
                                    goto Event480
                                }
                            }
                        } else {
                            Event611:
                            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S1_007'})
                            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})

                            call Common.EnableSaveAndWarp()

                            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
                        }
                    } else {
                        goto Event611
                    }
                } else {
                    Event786:
                    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_Miss02'})
                        Event496:

                        call Common.EnableSaveAndWarp()

                        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
                    } else {
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S2_006'})
                        goto Event496
                    }
                }
            } else {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S2_005', 'IsCloseMessageDialog': False})
                if !EventSystemActor.GeneralChoice2() {
                    goto Event609
                } else {
                    goto Event786
                }
            }
        } else {
            EventSystemActor.Demo_RollbackQuest({'QuestName': 'SunazarashiRace', 'StepName': 'Step1', 'IsWaitFinish': True})
            goto Event504
        }
    } else {
        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_S2_002', 'IsCloseMessageDialog': True})
        goto Event485
    }
}

void RaceFlagOFF() {
    EventSystemActor.Demo_FlagOFF({'FlagName': 'SunazarashiRace_Gate01', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'SunazarashiRace_Gate02', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'SunazarashiRace_Gate03', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'SunazarashiRace_Gate04', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'SunazarashiRace_Gate05', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Gate06'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Gate07'})
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'Value': 0, 'GameDataIntName': 'SunazarashiRace_GateCnt'})
}

void TimeRecord() {
    GameDataCalcMachine.Demo_MiniGameTimerWrite({'GameDataIntNameMintues': 'SunazarashiRace_ThisTime_L', 'GameDataIntNameSeconds': 'SunazarashiRace_ThisTime_M', 'GameDataIntNameMiliseconds': 'SunazarashiRace_ThisTime_S', 'IsWaitFinish': True})
}

void ResultCompare() {
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Operator': 'GreaterThanOrEqualTo', 'Value': 7}) {
        if !GameDataCalcMachine.CompareGameDataTime({'GameDataIntMinA': 'SunazarashiRace_ThisTime_L', 'GameDataIntSecA': 'SunazarashiRace_ThisTime_M', 'GameDataIntMilliA': 'SunazarashiRace_ThisTime_S', 'GameDataIntMinB': 'SunazarashiRace_BestTime_L', 'GameDataIntSecB': 'SunazarashiRace_BestTime_M', 'GameDataIntMilliB': 'SunazarashiRace_BestTime_S'}) {
            GameDataCalcMachine.Demo_MiniGameTimerWrite({'GameDataIntNameMintues': 'SunazarashiRace_BestTime_L', 'GameDataIntNameSeconds': 'SunazarashiRace_BestTime_M', 'GameDataIntNameMiliseconds': 'SunazarashiRace_BestTime_S', 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_mini_Demo330_1'})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Demo330_1'})
            }
        }
    }
}

void GateCnt06() {
    if !EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Gate06'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Gate06'})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Value': 1, 'IsWaitFinish': True})
    }
}

void GateCnt07() {
    if !EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Gate07'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Gate07'})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Value': 1, 'IsWaitFinish': True})
    }
}

void IfGetOff_AfterSceneChange() {
    goto Event494
}

void AfterGoal() {
    EventSystemActor.Demo_WaitForCloseFade({'IsWaitFinish': True, 'OrClosing': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MultiTalk({'ActorSpecify1': 3, 'ActorSpecify2': 3, 'Fovy': 40.0, 'IsWaitFinish': True, 'UniqueName1': '', 'UniqueName2': '', 'ActorSpecify3': -1, 'ActorName3': '', 'UniqueName3': '', 'ActorName1': 'Npc_oasis039', 'ActorName2': 'Npc_oasis038'})
    } {
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        Npc_oasis039.Demo_BecomeSpeaker({'IsWaitFinish': True})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
    } {
        Npc_oasis039.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        Npc_oasis039.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_oasis038.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Champion_Wait'})
    }

    EventSystemActor.Demo_WaitForCloseFade({'IsWaitFinish': True, 'OrClosing': False})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_mini_Demo330_1'}) {
            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_Demo330_1_510', 'IsCloseMessageDialog': True})

            call SunazarashiRace_mini.GetRupee()

            Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_Demo330_1_520'})

            fork {
                Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis038_Demo330_1_530', 'ASName': 'Act_Champion_Wait'})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

            fork {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis039_Demo330_1_540', 'IsCloseMessageDialog': True})
            } {
                Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis039', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_oasis038', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            }

            Event642:

            call RaceFlagOFF()


            call Common.EnableSaveAndWarp()


            fork {
                Npc_oasis038.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            } {
                Npc_oasis039.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            }

            Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis038_AfterGoal_030', 'ASName': 'Act_Champion_Wait'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_mini_Demo330_1'})
            if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
                EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'SunazarashiRace_mini', 'StepName': 'Ready'})
            } else {
                EventSystemActor.Demo_RollbackQuest({'QuestName': 'SunazarashiRace', 'StepName': 'Step1', 'IsWaitFinish': True})
            }
        } else {
            Event624:
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Operator': 'GreaterThanOrEqualTo', 'Value': 7}) {
                if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
                    if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 80}) {
                        Event623:
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis038_AfterGoal_010', 'IsCloseMessageDialog': True, 'ASName': ''})
                        goto Event642
                    } else {
                        Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/SunazarashiRace_mini:Npc_oasis039_AfterGoal_040'})

                        call SunazarashiRace_mini.GetRupee_Quite()

                        goto Event642
                    }
                } else {
                    goto Event623
                }
            } else {
                Npc_oasis039.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/SunazarashiRace:Npc_oasis038_AfterGoal_020', 'IsCloseMessageDialog': True, 'ASName': ''})
                goto Event642
            }
        }
    } else {
        goto Event624
    }
}

void nothanks() {
    goto Event775
}

void accepted() {
    goto Event561
}
