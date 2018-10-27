-------- EventFlow: Demo330_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ChangeScene', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_DisableMiniGameTime', 'Demo_AdvanceQuest', 'Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WaitForCloseFade', 'Demo_MiniGameFinish', 'Demo_MiniGameTimeMove', 'Demo_AppearRaceResult', 'Demo_DisappearRaceResult', 'Demo_DisappearCheckPointNum', 'Demo_EnableCameraInput', 'Demo_WarpPlayerToDestination']
queries: ['CheckGameDataInt', 'CheckFlag', 'CheckPlayerState', 'CheckPlayerEquip']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis039
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_TalkNoMessageStepper']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop', 'Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_SunazarashiRaceGoal', 'Demo_PlayerDestinationMove', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_DisableGetOffSunaZInEvent', 'Demo_PlayerWait', 'Demo_PlayerWakeBoardEnd', 'Demo_XLinkEventCreate']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_oasis038
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_GameCamera', 'Demo_CameraAnimFlow', 'Demo_Join', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis061
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis062
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis063
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis064
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis065
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis069
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_oasis070
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_A[race]
entrypoint: None()
actions: ['Demo_RailMove', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetInterpolate', 'Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoWait0]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoWait1]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Goal() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 1}) {
        if !EventSystemActor.CheckPlayerState({'PlayerState': 24}) {
            if EventSystemActor.CheckPlayerEquip({'PlayerEquipType': 1}) {
                GameROMPlayer.Demo_DisableGetOffSunaZInEvent({'IsWaitFinish': False})
                GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})

                call SunazarashiRace.TimeRecord()

                if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'SunazarashiRace_mini', 'StepName': 'Finish'})
                    Event176:

                    fork {
                        GameRomCamera.Demo_Join({'IsWaitFinish': False})
                        EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
                    } {
                        EventSystemActor[DemoWait1].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                        GameROMPlayer.Demo_SunazarashiRaceGoal({'IsWaitFinish': False, 'ASName': 'WakeBoarding'})
                        EventSystemActor[DemoWait1].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Sunazarashi', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                    } {
                        Animal_SunazarashiSP_A[race].Demo_RailMove({'RailName': 'Demo330_1_WR', 'IsWaitFinish': False, 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'ASName': 'Swim'})
                        EventSystemActor[DemoWait0].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                        Animal_SunazarashiSP_A[race].Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Move'})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

                        fork {
                            SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
                            EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'GameRaceBgm', 'FadeSec': 0.5})
                        } {
                            EventSystemActor.Demo_MiniGameFinish({'TextType': 0, 'IsWaitFinish': True})
                        }

                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                    }

                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                    EventSystemActor.Demo_MiniGameTimeMove({'IsWaitFinish': True})

                    call SunazarashiRace.ResultCompare()

                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Demo330_1'}) {
                        Event401:
                        EventSystemActor.Demo_AppearRaceResult({'IsWaitFinish': True, 'ResultType': 0})
                        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'SceneName': 'C50-0', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'Accept1FrameDelay': True, 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 1})
                        GameROMPlayer.Demo_SunazarashiRaceGoal({'IsWaitFinish': False, 'ASName': 'Demo330_1-C01-Link-A-0'})
                        Event192:
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
                        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'SceneName': 'C51-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
                        if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_mini_Demo330_1'}) {
                            Event11:
                            Npc_oasis039.Demo_TalkNoMessageStepper({'MessageId': 'DemoMsg/Demo330_1:NPC_GodVoice_Demo330_1_010', 'IsWaitFinish': False})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                            Npc_oasis039.Demo_TalkNoMessageStepper({'MessageId': 'DemoMsg/Demo330_1:NPC_GodVoice_Demo330_1_011', 'IsWaitFinish': False})
                            Event9:
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            EventSystemActor.Demo_DisappearRaceResult({'IsWaitFinish': True})
                            EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
                            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'Frame': 2, 'DispMode': 'NoLogo'})
                            GameROMPlayer.Demo_PlayerWakeBoardEnd({'IsWaitFinish': True})
                            EventSystemActor.Demo_DisappearCheckPointNum({'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Field1'})
                            if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
                                Event106:
                                EventSystemActor.Demo_ChangeScene({'WarpDestMapName': 'MainField/B-8', 'StartType': -1, 'IsWaitFinish': True, 'WarpDestPosName': 'Demo330_1_b2_010', 'EntryPointName': 'AfterGoal', 'EvflName': 'SunazarashiRace', 'FadeType': 2})
                            } else
                            if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Demo330_1'}) {
                                EventSystemActor.Demo_ChangeScene({'WarpDestMapName': 'MainField/B-8', 'StartType': -1, 'IsWaitFinish': True, 'EvflName': 'Demo330_1', 'EntryPointName': 'Hyoushou', 'WarpDestPosName': 'Demo330_1_2_010', 'FadeType': 2})
                            } else {
                                goto Event106
                            }
                        } else
                        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'SunazarashiRace_GateCnt', 'Operator': 'GreaterThanOrEqualTo', 'Value': 7}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Demo330_1'}) {
                                goto Event11
                            } else
                            if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_Finish'}) {
                                Npc_oasis039.Demo_TalkNoMessageStepper({'MessageId': 'DemoMsg/Demo330_1:NPC_GodVoice_Demo330_1_010', 'IsWaitFinish': False})
                                Event409:
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                                goto Event9
                            } else {
                                Npc_oasis039.Demo_TalkNoMessageStepper({'MessageId': 'DemoMsg/Demo330_1:NPC_GodVoice_Demo330_1_020', 'IsWaitFinish': False})
                                goto Event409
                            }
                        } else {
                            Npc_oasis039.Demo_TalkNoMessageStepper({'MessageId': 'DemoMsg/Demo330_1:NPC_GodVoice_Demo330_1_030', 'IsWaitFinish': False})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                            Npc_oasis039.Demo_TalkNoMessageStepper({'MessageId': 'DemoMsg/Demo330_1:NPC_GodVoice_Demo330_1_031', 'IsWaitFinish': False})
                            goto Event9
                        }
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'SunazarashiRace_mini_Demo330_1'}) {
                        goto Event401
                    } else {
                        EventSystemActor.Demo_AppearRaceResult({'IsWaitFinish': True, 'ResultType': 1})
                        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'Accept1FrameDelay': True, 'UniqueName': '', 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C50-1'})
                        GameROMPlayer.Demo_SunazarashiRaceGoal({'IsWaitFinish': False, 'ASName': 'Demo330_1-C06-Link-A-0'})
                        goto Event192
                    }
                } else {
                    EventSystemActor.Demo_AdvanceQuest({'QuestName': 'SunazarashiRace', 'StepName': 'Step3', 'IsWaitFinish': True, 'ForceRunTelop': False})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ChampionshipBallGenFlg'})
                    goto Event176
                }
            }
        }
    }
}

void Hyoushou() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'DemoBgm', 'Volume': 0.30000001192092896, 'FadeOutSec': 0.0, 'FadeInSec': 5.5, 'IsWaitFinish': True, 'ExceptGroups': '', 'StartDelaySec': 0.0})

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'EndFrame': 150.0, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C60-0'})
    } {
        Npc_oasis038.Demo_WarpToScheduleAnchor({'IsWaitFinish': False, 'UniqueName': '', 'AnchorName': 'AnchorAction3'})
        Npc_oasis038.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        Npc_oasis039.Demo_WarpToScheduleAnchor({'IsWaitFinish': False, 'AnchorName': 'AnchorAction4', 'UniqueName': ''})
        Npc_oasis039.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Act_Wander_Wait'})
    } {
        NPC_oasis061.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        NPC_oasis062.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        NPC_oasis063.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        NPC_oasis064.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        NPC_oasis065.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        NPC_oasis069.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        NPC_oasis070.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsOneTimeEndKeep': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        EventBgmCtrlTag.Demo_Start({'BgmName': 'GetTrophyBgm', 'IsWaitFinish': True})
    }

    EventSystemActor.Demo_WaitForCloseFade({'IsWaitFinish': True, 'OrClosing': False})
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C62-0', 'EndFrame': -1.0, 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo330_1:Npc_oasis038_Demo330_1_010', 'ASName': 'Demo330_1-C03-Npc_Gerudo_Champion-A-0'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    fork {
        Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo330_1:Npc_oasis038_Demo330_1_020', 'ASName': 'Demo330_1-C03-Npc_Gerudo_Champion-A-1'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C63-0', 'EndFrame': -1.0, 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

    fork {
        Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo330_1:Npc_oasis038_Demo330_1_030', 'IsCloseMessageDialog': False})
    } {
        NPC_oasis065.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo330_1-C01-UMii_Gerudo_W-C-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_oasis039.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ASName': 'Act_Wander_Wait', 'ClothWarpMode': -1})
    }

    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C67-0', 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'EndFrame': -1.0, 'ActorName': '', 'UniqueName': '', 'Accept1FrameDelay': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo330_1:Npc_oasis038_Demo330_1_031'})

    fork {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'EndFrame': 30.0, 'SceneName': 'C65-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    } {
        GameROMPlayer.Demo_PlayerDestinationMove({'StickValue': 0.0, 'DestPosX': -3772.0, 'DestPosZ': 3113.5, 'IsWaitFinish': True, 'DestPosY': 154.77000427246094})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 1, 'TurnDirection': 110.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
    } {
        Npc_oasis038.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 110.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'IsValid': True, 'FaceId': 2})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    Npc_oasis038.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo330_1:Npc_oasis038_Demo330_1_040', 'IsCloseMessageDialog': True, 'ASName': 'Demo330_1-C05-Npc_Gerudo_Champion-A-0'})
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C65-0', 'EndFrame': -1.0, 'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 30.0})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Applause', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    NPC_oasis061.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo330_1-C02-UMii_Gerudo_W-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    NPC_oasis070.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo330_1-C02-UMii_Gerudo_Y-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    NPC_oasis064.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo330_1-C02-UMii_Gerudo_W-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    NPC_oasis065.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo330_1-C02-UMii_Gerudo_W-C-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    NPC_oasis063.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo330_1-C02-UMii_Gerudo_W-D-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo330_1-C05-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    GameRomCamera.Demo_CameraAnimFlowAbs({'EndFrame': -1.0, 'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C66-0', 'StartFrame': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GetTrophyBgm', 'IsWaitFinish': True, 'FadeSec': 5.0})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Demo330_1'})

    fork {
        EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.08715800195932388, 'Pattern1PosY': 3.5271759033203125, 'Pattern1PosZ': -6.2763671875, 'Pattern1AtX': 0.02844199910759926, 'Pattern1AtY': 1.8054349422454834, 'Pattern1AtZ': -0.06005899980664253, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        Npc_oasis038.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
    } {
        Npc_oasis039.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 154.77999877929688, 'DirectionY': -70.0, 'IsWaitFinish': True, 'DestinationX': -3772.0, 'DestinationZ': 3113.5})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    }


    call SunazarashiRace.RaceFlagOFF()


    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SunazarashiRace_Step3'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}
