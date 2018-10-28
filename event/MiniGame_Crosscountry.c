-------- EventFlow: MiniGame_Crosscountry --------

Actor: Npc_MiniGame_Crosscountry
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_SetWanderPathIndex', 'Demo_LookAtObject', 'Demo_LookAtTheFront', 'Demo_OpenMessageDialogTrig', 'Demo_TurnAndLookToObject', 'Demo_TrigNullASPlay', 'Demo_ChangeEmotion', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_FlagON', 'Demo_AdvanceQuest', 'Demo_LoopEnd', 'Demo_WarpPlayerToDestination', 'Demo_FlagOFF', 'Demo_MiniGameTime', 'Demo_DisableMiniGameTime', 'Demo_ResetGimmick', 'Demo_IncreaseRupee', 'Demo_WaitFrame', 'Demo_MiniGameStart', 'Demo_ImmediateStopOwnedHorse', 'Demo_MiniGameFinish']
queries: ['GeneralChoice2', 'CheckGameDataInt', 'CheckFlag', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera', 'Demo_Turn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayerHorseGetOff', 'Demo_LookAtTheFront', 'Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_MiniGameTimerWrite']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_NotifyTalk', 'Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_MiniGame_Crosscountry_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:Initial_01'})
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:Initial_02'})
    } else {
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:Initial_00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_MiniGame_Crosscountry.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0002_00'})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {

                    fork {
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                    } {
                        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0005_00', 'IsCloseMessageDialog': True})
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})

                        call Common.DisableSaveAndWarp()

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_ActorGenerateFlag'})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2651.603759765625, 'Pattern1PosY': 290.803955078125, 'Pattern1PosZ': -1169.5999755859375, 'Pattern1AtX': -2649.060546875, 'Pattern1AtY': 290.064697265625, 'Pattern1AtZ': -1167.16552734375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 2})
                    }

                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'SystemResetOption': 0, 'IsResetCamera': False})
                    Npc_MiniGame_Crosscountry.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
                    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -2649.0, 'DestinationZ': -1168.0, 'DirectionY': -85.0, 'DestinationY': 289.1300048828125})
                    Npc_MiniGame_Crosscountry.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                    GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_MiniGame_Crosscountry', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                    Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0005_01', 'IsCloseMessageDialog': True})

                    fork {
                        Npc_MiniGame_Crosscountry.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0005_03'})
                        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0005_04', 'IsCloseMessageDialog': True})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.7772220373153687, 'Pattern1PosY': 0.5700680017471313, 'Pattern1PosZ': -3.52099609375, 'Pattern1AtX': 1.767333984375, 'Pattern1AtY': 1.1283570528030396, 'Pattern1AtZ': -0.5847169756889343, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 30.0, 'Cushion': 0.20000000298023224, 'MotionMode': 1, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_MiniGame_Crosscountry.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
                        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0005_07', 'ASName': 'Detect', 'IsBecomingSpeaker': True})

                        fork {
                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.00012199999764561653, 'Pattern1PosY': 1.942352056503296, 'Pattern1PosZ': -5.044434070587158, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.6499940156936646, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Count': 30.0, 'Cushion': 0.20000000298023224, 'MotionMode': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                        } {
                            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
                            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WaitAttention', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                        }

                        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_StartPistol', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
                        EventBgmCtrlTag.Demo_Start({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True})
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                    } {

                        call LookAtGoal()

                    }

                } else {
                    Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0005_NotEnoughMoney'})
                    Event301:
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                }
            } else {
                Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0006_00', 'IsCloseMessageDialog': True})
                goto Event301
            }
        } else {
            Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0004_00', 'IsCloseMessageDialog': True})
        }
    }
}

void WarpToNPC() {
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Crosscountry_IsWinTheGame'}) in [1, 0] {
        Npc_MiniGame_Crosscountry.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': -7.0, 'DestinationX': -2644.0, 'DestinationZ': -1168.0, 'DestinationY': 289.1300048828125})
    }
}

void Exit() {
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_ActorGenerateFlag'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_Goal'})
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_IsWinTheGame'})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0009_01', 'IsCloseMessageDialog': True})

    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Ready'})
}

void Game_Npc_MiniGame_Crosscountry_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'CountMode': 0, 'IsWaitFinish': True, 'CountStartTime': 0, 'IsShowTimeUI': True, 'MaxTime': -1})
    Event190:
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'ForceStop'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Crosscountry_IsInGoalArea'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_IsWinTheGame'})
        Event117:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Crosscountry_Goal'}) {
        goto Event117
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Crosscountry_IsInSafetyArea'}) {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event190
    } else {
        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'ForceStop'})
    }
}

void LookAtGoal() {
    GameRomCamera.Demo_Turn({'IsWaitFinish': True, 'PosX': -2691.0, 'PosZ': -821.2457885742188, 'PosY': 382.79119873046875, 'Count': 30.0, 'Cushion': 0.20000000298023224, 'ReviseModeRunning': 1})
}

void Finish_Npc_MiniGame_Crosscountry_StepStart() {

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    EventSystemActor.Demo_MiniGameFinish({'TextType': 0, 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameRaceBgm', 'FadeSec': 0.5, 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Crosscountry_IsWinTheGame'}) {
        Npc_MiniGame_Crosscountry.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:AtGoal_00_00', 'ASName': 'Detect'})
        Event278:
        GameDataCalcMachine.Demo_MiniGameTimerWrite({'IsWaitFinish': True, 'GameDataIntNameSeconds': 'MiniGame_Crosscountry_Current_Seconds', 'GameDataIntNameMintues': 'MiniGame_Crosscountry_Current_Minutes', 'GameDataIntNameMiliseconds': 'MiniGame_Crosscountry_Current_MilliSeconds'})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -4.7447509765625, 'Pattern1PosY': 1.7716670036315918, 'Pattern1PosZ': -0.018066000193357468, 'Pattern1AtX': -0.48413100838661194, 'Pattern1AtY': 1.388427972793579, 'Pattern1AtZ': 0.45947301387786865, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_MiniGame_Crosscountry', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        Npc_MiniGame_Crosscountry.Demo_SetWanderPathIndex({'IsWaitFinish': True})
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})

        call WarpToNPC()

        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_ActorGenerateFlag'})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'SystemResetOption': 1, 'IsResetCamera': False})

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_MiniGame_Crosscountry.Demo_ChangeEmotion({'IsWaitFinish': True, 'IsOnlyFace': False, 'EmotionType': 'Normal'})
        Npc_MiniGame_Crosscountry.Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Talk_Wait'})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})

        call Result()

        Event304:
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_IsInGoalArea'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_Goal'})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:AtGoal_02'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_MiniGame_Crosscountry.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0002_01'})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_IsWinTheGame'})

                    fork {
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                    } {
                        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0014_00', 'IsCloseMessageDialog': True})
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})

                        call Common.DisableSaveAndWarp()

                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2651.603759765625, 'Pattern1PosY': 290.803955078125, 'Pattern1PosZ': -1169.5999755859375, 'Pattern1AtX': -2649.060546875, 'Pattern1AtY': 290.064697265625, 'Pattern1AtZ': -1167.16552734375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    }

                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'SystemResetOption': 0, 'IsResetCamera': False})
                    Npc_MiniGame_Crosscountry.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
                    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -2649.0, 'DestinationZ': -1168.0, 'DestinationY': 289.1300048828125, 'DirectionY': -85.0})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.7772220373153687, 'Pattern1PosY': 0.5700680017471313, 'Pattern1PosZ': -3.52099609375, 'Pattern1AtX': 1.767333984375, 'Pattern1AtY': 1.1283570528030396, 'Pattern1AtZ': -0.5847169756889343, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'StartCalcOnly': False})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_ActorGenerateFlag'})
                    Npc_MiniGame_Crosscountry.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                    GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_MiniGame_Crosscountry', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                    Npc_MiniGame_Crosscountry.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
                    Npc_MiniGame_Crosscountry.Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Detect'})
                    Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0005_07', 'ASName': 'Detect', 'IsBecomingSpeaker': True})

                    fork {
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.00012199999764561653, 'Pattern1PosY': 1.942352056503296, 'Pattern1PosZ': -5.044434070587158, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.6499940156936646, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Count': 30.0, 'Cushion': 0.20000000298023224, 'MotionMode': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                    } {
                        GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
                        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WaitAttention', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
                    }

                    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_StartPistol', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
                    EventBgmCtrlTag.Demo_Start({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True})
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                } else {
                    Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0014_NotEnoughMoney', 'IsCloseMessageDialog': True})
                    Event289:
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})

                    call Exit()

                }
            } else {
                Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0006_00', 'IsCloseMessageDialog': True})
                Event152:
                Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0015_01', 'IsCloseMessageDialog': True})
                goto Event289
            }
        } else {
            Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0015_00'})
            goto Event152
        }
    } else {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2681.328857421875, 'Pattern1PosY': 416.25445556640625, 'Pattern1PosZ': -789.4214477539062, 'Pattern1AtX': -2685.71240234375, 'Pattern1AtY': 415.30572509765625, 'Pattern1AtZ': -781.4171142578125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_MiniGame_Crosscountry.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:AtGoal_00', 'ASName': 'Wait'})
        goto Event278
    }
}

void Result() {
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Crosscountry_IsWinTheGame'}) {
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:AtGoal_01_03'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'PutRupee_Purple'})

    } else {
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:AtGoal_01_04'})
    }
}

void ForceStop_Npc_MiniGame_Crosscountry_StepStart() {

    call Common.AirStartUP_Player()

    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameRaceBgm', 'FadeSec': 0.5, 'IsWaitFinish': True})
    Npc_MiniGame_Crosscountry.Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Wait'})
    Npc_MiniGame_Crosscountry.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:Halt_00'})
    } else {
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:Halt_02'})
    }
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    Npc_MiniGame_Crosscountry.Demo_SetWanderPathIndex({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_ActorGenerateFlag'})
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        Event267:

        call WarpToNPC()

        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Crosscountry_ActorGenerateFlag'})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -4.7447509765625, 'Pattern1PosY': 1.7716670036315918, 'Pattern1PosZ': -0.018066000193357468, 'Pattern1AtX': -0.48413100838661194, 'Pattern1AtY': 1.388427972793579, 'Pattern1AtZ': 0.45947301387786865, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_MiniGame_Crosscountry', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        Npc_MiniGame_Crosscountry.Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Talk_Wait'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        Npc_MiniGame_Crosscountry.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:Halt_01'})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        goto Event304
    } else {
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        goto Event267
    }
}

void Game_Npc_MiniGame_Crosscountry_StepStart() {
    Npc_MiniGame_Crosscountry.Demo_OpenMessageDialogTrig({'MessageId': 'EventFlowMsg/MiniGame_Crosscountry:0005_08', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': False, 'CloseDialogOption': 3})
}
