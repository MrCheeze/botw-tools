-------- EventFlow: MiniGame_HorsebackArchery --------

Actor: Npc_FaronWoods009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialog', 'Demo_TalkASync', 'Demo_PlayASForDemo', 'Demo_ChangePosture', 'Demo_LookAtObject']
queries: ['CheckActorAction13', 'CheckActorAction', 'CheckTypeOfWildHorseAssociated']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_AdvanceQuest', 'Demo_WarpPlayerToDestination', 'Demo_WarpActiveHorse', 'Demo_LoopEnd', 'Demo_MiniGameTime', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_MiniGameStart', 'Demo_ImmediateStopOwnedHorse', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_ResetGimmick', 'Demo_MiniGameFinish', 'Demo_DisappearCheckPointNum', 'Demo_AppearCheckPointNum', 'Demo_ExitEventPlayer', 'Demo_AppearNumTargets', 'Demo_DisappearNumTargets', 'Demo_RegisterToDeathCounter', 'Demo_UnregisterFromDeathCounter', 'Demo_SetGameDataInt']
queries: ['GeneralChoice3', 'GeneralChoice2', 'CheckGameDataInt', 'CheckFlag', 'CheckPlayerState', 'CheckWeather', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventTimerTag
entrypoint: None()
actions: ['Demo_EventDisableMiniGameTime']
queries: ['CheckMiniGameTimeOver']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['Demo_ResetChemicalStateNeutral', 'Demo_Wait']
queries: ['DummyQuery']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

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

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_GameDataCopyInt']
queries: ['CompareGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_RideHorse', 'Demo_LookAtObject', 'Demo_PlayerHorseGetOff']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_FaronWoods009_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_FaronWoods009.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Sleep', 'ASName': ''})
    }
    EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_HorsebackArchery_Retry', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorsebackArchery_IsTalked'}) {
        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:0000_01', 'ASName': ''})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Event567:

            call CheckHorseRide()


            call ShopArrow()

            Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:MyHouse_00', 'ASName': ''})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameInit_01', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {

                    fork {
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    } {
                        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameInit_02', 'IsCloseMessageDialog': False, 'ASName': ''})

                        call Common.DisableSaveAndWarp()

                        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameReady_00', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                    }

                    EventSystemActor.Demo_WarpActiveHorse({'PositionX': -247.73130798339844, 'PositionY': 129.03480529785156, 'PositionZ': 3458.395263671875, 'IsWaitFinish': True, 'Direction': -130.0850067138672})
                    EventSystemActor.Demo_ImmediateStopOwnedHorse({'ResetChargeNum': True, 'IsWaitFinish': True})
                    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -247.69210815429688, 'DestinationY': 131.13414001464844, 'DestinationZ': 3458.44873046875, 'DirectionY': -130.0850067138672})
                    Npc_FaronWoods009.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
                    Npc_FaronWoods009.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Sit_To_Stand', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    Npc_FaronWoods009.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                    Npc_FaronWoods009.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Wait', 'IsWaitFinish': False, 'MorphingFrame': -1.0})
                    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorsebackArchery_TargetMakeFlag', 'IsWaitFinish': True})
                    GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 1, 'Pattern1PosX': -246.7899932861328, 'Pattern1PosY': 131.32000732421875, 'Pattern1PosZ': 3461.47998046875, 'AtAppendMode': 1, 'Pattern1AtX': -246.72999572753906, 'Pattern1AtY': 130.77999877929688, 'Pattern1AtZ': 3455.2900390625, 'FovyAppendMode': 1, 'Pattern1Fovy': 43.349998474121094, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'ReviseModeEnd': 1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'SystemResetOption': 0, 'IsResetCamera': False})

                    call InitTalk.InitTalk({'Arg_Greeting': 'NotAndNot', 'Arg_Turn': 2})

                    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorsebackArchery_IsPlayed'}) {
                        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameReady_06', 'ASName': ''})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameReady_07', 'IsCloseMessageDialog': False, 'ASName': ''})
                            Event471:
                            switch EventSystemActor.CheckWeather() {
                              case 0:
                                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                Event612:
                                GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'Pattern1PosX': -244.2899932861328, 'Pattern1PosY': 130.6199951171875, 'Pattern1PosZ': 3461.320068359375, 'Pattern1AtX': -247.72999572753906, 'Pattern1AtY': 130.3699951171875, 'Pattern1AtZ': 3458.419921875, 'Pattern1Fovy': 54.9900016784668, 'MotionMode': 0, 'Count': 20.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                                EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                                EventSystemActor.Demo_RegisterToDeathCounter({'ActorName': 'YabusameTarget', 'GameDataName': 'MiniGame_HorsebackArchery_BreakTargetNum', 'IsWaitFinish': True, 'IsInitializeData': True})
                                EventSystemActor.Demo_AppearNumTargets({'IsWaitFinish': True, 'GameDataIntTargetCounter': 'MiniGame_HorsebackArchery_BreakTargetNum'})
                                EventBgmCtrlTag.Demo_Start({'BgmName': 'GameHuntBgm', 'IsWaitFinish': True})
                                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                              case [1, 2, 3]:
                                Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Rain', 'IsCloseMessageDialog': True, 'ASName': ''})
                                goto Event612
                            }
                        } else {
                            Event411:

                            fork {
                                Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameReady_01', 'ASName': ''})
                            } {
                                GameRomCamera.Demo_MovePosFlow({'Count': 20.0, 'IsWaitFinish': True, 'Cushion': 0.0, 'PosAppendMode': 1, 'Pattern1PosX': -246.7899932861328, 'Pattern1PosY': 131.08999633789062, 'Pattern1PosZ': 3461.47998046875, 'AtAppendMode': 1, 'Pattern1AtX': -250.33999633789062, 'Pattern1AtY': 131.00999450683594, 'Pattern1AtZ': 3456.389892578125, 'FovyAppendMode': 1, 'Pattern1Fovy': 43.349998474121094, 'MotionMode': 1, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            }

                            Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameReady_02', 'ASName': ''})
                            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorsebackArchery_HasAlreadyGivenHorseReins'}) {
                                if !EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorsebackArchery_HasAlreadyGivenHorseSaddle'}) {
                                    Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Explanation_02', 'ASName': ''})
                                }
                                Event416:

                                call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'NotAndNot'})

                                Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameReady_04', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': ''})
                                goto Event471
                            } else {
                                Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Explanation_01', 'IsBecomingSpeaker': True, 'ASName': ''})
                                goto Event416
                            }
                        }
                    } else {
                        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameReady_05', 'IsCloseMessageDialog': True, 'ASName': ''})
                        goto Event411
                    }
                } else {
                    Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameInit_04', 'ASName': ''})
                    Event26:
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameInit_05', 'IsCloseMessageDialog': True, 'ASName': ''})
                }
            } else {
                goto Event26
            }
          case 1:
            Event12:
            Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Explanation_00', 'ASName': ''})
            Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Re_ask', 'ASName': ''})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameInit_06', 'ASName': ''})
                goto Event567
              case 1:
                goto Event12
              case 2:
                Event9:
                Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:0002_00', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            }
          case 2:
            goto Event9
        }
    } else {
        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Initial', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorsebackArchery_IsTalked', 'IsWaitFinish': True})
            Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:0000_00', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Event10:
                Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameInit_00', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                goto Event567
              case 1:
                goto Event12
              case 2:
                goto Event9
            }
          case 1:
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorsebackArchery_IsTalked', 'IsWaitFinish': True})
            Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:0001_00', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                goto Event10
              case 1:
                goto Event12
              case 2:
                goto Event9
            }
          case 2:
            goto Event9
        }
    }
}

void Game_Npc_FaronWoods009_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Halt_00'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Halt_01'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Halt_03', 'IsCloseMessageDialog': True})
            EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameHuntBgm', 'IsWaitFinish': True, 'FadeSec': 1.5})
            EventTimerTag.Demo_EventDisableMiniGameTime({'IsWaitFinish': True})
            EventSystemActor.Demo_DisappearNumTargets({'IsWaitFinish': True})
            EventSystemActor.Demo_UnregisterFromDeathCounter({'ActorName': 'YabusameTarget', 'IsWaitFinish': True})

            call ExitMiniGame()

        } else {
            Event93:
            Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Halt_02'})
        }
    } else {
        goto Event93
    }
}

void Game_Npc_FaronWoods009_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'CountMode': 1, 'IsWaitFinish': True, 'CountStartTime': 60, 'IsShowTimeUI': True, 'MaxTime': -1})
    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
    Event496:
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Horse_Is_LastRidden_Owned'}) {
            Event85:
            if EventTimerTag.CheckMiniGameTimeOver() {
                Event344:
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
            } else {
                EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                goto Event496
            }
        } else {
            goto Event344
        }
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
        goto Event85
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        goto Event85
    } else {
        goto Event344
    }
}

void Result() {
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_HorsebackArchery_BreakTargetNum', 'Operator': 'LessThan', 'Value': 12}) {
        Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameResult_00_00'})
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_HorsebackArchery_BreakTargetNum', 'Operator': 'LessThan', 'Value': 20}) {
        Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameResult_01_00'})
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Obj_ArrowNormal_A_01', 'Count': 15}) {

            call GetDemo.GetManyItemsByName({'IsInvalidOpenPouch': False, 'ShowDialogTargetActorName': 'Obj_ArrowBundle_A_10', 'IncreaseTargetActorName': 'Obj_ArrowNormal_A_01', 'GetNumber': 15})

        } else {

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_HorsebackArchery_BreakTargetNum', 'Operator': 'LessThan', 'Value': 23}) {
        Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameResult_02_00'})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorsebackArchery_HasAlreadyGivenHorseReins'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 10, 'PorchItemName': 'Obj_BombArrow_A_01'}) {

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_BombArrow_A_03'})

            } else {

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

            }
        } else {

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'GameRomHorseReins_03'})

            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorsebackArchery_HasAlreadyGivenHorseReins', 'IsWaitFinish': True})
        }
    } else {
        Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameResult_03_00'})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorsebackArchery_HasAlreadyGivenHorseSaddle'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorsebackArchery_HasAlreadyGivenHorseReins'}) {
                if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Obj_BombArrow_A_01', 'Count': 20}) {

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_BombArrow_A_04'})

                } else {

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

                }
            } else {

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'GameRomHorseReins_03'})

                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorsebackArchery_HasAlreadyGivenHorseReins', 'IsWaitFinish': True})
            }
        } else {

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'GameRomHorseSaddle_03'})

            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorsebackArchery_HasAlreadyGivenHorseSaddle', 'IsWaitFinish': True})
        }
    }
}

void ExitMiniGame() {
    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorsebackArchery_TargetMakeFlag', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_HorsebackArchery_TargetMakeFlag', 'IsWaitFinish': True})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_HorsebackArchery_Retry', 'IsWaitFinish': True})

    call Common.EnableSaveAndWarp()

    Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:WhenFallFromHorse_01'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Ready'})
}

void Finish_Npc_FaronWoods009_StepStart() {

    call Common.AirStartUP_Player()

    EventTimerTag.Demo_EventDisableMiniGameTime({'IsWaitFinish': True})
    if !OwnedHorse_ForEvent.DummyQuery() {
        EventSystemActor.Demo_MiniGameFinish({'TextType': 0, 'IsWaitFinish': True})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameHuntBgm', 'FadeSec': 0.4000000059604645, 'IsWaitFinish': True})

        call RecordResult()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Npc_FaronWoods009.Demo_OpenMessageDialog({'ASName': 'Talk', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameEnd', 'CloseDialogOption': 3, 'IsWaitFinish': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        if !EventSystemActor.CheckFlag({'FlagName': 'Horse_Is_LastRidden_Owned'}) {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        }
        EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': True})
        OwnedHorse_ForEvent.Demo_ResetChemicalStateNeutral({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_WarpActiveHorse({'PositionX': -247.73130798339844, 'PositionY': 129.03480529785156, 'PositionZ': 3458.395263671875, 'IsWaitFinish': True, 'Direction': -130.0850067138672})
        OwnedHorse_ForEvent.Demo_Wait({'IsWaitFinish': False, 'IsAngryEnable': False, 'IsEatEnable': False, 'IsLoveEnable': False, 'HasToCue': False, 'IsNoMorph': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -247.69210815429688, 'DestinationY': 131.13414001464844, 'DestinationZ': 3458.44873046875, 'DirectionY': -130.0850067138672})
        GameROMPlayer.Demo_RideHorse({'IsWaitFinish': True, 'Horse': ActorIdentifier(name="OwnedHorse_ForEvent")})
        Npc_FaronWoods009.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_HorsebackArchery_TargetMakeFlag', 'IsWaitFinish': True})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': False})
        GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 1, 'Pattern1PosX': -246.7899932861328, 'Pattern1PosY': 131.32000732421875, 'Pattern1PosZ': 3461.47998046875, 'AtAppendMode': 1, 'Pattern1AtX': -246.72999572753906, 'Pattern1AtY': 130.77999877929688, 'Pattern1AtZ': 3455.2900390625, 'FovyAppendMode': 1, 'Pattern1Fovy': 43.349998474121094, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'ReviseModeEnd': 1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

        call InitTalk.InitTalk({'Arg_Greeting': 'NotAndNot', 'Arg_Turn': 2})

        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'Start', 'IsWaitFinish': True})

        call Result()

        EventSystemActor.Demo_DisappearNumTargets({'IsWaitFinish': True})
        EventSystemActor.Demo_UnregisterFromDeathCounter({'ActorName': 'YabusameTarget', 'IsWaitFinish': True})
        EventSystemActor.Demo_SetGameDataInt({'Value': 0, 'IsWaitFinish': True, 'GameDataIntName': 'MiniGame_HorsebackArchery_BreakTargetNum'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_HorsebackArchery_IsPlayed'})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorsebackArchery_Retry', 'IsWaitFinish': True})
        Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:AskAgain'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_FlagON({'FlagName': 'Horse_Is_LastRidden_Owned', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

            call CheckHorseRide()

            Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Register_00'})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:AskAgain_00'})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {

                    fork {
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    } {
                        Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameInit_02', 'IsCloseMessageDialog': False})
                        Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:New'})
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                    }

                    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
                    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HorsebackArchery_TargetMakeFlag', 'IsWaitFinish': True})
                    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                    Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:New_00'})
                    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'Pattern1PosX': -244.2899932861328, 'Pattern1PosY': 130.6199951171875, 'Pattern1PosZ': 3461.320068359375, 'Pattern1AtX': -247.72999572753906, 'Pattern1AtY': 130.3699951171875, 'Pattern1AtZ': 3458.419921875, 'Pattern1Fovy': 54.9900016784668, 'MotionMode': 0, 'Count': 20.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
                    EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                    EventSystemActor.Demo_RegisterToDeathCounter({'ActorName': 'YabusameTarget', 'GameDataName': 'MiniGame_HorsebackArchery_BreakTargetNum', 'IsWaitFinish': True, 'IsInitializeData': True})
                    EventSystemActor.Demo_AppearNumTargets({'IsWaitFinish': True, 'GameDataIntTargetCounter': 'MiniGame_HorsebackArchery_BreakTargetNum'})
                    EventBgmCtrlTag.Demo_Start({'BgmName': 'GameHuntBgm', 'IsWaitFinish': True})
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                } else {
                    Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameInit_04'})
                    Event367:
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:GameInit_05', 'IsCloseMessageDialog': True})

                    call ExitMiniGame()

                }
            } else {
                goto Event367
            }
        } else {
            Npc_FaronWoods009.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:AskAgain_01', 'IsCloseMessageDialog': True})

            call ExitMiniGame()

        }
    }
}

void Ready_Npc_FaronWoods009_Near() {
    switch Npc_FaronWoods009.CheckActorAction13() {
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_FaronWoods009.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Near00'})
          case [1, 2, 3]:
            Npc_FaronWoods009.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Near02'})
        }
      case 11:
        Npc_FaronWoods009.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Near01'})
    }
}

void ShopArrow() {
    Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Talk00', 'ASName': ''})
    Event507:
    switch EventSystemActor.GeneralChoice3() {
      case 0:

        call Yorozuya_Kaiwa.Yorozuya_Kounyu_Rain({'Self2': ActorIdentifier(name="Npc_FaronWoods009")})

        Event511:
        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Talk03', 'ASName': ''})
        goto Event507
      case 1:

        call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_FaronWoods009")})

        goto Event511
      case 2:
        EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    }
}

void RecordResult() {
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorsebackArchery_IsPlayed'}) {
        if !GameDataCalcMachine.CompareGameDataInt({'GameDataIntName_A': 'MiniGame_HorsebackArchery_BreakTargetNum', 'GameDataIntName_B': 'MiniGAme_HorsebackArchery_BestRecord', 'Operator': 'GreaterThan'}) {
            GameDataCalcMachine.Demo_GameDataCopyInt({'GameDataIntSrcName': 'MiniGame_HorsebackArchery_BreakTargetNum', 'GameDataIntDstName': 'MiniGAme_HorsebackArchery_BestRecord', 'IsWaitFinish': True})
        }
    } else {
        GameDataCalcMachine.Demo_GameDataCopyInt({'GameDataIntSrcName': 'MiniGame_HorsebackArchery_BreakTargetNum', 'GameDataIntDstName': 'MiniGAme_HorsebackArchery_BestRecord', 'IsWaitFinish': True})
    }
}

void CheckHorseRide() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Horse_Is_LastRidden_Owned'}) {
            switch Npc_FaronWoods009.CheckTypeOfWildHorseAssociated() {
              case [0, 1, 2, 3, 7]:
                Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:WildHouse_00', 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Register_00', 'ASName': ''})
                    Npc_FaronWoods009.Demo_LookAtObject({'ObjectId': 2, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [-200.0, 128.0, 3484.0]})
                    GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [-200.0, 128.0, 3484.0]})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

                    fork {
                        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Register_01', 'IsCloseMessageDialog': True, 'ASName': ''})
                    } {
                        GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': False, 'MotionMode': 1, 'Count': 30.0, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosX': -211.0, 'Pattern1PosY': 136.3000030517578, 'Pattern1PosZ': 3492.699951171875, 'Pattern1AtX': -203.0, 'Pattern1AtY': 134.8000030517578, 'Pattern1AtZ': 3489.590087890625, 'Pattern1Fovy': 40.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    }

                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    Npc_FaronWoods009.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0]})
                    GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_FaronWoods009'})
                    GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0, 'IsWaitFinish': True})
                    Event570:
                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HorsebackArchery_Retry'}) {

                        call ExitMiniGame()

                    }
                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
                } else {
                    Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Accompany_00', 'ASName': ''})
                    Event601:
                    Npc_FaronWoods009.Demo_LookAtObject({'ObjectId': 2, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [-200.0, 128.0, 3484.0]})
                    GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [-200.0, 128.0, 3484.0]})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

                    fork {
                        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Accompany_01', 'IsCloseMessageDialog': False, 'ASName': ''})
                    } {
                        GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': False, 'MotionMode': 1, 'Count': 30.0, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosX': -211.0, 'Pattern1PosY': 136.3000030517578, 'Pattern1PosZ': 3492.699951171875, 'Pattern1AtX': -203.0, 'Pattern1AtY': 134.8000030517578, 'Pattern1AtZ': 3489.590087890625, 'Pattern1Fovy': 40.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    }

                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    Npc_FaronWoods009.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0]})
                    GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_FaronWoods009'})
                    GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0, 'IsWaitFinish': True})
                    Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:Accompany_02', 'IsCloseMessageDialog': True, 'ASName': ''})
                    goto Event570
                }
              case [4, 5, 6]:
                Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:NoHouse', 'ASName': ''})
                goto Event601
            }
        }
    } else {
        Npc_FaronWoods009.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HorsebackArchery:NoHouse', 'ASName': ''})
        goto Event601
    }
}
