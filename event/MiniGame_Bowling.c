-------- EventFlow: MiniGame_Bowling --------

Actor: Npc_Bowling
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_LoopEnd', 'Demo_IncreaseRupee', 'Demo_FlagOFF', 'Demo_AppearRupee', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_ResetGimmick', 'Demo_CloseMessageDialog', 'Demo_SetGameDataInt', 'Demo_WarpPlayerToAnchor']
queries: ['CheckFlag', 'GeneralChoice3', 'CheckGameDataInt', 'GeneralChoice2', 'CheckAddPorchItem', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PolarCoordPlayerRelative', 'Demo_Talk', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir', 'Demo_Idling', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SnowBowl[bowling_ball]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_GameDataCopyInt', 'Demo_GameDataSubInt', 'Demo_GameDataAddInt']
queries: ['CompareGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_0]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_1]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_2]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_3]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_4]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_5]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_6]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_7]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_8]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BowlPin[No_9]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[TimeOut]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_AdvanceQuest', 'Demo_IncreaseGameDataInt']
queries: ['CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Bowling_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_IsTalked'}) {
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_Bowling:Initial_00'})
        Event4:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Event29:
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:ask_payment', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckGameDataInt({'Value': 20, 'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'CurrentRupee'}) {

                    fork {
                        EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -20})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                    } {
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
                        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:game_start_00', 'ASName': ''})
                        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})

                        call Common.DisableSaveAndWarp()

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_PinSet'})
                    }

                    BowlPin[No_0].Demo_Join({'IsWaitFinish': True})
                    BowlPin[No_1].Demo_Join({'IsWaitFinish': True})
                    BowlPin[No_2].Demo_Join({'IsWaitFinish': True})
                    BowlPin[No_3].Demo_Join({'IsWaitFinish': True})
                    BowlPin[No_4].Demo_Join({'IsWaitFinish': True})
                    BowlPin[No_5].Demo_Join({'IsWaitFinish': True})
                    BowlPin[No_6].Demo_Join({'IsWaitFinish': True})
                    BowlPin[No_7].Demo_Join({'IsWaitFinish': True})
                    BowlPin[No_8].Demo_Join({'IsWaitFinish': True})
                    BowlPin[No_9].Demo_Join({'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
                    EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'AnchorName': '', 'UniqueName': 'PlayerPos'})
                    Npc_Bowling.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction3'})

                    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
                    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'SnowBowlingBgm'})
                    Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:game_start', 'IsCloseMessageDialog': True, 'ASName': ''})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'MotionMode': 1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': -2070.909912109375, 'Pattern1PosY': 393.6400146484375, 'Pattern1PosZ': -2095.780029296875, 'Pattern1AtX': -2057.340087890625, 'Pattern1AtY': 388.6000061035156, 'Pattern1AtZ': -2101.969970703125, 'Count': 20.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:game_start_01', 'ASName': ''})
                    GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'CameraReset': False, 'NoConnect': False})
                    Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_Bowling:about_snowbowl_04'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_isPinStable'})
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'RollPrepare'})
                } else {
                    Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:refuse', 'IsCloseMessageDialog': True, 'ASName': ''})
                }
            } else {
                Event20:
                Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:end', 'IsCloseMessageDialog': True, 'ASName': ''})
            }
          case 1:
            Event15:
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:explanation_00', 'ASName': ''})
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:explanation_01', 'ASName': ''})
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:explanation_02', 'IsCloseMessageDialog': True, 'ASName': ''})
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:ask_again', 'ASName': ''})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                goto Event29
              case 1:
                goto Event15
              case 2:
                goto Event20
            }
          case 2:
            goto Event20
        }
    } else {
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:Initial', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_Bowling_IsTalked', 'IsWaitFinish': True})
        goto Event4
    }
}

void Finish_Npc_Bowling_StepStart() {
    GameRomCamera.Demo_MovePosFlow({'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'Pattern1PosX': -2009.010009765625, 'Pattern1PosY': 375.3800048828125, 'Pattern1PosZ': -2126.449951171875, 'Pattern1AtX': -1997.6700439453125, 'Pattern1AtY': 367.2799987792969, 'Pattern1AtZ': -2131.080078125, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Count': 0.0})
    BowlPin[No_0].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_1].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_2].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_3].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_4].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_5].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_6].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_7].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_8].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_9].Demo_Join({'IsWaitFinish': True})
    SnowBowl[bowling_ball].Demo_Join({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_SecondThrow'}) {
        GameDataCalcMachine.Demo_GameDataSubInt({'GameDataIntSrcName': 'MiniGame_Bowling_BreakPinNum', 'GameDataIntDstName': 'MiniGame_Bowling_BreakPinNumFirst', 'GameDataIntToName': 'MiniGame_Bowling_BreakPinNumSecond', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_11'})
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 1, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNum'}) {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_00', 'ASName': ''})
            Event352:
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_PinSet'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_SecondThrow', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_isBombUsed'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_isUsedDirtyWay'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isSnowBallIsInArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isSnowBallIsInResultArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isSnowBallIsInRollingArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isBombIsInArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isBombIsInResultArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isBombIsInRollingArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'MiniGame_BirdMan_HillTower_CurrentTime_Miliseconds', 'Value': 0})
            GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'Cushion': 0.0, 'Count': 0.0, 'ReviseModeEnd': 0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Pattern1PosX': -2060.9599609375, 'Pattern1PosY': 391.8299865722656, 'Pattern1PosZ': -2095.0, 'Pattern1AtX': -2067.389892578125, 'Pattern1AtY': 391.2099914550781, 'Pattern1AtZ': -2095.7900390625, 'Pattern1Fovy': 40.0})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WallOff', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
            GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -2066.75, 'DestinationY': 389.95001220703125, 'DestinationZ': -2099.1201171875, 'DirectionY': -10.480999946594238})
            EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': False})

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
            GameDataCalcMachine.Demo_GameDataAddInt({'GameDataIntSrcName': 'MiniGame_Bowling_BreakPinNumFirst', 'GameDataIntDstName': 'MiniGame_Bowling_BreakPinNumSecond', 'GameDataIntToName': 'MiniGame_Bowling_BreakPinNum', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

            call Prize()

            EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'MiniGame_Bowling_BreakPinNum', 'Value': 0, 'IsWaitFinish': True})
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:restart', 'IsCloseMessageDialog': False, 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:ask_payment', 'IsCloseMessageDialog': True, 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckGameDataInt({'Value': 20, 'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'CurrentRupee'}) {

                        fork {
                            EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -20})
                            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                        } {
                            Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_PinSet'})
                        }

                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_Bowling_isSnowBallIsInArea', 'IsWaitFinish': True})
                        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
                        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
                        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_Bowling:about_snowbowl_04'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_isPinStable'})
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'RollPrepare'})
                    } else {
                        EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'SnowBowlingBgm', 'FadeSec': 5.0})
                        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:refuse', 'IsCloseMessageDialog': False, 'ASName': ''})
                        Event143:
                        Npc_Bowling.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:restart_end', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': ''})

                        call Common.EnableSaveAndWarp()

                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'StepName': 'Ready', 'QuestName': '', 'ForceRunTelop': False})
                    }
                } else {
                    Event566:
                    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'SnowBowlingBgm', 'FadeSec': 4.0})
                    goto Event143
                }
            } else {
                goto Event566
            }
        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 4, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNum'}) {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_01', 'ASName': ''})
            goto Event352
        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 7, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNum'}) {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_02', 'ASName': ''})
            goto Event352
        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 9, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNum'}) {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_03', 'ASName': ''})
        } else {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_04', 'ASName': ''})
        }
        goto Event352
    } else {
        GameDataCalcMachine.Demo_GameDataCopyInt({'GameDataIntSrcName': 'MiniGame_Bowling_BreakPinNum', 'GameDataIntDstName': 'MiniGame_Bowling_BreakPinNumFirst', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 1, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNumFirst'}) {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_05', 'ASName': ''})
            Event428:
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_Bowling_SecondThrow', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_isBombUsed'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_isUsedDirtyWay'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isSnowBallIsInArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isSnowBallIsInResultArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isSnowBallIsInRollingArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isBombIsInArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isBombIsInResultArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_isBombIsInRollingArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'MiniGame_BirdMan_HillTower_CurrentTime_Miliseconds', 'Value': 0})
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': ''})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2073.0869140625, 'Pattern1PosY': 395.4562072753906, 'Pattern1PosZ': -2097.665283203125, 'Pattern1AtX': -2067.75048828125, 'Pattern1AtY': 391.0338439941406, 'Pattern1AtZ': -2099.036865234375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'ActorName1': 'Npc_Bowling', 'Count': 60.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WallOff', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
            GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -2066.75, 'DestinationY': 389.95001220703125, 'DestinationZ': -2099.1201171875, 'DirectionY': -10.480999946594238})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'})
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_Bowling_isSnowBallIsInArea', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': ''})
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_10', 'ASName': ''})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'RollPrepare'})
        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 4, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNumFirst'}) {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_06', 'ASName': ''})
            goto Event428
        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 7, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNumFirst'}) {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_07', 'ASName': ''})
            goto Event428
        } else
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 9, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNumFirst'}) {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_08', 'ASName': ''})
            goto Event428
        } else {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:result_09', 'ASName': ''})
            goto Event352
        }
    }
}

void Destruct() {
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 3.0, 'IsWaitFinish': True, 'BgmName': 'SnowBowlingBgm'})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_Bowling_SecondThrow', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_isUsedDirtyWay'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_PinSet'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})

    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'StepName': 'Ready', 'QuestName': '', 'ForceRunTelop': False})
}

void Prize() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 1, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNum'}) {
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_00', 'IsCloseMessageDialog': False, 'ASName': ''})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'MiniGame_Bowling_BreakPinNum', 'Value': 6}) {
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_01', 'ASName': ''})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'MiniGame_Bowling_BreakPinNum', 'Value': 8}) {
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_02', 'IsCloseMessageDialog': True, 'ASName': ''})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 9, 'GameDataIntName': 'MiniGame_Bowling_BreakPinNum'}) {
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_03', 'IsCloseMessageDialog': False, 'ASName': ''})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_Bowling_BreakPinNumFirst', 'Value': 10, 'Operator': 'Equal'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_GetPrizeRod'}) {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_09'})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
        } else {
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_04', 'ASName': ''})
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Sword_049'}) {

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Sword_049'})

                Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_05', 'IsCloseMessageDialog': False, 'ASName': ''})
                Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_06', 'ASName': ''})
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_Bowling_GetPrizeRod', 'IsWaitFinish': True})
            } else {
                Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_07', 'ASName': ''})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
            }
        }
    } else {
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_Bowling:prize_08'})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
    }
}

void IfOutOfArea_Npc_Bowling_StepStart() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'})
    if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    }
    Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:area_out_00', 'ASName': ''})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:break_01', 'ASName': ''})
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:break_02', 'IsCloseMessageDialog': False, 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {

            call Destruct()

        } else {
            Event281:
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:area_out_03', 'ASName': ''})

            call Reload()

            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:area_out_04', 'ASName': '', 'IsCloseMessageDialog': False})
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:about_snowbowl_03', 'ASName': ''})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'RollPrepare'})
        }
    } else {
        goto Event281
    }
}

void RollPrepare_Npc_Bowling_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:break_00', 'ASName': ''})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:break_01', 'ASName': ''})
        Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:break_02', 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {

            call Destruct()

        } else {
            Event655:
            Npc_Bowling.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_Bowling:about_snowbowl_03', 'ASName': ''})
        }
    } else {
        goto Event655
    }
}

void RollPrepare_Npc_Bowling_EachFrame() {
    Event697:
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_SecondThrow'}) {
            if !GameDataCalcMachine.CompareGameDataInt({'GameDataIntName_A': 'MiniGame_Bowling_BreakPinNumFirst', 'GameDataIntName_B': 'MiniGame_Bowling_BreakPinNum', 'Operator': 'Equal'}) {
                Event500:
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isInBowlingArea'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isBombIsInRollingArea'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_Bowling_isBombUsed', 'IsWaitFinish': True})
                        Event733:
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'RollResult'})
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isSnowBallIsInRollingArea'}) {
                        goto Event733
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isSnowBallIsInArea'}) {
                        Event501:
                        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                        goto Event697
                    } else {
                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'RollResult'})
                    }
                } else
                if EventSystemActor.CheckPlayerState({'PlayerState': 21}) {
                    goto Event501
                } else {
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'IfOutOfArea'})
                }
            } else {
                Event665:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_isUsedDirtyWay'})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'RollResult'})
            }
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_Bowling_BreakPinNum', 'Value': 0, 'Operator': 'Equal'}) {
            goto Event500
        } else {
            goto Event665
        }
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event697
    }
}

void Reload() {
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': ''})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2073.0869140625, 'Pattern1PosY': 395.4562072753906, 'Pattern1PosZ': -2097.665283203125, 'Pattern1AtX': -2067.75048828125, 'Pattern1AtY': 391.0338439941406, 'Pattern1AtZ': -2099.036865234375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'ActorName1': 'Npc_Bowling', 'Count': 60.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -2066.75, 'DestinationY': 389.95001220703125, 'DestinationZ': -2099.1201171875, 'DirectionY': -10.480999946594238})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_isInBowlingArea'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_Bowling_SnowBallMakeFlag'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': False})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': ''})
}

void RollResult_Npc_Bowling_StepStart() {
    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
    BowlPin[No_0].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_1].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_2].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_3].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_4].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_5].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_6].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_7].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_8].Demo_Join({'IsWaitFinish': True})
    BowlPin[No_9].Demo_Join({'IsWaitFinish': True})
    SnowBowl[bowling_ball].Demo_Join({'IsWaitFinish': True})

    fork {
        Event833:
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_RollResult'}) {
            Event813:
            EventSystemActor[TimeOut].Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
        } else
        if EventSystemActor[TimeOut].CheckGameDataInt({'Operator': 'GreaterThan', 'GameDataIntName': 'MiniGame_BirdMan_HillTower_CurrentTime_Miliseconds', 'Value': 300}) {
            Event811:
            if EventSystemActor[TimeOut].CheckFlag({'FlagName': 'MiniGame_Bowling_isPinStable'}) {
                goto Event813
            } else {
                EventSystemActor[TimeOut].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                goto Event811
            }
        } else {
            EventSystemActor[TimeOut].Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'MiniGame_BirdMan_HillTower_CurrentTime_Miliseconds', 'Value': 1})
            EventSystemActor[TimeOut].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            goto Event833
        }
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isBombUsed'}) {
            Event815:
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_RollResult'}) {
                Event784:
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isBombIsInArea'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isBombIsInResultArea'}) {
                    GameRomCamera.Demo_MovePosFlow({'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'Pattern1PosX': -2009.010009765625, 'Pattern1PosY': 375.3800048828125, 'Pattern1PosZ': -2126.449951171875, 'Pattern1AtX': -1997.6700439453125, 'Pattern1AtY': 367.2799987792969, 'Pattern1AtZ': -2131.080078125, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Count': 1.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                    Event750:
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isPinStable'}) {
                        goto Event784
                    } else {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_RollResult'}) {
                            goto Event784
                        } else
                        goto Event750
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isBombIsInRollingArea'}) {
                    GameRomCamera.Demo_MovePosFlow({'ActorIgnoringCollision': -1, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'Count': 1.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'Pattern1PosX': -2063.110107421875, 'Pattern1PosY': 389.510009765625, 'Pattern1PosZ': -2102.280029296875, 'AtAppendMode': 1, 'Pattern1AtX': -2021.4200439453125, 'Pattern1AtY': 369.739990234375, 'Pattern1AtZ': -2119.860107421875, 'TargetActor1': -1, 'ActorName1': '', 'TargetActor2': -1, 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                } else {
                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                }
                goto Event815
            } else {
                EventSystemActor.Demo_WaitFrame({'Frame': 75, 'IsWaitFinish': True})
                goto Event750
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isUsedDirtyWay'}) {
            GameRomCamera.Demo_MovePosFlow({'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'Pattern1PosX': -2009.010009765625, 'Pattern1PosY': 375.3800048828125, 'Pattern1PosZ': -2126.449951171875, 'Pattern1AtX': -1997.6700439453125, 'Pattern1AtY': 367.2799987792969, 'Pattern1AtZ': -2131.080078125, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Count': 1.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            goto Event750
        } else
        Event814:
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_RollResult'}) {
            goto Event784
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isSnowBallIsInArea'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isSnowBallIsInResultArea'}) {
                GameRomCamera.Demo_MovePosFlow({'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'Pattern1PosX': -2009.010009765625, 'Pattern1PosY': 375.3800048828125, 'Pattern1PosZ': -2126.449951171875, 'Pattern1AtX': -1997.6700439453125, 'Pattern1AtY': 367.2799987792969, 'Pattern1AtZ': -2131.080078125, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Count': 1.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                goto Event814
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_Bowling_isSnowBallIsInRollingArea'}) {
                GameRomCamera.Demo_PolarCoordPlayerRelative({'OtherActor': 3, 'ActorNameForOtherActor': 'SnowBowl', 'UniqueNameForOtherActor': 'bowling_ball', 'ActorIgnoringCollision': -1, 'FovyParam': 50.0, 'FovyCalcMode': 1, 'Time': 1.0, 'IsWaitFinish': True, 'ReverseOrder': True, 'LngOffset': 0.0, 'LatOffset': 30.0, 'AtCalcMode': 1, 'AtParam': [0.0, 0.0, 0.0], 'RadiusOffset': 12.0, 'ReviseMode': 2})
            } else {
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
            }
            goto Event814
        } else
        goto Event750
    }

}
