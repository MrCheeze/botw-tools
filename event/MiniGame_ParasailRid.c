-------- EventFlow: MiniGame_ParasailRide --------

Actor: Npc_FarthestIsland002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt', 'Demo_AppearRupee', 'Demo_AdvanceQuest', 'Demo_LoopEnd', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_WarpPlayerToDestination', 'Demo_ResetGimmick', 'Demo_AppearCheckPointNum', 'Demo_DisappearCheckPointNum', 'Demo_MiniGameFinish', 'Demo_SetGameDataInt']
queries: ['GeneralChoice2', 'GeneralChoice3', 'CheckGameDataInt', 'CheckFlag', 'CheckPlayerState', 'RandomChoice2', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHorseGetOff', 'Demo_StopInAir', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
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

void Ready_Npc_FarthestIsland002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ParasailRide_IsTalked'}) {
        Npc_FarthestIsland002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Initial_06'})
        Event15:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Event16:
            Npc_FarthestIsland002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:AskMoney_00', 'ASName': ''})
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_FarthestIsland002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:AskMoney_01', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {
                    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'CurrentRupee', 'Value': -20, 'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                    Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:ReadyStart_00', 'IsCloseMessageDialog': True, 'ASName': ''})
                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ParasailRide_ActerGenerateFlag', 'IsWaitFinish': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': 'Obj_RingParachute_A_01', 'IsResetCamera': False})
                    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                    Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:ReadyStart_01', 'IsCloseMessageDialog': False, 'ASName': ''})
                    if !EventSystemActor.RandomChoice2() {
                        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'Count': 20.0, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 4709.0400390625, 'Pattern1PosY': 210.7899932861328, 'Pattern1PosZ': 3739.31005859375, 'Pattern1AtX': 4703.7099609375, 'Pattern1AtY': 209.2899932861328, 'Pattern1AtZ': 3742.14990234375, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Suggest_Bay', 'IsCloseMessageDialog': False, 'ASName': ''})
                        Event28:
                        Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Suggest_End', 'ASName': ''})
                        switch EventSystemActor.CheckWeather() {
                          case 0:
                            Event39:

                            call Common.DisableSaveAndWarp()

                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BottomComebackProhibitation'})
                            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'GameParasailBgm'})
                            EventSystemActor.Demo_AppearCheckPointNum({'IconType': 0, 'GameDataIntTargetCounter': 'MiniGame_ParasailRide_PassedTargetNum', 'IsWaitFinish': True})
                            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
                          case 1:
                            Event175:
                            Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Rain_00'})
                            goto Event39
                          case 2:
                            goto Event175
                          case 3:
                            goto Event175
                        }
                    } else {
                        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 50.0, 'Count': 20.0, 'ReviseModeEnd': 2, 'CollisionInterpolateSkip': True, 'Pattern1PosX': 4708.77978515625, 'Pattern1PosY': 211.17999267578125, 'Pattern1PosZ': 3744.81005859375, 'Pattern1AtX': 4707.60986328125, 'Pattern1AtY': 209.2899932861328, 'Pattern1AtZ': 3739.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Suggest_Peninsula', 'IsCloseMessageDialog': False, 'ASName': ''})
                        goto Event28
                    }
                } else {
                    Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:NoEnoughMoney_00', 'ASName': ''})
                }
            } else {
                Event20:
                Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Initial_End', 'IsCloseMessageDialog': True, 'ASName': ''})
            }
          case 1:
            Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Explain_00', 'IsCloseMessageDialog': False, 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                goto Event16
            } else {
                goto Event20
            }
          case 2:
            goto Event20
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ParasailRide_IsTalked', 'IsWaitFinish': True})
        Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Initial', 'IsCloseMessageDialog': False, 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            Npc_FarthestIsland002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Initial_00_00', 'ASName': ''})
            Event8:
            Npc_FarthestIsland002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Initial_02', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                Npc_FarthestIsland002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Initial_05', 'ASName': ''})
                goto Event15
            } else {
                goto Event20
            }
        } else {
            Npc_FarthestIsland002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Initial_01_00', 'ASName': ''})
            goto Event8
        }
    }
}

void WaitToTakeOff_Npc_FarthestIsland002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_FarthestIsland002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Talk_00'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_FarthestIsland002.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Talk_01'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Talk_02', 'IsCloseMessageDialog': True})
            EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameParasailBgm', 'FadeSec': 2.0, 'IsWaitFinish': True})
            Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
            EventSystemActor.Demo_DisappearCheckPointNum({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailRide_ActerGenerateFlag'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': 'Obj_RingParachute_A_01', 'IsResetCamera': False})
            EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'MiniGame_ParasailRide_PassedTargetNum', 'Value': 0, 'IsWaitFinish': True})

            call Exit()

            Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
        } else {
            Event43:
            Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Talk_03', 'IsCloseMessageDialog': True})
        }
    } else {
        goto Event43
    }
}

void WaitToTakeOff_Npc_FarthestIsland002_EachFrame() {
    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
    Event50:
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ParasailRide_IsInStartArea'}) {
        Event51:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event50
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
            Event54:
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
                goto Event54
            } else {
                if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
                    goto Event54
                } else {
                    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
                        if EventSystemActor.CheckPlayerState({'PlayerState': 27}) {
                            goto Event51
                        } else {
                            goto Event54
                        }
                    } else {
                        goto Event51
                    }
                }
            }
        }
    }
}

void Flying_Npc_FarthestIsland002_EachFrame() {
    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
    Event233:
    if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 17}) {
            Event235:
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
        } else {
            Event232:
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ParasailRide_IsInStartArea'}) {
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'WaitToTakeOff'})
            } else {
                goto Event233
            }
        }
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
            goto Event232
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 21}) {
                goto Event232
            } else {
                if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
                    if EventSystemActor.CheckPlayerState({'PlayerState': 27}) {
                        goto Event235
                    } else {
                        goto Event232
                    }
                } else {
                    goto Event235
                }
            }
        }
    }
}

void Exit() {

    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BottomComebackProhibitation'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Ready'})
}

void Finish_Npc_FarthestIsland002_StepStart() {
    EventSystemActor.Demo_MiniGameFinish({'TextType': 0, 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameParasailBgm', 'FadeSec': 0.5, 'IsWaitFinish': True})

    call RecordResult()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 17})
    Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Land', 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_DisappearCheckPointNum({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        Event201:
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 4707.52978515625, 'Pattern1PosY': 208.5, 'Pattern1PosZ': 3744.580078125, 'Pattern1AtX': 4707.89013671875, 'Pattern1AtY': 208.4199981689453, 'Pattern1AtZ': 3741.070068359375, 'Pattern1Fovy': 41.29999923706055, 'StartCalcOnly': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': 'Obj_RingParachute_A_01', 'IsResetCamera': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 4707.19091796875, 'DestinationY': 206.68556213378906, 'DestinationZ': 3741.643798828125, 'DirectionY': 129.15899658203125})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailRide_ActerGenerateFlag'})

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 1, 'DispMode': 'Auto'})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})

        call Result()

        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'MiniGame_ParasailRide_PassedTargetNum', 'Value': 0, 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ParasailRide_IsPlayed', 'IsWaitFinish': True})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
        Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Again', 'IsCloseMessageDialog': False})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {
                EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'CurrentRupee', 'Value': -20, 'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:ReadyStart_00', 'IsCloseMessageDialog': True})
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ParasailRide_ActerGenerateFlag', 'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': 'Obj_RingParachute_A_01', 'IsResetCamera': False})
                WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:ReadyStart_01', 'IsCloseMessageDialog': True})
                Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:ReadyStart_02'})
                EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'GameParasailBgm'})
                EventSystemActor.Demo_AppearCheckPointNum({'IconType': 0, 'GameDataIntTargetCounter': 'MiniGame_ParasailRide_PassedTargetNum', 'IsWaitFinish': True})
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'WaitToTakeOff'})
            } else {
                Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:NoEnoughMoney_00', 'IsCloseMessageDialog': True})

                call Exit()

            }
        } else {
            Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Exit_00', 'IsCloseMessageDialog': True})

            call Exit()

        }
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
            goto Event201
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
                GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
                goto Event201
            } else {
                goto Event201
            }
        }
    }
}

void Result() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThan', 'Value': 20, 'GameDataIntName': 'MiniGame_ParasailRide_PassedTargetNumTemp'}) {
        Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_00_00', 'IsCloseMessageDialog': False})
        Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_00_01'})
    } else {
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThan', 'Value': 25, 'GameDataIntName': 'MiniGame_ParasailRide_PassedTargetNumTemp'}) {
            Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_01_00'})
            Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_01_01', 'IsCloseMessageDialog': True})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

        } else {
            if EventSystemActor.CheckGameDataInt({'Operator': 'LessThan', 'Value': 30, 'GameDataIntName': 'MiniGame_ParasailRide_PassedTargetNumTemp'}) {
                Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_03_00'})
                Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_03_01'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

            } else {
                if EventSystemActor.CheckGameDataInt({'Operator': 'LessThan', 'GameDataIntName': 'MiniGame_ParasailRide_PassedTargetNumTemp', 'Value': 50}) {
                    Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_02_00'})
                    Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_02_01', 'IsCloseMessageDialog': True})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

                } else {
                    Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_04_00'})
                    Npc_FarthestIsland002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Result_04_01'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

                }
            }
        }
    }
}

void Ready_Npc_FarthestIsland002_Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        Npc_FarthestIsland002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Near00'})
      case 1:
        Event168:
        Npc_FarthestIsland002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailRide:Near01'})
      case 2:
        goto Event168
      case 3:
        goto Event168
    }
}

void RecordResult() {
    GameDataCalcMachine.Demo_GameDataCopyInt({'GameDataIntSrcName': 'MiniGame_ParasailRide_PassedTargetNum', 'IsWaitFinish': True, 'GameDataIntDstName': 'MiniGame_ParasailRide_PassedTargetNumTemp'})
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ParasailRide_IsPlayed'}) {
        if !GameDataCalcMachine.CompareGameDataInt({'Operator': 'GreaterThan', 'GameDataIntName_A': 'MiniGame_ParasailRide_PassedTargetNum', 'GameDataIntName_B': 'MiniGame_ParasailRide_BestRecord'}) {
            GameDataCalcMachine.Demo_GameDataCopyInt({'IsWaitFinish': True, 'GameDataIntSrcName': 'MiniGame_ParasailRide_PassedTargetNum', 'GameDataIntDstName': 'MiniGame_ParasailRide_BestRecord'})
        }
    } else {
        GameDataCalcMachine.Demo_GameDataCopyInt({'IsWaitFinish': True, 'GameDataIntSrcName': 'MiniGame_ParasailRide_PassedTargetNum', 'GameDataIntDstName': 'MiniGame_ParasailRide_BestRecord'})
    }
}
