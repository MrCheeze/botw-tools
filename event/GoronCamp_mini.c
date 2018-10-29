-------- EventFlow: GoronCamp_mini --------

Actor: Npc_Goron_Camp001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ChangeScheduleAnchor', 'Demo_WarpToScheduleAnchor', 'Demo_TalkASync', 'Demo_ChangePosture']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceQuest', 'Demo_FlagON', 'Demo_MiniGameStart', 'Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_DisableMiniGameTime', 'Demo_CloseMessageDialog', 'Demo_RollbackQuest', 'Demo_UpdateMiniGameBestScore', 'Demo_SetGameDataInt', 'Demo_MiniGameTime', 'Demo_LoopEnd', 'Demo_WarpPlayerToDestination', 'Demo_AppearRupeeInMiniGame', 'Demo_FlagOFF', 'Demo_EnableCameraInput', 'Demo_ImmediateStopOwnedHorse', 'Demo_WaitFrame', 'Demo_WarpPlayer', 'Demo_ResetGimmick', 'Demo_AddGameDataToRupee']
queries: ['GeneralChoice3', 'CheckMiniGameTimeOver', 'CheckRupee', 'GeneralChoice2', 'CheckGameDataInt', 'CheckFlag', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron_Camp002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_ChangeScheduleAnchor', 'Demo_WarpToScheduleAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_SavePoint1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Goron_Camp001_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 1})

    switch Npc_Goron_Camp001.CheckActorAction13() {
      case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_19'})
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_mini_FirstTalk'}) {
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_12'})
            Event197:
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_13'})
            Event17:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                EventSystemActor.Demo_AdvanceQuest({'QuestName': '', 'StepName': '', 'IsWaitFinish': False, 'ForceRunTelop': False})
                Npc_Goron_Camp001.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_01', 'IsCloseMessageDialog': False})
                Event131:
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_02'})
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                    Event133:
                    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_05'})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        if EventSystemActor.CheckRupee({'Value': 50}) {
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            EventSystemActor.Demo_IncreaseRupee({'Value': -50, 'IsWaitFinish': False})
                            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_07', 'IsCloseMessageDialog': False})
                            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_17'})
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'GoronCamp_mini_Hard', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagON({'FlagName': 'GoronCamp_mini_Normal', 'IsWaitFinish': True})
                            Event91:
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0, 'Color': 1})
                            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
                            GameRomCamera.Demo_MovePosFlow({'MotionMode': 0, 'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'ActorName1': '', 'ActorName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'TargetActor1': 1, 'TargetActor2': -1, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1PosX': 0.0, 'Count': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': False, 'Pattern1AtY': 5.0, 'Pattern1AtZ': 5.0, 'Pattern1PosZ': -3.0, 'Pattern1PosY': 0.20000000298023224, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_mini_Hard'}) {
                                EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'H-1', 'WarpDestPosName': 'GoronCamp_StartPos_H'})
                            } else {
                                EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'H-1', 'WarpDestPosName': 'GoronCamp_StartPos_N'})
                            }
                            EventSystemActor.Demo_ResetGimmick({'SystemResetOption': 1, 'IsWaitFinish': True, 'AdditionalResetActor': '', 'IsResetCamera': False})
                            Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0, 'Color': 1})
                            EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                            EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'IsWaitFinish': True, 'Value': 0})
                            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': False, 'StepName': 'Finish', 'ForceRunTelop': False, 'QuestName': 'GoronCamp_mini'})
                            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
                            if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_mini_Hard'}) {
                                EventSystemActor.Demo_AppearRupeeInMiniGame({'IsWaitFinish': True, 'IsAppear': True, 'TargetValue': 300})
                            } else {
                                EventSystemActor.Demo_AppearRupeeInMiniGame({'IsWaitFinish': True, 'IsAppear': True, 'TargetValue': 100})
                            }
                            EventSystemActor.Demo_FlagON({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'WarpProhibition'})
                            if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_mini_Hard'}) {

                                fork {
                                    Npc_Goron_Camp001.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'GoronCamp_001_HARD', 'AnchorName': 'AnchorAction10'})
                                } {
                                    Npc_Goron_Camp002.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'GoronCamp_002_HARD', 'AnchorName': 'AnchorAction10'})
                                }

                            } else {

                                fork {
                                    Npc_Goron_Camp001.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'GoronCamp_001_NORMAL', 'AnchorName': 'AnchorAction1'})
                                } {
                                    Npc_Goron_Camp002.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'GoronCamp_002_NORMAL', 'AnchorName': 'AnchorAction1'})
                                }

                            }
                        } else {
                            Event15:
                            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_03', 'IsOverWriteLabelActorName': False})
                        }
                      case 1:
                        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_09', 'IsCloseMessageDialog': True})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronCamp_mini_ChoiceExclude'})
                        goto Event133
                      case 2:
                        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_08'})
                    }
                } else {
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_06'})
                    if !EventSystemActor.GeneralChoice2() {
                        if EventSystemActor.CheckRupee({'Value': 100}) {
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            EventSystemActor.Demo_IncreaseRupee({'Value': -100, 'IsWaitFinish': False})
                            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_10', 'IsCloseMessageDialog': False})
                            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_18'})
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'GoronCamp_mini_Normal', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagON({'FlagName': 'GoronCamp_mini_Hard', 'IsWaitFinish': True})
                            goto Event91
                        } else {
                            goto Event15
                        }
                    } else {
                        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_11'})
                    }
                }
              case 1:
                Event132:
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_04'})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

                fork {
                    Npc_Goron_Camp001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_22', 'IsCloseMessageDialog': True})
                } {

                    call GoronCamp.Camera()

                }

                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 2})
                if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_mini_Activated'}) {
                    Event200:
                    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_13'})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        goto Event131
                      case 1:
                        goto Event132
                      case 2:
                        Event18:
                        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_03'})
                    }
                } else {
                    goto Event197
                }
              case 2:
                goto Event18
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'GoronCamp_mini_FirstTalk', 'IsWaitFinish': True})
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_00'})
            goto Event17
        }
    }
}

void GameReady_Npc_Goron_Camp001_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 1})

    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_12'})
    goto Event200
}

void CourseOut_Goron_Camp() {

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': False})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 0.5, 'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_15', 'IsOverWriteLabelActorName': False})
    Event106:
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    EventSystemActor.Demo_AddGameDataToRupee({'IsSignInversion': True, 'GameDataIntAddValueName': 'CurrentTotalGetRupeeInMiniGame', 'IsWaitFinish': False})
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    EventSystemActor.Demo_AppearRupeeInMiniGame({'IsWaitFinish': True, 'IsAppear': False, 'TargetValue': 0})
    EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'StepName': 'GameReady', 'QuestName': 'GoronCamp_mini'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
}

void Finish_Npc_Goron_Camp001_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 1, 'CountStartTime': 180, 'IsShowTimeUI': True, 'MaxTime': -1})
    Event11:
    if EventSystemActor.CheckMiniGameTimeOver() {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'StepName': 'ResetGame', 'ForceRunTelop': False, 'QuestName': 'GoronCamp_mini'})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event11
    }
}

void ResetGame_Npc_Goron_Camp001_StepStart() {

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': False})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 0.5, 'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_05', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
    goto Event106
}

void Finish_Goron_Camp() {

    call GoronCamp.InitTalkGoronCampFinish()

    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 3, 'ActorName1': 'Npc_Goron_Camp001', 'Pattern1Fovy': 50.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1AtZ': 0.0, 'Pattern1PosY': 1.5, 'Pattern1PosZ': 3.0, 'Pattern1AtY': 2.200000047683716, 'Pattern1PosX': 1.0, 'Pattern1AtX': -0.30000001192092896, 'Accept1FrameDelay': True, 'ActorIgnoringCollision': 0, 'ReviseModeEnd': 0, 'Count': 20.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_UpdateMiniGameBestScore({'Type': 0, 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 0.5, 'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
    Npc_Goron_Camp001.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_21', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_mini_Hard'}) {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'Operator': 'GreaterThanOrEqualTo', 'Value': 300}) {
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_14'})
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_21'})
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Mushroom_O'}) {

                call GetDemo.GetItemByName({'CheckTargetActorName': 'Item_Mushroom_O', 'IsInvalidOpenPouch': False})

                Event262:
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_20'})
                Event42:
                EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                EventSystemActor.Demo_AppearRupeeInMiniGame({'IsWaitFinish': True, 'IsAppear': False, 'TargetValue': 0})
                EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'StepName': 'GameReady', 'QuestName': 'GoronCamp_mini'})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
            } else {
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_23'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

                goto Event262
            }
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'Operator': 'GreaterThanOrEqualTo', 'Value': 270}) {
            Event50:
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_15'})
            goto Event42
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'Operator': 'GreaterThanOrEqualTo', 'Value': 100}) {
            Event41:
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_17', 'IsOverWriteLabelActorName': False})
        } else {
            Event49:
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_19', 'IsOverWriteLabelActorName': False})
        }
        goto Event42
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'Operator': 'GreaterThanOrEqualTo', 'Value': 100}) {
        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_14'})
        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_22'})
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_MushroomGet_D', 'Count': 1}) {

            call GetDemo.GetItemByName({'CheckTargetActorName': 'Item_MushroomGet_D', 'IsInvalidOpenPouch': False})

            goto Event262
        } else {
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_23'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

            goto Event262
        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'Operator': 'GreaterThanOrEqualTo', 'Value': 90}) {
        goto Event50
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'Operator': 'GreaterThanOrEqualTo', 'Value': 30}) {
        goto Event41
    } else {
        goto Event49
    }
    goto Event42
}

void Finish_Npc_Goron_Camp002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron_Camp002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_12', 'IsOverWriteLabelActorName': False})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Goron_Camp002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_26'})
    } else {
        EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm', 'FadeSec': 2.0})
        Npc_Goron_Camp002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_27'})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        EventSystemActor.Demo_AddGameDataToRupee({'IsSignInversion': True, 'GameDataIntAddValueName': 'CurrentTotalGetRupeeInMiniGame', 'IsWaitFinish': False})
        goto Event42
    }
}

void Ready_Npc_Goron_Camp001_Near() {
    Event218:
    Npc_Goron_Camp001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronCamp_mini:Talk_16', 'IsChecked': False, 'DispFrame': 90})
}

void GameReady_Npc_Goron_Camp001_Near() {
    goto Event218
}

void Ready_Npc_Goron_Camp002_Talk() {
    Event251:

    call Npc_Goron_Camp002.Talk()

}

void Ready_Npc_Goron_Camp003_Talk() {
    Event250:

    call Npc_Goron_Camp003.Talk()

}

void GameReady_Npc_Goron_Camp002_Talk() {
    goto Event251
}

void GameReady_Npc_Goron_Camp003_Talk() {
    goto Event250
}

void Finish_Npc_Goron_Camp003_Talk() {
    goto Event250
}
