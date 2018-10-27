-------- EventFlow: Demo401_0 --------

Actor: Npc_ZoraB001[FirstPrince]
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_Talk', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_WarpToScheduleAnchor', 'Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_CallDemo', 'Demo_DeleteAllIceMakerForDemo']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckPlayerRideHorse', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_CameraAnimFlowAbs', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_Unequip', 'Demo_PlayerHorseGetOff', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayASAdapt', 'Demo_LookAtObjectNow', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo401_0() {
    if !EventSystemActor.CheckFlag({'FlagName': 'PrinceMeeting'}) {
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            Event137:
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo177_0', 'EntryPointName': 'Demo177_0', 'EndFade': 1})
            EventSystemActor.Demo_FlagON({'FlagName': 'PrinceMeeting', 'IsWaitFinish': True})
            EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationY': 119.69999694824219, 'DirectionY': 0.0, 'DestinationX': 2328.8798828125, 'DestinationZ': -267.9200134277344})
            Npc_ZoraB001[FirstPrince].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

            fork {
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsIgnoreSame': True, 'NoErrorCheck': True, 'ClothWarpMode': -1})
            } {

                call camera_intro()

            } {
                Npc_ZoraB001[FirstPrince].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventBgmCtrlTag.Demo_Start({'BgmName': 'ZoraPrinceTalkBgm', 'IsWaitFinish': True})
            Fader.Demo_FadeIn({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})

            fork {
                Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_003', 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Surprise'})
                Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_021'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})

                call camera_2shotMiddle_closing()

                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            }

            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})

            call camera_S_close()


            fork {
                Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_019', 'ASName': 'Talk_Prince_Special', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 23})
                Npc_ZoraB001[FirstPrince].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth', 'IsTargetDemoSLinkUser': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                Npc_ZoraB001[FirstPrince].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth'})
            }

            GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

            call camera_2shotMiddle_Stop()

            Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_017', 'IsCloseMessageDialog': True, 'ASName': '', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'TalkingS', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'IsWaitFinish': True, 'IsIgnoreSame': True, 'ClothWarpMode': -1})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Talk', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'IsIgnoreSame': True, 'ClothWarpMode': -1})

            call camera_2shotClose()

            Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_011', 'ASName': 'Talk_Prince_Surprise'})
            Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_022', 'ASName': 'Talk_Prince_Think_Surprise'})
            Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_023', 'ASName': 'Talk_Prince_Normal'})
            Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_020', 'ASName': 'Talk_Prince_Normal'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_004', 'ASName': 'Talk_Prince_Surprise'})
                Event4:
                Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_006', 'ASName': 'Talk_Prince_Joy'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_007', 'ASName': 'Talk_Prince_Surprise'})
                    Event116:
                    Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_012', 'ASName': 'Talk_Prince_Joy'})

                    fork {
                        Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_016', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False})
                        Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_013', 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False})
                        Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_028'})
                    } {

                        call camera_RoadToCity()

                    }

                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

                    call camera_S_close()


                    fork {
                        Npc_ZoraB001[FirstPrince].Demo_Talk({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_018', 'ASName': 'Talk_Prince_Special', 'IsCloseMessageDialog': True, 'IsWaitFinish': True})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 23})
                        Npc_ZoraB001[FirstPrince].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth', 'IsTargetDemoSLinkUser': False})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                        Npc_ZoraB001[FirstPrince].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth'})
                    }


                    call camera_2shotClose()

                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {
                        Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Prince_Normal', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_024', 'IsCloseMessageDialog': False})

                        call camera_2shotMiddle_Stop()

                        Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_025', 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Joy'})
                        SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'DemoBgm', 'Volume': 0.10000000149011612, 'FadeOutSec': 0.20000000298023224, 'FadeInSec': 1.0, 'IsWaitFinish': True, 'ExceptGroups': '', 'StartDelaySec': 0.0})

                        call Demo001_0.SetCookResult3WithNum({'CookMaterial_01': 'Animal_Insect_I', 'CookMaterial_02': 'Animal_Insect_I', 'CookMaterial_03': 'Item_Enemy_03', 'SetNum': 1})

                        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})

                        call camera_2shotClose()

                        Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_026', 'IsCloseMessageDialog': False, 'ASName': 'Talk_Prince_Joy'})
                        Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Prince_Normal', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_027', 'IsCloseMessageDialog': False})
                        Event213:
                        Npc_ZoraB001[FirstPrince].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Normal', 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_010'})
                        Npc_ZoraB001[FirstPrince].Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'Wait', 'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False})

                        call camera_birdeye()


                        fork {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                            Npc_ZoraB001[FirstPrince].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo401_0-C01-Npc_Zora_Prince-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                            EventBgmCtrlTag.Demo_Stop({'BgmName': 'ZoraPrinceTalkBgm', 'FadeSec': 5.0, 'IsWaitFinish': True})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 73})
                            Npc_ZoraB001[FirstPrince].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Splash', 'SLinkKey': 'Demo_Splash', 'IsTargetDemoSLinkUser': False})
                            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
                            GameROMPlayer.Demo_LookAtObjectNow({'ObjectId': 2, 'FaceId': 1, 'IsValid': True, 'TurnDirection': -90.0, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
                            Npc_ZoraB001[FirstPrince].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo_Splash', 'SLinkKey': ''})
                        } {
                            EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 32})
                            EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
                        }

                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.412476062774658, 'Pattern1PosY': 1.8939290046691895, 'Pattern1PosZ': -4.797606945037842, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.8000030517578125, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        EventSystemActor.Demo_FlagON({'FlagName': 'GotoZoraVillage_Activated', 'IsWaitFinish': True})
                    } else {

                        call camera_2shotClose()

                        goto Event213
                    }
                } else {
                    Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_008', 'ASName': 'Talk_Wait'})
                    goto Event116
                }
            } else {
                Npc_ZoraB001[FirstPrince].Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_R_005', 'ASName': 'Talk_Prince_Surprise'})
                goto Event4
            }
        } else {
            goto Event137
        }
    }
}

void camera_intro() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C50-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_RoadToCity() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'SceneName': 'C56-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_birdeye() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'SceneName': 'C54-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'TargetActor': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_2shotMiddle_closing() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C51-0', 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_2shotClose() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C52-0', 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_S_close() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C53-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_2shotMiddle_Stop() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C51-0', 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 240.0, 'EndFrame': 245.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_splash() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C55-0', 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': '', 'UniqueName': '', 'Accept1FrameDelay': False})
}
