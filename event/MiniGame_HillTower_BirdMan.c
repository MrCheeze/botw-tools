-------- EventFlow: MiniGame_HillTower_BirdMan --------

Actor: Npc_Minigame_BirdMan001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject', 'Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceQuest', 'Demo_LoopEnd', 'Demo_WaitFrame', 'Demo_IncreaseRupee', 'Demo_FlagON', 'Demo_AppearRupee', 'Demo_WarpPLToPosAndResetGimmick', 'Demo_AppearFlyDistance', 'Demo_DisappearFlyDistance', 'Demo_WarpPlayerToDestination', 'Demo_ResetGimmick', 'Demo_MiniGameFinish', 'Demo_FlagOFF']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckRupee', 'CheckPlayerState', 'CheckGameDataFloat']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_ActorInfoToGameDataVec3', 'Demo_GameDataSubVec3', 'Demo_CalcVecLengthToGameData', 'Demo_GameDataCopyFloat', 'Demo_GameDataSubFloat']
queries: ['CompareGameDataFloat']
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

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Minigame_BirdMan001_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HillTower_BirdMan_TalkedOnce'}) {

        call InitTalk.InitTalk({'Arg_Turn': 1, 'Arg_Greeting': 'DoAndDo'})

        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_25', 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
            Npc_Minigame_BirdMan001.Demo_Talk({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_24', 'IsWaitFinish': True, 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckRupee({'Value': 20}) {
                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})

                    call Common.DisableSaveAndWarp()

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BottomComebackProhibitation'})

                    fork {
                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    } {
                        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_05', 'IsCloseMessageDialog': False, 'ASName': 'Talk'})
                    }

                    Npc_Minigame_BirdMan001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'TurnDirection': 65.31700134277344, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                    Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_30', 'ASName': 'Point'})
                    EventBgmCtrlTag.Demo_Start({'BgmName': 'GameParasailBgm', 'IsWaitFinish': True})
                    EventSystemActor.Demo_AdvanceQuest({'StepName': 'Game', 'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False})
                } else {
                    Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_07', 'ASName': ''})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                }
            } else {
                EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 1})
                Event319:
                Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_15', 'IsCloseMessageDialog': True, 'ASName': ''})
            }
        } else {
            goto Event319
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 5, 'Arg_Greeting': 'NotAndNot'})

        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_00', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': 'Act_Lookfar'})
        if !EventSystemActor.GeneralChoice2() {

            call InitTalk.InitTalk({'Arg_Greeting': 'DoAndNot', 'Arg_Turn': 1})

            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_26', 'ASName': ''})
            Event157:
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_12', 'IsCloseMessageDialog': False, 'ASName': ''})
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_27', 'IsCloseMessageDialog': False, 'ASName': ''})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_HillTower_BirdMan_TalkedOnce'})
            EventSystemActor.Demo_WaitFrame({'Frame': 8, 'IsWaitFinish': True})
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_08'})
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_09'})
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_29', 'ASName': ''})
            EventSystemActor.Demo_WaitFrame({'Frame': 16, 'IsWaitFinish': True})
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_03', 'IsCloseMessageDialog': False, 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_04', 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckRupee({'Value': 20}) {
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})

                        call Common.DisableSaveAndWarp()

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BottomComebackProhibitation'})

                        fork {
                            EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                        } {
                            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_05'})
                            Npc_Minigame_BirdMan001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'TurnDirection': 65.31700134277344, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_30', 'ASName': 'Point'})
                        }

                        EventBgmCtrlTag.Demo_Start({'BgmName': 'GameParasailBgm', 'IsWaitFinish': True})
                        EventSystemActor.Demo_AdvanceQuest({'StepName': 'Game', 'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False})
                    } else {
                        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_07', 'ASName': ''})
                        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    }
                } else {
                    Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_06', 'IsCloseMessageDialog': True, 'ASName': ''})
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                }
            } else {
                Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_11', 'IsCloseMessageDialog': True, 'ASName': ''})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Greeting': 'DoAndNot', 'Arg_Turn': 1})

            Npc_Minigame_BirdMan001.Demo_Talk({'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_28', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            goto Event157
        }
    }
}

void Game_Npc_Minigame_BirdMan001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_13', 'ASName': ''})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_14', 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_15', 'IsCloseMessageDialog': True, 'ASName': ''})
            EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameParasailBgm', 'FadeSec': 2.0, 'IsWaitFinish': True})

            call Common.EnableSaveAndWarp()

            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BottomComebackProhibitation'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': 'Ready', 'ForceRunTelop': False})
        } else {
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_16', 'IsCloseMessageDialog': True, 'ASName': ''})
        }
    } else {
        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_17', 'IsCloseMessageDialog': True, 'ASName': ''})
    }
}

void Game_Npc_Minigame_BirdMan001_EachFrame() {
    GameDataCalcMachine.Demo_GameDataSubFloat({'GameDataFloatSrcName': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'GameDataFloatDstName': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'GameDataFloatToName': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'IsWaitFinish': True})
    GameDataCalcMachine.Demo_GameDataSubVec3({'IsWaitFinish': True, 'GameDataVec3fToName': 'MiniGame_BirdMan_HillTower_VectorFromStartToCurrent', 'GameDataVec3fSrcName': 'MiniGame_BirdMan_HillTower_VectorFromStartToCurrent', 'GameDataVec3fDstName': 'MiniGame_BirdMan_HillTower_VectorFromStartToCurrent'})
    Event96:
    GameDataCalcMachine.Demo_ActorInfoToGameDataVec3({'IsWaitFinish': True, 'ActorName': 'GameROMPlayer', 'ParameterName': 'Pos', 'GameDataVec3fToName': 'MiniGame_BirdMan_HillTower_StartPos', 'UniqueName': ''})
    GameDataCalcMachine.Demo_ActorInfoToGameDataVec3({'IsWaitFinish': True, 'ActorName': 'GameROMPlayer', 'ParameterName': 'Pos', 'UniqueName': '', 'GameDataVec3fToName': 'MiniGame_BirdMan_HillTower_CurrentPos'})
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        Event9:
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event96
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Retire'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_BirdMan_HillTower_HasPlayerLeftStartArea'}) {
        goto Event9
    } else {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Flying'})
    }
}

void Flying_Npc_Minigame_BirdMan001_EachFrame() {
    EventSystemActor.Demo_AppearFlyDistance({'GameDataFloatDistance': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'IsWaitFinish': True})
    Event394:
    if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
        if EventSystemActor.CheckPlayerState({'PlayerState': 17}) {
            Event415:
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstInHyruleCastleBossRoom'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': '', 'StepName': 'Finish'})
        } else {
            Event213:
            GameDataCalcMachine.Demo_ActorInfoToGameDataVec3({'IsWaitFinish': True, 'ActorName': 'GameROMPlayer', 'ParameterName': 'Pos', 'GameDataVec3fToName': 'MiniGame_BirdMan_HillTower_CurrentPos', 'UniqueName': ''})
            GameDataCalcMachine.Demo_GameDataSubVec3({'IsWaitFinish': True, 'GameDataVec3fSrcName': 'MiniGame_BirdMan_HillTower_CurrentPos', 'GameDataVec3fDstName': 'MiniGame_BirdMan_HillTower_StartPos', 'GameDataVec3fToName': 'MiniGame_BirdMan_HillTower_VectorFromStartToCurrent'})
            GameDataCalcMachine.Demo_CalcVecLengthToGameData({'GameDataVec3fSrcName': 'MiniGame_BirdMan_HillTower_VectorFromStartToCurrent', 'GameDataFloatToName': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'CalcY': False, 'IsWaitFinish': True})
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event394
        }
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        goto Event213
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 21}) {
        goto Event213
    } else {
        goto Event415
    }
}

void Finish_Npc_Minigame_BirdMan001_StepStart() {
    EventSystemActor.Demo_DisappearFlyDistance({'IsWaitFinish': True})
    EventSystemActor.Demo_MiniGameFinish({'TextType': 0, 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameParasailBgm', 'FadeSec': 0.4000000059604645, 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0, 'Color': 1})
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        Event337:
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 0, 'ReviseModeEnd': 0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'Pattern1PosX': -1750.1600341796875, 'Pattern1PosY': 331.6499938964844, 'Pattern1PosZ': -773.6199951171875, 'Pattern1AtX': -1746.030029296875, 'Pattern1AtY': 330.3900146484375, 'Pattern1AtZ': -771.3300170898438, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -1746.7099609375, 'DestinationY': 329.06451416015625, 'DestinationZ': -772.847412109375, 'DirectionY': 22.70400047302246})
        WorldManagerControl.Demo_SetPaletteType({'ChangeFrame': 1, 'EndFrame': 1, 'PaletteType': 0, 'Speed': 1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo141_0'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo141_1'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo141_2'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo141_3'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'LastBossIncompleteGanonGenerateFlag'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -1746.7099609375, 'DestinationY': 329.06451416015625, 'DestinationZ': -772.847412109375, 'DirectionY': 22.70400047302246})
        Npc_Minigame_BirdMan001.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        Npc_Minigame_BirdMan001.Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Talk_Wait'})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto', 'Color': 1})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'Start', 'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataFloat({'GameDataFloatName': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'Operator': 'LessThan', 'Value': 450.0}) {
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_18', 'ASName': ''})
            Event288:
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_HillTower_BirdMan_FinishedOnce'}) {
                if !GameDataCalcMachine.CompareGameDataFloat({'GameDataFloatName_A': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'GameDataFloatName_B': 'MiniGame_BirdMan_HillTower_RecordDistance', 'Operator': 'LessThanOrEqualTo'}) {
                    if EventSystemActor.CheckGameDataFloat({'Operator': 'LessThan', 'Value': 450.0, 'GameDataFloatName': 'MiniGame_BirdMan_HillTower_RecordDistance'}) {
                        Event267:
                        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_23', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'ASName': ''})
                        if !EventSystemActor.GeneralChoice2() {
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
                            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_24', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'ASName': ''})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckRupee({'Value': 20}) {
                                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})

                                    fork {
                                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                                        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                    } {
                                        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_05', 'IsCloseMessageDialog': False, 'ASName': ''})
                                        Npc_Minigame_BirdMan001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'TurnDirection': 65.31700134277344, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                                        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_30', 'ASName': 'Point'})
                                    }

                                    EventBgmCtrlTag.Demo_Start({'BgmName': 'GameParasailBgm', 'IsWaitFinish': True})
                                    EventSystemActor.Demo_AdvanceQuest({'StepName': 'Game', 'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False})
                                } else {
                                    Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_07', 'ASName': ''})
                                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                    Event271:

                                    call Common.EnableSaveAndWarp()

                                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BottomComebackProhibitation'})
                                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': '', 'StepName': 'Ready'})
                                }
                            } else {
                                Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:ChoiceDoNotPay_00', 'ASName': ''})
                                EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                goto Event271
                            }
                        } else {
                            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_15', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'ASName': ''})
                            goto Event271
                        }
                    } else {
                        Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_22'})
                        goto Event267
                    }
                } else
                if EventSystemActor.CheckGameDataFloat({'Operator': 'LessThan', 'Value': 450.0, 'GameDataFloatName': 'MiniGame_BirdMan_HillTower_CurrentDistance'}) {
                    Event266:
                    GameDataCalcMachine.Demo_GameDataCopyFloat({'GameDataFloatSrcName': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'GameDataFloatDstName': 'MiniGame_BirdMan_HillTower_RecordDistance', 'IsWaitFinish': True})
                    goto Event267
                } else {
                    Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_21'})
                    goto Event266
                }
            } else {
                GameDataCalcMachine.Demo_GameDataCopyFloat({'GameDataFloatSrcName': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'GameDataFloatDstName': 'MiniGame_BirdMan_HillTower_RecordDistance', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_HillTower_BirdMan_FinishedOnce', 'IsWaitFinish': True})
                goto Event267
            }
        } else
        if EventSystemActor.CheckGameDataFloat({'GameDataFloatName': 'MiniGame_BirdMan_HillTower_CurrentDistance', 'Operator': 'LessThan', 'Value': 600.0}) {
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_19', 'ASName': ''})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'PutRupee_Purple'})

            goto Event288
        } else {
            Npc_Minigame_BirdMan001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_20', 'ASName': ''})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'PutRupee_Silver'})

            goto Event288
        }
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 2}) {
        goto Event337
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        goto Event337
    } else {
        goto Event337
    }
}

void Retire_Npc_Minigame_BirdMan001_StepStart() {
    Npc_Minigame_BirdMan001.Demo_Talk({'MessageId': 'EventFlowMsg/MiniGame_HillTower_BirdMan:New_31', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0, 'Color': 1})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WarpPLToPosAndResetGimmick({'IsWaitFinish': True, 'Destination': [-1746.7099609375, 329.06451416015625, -772.847412109375], 'RotationY': 22.70400047302246, 'SystemResetOption': 0, 'AdditionalResetActor': ''})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 0, 'ReviseModeEnd': 0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 0.0, 'Pattern1PosX': -1750.1600341796875, 'Pattern1PosY': 331.6499938964844, 'Pattern1PosZ': -773.6199951171875, 'Pattern1AtX': -1746.030029296875, 'Pattern1AtY': 330.3900146484375, 'Pattern1AtZ': -771.3300170898438, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    Npc_Minigame_BirdMan001.Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'Talk_Wait'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto', 'Color': 1})
    EventSystemActor.Demo_AdvanceQuest({'StepName': 'Game', 'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False})
}
