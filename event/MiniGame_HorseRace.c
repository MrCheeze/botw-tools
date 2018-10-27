-------- EventFlow: MiniGame_HorseRace --------

Actor: Npc_FaronWoods010
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_TalkASync', 'Demo_OpenMessageDialog', 'Demo_ChangePosture', 'Demo_PlayASForDemo']
queries: ['CheckActorAction13', 'CheckTypeOfWildHorseAssociated']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_AdvanceQuest', 'Demo_MiniGameTime', 'Demo_DisableMiniGameTime', 'Demo_MiniGameStart', 'Demo_LoopEnd', 'Demo_WarpActiveHorse', 'Demo_FlagOFF', 'Demo_WarpPlayerToAnchor', 'Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_ImmediateStopOwnedHorse', 'Demo_WaitFrame', 'Demo_ResetGimmick', 'Demo_MiniGameFinish', 'Demo_SetGameDataInt', 'Demo_AppearCheckPointNum', 'Demo_DisappearCheckPointNum', 'Demo_WarpPlayerToDestination', 'Demo_StopEventMiniGameTime']
queries: ['GeneralChoice3', 'GeneralChoice2', 'CheckGameDataInt', 'CheckPlayerState', 'CheckFlag', 'CheckElapsedTimeOfMiniGame', 'CheckWeather', 'CheckAddPorchItem', 'RandomChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_RideHorse', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
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

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['Demo_ResetChemicalStateNeutral']
queries: ['DummyQuery']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_MiniGameTimerWrite', 'Demo_GameDataConvertIntToString']
queries: ['CompareGameDataTime']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventTimerTag
entrypoint: None()
actions: ['Demo_EventDisableMiniGameTime']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_FaronWoods010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckWeather() {
      case 0:
        switch Npc_FaronWoods010.CheckActorAction13() {
          case 0:
            Event123:
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_PlayedRace'}) {
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk01'})
                Event14:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Event62:

                    call EntryTalk()

                  case 1:
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk41'})
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk56'})
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_GetReins'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_GetSaddle'}) {
                            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk40'})
                            Event78:
                            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk20'})
                            if !EventSystemActor.GeneralChoice2() {
                                goto Event62
                            } else {
                                Event12:
                                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk05'})
                            }
                        } else {
                            Event200:
                            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk34'})
                            goto Event78
                        }
                    } else {
                        goto Event200
                    }
                  case 2:
                    goto Event12
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_First'}) {
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk21'})
                    goto Event14
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_First', 'IsWaitFinish': True})
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk00'})
                    goto Event14
                }
            }
          case 1:
            goto Event123
          case 2:
            goto Event123
          case 3:
            goto Event123
          case 4:
            goto Event123
          case 5:
            goto Event123
          case 6:
            goto Event123
          case 7:
            goto Event123
          case 8:
            goto Event123
          case 9:
            goto Event123
          case 10:
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_PlayedRace'}) {
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk28'})
            } else {
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk30'})
            }
          case 11:
            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk29'})
          case 12:
            goto Event123
          case 13:
            goto Event123
        }
      case 1:
        Event169:
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_PlayedRace'}) {
            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk26'})
        } else {
            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk27'})
        }
      case 2:
        goto Event169
      case 3:
        goto Event169
    }
}

void Game_Npc_FaronWoods010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk07'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk17'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk51', 'IsCloseMessageDialog': True})
            EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True, 'FadeSec': 2.0})
            EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': 'FldObj_HorseRaceFence_A_01', 'IsResetCamera': False})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_CreateObstacle'})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_PlayedRace', 'IsWaitFinish': True})

            call Initialize()

            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk52', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Ready', 'QuestName': ''})
        } else {
            Event85:
            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk18'})
        }
    } else {
        goto Event85
    }
}

void Game_Npc_FaronWoods010_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 0, 'CountStartTime': 0, 'IsShowTimeUI': True, 'MaxTime': 300})
    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
    Event34:
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_CourseOut'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_RetireCourseOut'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Finish', 'QuestName': ''})
        } else {
            if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 300}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_TimeUp'})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Finish', 'QuestName': ''})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_Goal'}) {
                    EventSystemActor.Demo_StopEventMiniGameTime({'IsWaitFinish': True})
                    GameDataCalcMachine.Demo_MiniGameTimerWrite({'IsWaitFinish': True, 'GameDataIntNameMintues': 'MiniGame_HorseRace_ResultMinute', 'GameDataIntNameSeconds': 'MiniGame_HorseRace_ResultSecond', 'GameDataIntNameMiliseconds': 'MiniGame_HorseRace_ResultMiliSecond'})
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Finish', 'QuestName': ''})
                } else {
                    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                    goto Event34
                }
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_FallOff'})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Finish', 'QuestName': ''})
    }
}

void Finish_Npc_FaronWoods010_StepStart() {
    if !OwnedHorse_ForEvent.DummyQuery() {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_FallOff'}) {
            Event134:
            SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
            EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameRaceBgm', 'FadeSec': 0.30000001192092896, 'IsWaitFinish': True})

            call RecordResult()

            GameDataCalcMachine.Demo_GameDataConvertIntToString({'IsWaitFinish': True, 'GameDataStringOutput': 'ScoreStringBuffer', 'GameDataIntInput': 'MiniGame_HorseRace_ResultMiliSecond'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_FallOff'}) {
                Npc_FaronWoods010.Demo_OpenMessageDialog({'ASName': 'Talk', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk23', 'IsWaitFinish': False, 'IsBecomingSpeaker': True})
                Event230:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': True})
                OwnedHorse_ForEvent.Demo_ResetChemicalStateNeutral({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                EventSystemActor.Demo_WarpActiveHorse({'IsWaitFinish': True, 'PositionZ': 3449.0, 'Direction': 180.0, 'PositionX': 509.79998779296875, 'PositionY': 152.6999969482422})
                EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationY': 152.6999969482422, 'DirectionY': 180.0, 'DestinationZ': 3449.0, 'DestinationX': 508.0})
                GameROMPlayer.Demo_RideHorse({'IsWaitFinish': True, 'Horse': ActorIdentifier(name="OwnedHorse_ForEvent")})
                Npc_FaronWoods010.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
                EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': 'FldObj_HorseRaceFence_A_01', 'IsResetCamera': False})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_CreateObstacle'})
                GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Pattern1Fovy': 43.349998474121094, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'ReviseModeEnd': 1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1AtX': 510.0, 'Pattern1AtY': 153.0, 'Pattern1AtZ': 3449.0, 'Pattern1PosY': 153.0, 'Pattern1PosZ': 3439.0, 'Pattern1PosX': 512.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                call InitTalk.InitTalk({'Arg_Greeting': 'NotAndNot', 'Arg_Turn': 2})

                EventSystemActor.Demo_DisappearCheckPointNum({'IsWaitFinish': True})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_FallOff'}) {
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk24'})
                    Event126:
                    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_PlayedRace', 'IsWaitFinish': True})
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk14'})
                    if !EventSystemActor.GeneralChoice2() {
                        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_CreateObstacle'})

                        call Initialize()


                        call EntryTalk()

                    } else {
                        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk12'})
                        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_CreateObstacle'})

                        call Initialize()

                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Ready', 'QuestName': ''})
                    }
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_TimeUp'}) {
                        Event161:
                        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk24'})
                        goto Event126
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_RetireCourseOut'}) {
                            goto Event161
                        } else {

                            call Result()

                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_GoaledRace'})
                            goto Event126
                        }
                    }
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_TimeUp'}) {
                    Npc_FaronWoods010.Demo_OpenMessageDialog({'ASName': 'Talk', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk25', 'IsWaitFinish': False, 'IsBecomingSpeaker': True})
                    goto Event230
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_RetireCourseOut'}) {
                        Npc_FaronWoods010.Demo_OpenMessageDialog({'ASName': 'Talk', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk50'})
                        goto Event230
                    } else {
                        Npc_FaronWoods010.Demo_OpenMessageDialog({'ASName': 'Talk', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk22', 'IsWaitFinish': False, 'IsBecomingSpeaker': True})
                        goto Event230
                    }
                }
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_TimeUp'}) {
                goto Event134
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_RetireCourseOut'}) {
                    goto Event134
                } else {
                    EventSystemActor.Demo_MiniGameFinish({'TextType': 0, 'IsWaitFinish': True})
                    goto Event134
                }
            }
        }
    }
}

void Initialize() {

    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_HorseRace_Goal', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_HorseRace_CourseOut', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_Activated'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_Finish'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_Game'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_Prepare'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_FallOff'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_TimeUp'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_RetireCourseOut'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Road_Firone_Off'})
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'MiniGame_HorseRace_NumPassFence', 'Value': 0})
    EventSystemActor.Demo_DisappearCheckPointNum({'IsWaitFinish': True})
    EventTimerTag.Demo_EventDisableMiniGameTime({'IsWaitFinish': True})
}

void EntryTalk() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Horse_Is_LastRidden_Owned'}) {
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk02'})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckGameDataInt({'Value': 20, 'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'CurrentRupee'}) {
                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': -20})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk04', 'IsCloseMessageDialog': True})
                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                    EventSystemActor.Demo_ImmediateStopOwnedHorse({'ResetChargeNum': True, 'IsWaitFinish': True})
                    OwnedHorse_ForEvent.Demo_ResetChemicalStateNeutral({'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                    EventSystemActor.Demo_WarpActiveHorse({'IsWaitFinish': True, 'PositionX': 517.280029296875, 'PositionZ': 3431.1201171875, 'Direction': -135.0, 'PositionY': 152.47799682617188})
                    EventSystemActor.Demo_WarpPlayerToAnchor({'UniqueName': 'HorseRace_Start', 'IsWaitFinish': True, 'AnchorName': ''})
                    Npc_FaronWoods010.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 1, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 525.0, 'Pattern1PosY': 154.0, 'Pattern1PosZ': 3438.0, 'Pattern1AtX': 521.0, 'Pattern1AtY': 155.0, 'Pattern1AtZ': 3433.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 1.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_CreateObstacle'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Road_Firone_Off'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': 'FldObj_HorseRaceFence_A_01', 'IsResetCamera': False})
                    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                    Npc_FaronWoods010.Demo_ChangePosture({'Posture': 'Stand', 'IsWaitFinish': True})
                    Npc_FaronWoods010.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Wait', 'IsWaitFinish': False, 'MorphingFrame': -1.0})
                    GameROMPlayer.Demo_TurnAndLookToObjectNow({'FaceId': 1, 'ObjectId': 2, 'IsValid': True, 'TurnDirection': -135.0, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})

                    call Common.DisableSaveAndWarp()

                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_PlayedRace'}) {
                        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk43'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk44'})
                            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_MiddleTime'}) {
                                Event269:
                                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk37', 'IsCloseMessageDialog': False})
                                Event244:
                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                                EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                                EventSystemActor.Demo_AppearCheckPointNum({'IsWaitFinish': True, 'GameDataIntTargetCounter': 'MiniGame_HorseRace_NumPassFence', 'IconType': 2})
                                EventBgmCtrlTag.Demo_Start({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True})
                                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': '', 'StepName': ''})
                            } else {
                                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk57'})
                                goto Event269
                            }
                        } else {
                            Event115:

                            fork {
                                Npc_FaronWoods010.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk06', 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                                Npc_FaronWoods010.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk48', 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                                Npc_FaronWoods010.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk49', 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                            } {
                                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 1, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 525.0, 'Pattern1PosY': 154.0, 'Pattern1PosZ': 3438.0, 'Pattern1AtX': 521.0, 'Pattern1AtY': 155.0, 'Pattern1AtZ': 3433.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 1, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 525.0, 'Pattern1PosY': 154.0, 'Pattern1PosZ': 3438.0, 'Pattern1AtX': 521.0, 'Pattern1AtY': 155.0, 'Pattern1AtZ': 3433.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'MotionMode': 0, 'Pattern1PosX': 472.1300048828125, 'Pattern1PosY': 165.66000366210938, 'Pattern1PosZ': 3393.340087890625, 'Pattern1AtX': 467.3299865722656, 'Pattern1AtY': 165.27000427246094, 'Pattern1AtZ': 3389.030029296875, 'Count': 60.0, 'Cushion': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'MotionMode': 0, 'Pattern1PosX': 372.6600036621094, 'Pattern1PosY': 166.02000427246094, 'Pattern1PosZ': 3341.340087890625, 'Pattern1AtX': 368.1700134277344, 'Pattern1AtY': 165.27000427246094, 'Pattern1AtZ': 3345.929931640625, 'Count': 60.0, 'Cushion': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'MotionMode': 0, 'Pattern1AtY': 165.27000427246094, 'Pattern1PosX': 318.2300109863281, 'Pattern1PosY': 166.19000244140625, 'Pattern1PosZ': 3456.679931640625, 'Pattern1AtX': 321.260009765625, 'Pattern1AtZ': 3462.330078125, 'Count': 60.0, 'Cushion': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'MotionMode': 0, 'Pattern1PosY': 166.67999267578125, 'Pattern1AtY': 165.27000427246094, 'Count': 60.0, 'Cushion': 30.0, 'Pattern1PosX': 380.8999938964844, 'Pattern1PosZ': 3549.75, 'Pattern1AtX': 385.70001220703125, 'Pattern1AtZ': 3545.56005859375, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'MotionMode': 0, 'Pattern1AtY': 165.27000427246094, 'Pattern1PosX': 425.8999938964844, 'Pattern1PosY': 166.5399932861328, 'Pattern1PosZ': 3506.77001953125, 'Pattern1AtX': 430.9200134277344, 'Pattern1AtZ': 3502.8798828125, 'Count': 60.0, 'Cushion': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'MotionMode': 0, 'Pattern1AtY': 165.27000427246094, 'Pattern1PosY': 166.5399932861328, 'Pattern1PosX': 468.32000732421875, 'Pattern1PosZ': 3472.719970703125, 'Pattern1AtX': 473.3299865722656, 'Pattern1AtZ': 3468.830078125, 'Count': 60.0, 'Cushion': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            }

                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

                            fork {
                                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk31', 'IsCloseMessageDialog': False})
                                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk56'})
                                if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_GetReins'}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_GetSaddle'}) {
                                        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk40', 'IsCloseMessageDialog': False})
                                        Event323:
                                        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk54'})
                                        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk37', 'IsCloseMessageDialog': False})
                                    } else {
                                        Event228:
                                        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk34', 'IsCloseMessageDialog': False})
                                        goto Event323
                                    }
                                } else {
                                    goto Event228
                                }
                            } {
                                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 1, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 525.0, 'Pattern1PosY': 154.0, 'Pattern1PosZ': 3438.0, 'Pattern1AtX': 521.0, 'Pattern1AtY': 155.0, 'Pattern1AtZ': 3433.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            }

                            goto Event244
                        }
                    } else {
                        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk42'})
                        goto Event115
                    }
                } else {
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk13'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_CreateObstacle'})
                }
            } else {
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk05'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorseRace_CreateObstacle'})
            }
        } else {
            switch Npc_FaronWoods010.CheckTypeOfWildHorseAssociated() {
              case 0:
                Event77:
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk16'})
              case 1:
                goto Event77
              case 2:
                goto Event77
              case 3:
                goto Event77
              case 4:
                Event322:
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk53'})
              case 5:
                goto Event322
              case 6:
                goto Event322
              case 7:
                goto Event77
            }
        }
    } else {
        Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk15'})
    }
}

void Ready_Npc_FaronWoods010_Near() {
    switch Npc_FaronWoods010.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event175:
            Npc_FaronWoods010.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Near03'})
          case 2:
            goto Event175
          case 3:
            goto Event175
        }
      case 1:
        Event162:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_FaronWoods010.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Near00'})
          case 1:
            Event164:
            Npc_FaronWoods010.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Near03'})
          case 2:
            goto Event164
          case 3:
            goto Event164
        }
      case 2:
        goto Event162
      case 3:
        goto Event162
      case 4:
        goto Event162
      case 5:
        goto Event162
      case 6:
        goto Event162
      case 7:
        goto Event162
      case 8:
        goto Event162
      case 9:
        goto Event162
      case 10:
        Npc_FaronWoods010.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Near02'})
      case 11:
        Npc_FaronWoods010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Near01', 'IsChecked': False, 'DispFrame': 90})
      case 12:
        goto Event162
      case 13:
        goto Event162
    }
}

void Result() {
    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk38'})
    if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 75}) {
        if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 90}) {
            if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 120}) {
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk08'})
                switch EventSystemActor.RandomChoice3() {
                  case 0:
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk45'})
                  case 1:
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk46'})
                  case 2:
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk47'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_MiddleTime', 'IsWaitFinish': True})
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Plant_M'}) {
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk09'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Plant_M'})

                } else {
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk35'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                }
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_MiddleTime', 'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_GetReins'}) {
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Plant_Q'}) {
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk33'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_PlantGet_Q'})

                } else {
                    Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk33'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

                }
            } else {
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk11'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'GameRomHorseReins_05'})

                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_GetReins', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_UptdateRecord', 'IsWaitFinish': True})
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_MiddleTime', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_GetSaddle'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_GetReins'}) {
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk32'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

            } else {
                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk55'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'GameRomHorseReins_05'})

                Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk36'})
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_GetReins', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_ClearTime', 'IsWaitFinish': True})
            }
        } else {
            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk10'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'GameRomHorseSaddle_05'})

            Npc_FaronWoods010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:talk36'})
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_GetSaddle', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_ClearTime', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorseRace_UptdateRecord', 'IsWaitFinish': True})
        }
    }
}

void RecordResult() {
    if !EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_FallOff'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_TimeUp'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorseRace_GoaledRace'}) {
                if !GameDataCalcMachine.CompareGameDataTime({'GameDataIntMinA': 'MiniGame_HorseRace_ResultMinute', 'GameDataIntSecA': 'MiniGame_HorseRace_ResultSecond', 'GameDataIntMilliA': 'MiniGame_HorseRace_ResultMiliSecond', 'GameDataIntMinB': 'MiniGame_HorseRace_BestResultMinute', 'GameDataIntSecB': 'MiniGame_HorseRace_BestResultSecond', 'GameDataIntMilliB': 'MiniGame_HorseRace_BestResultMiliSecond'}) {
                    GameDataCalcMachine.Demo_MiniGameTimerWrite({'GameDataIntNameMintues': 'MiniGame_HorseRace_BestResultMinute', 'GameDataIntNameMiliseconds': 'MiniGame_HorseRace_BestResultMiliSecond', 'GameDataIntNameSeconds': 'MiniGame_HorseRace_BestResultSecond', 'IsWaitFinish': True})
                }
            } else {
                GameDataCalcMachine.Demo_MiniGameTimerWrite({'GameDataIntNameMintues': 'MiniGame_HorseRace_BestResultMinute', 'GameDataIntNameMiliseconds': 'MiniGame_HorseRace_BestResultMiliSecond', 'GameDataIntNameSeconds': 'MiniGame_HorseRace_BestResultSecond', 'IsWaitFinish': True})
            }
        }
    }
}
