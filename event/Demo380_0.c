-------- EventFlow: Demo380_0 --------

Actor: Npc_Kakariko001
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_BecomeSpeaker', 'Demo_LookAtTheFront', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_NotifyTalk', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_SheikerInpaDoor_A_01
entrypoint: None()
actions: ['Demo_DoorOpenAndClose']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerWait', 'Demo_Talk', 'Demo_Unequip', 'Demo_PlayerDestinationMove', 'Demo_LookAtObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayer', 'Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_AdvanceQuest', 'Demo_WarpPlayerToDestination']
queries: ['CheckFlag', 'GeneralChoice2', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_ReserveConnectTime', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[a]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: AncientBall_Kakariko[Hoju01]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void FirstDemo() {
    Event13:
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.130676031112671, 'Pattern1PosY': 1.9157869815826416, 'Pattern1PosZ': -0.10485800355672836, 'Pattern1AtX': -0.8452150225639343, 'Pattern1AtY': 1.474105954170227, 'Pattern1AtZ': 2.84716796875, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko001', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'Pattern1Fovy': 32.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationY': 228.91000366210938, 'DestinationZ': 984.4299926757812, 'DirectionY': -90.0, 'DestinationX': 1783.9000244140625})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DoorPushDouble', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': True, 'IsOneTimeEndKeep': True, 'IsWaitFinish': True})
    } {
        TwnObj_Village_SheikerInpaDoor_A_01.Demo_DoorOpenAndClose({'DynASKey': 'In', 'DynIsOpen': True, 'DynIsOpenToInside': True, 'DynOwner': ActorIdentifier(name="GameROMPlayer"), 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    } {
        AncientBall_Kakariko[Hoju01].Demo_Join({'IsWaitFinish': True})
    }

    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'IsIgnoreSame': False, 'ClothWarpMode': 1})
    GameROMPlayer.Demo_LookAtObjectNow({'ActorName': 'Npc_Kakariko001', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0})
    Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Talk_EyeCloseWait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.1762700080871582, 'Pattern1PosY': 1.9157869815826416, 'Pattern1PosZ': -1.8487550020217896, 'Pattern1AtX': -0.8907470107078552, 'Pattern1AtY': 1.474105954170227, 'Pattern1AtZ': 1.1032710075378418, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko001', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Cushion': 30.0, 'IsWaitFinish': False, 'StartCalcOnly': True, 'Count': 180.0, 'Pattern1Fovy': 32.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'World', 'ExceptGroups': 'Player,Npc', 'Volume': 0.0, 'FadeOutSec': 5.0, 'FadeInSec': 3.0, 'StartDelaySec': 0.0, 'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'Npc_Kakariko001', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'SceneName': 'C51-0', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    Npc_Kakariko001.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Talk_EyeCloseWait', 'MorphingFrame': 0.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
    SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    Npc_Kakariko001.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo_FirstTalk00', 'ClothWarpMode': -1})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:FirstTalk00', 'IsBecomingSpeaker': True, 'CloseDialogOption': 1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    Event16:
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko001_Talk'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_KakarikoWarrior_Open', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Kakariko005_First', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Find_Impa_Sayonara00'}) {
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:FirstTalk02', 'IsCloseMessageDialog': False})
        if !EventSystemActor.GeneralChoice2() {

            call camera_impa_shouldershot()

            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko001:hime00'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Talk_EyeCloseWait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Kakariko001:FirstTalk05'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Talk_EyeCloseWait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            call Npc_Kakariko001.Demo_1man-nen-mae()


            call camera_birdeye()

            Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Talk_EyeCloseWait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})

            call camera_impa_shouldershot()

            EventBgmCtrlTag.Demo_Start({'BgmName': 'ImpaDemoBgm', 'IsWaitFinish': True})
            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:FirstTalk07'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            call camera_impa_closeup()

            Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Kotoba00'})

            call camera_sideshot_middle()

            if !EventSystemActor.GeneralChoice2() {

                call Npc_Kakariko001.Explain_Shinju()

                Event60:
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_4thClear'}) {
                    EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'IsWaitFinish': True, 'QuestName': 'Find_4Relic', 'StepName': 'Finish'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 120, 'IsWaitFinish': True})
                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Shinju02'})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'IsWaitFinish': True, 'QuestName': 'Find_4Relic', 'StepName': ''})
                    EventSystemActor.Demo_WaitFrame({'Frame': 120, 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko001_DirectComp_Find_4Relic'})
                    Event89:

                    fork {

                        call camera_impa_shouldershot()

                    } {
                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:kioku_00'})
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    }


                    fork {

                        call camera_stone_closeup()

                    } {
                        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:kioku_01'})
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    }


                    call camera_impa_shouldershot()

                    Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:kioku_02'})
                    if !EventSystemActor.GeneralChoice2() {

                        call Npc_Kakariko001.Explain_Hateno()

                        Event59:
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'IsWaitFinish': True, 'StepName': '', 'QuestName': 'CarryingBlueFireEXMini'})
                        EventSystemActor.Demo_WaitFrame({'Frame': 120, 'IsWaitFinish': True})

                        call camera_impa_shouldershot()


                        call Npc_Kakariko001.Conclusion_B()

                        EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'IsWaitFinish': True, 'QuestName': 'Find_Impa', 'StepName': ''})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko001_TalkEnd'})
                        GameRomCamera.Demo_ReserveConnectTime({'InterpolateTime': 0.0, 'IsWaitFinish': True})
                        EventBgmCtrlTag.Demo_Stop({'BgmName': 'ImpaDemoBgm', 'FadeSec': 3.0, 'IsWaitFinish': True})
                    } else {
                        goto Event59
                    }
                } else {
                    EventSystemActor.Demo_AdvanceQuest({'ForceRunTelop': True, 'IsWaitFinish': True, 'StepName': '', 'QuestName': 'Find_4Relic'})
                    EventSystemActor.Demo_WaitFrame({'Frame': 120, 'IsWaitFinish': True})
                    goto Event89
                }
            } else {
                goto Event60
            }
        } else {

            call Npc_Kakariko001.Camera_2ppl_normal()

            if !EventSystemActor.RandomChoice2() {
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Sayonara01', 'IsCloseMessageDialog': False})
                Event97:
                GameRomCamera.Demo_ReserveConnectTime({'InterpolateTime': 0.0, 'IsWaitFinish': True})
            } else {
                Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Sayonara00', 'IsCloseMessageDialog': False})
                goto Event97
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko001_Talk'})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 210})
            EventBgmCtrlTag.Demo_Start({'BgmName': 'ImpaDemoBgm', 'IsWaitFinish': True})
            Fader.Demo_FadeOut({'Frame': 1, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

            call camera_I_shoulder_L()

            Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'Frame': 2, 'IsWaitFinish': True})
        } {
            NPC_CaptionVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:FirstTalk01', 'IsBecomingSpeaker': True, 'IsWaitFinish': False})
        } {
            Npc_Kakariko001.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo_FirstTalk01', 'ClothWarpMode': -1})
        }


        call camera_I_shoulder_L()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

        call camera_link_fullshot()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Anataha00', 'IsCloseMessageDialog': True})
        EventSystemActor[a].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call camera_impa_closeup()

        EventSystemActor[a].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Anataha03', 'IsCloseMessageDialog': True})

        call camera_birdeye()

        GameROMPlayer.Demo_PlayerDestinationMove({'DestPosX': 1774.949951171875, 'DestPosY': 228.9199981689453, 'DestPosZ': 984.4000244140625, 'StickValue': 0.30000001192092896, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})

        call camera_impa_closeup()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 1774.949951171875, 'DestinationY': 228.9199981689453, 'DestinationZ': 984.4000244140625, 'DirectionY': 260.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

        call INT_camera_impa_shouldershot()

        Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Talk_EyeCloseWait', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        TwnObj_Village_SheikerInpaDoor_A_01.Demo_DoorOpenAndClose({'DynIsOpenToInside': True, 'IsWaitFinish': False, 'DynOwner': ActorIdentifier(name="GameROMPlayer"), 'DynASKey': 'InClose', 'DynIsOpen': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_Kakariko001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Anataha06', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Npc_Kakariko001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Anataha07', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Npc_Kakariko001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Anataha08', 'IsWaitFinish': True, 'ASName': ''})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

        call camera_impa_closeup()

        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Anataha01', 'ASName': ''})

        call camera_impa_closeup()

        Npc_Kakariko001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko001:Anataha02', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Find_Impa_Sayonara00'})
        EventBgmCtrlTag.Demo_Stop({'BgmName': 'ImpaDemoBgm', 'FadeSec': 3.0, 'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    }
}

void camera_impa_closeup() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko001', 'AtAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'PosAppendMode': 2, 'Pattern1PosX': -0.6812739968299866, 'Pattern1AtX': 0.9804689884185791, 'Pattern1AtY': 0.8905180096626282, 'Pattern1AtZ': -0.9323729872703552, 'Pattern1PosY': 1.0239559412002563, 'Pattern1PosZ': 1.561279058456421, 'Pattern1Fovy': 30.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_I_shoulder_L() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.1412960290908813, 'Pattern1PosY': 2.210236072540283, 'Pattern1PosZ': 11.7274169921875, 'Pattern1AtX': 0.11694300174713135, 'Pattern1AtY': 1.6260989904403687, 'Pattern1AtZ': 8.97021484375, 'Pattern1Fovy': 26.909765243530273, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_impa_shouldershot() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko001', 'AtAppendMode': 2, 'Pattern1Fovy': 33.0, 'PosAppendMode': 2, 'Pattern1PosX': -0.8980100154876709, 'Pattern1PosY': 1.004073977470398, 'Pattern1PosZ': 2.834717035293579, 'Pattern1AtX': -0.3916020095348358, 'Pattern1AtY': 0.8796539902687073, 'Pattern1AtZ': 1.7543950080871582, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_sideshot_middle() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko001', 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': -4.17706298828125, 'Pattern1PosY': 1.3129730224609375, 'Pattern1PosZ': 2.718384027481079, 'Pattern1AtX': -1.4140009880065918, 'Pattern1AtY': 0.7756959795951843, 'Pattern1AtZ': 1.6813960075378418, 'Pattern1Fovy': 31.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_stone_closeup() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'TargetActor1': 1, 'ActorName1': 'GameROMPlayer', 'Pattern1Fovy': 31.0, 'Pattern1PosX': 0.5474849939346313, 'Pattern1PosY': 1.4703220129013062, 'Pattern1PosZ': 0.6864010095596313, 'Pattern1AtX': 0.05017099902033806, 'Pattern1AtY': 0.5732570290565491, 'Pattern1AtZ': 0.06530799716711044, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_birdeye() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1782.2183837890625, 'Pattern1PosY': 232.63917541503906, 'Pattern1PosZ': 989.8400268554688, 'Pattern1AtX': 1781.44580078125, 'Pattern1AtY': 232.24244689941406, 'Pattern1AtZ': 989.0130615234375, 'Pattern1Fovy': 33.000022888183594, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_link_fullshot() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 30.0, 'Pattern1PosX': 0.3150019943714142, 'Pattern1PosY': 1.936187982559204, 'Pattern1PosZ': 4.188354015350342, 'Pattern1AtX': 0.05419899895787239, 'Pattern1AtY': 1.12841796875, 'Pattern1AtZ': 1.312011957168579, 'TargetActor1': 1, 'ActorName1': 'GameROMPlayer', 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void INT_camera_impa_shouldershot() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': False, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko001', 'AtAppendMode': 2, 'Pattern1Fovy': 33.0, 'PosAppendMode': 2, 'Pattern1PosX': -0.8980100154876709, 'Pattern1PosY': 1.004073977470398, 'Pattern1PosZ': 2.834717035293579, 'Pattern1AtX': -0.3916020095348358, 'Pattern1AtY': 0.8796539902687073, 'Pattern1AtZ': 1.7543950080871582, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'ActorIgnoringCollision': -1, 'Cushion': 90.0, 'Count': 90.0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void FirstTalk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko001_Talk'}) {
        Npc_Kakariko001.Demo_BecomeSpeaker({'IsWaitFinish': True})
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})

        fork {
            SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'ClothWarpMode': 1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'G-6', 'WarpDestPosName': 'Npc_Impa'})
        } {

            call Npc_Kakariko001.Camera_2ppl_normal()

        }

        Npc_Kakariko001.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
        goto Event16
    } else {
        goto Event13
    }
}

void CloseTo_L() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': True, 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C00-0', 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
}

void CloseTo_I() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C01-0', 'TargetActor': 3, 'ActorName': 'Npc_Kakariko001', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
}
