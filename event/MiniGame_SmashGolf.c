-------- EventFlow: MiniGame_SmashGolf --------

Actor: Npc_MiniGame_Golf
entrypoint: None()
actions: ['Demo_Talk', 'Demo_OpenMessageDialog', 'Demo_TurnAndLookToObject', 'Demo_TalkASync', 'Demo_WarpToScheduleAnchor', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_LoopEnd', 'Demo_AdvanceQuest', 'Demo_FlagOFF', 'Demo_IncreaseGameDataInt', 'Demo_SetGameDataInt', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_IncreaseRupee', 'Demo_SetGameDataFloat', 'Demo_WarpPlayerToDestination', 'Demo_AppearGolfCount', 'Demo_DisappearGolfCount', 'Demo_ResetGimmick', 'Demo_AppearRupee', 'Demo_WarpPlayerToAnchor']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'CheckRupee', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_ActorInfoToGameDataVec3', 'Demo_CalcVecLengthToGameData', 'Demo_GameDataSubVec3']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect', 'Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DebugTextDrawer
entrypoint: None()
actions: ['Demo_IntDraw', 'Demo_FloatDraw']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WoodBall_Golf
entrypoint: None()
actions: ['Demo_WarpToGameDataVec3f', 'Demo_Idling', 'Demo_WarpToPos', 'Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Area[CupInArea]
entrypoint: None()
actions: []
queries: ['DummyQuery']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: ActorObserverTag[CupInJudge]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Area[OBArea]
entrypoint: None()
actions: []
queries: ['DummyQuery']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: ActorObserverTag[OBJudge]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: ActorObserverTag[OBJudge2]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_FlagChallengeGoal_A[Flag_ForGolf]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['Demo_TerrainCalcCenter']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_MiniGame_Golf_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_IsTalked'}) {
        Event2:
        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskPlay', 'ASName': ''})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Event271:
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf10', 'ASName': '', 'IsCloseMessageDialog': True})

            call AskPlay_Npc_MiniGame_Golf()

          case 1:
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf1', 'ASName': ''})
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf2', 'ASName': ''})
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf3', 'ASName': ''})
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf4', 'ASName': ''})
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf5', 'ASName': ''})
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf6', 'ASName': ''})
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf7', 'ASName': ''})
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf8', 'ASName': ''})
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskGolf9', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                goto Event271
            } else {
                Event23:
                Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:NotPlay', 'ASName': '', 'IsCloseMessageDialog': True})
            }
          case 2:
            goto Event23
        }
    } else {
        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:TalkFirst'})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_SmashGolf_IsTalked', 'IsWaitFinish': True})
        goto Event2
    }
}

void Game_Npc_MiniGame_Golf_EachFrame() {
    Event166:
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_OBArea'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_Warned'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_CancellArea'}) {
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'ForceStop'})
            } else
            Event106:
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_Smashing'}) {
                EventSystemActor.Demo_DisappearGolfCount({'IsWaitFinish': True})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'MoveBall'})
            } else {
                EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                goto Event166
            }
        } else {
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Warning'})
        }
    } else {
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_Warned', 'IsWaitFinish': True})
        goto Event106
    }
}

void Game_Npc_MiniGame_Golf_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:GameTalk', 'ASName': '', 'IsCloseMessageDialog': True})
    if !EventSystemActor.GeneralChoice2() {
        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:NotPlay', 'ASName': '', 'IsCloseMessageDialog': True})
        EventBgmCtrlTag.Demo_Stop({'BgmName': 'GolfBgm', 'IsWaitFinish': True, 'FadeSec': 3.0})
        EventSystemActor.Demo_DisappearGolfCount({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_Wood_Choise', 'IsWaitFinish': True})

        call Finalize_Npc_MiniGame_Golf()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    } else {
        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:RetrunGame', 'ASName': ''})
    }
}

void Finalize_Npc_MiniGame_Golf() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_Stage1_Choise'})
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'MiniGame_SmashGolf_ShotCount', 'Value': 0})
    EventSystemActor.Demo_SetGameDataFloat({'IsWaitFinish': True, 'GameDataFloatName': 'MiniGame_SmashGolf_LastShotDistance', 'Value': 0.0})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_IsStable'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_Activated'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_CupIn'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_Clear'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_OBArea'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_Warned'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_JudgeOB'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_CancellArea'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_Game'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_Warning'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_OB'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_ForceStop'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_MoveBall'})

    call Common.EnableSaveAndWarp()

}

void MoveBall_Npc_MiniGame_Golf_StepStart() {

    fork {
        GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_IncreaseGameDataInt({'Value': 1, 'GameDataIntName': 'MiniGame_SmashGolf_ShotCount', 'IsWaitFinish': True})
        EventSystemActor.Demo_AppearGolfCount({'GameDataIntTargetCounter': 'MiniGame_SmashGolf_ShotCount', 'IsWaitFinish': True})
        WoodBall_Golf.Demo_Join({'IsWaitFinish': True})
        FldObj_FlagChallengeGoal_A[Flag_ForGolf].Demo_Join({'IsWaitFinish': True})
        ActorObserverTag[CupInJudge].Demo_Join({'IsWaitFinish': True})
        if !Area[CupInArea].DummyQuery() {
            ActorObserverTag[OBJudge].Demo_Join({'IsWaitFinish': True})
            ActorObserverTag[OBJudge2].Demo_Join({'IsWaitFinish': True})
            if !Area[OBArea].DummyQuery() {

                call SmashCamera()

                Event112:
                GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'ActorName1': 'WoodBall_Golf', 'TargetActor2': 1, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'FovyAppendMode': 1, 'Pattern1PosY': 0.0, 'AtAppendMode': 1, 'Count': 0.0, 'PosAppendMode': 1, 'Accept1FrameDelay': False, 'Cushion': 1.0, 'StartCalcOnly': True, 'MotionMode': 1, 'Pattern1Fovy': 65.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': 'MiniGame_SmashGolf_CameraPos0', 'GameDataVec3fCameraAt': 'MiniGame_SmashGolf_CameraAt0'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_Smashing'}) {
                    goto Event112
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_JudgeOB'}) {
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_ShotCount', 'Value': 20, 'Operator': 'LessThan'}) {
                        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Judge_OB', 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
                        EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_SetRetryPos'})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                        GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_SetRetryPos'})
                        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                    } else {
                        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:StrokeOver'})
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
                    }
                } else {
                    GameDataCalcMachine.Demo_ActorInfoToGameDataVec3({'ActorName': 'WoodBall_Golf', 'IsWaitFinish': True, 'ParameterName': 'Pos', 'GameDataVec3fToName': 'MiniGame_SmashGolf_NowBallPos', 'UniqueName': ''})
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_ShotCount', 'Operator': 'GreaterThan', 'Value': 0})
                    && EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_CupIn'}) {
                        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_Minigame_Applause'})
                        Npc_MiniGame_Golf.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_00', 'IsWaitFinish': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_Clear'})
                        Npc_MiniGame_Golf.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_1', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
                    } else
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_ShotCount', 'Value': 20, 'Operator': 'LessThan'}) {
                        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorName1': 'WoodBall_Golf', 'TargetActor2': 1, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'FovyAppendMode': 1, 'Pattern1PosY': 0.0, 'Accept1FrameDelay': False, 'Count': 0.0, 'MotionMode': 1, 'PosAppendMode': 1, 'StartCalcOnly': True, 'Cushion': 1.0, 'AtAppendMode': 3, 'Pattern1Fovy': 50.0, 'ReviseModeEnd': 1, 'IsWaitFinish': True, 'Pattern1AtY': 1.5, 'GameDataVec3fCameraPos': 'MiniGame_SmashGolf_ReturnCameraPos', 'GameDataVec3fCameraAt': ''})
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                    } else {
                        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:StrokeOver'})
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
                    }
                }
            }
        }
    }

}

void Finish_Npc_MiniGame_Golf_StepStart() {
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1, 'Frame': 0})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3117.9833984375, 'DestinationY': 30.6648006439209, 'DestinationZ': -607.1298828125, 'DirectionY': -18.895000457763672})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
    WoodBall_Golf.Demo_Join({'IsWaitFinish': True})
    WoodBall_Golf.Demo_WarpToPos({'IsWaitFinish': True, 'TargetRot': [0.0, 0.0, 0.0], 'TargetPos': [-3117.409912109375, 31.389999389648438, -611.8200073242188]})
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'CollisionInterpolateSkip': False, 'TargetActor2': 1, 'IsWaitFinish': True, 'ActorName2': '', 'UniqueName2': '', 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 1, 'Cushion': 0.0, 'UniqueName1': 'Flag_ForGolf', 'ActorName1': 'FldObj_FlagChallengeGoal_A', 'ActorIgnoringCollision': -1, 'PosAppendMode': 3, 'StartCalcOnly': True, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'AtAppendMode': 3, 'Count': 0.0, 'ReviseModeEnd': 0, 'Pattern1PosX': 4.024169921875, 'Pattern1PosY': 1.7805290222167969, 'Pattern1PosZ': -1.0869450569152832, 'Pattern1AtX': 0.006591999903321266, 'Pattern1AtY': 1.7537120580673218, 'Pattern1AtZ': 1.7645570039749146, 'Accept1FrameDelay': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_MiniGame_Golf.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto', 'Color': 1})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Result()

    EventSystemActor.Demo_DisappearGolfCount({'IsWaitFinish': True})

    call RetryTalk()

}

void AskPlay_Npc_MiniGame_Golf() {
    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
    Npc_MiniGame_Golf.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskPay', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
    if !EventSystemActor.GeneralChoice2() {
        if EventSystemActor.CheckRupee({'Value': 20}) {
            EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:PlayOK', 'ASName': '', 'IsCloseMessageDialog': True})
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish'}) {
                Event237:

                call Finalize_Npc_MiniGame_Golf()


                call Common.DisableSaveAndWarp()

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_Stage1_Choise'})
                GameDataCalcMachine.Demo_ActorInfoToGameDataVec3({'ParameterName': 'Pos', 'IsWaitFinish': True, 'GameDataVec3fToName': 'MiniGame_SmashGolf_GoalFlagPos', 'ActorName': 'FldObj_FlagChallengeGoal_A', 'UniqueName': 'Flag_ForGolf'})
                WoodBall_Golf.Demo_Join({'IsWaitFinish': True})
                FldObj_FlagChallengeGoal_A[Flag_ForGolf].Demo_Join({'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish'}) {
                    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'CollisionInterpolateSkip': False, 'TargetActor2': 1, 'IsWaitFinish': True, 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'StartCalcOnly': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1AtZ': 0.0, 'MotionMode': 1, 'Cushion': 0.0, 'UniqueName1': 'Flag_ForGolf', 'ActorName1': 'FldObj_FlagChallengeGoal_A', 'ActorIgnoringCollision': -1, 'PosAppendMode': 3, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'AtAppendMode': 3, 'Pattern1PosY': 4.2576727867126465, 'Pattern1AtY': 1.8000010251998901, 'Count': 30.0, 'Pattern1PosX': 3.938231945037842, 'Pattern1PosZ': 4.63153076171875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
                    Event380:
                    GameDataCalcMachine.Demo_ActorInfoToGameDataVec3({'ActorName': 'WoodBall_Golf', 'IsWaitFinish': True, 'ParameterName': 'Pos', 'GameDataVec3fToName': 'MiniGame_SmashGolf_NowBallPos', 'UniqueName': ''})
                    GameDataCalcMachine.Demo_GameDataSubVec3({'IsWaitFinish': True, 'GameDataVec3fSrcName': 'MiniGame_SmashGolf_GoalFlagPos', 'GameDataVec3fDstName': 'MiniGame_SmashGolf_NowBallPos', 'GameDataVec3fToName': 'MiniGame_SmashGolf_BallToGoalFlag'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_SmashGolf_Activated'})
                    EventSystemActor.Demo_AppearGolfCount({'GameDataIntTargetCounter': 'MiniGame_SmashGolf_ShotCount', 'IsWaitFinish': True})
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                    EventBgmCtrlTag.Demo_Start({'BgmName': 'GolfBgm', 'IsWaitFinish': True})
                } else {

                    fork {
                        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'CollisionInterpolateSkip': False, 'TargetActor2': 1, 'IsWaitFinish': True, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 1, 'Cushion': 0.0, 'UniqueName1': 'Flag_ForGolf', 'ActorName1': 'FldObj_FlagChallengeGoal_A', 'ActorIgnoringCollision': -1, 'FovyAppendMode': 1, 'Count': 75.0, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'AtAppendMode': 1, 'Pattern1AtX': -3117.429931640625, 'Pattern1AtY': 54.81999969482422, 'Pattern1AtZ': -612.1300048828125, 'PosAppendMode': 1, 'Pattern1PosY': 55.630001068115234, 'Pattern1PosZ': -606.8599853515625, 'Pattern1PosX': -3117.590087890625})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
                        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_SmashGolf_Wood_Choise', 'IsWaitFinish': True})
                        WoodBall_Golf.Demo_WarpToPos({'IsWaitFinish': True, 'TargetRot': [0.0, 0.0, 0.0], 'TargetPos': [-3117.409912109375, 31.389999389648438, -611.8200073242188]})
                        EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'AnchorName': '', 'UniqueName': 'Golf_StartPlayer'})
                    }

                    Npc_MiniGame_Golf.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                    goto Event380
                }
            } else {
                SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'EndTalk', 'IsWaitFinish': True})
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                goto Event237
            }
        } else {
            Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:NoRupee', 'ASName': '', 'IsCloseMessageDialog': True})
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish'}) {
                EventBgmCtrlTag.Demo_Stop({'BgmName': 'GolfBgm', 'IsWaitFinish': True, 'FadeSec': 3.0})
            }
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_Wood_Choise', 'IsWaitFinish': True})

            call Finalize_Npc_MiniGame_Golf()

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
        }
    } else {
        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:NotPlay', 'ASName': 'Talk', 'IsCloseMessageDialog': True})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish'}) {
            EventBgmCtrlTag.Demo_Stop({'BgmName': 'GolfBgm', 'IsWaitFinish': True, 'FadeSec': 3.0})
        }
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_Wood_Choise', 'IsWaitFinish': True})

        call Finalize_Npc_MiniGame_Golf()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    }
}

void Warning_Npc_MiniGame_Golf_StepStart() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'CollisionInterpolateSkip': False, 'TargetActor2': 1, 'IsWaitFinish': True, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'MotionMode': 1, 'Cushion': 0.0, 'UniqueName1': 'Flag_ForGolf', 'ActorName1': 'FldObj_FlagChallengeGoal_A', 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'PosAppendMode': 0, 'Pattern1PosY': 0.0, 'AtAppendMode': 3, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Count': 75.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_MiniGame_Golf.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:OB_Warning1', 'ASName': ''})
        Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:OB_Warning2', 'ASName': '', 'IsCloseMessageDialog': True})
    }

    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_SmashGolf_Warned', 'IsWaitFinish': True})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
}

void ForceStop_Npc_MiniGame_Golf_StepStart() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    Npc_MiniGame_Golf.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GolfBgm', 'IsWaitFinish': True, 'FadeSec': 0.5})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    Npc_MiniGame_Golf.Demo_Talk({'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:OB_Cancell1', 'ASName': '', 'IsWaitFinish': True, 'IsBecomingSpeaker': True})
    Npc_MiniGame_Golf.Demo_Talk({'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:OB_Cancell2', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True})
    Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Cancel_End', 'ASName': '', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_DisappearGolfCount({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_Wood_Choise', 'IsWaitFinish': True})

    call Finalize_Npc_MiniGame_Golf()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
}

void OB_Npc_MiniGame_Golf_StepStart() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    Npc_MiniGame_Golf.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Judge_OB', 'ASName': '', 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
    WoodBall_Golf.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    WoodBall_Golf.Demo_WarpToGameDataVec3f({'GameDataVec3fWarpToPos': 'MiniGame_SmashGolf_NowBallPos', 'IsWaitFinish': True, 'DestinationX': 0.0, 'DestinationY': 0.0, 'DestinationZ': 0.0, 'DirectionY': 0.0, 'RotToVec3f': False, 'GameDataVec3fRotDir': ''})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
}

void Ready_Npc_MiniGame_Golf_Near() {
    Npc_MiniGame_Golf.Demo_TalkASync({'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Near00', 'DispFrame': 300, 'IsChecked': False, 'IsWaitFinish': True})
}

void Result() {
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_SmashGolf_Clear'}) {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_ShotCount', 'Operator': 'LessThanOrEqualTo', 'Value': 3}) {
            Npc_MiniGame_Golf.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_Excellent_1', 'ASName': '', 'IsWaitFinish': True})
            Npc_MiniGame_Golf.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_Excellent_2', 'IsWaitFinish': True})
            Npc_MiniGame_Golf.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_Excellent_3', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_ShotCount', 'Operator': 'LessThanOrEqualTo', 'Value': 5}) {
            Npc_MiniGame_Golf.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_High_1', 'ASName': '', 'IsWaitFinish': True})
            Npc_MiniGame_Golf.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_High_2', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_ShotCount', 'Operator': 'LessThanOrEqualTo', 'Value': 10}) {
            Npc_MiniGame_Golf.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_Middle_1', 'IsWaitFinish': True, 'ASName': ''})
            Npc_MiniGame_Golf.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_Middle_2', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_ShotCount', 'Value': 20, 'Operator': 'LessThanOrEqualTo'}) {
            Npc_MiniGame_Golf.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_Low_1', 'ASName': '', 'IsWaitFinish': True})
            Npc_MiniGame_Golf.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Clear_Low_2', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        } else {
            Event447:
            Npc_MiniGame_Golf.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:StrokeOver_Result'})
        }
    } else {
        goto Event447
    }
}

void RetryTalk() {
    Npc_MiniGame_Golf.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:AskOneMore', 'ASName': '', 'IsWaitFinish': True})
    if !EventSystemActor.GeneralChoice2() {

        call AskPlay_Npc_MiniGame_Golf()

    } else {
        Npc_MiniGame_Golf.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:NoOneMore1', 'IsWaitFinish': True})
        Npc_MiniGame_Golf.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:NoOneMore2', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Ready'})
        EventBgmCtrlTag.Demo_Stop({'BgmName': 'GolfBgm', 'IsWaitFinish': True, 'FadeSec': 3.0})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_InStageCameraFinish', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_SmashGolf_Wood_Choise', 'IsWaitFinish': True})

        call Finalize_Npc_MiniGame_Golf()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    }
}

void SmashCamera() {
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_SmashCameraPattern', 'Operator': 'Equal', 'Value': 2}) {
        Event593:
        EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'MiniGame_SmashGolf_Camera2FrameCount', 'Value': -1})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'LngShiftRange': 0.0, 'ActorName1': 'WoodBall_Golf', 'TargetActor2': 1, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'FovyAppendMode': 1, 'Pattern1PosY': 0.0, 'PosAppendMode': 1, 'Accept1FrameDelay': False, 'Count': 0.0, 'IsWaitFinish': True, 'GameDataVec3fCameraPos': 'MiniGame_SmashGolf_CameraPos2', 'StartCalcOnly': True, 'MotionMode': 1, 'GameDataVec3fCameraAt': 'MiniGame_SmashGolf_CameraAt2', 'Cushion': 1.0, 'AtAppendMode': 1, 'Pattern1Fovy': 80.0, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_Camera2FrameCount', 'Value': 0, 'Operator': 'LessThanOrEqualTo'}) {
            EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'MiniGame_SmashGolf_SmashCameraPattern', 'Value': -1})
            Event582:
            EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_Camera1FrameCount', 'IsWaitFinish': True, 'Value': -1})
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'ActorName1': 'WoodBall_Golf', 'TargetActor2': 1, 'Pattern1PosX': 0.0, 'Pattern1PosZ': 0.0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'FovyAppendMode': 1, 'Pattern1PosY': 0.0, 'AtAppendMode': 2, 'Accept1FrameDelay': False, 'Count': 0.0, 'MotionMode': 1, 'PosAppendMode': 1, 'StartCalcOnly': True, 'Cushion': 1.0, 'Pattern1Fovy': 80.0, 'GameDataVec3fCameraPos': 'MiniGame_SmashGolf_CameraPos1', 'GameDataVec3fCameraAt': '', 'IsWaitFinish': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0})
            if !EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_Camera1FrameCount', 'Operator': 'LessThanOrEqualTo', 'Value': 0}) {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_Camera1FrameCount', 'Operator': 'LessThanOrEqualTo', 'Value': 1}) {
                    EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'MiniGame_SmashGolf_SmashCameraPattern', 'Value': -1})
                }
                goto Event582
            }
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_Camera2FrameCount', 'Value': 1, 'Operator': 'LessThanOrEqualTo'}) in [1, 0] {
            goto Event593
        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_SmashGolf_SmashCameraPattern', 'Operator': 'Equal', 'Value': 1}) {
        goto Event582
    }
}
