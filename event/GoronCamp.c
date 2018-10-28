-------- EventFlow: GoronCamp --------

Actor: Npc_Goron_Camp002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_MiniGameStart', 'Demo_MiniGameTime', 'Demo_IncreaseRupee', 'Demo_AppearRupee', 'Demo_DisableMiniGameTime', 'Demo_CloseMessageDialog', 'Demo_RollbackQuest', 'Demo_UpdateMiniGameBestScore', 'Demo_SetGameDataInt', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_LoopEnd', 'Demo_AppearRupeeInMiniGame', 'Demo_FlagOFF', 'Demo_EnableCameraInput', 'Demo_ImmediateStopOwnedHorse', 'Demo_WarpPlayer', 'Demo_ResetGimmick', 'Demo_AddGameDataToRupee']
queries: ['GeneralChoice2', 'CheckRupee', 'CheckMiniGameTimeOver', 'CheckGameDataInt', 'GeneralChoice3', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron_Camp001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_PlayASForDemo', 'Demo_MoveToAnchor', 'Demo_BecomeSpeaker', 'Demo_TurnAndLookToObject', 'Demo_LookAtTheFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron_Camp003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_SavePoint1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_NotifyTalk']
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

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void GameReady_Npc_Goron_Camp002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron_Camp002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_08', 'IsOverWriteLabelActorName': False})
}

void Ready_Npc_Goron_Camp001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_FirstTalk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Finish'}) {
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_52'})
            Event223:
            if !EventSystemActor.GeneralChoice2() {
                Npc_Goron_Camp001.Demo_Talk({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_11', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

                fork {
                    Npc_Goron_Camp001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_22', 'IsCloseMessageDialog': True})
                } {

                    call Camera()

                }

                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 2})
                Npc_Goron_Camp001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_23'})
                EventSystemActor.Demo_AdvanceQuest({'QuestName': '', 'StepName': '', 'IsWaitFinish': False, 'ForceRunTelop': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_18', 'IsOverWriteLabelActorName': False})
                Event5:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    if EventSystemActor.CheckRupee({'Value': 20}) {
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': False})
                        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_04', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_31'})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0, 'Color': 1})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
                        GameRomCamera.Demo_MovePosFlow({'MotionMode': 0, 'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'ActorName1': '', 'ActorName2': '', 'FovyAppendMode': 1, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'TargetActor1': 1, 'TargetActor2': -1, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1PosX': 0.0, 'Count': 0.0, 'StartCalcOnly': False, 'Pattern1AtY': 5.0, 'Pattern1AtZ': 5.0, 'Pattern1PosZ': -3.0, 'Pattern1PosY': 0.20000000298023224, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'CollisionInterpolateSkip': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'H-1', 'WarpDestPosName': 'GoronCamp_StartPos_N'})
                        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': False})
                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0, 'Color': 1})
                        EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'IsWaitFinish': True, 'Value': 0})
                        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
                        EventSystemActor.Demo_AppearRupeeInMiniGame({'IsWaitFinish': True, 'IsAppear': True, 'TargetValue': 100})
                        EventSystemActor.Demo_FlagON({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': False, 'StepName': 'Finish', 'QuestName': 'GoronCamp', 'ForceRunTelop': False})
                    } else {
                        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_03', 'IsOverWriteLabelActorName': False})
                    }
                  case 1:
                    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_16', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

                    fork {
                        Npc_Goron_Camp001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_22', 'IsCloseMessageDialog': True})
                    } {
                        WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'StartCalcOnly': False, 'Pattern1Fovy': 50.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'Count': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtY': 410.3699951171875, 'Pattern1PosX': 2738.800048828125, 'Pattern1PosY': 349.29998779296875, 'Pattern1PosZ': -3488.139892578125, 'Pattern1AtX': 2647.820068359375, 'Pattern1AtZ': -3462.110107421875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': False, 'Pattern1Fovy': 50.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtY': 410.3699951171875, 'Pattern1PosX': 2738.800048828125, 'Pattern1PosZ': -3488.139892578125, 'Pattern1AtX': 2647.820068359375, 'Pattern1AtZ': -3462.110107421875, 'Pattern1PosY': 530.0, 'Count': 250.0, 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    }

                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 2})
                    Npc_Goron_Camp001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_24', 'IsCloseMessageDialog': True})
                    Event4:
                    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_01', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                    goto Event5
                  case 2:
                    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_02', 'IsOverWriteLabelActorName': False})
                }
            } else {
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_10', 'IsOverWriteLabelActorName': False})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Activated'}) {
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_72'})
        } else {
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_33'})
        }
        goto Event223
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Finish'}) {
        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronCamp:Talk_50'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_FlagON({'FlagName': 'GoronCamp_FirstTalk', 'IsWaitFinish': True})
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_51'})
            goto Event223
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Activated'}) {
        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/GoronCamp:Talk_70'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_FlagON({'FlagName': 'GoronCamp_FirstTalk', 'IsWaitFinish': True})
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_71'})
            goto Event223
        }
    } else {
        Npc_Goron_Camp001.Demo_Talk({'MessageId': 'EventFlowMsg/GoronCamp:Talk_00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_FlagON({'FlagName': 'GoronCamp_FirstTalk', 'IsWaitFinish': True})
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_32'})
            goto Event223
        }
    }
}

void Ready_Npc_Goron_Camp002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Finish'}) {
        Npc_Goron_Camp002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_55'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Activated'}) {
        Npc_Goron_Camp002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_75'})
    } else {
        Npc_Goron_Camp002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_07', 'IsOverWriteLabelActorName': False})
    }
}

void GameReady_Npc_Goron_Camp001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
    goto Event4
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
        Event58:
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'GoronCamp', 'StepName': 'GameReady'})
        Event22:
        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
        EventSystemActor.Demo_AppearRupeeInMiniGame({'IsWaitFinish': True, 'IsAppear': False, 'TargetValue': 0})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
    }
}

void Ready_Npc_Goron_Camp003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Finish'}) {
        Npc_Goron_Camp003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sub_KO_Wait', 'MessageId': 'EventFlowMsg/GoronCamp:Talk_60'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Activated'}) {
        Npc_Goron_Camp003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sub_KO_Wait', 'MessageId': 'EventFlowMsg/GoronCamp:Talk_80'})
    } else {
        Npc_Goron_Camp003.Demo_Talk({'MessageId': 'EventFlowMsg/GoronCamp:Talk_09', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sub_KO_Wait'})
    }
}

void GameReady_Npc_Goron_Camp003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron_Camp003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_13', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sub_KO_Wait'})
}

void Finish_Npc_Goron_Camp003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Goron_Camp003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_14', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Sub_KO_Wait'})
}

void Finish_Goron_Camp() {
    if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_GameReady'}) {

        call InitTalkGoronCampFinish()

        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorName1': 'Npc_Goron_Camp001', 'Pattern1Fovy': 50.0, 'Pattern1AtZ': 0.0, 'Pattern1PosY': 1.5, 'Pattern1PosZ': 3.0, 'Pattern1AtY': 2.200000047683716, 'Pattern1PosX': 1.0, 'Pattern1AtX': -0.30000001192092896, 'TargetActor1': 3, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'Count': 20.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_UpdateMiniGameBestScore({'Type': 0, 'IsWaitFinish': True})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        EventBgmCtrlTag.Demo_Stop({'FadeSec': 0.5, 'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_21', 'IsOverWriteLabelActorName': False})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'Operator': 'GreaterThanOrEqualTo', 'Value': 100}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Finish'}) {
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_53', 'IsCloseMessageDialog': False})
            } else {
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_06', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
            }
            Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_34'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronCamp_Finish'})
            goto Event22
        } else {
            Npc_Goron_Camp001.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'Operator': 'GreaterThanOrEqualTo', 'Value': 90}) {
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_20', 'IsOverWriteLabelActorName': False})
                goto Event58
            } else
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentTotalGetRupeeInMiniGame', 'Operator': 'GreaterThanOrEqualTo', 'Value': 30}) {
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_17', 'IsOverWriteLabelActorName': False})
            } else {
                Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_19', 'IsOverWriteLabelActorName': False})
            }
            goto Event58
        }
    }
}

void CourseOut_Goron_Camp() {
    if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Finish'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronCamp_ResetGame'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronCamp_GameReady'})
    } else {

        call Common.AirStartUP_Player()

        EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
        EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': False})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        EventBgmCtrlTag.Demo_Stop({'FadeSec': 0.5, 'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
        EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
        Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_15', 'IsOverWriteLabelActorName': False})
        Event186:
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        EventSystemActor.Demo_AddGameDataToRupee({'IsSignInversion': True, 'GameDataIntAddValueName': 'CurrentTotalGetRupeeInMiniGame', 'IsWaitFinish': False})
        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
        EventSystemActor.Demo_AppearRupeeInMiniGame({'IsWaitFinish': True, 'IsAppear': False, 'TargetValue': 0})
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'GoronCamp', 'StepName': 'GameReady'})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'SaveProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
    }
}

void Finish_Npc_Goron_Camp001_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 1, 'CountStartTime': 180, 'IsShowTimeUI': True, 'MaxTime': -1})
    Event14:
    if EventSystemActor.CheckMiniGameTimeOver() {
        if !EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Finish'}) {
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'GoronCamp', 'StepName': 'ResetGame', 'ForceRunTelop': False})
        }
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event14
    }
}

void KeepOut_Goron_Camp() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Goron_Camp001"), 'Arg_Turn': 1})

    Npc_Goron_Camp001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_25'})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'H-1', 'WarpDestPosName': 'KeepOut_PlayerPos'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'ActorName1': '', 'ActorName2': '', 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1PosX': 0.0, 'Count': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'Pattern1AtY': 1.649999976158142, 'Pattern1AtZ': 0.0, 'Pattern1PosY': 2.5899999141693115, 'Pattern1PosZ': -5.559999942779541, 'TargetActor1': 1, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Goron_Camp001.Demo_MoveToAnchor({'AnchorName': 'AnchorAction2', 'IsWaitFinish': True, 'IsTurnToAnchorDir': True, 'AnchorUniqueName': '', 'ASKeyName': 'Act_Captain_Rest', 'IsAlignmentAnchor': False})
    Npc_Goron_Camp001.Demo_PlayASForDemo({'ASName': 'Act_Captain_Rest', 'IsWaitFinish': False, 'IsIgnoreSame': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
}

void Ready_Npc_Goron_Camp003_Near() {
    Npc_Goron_Camp003.Demo_TalkASync({'MessageId': 'EventFlowMsg/GoronCamp:Talk_28', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
}

void Ready_Npc_Goron_Camp002_Near() {
    Npc_Goron_Camp002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_29', 'IsChecked': False, 'DispFrame': 90})
}

void Ready_Npc_Goron_Camp001_Near() {
    Npc_Goron_Camp001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_30', 'DispFrame': 300, 'IsChecked': True})
}

void ResetGame_Npc_Goron_Camp001_StepStart() {

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': False})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 0.5, 'IsWaitFinish': True, 'BgmName': 'GameRaceBgm'})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Npc_Goron_Camp001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronCamp:Talk_05', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
    goto Event186
}

void Camera() {
    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'StartCalcOnly': False, 'Pattern1Fovy': 50.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'Count': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtY': 410.3699951171875, 'Pattern1PosX': 2738.800048828125, 'Pattern1PosY': 349.29998779296875, 'Pattern1PosZ': -3488.139892578125, 'Pattern1AtX': 2647.820068359375, 'Pattern1AtZ': -3462.110107421875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': False, 'Pattern1Fovy': 50.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1AtY': 410.3699951171875, 'Pattern1PosX': 2738.800048828125, 'Pattern1PosZ': -3488.139892578125, 'Pattern1AtX': 2647.820068359375, 'Pattern1AtZ': -3462.110107421875, 'Pattern1PosY': 530.0, 'Count': 250.0, 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void InitTalkGoronCampFinish() {

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': False})
    } {
        Npc_Goron_Camp001.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Goron_Camp001.Demo_TurnAndLookToObject({'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

}
