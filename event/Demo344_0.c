-------- EventFlow: Demo344_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject', 'Demo_PlayerHorseGetOff', 'Demo_PlayerGoStraightAhead', 'Demo_LookAtTheFront', 'Demo_PlayASAdapt', 'Demo_Talk', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_CloseMessageDialog', 'Demo_DeleteAllIceMakerForDemo', 'Demo_EnableCameraInput']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckAddPorchItem', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_NotifyTalk', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialog', 'Demo_LookAtObject', 'Demo_ChangeEmotion', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_CameraAnimFlow', 'Demo_GameCamera', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora004[Daijin01]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_OpenMessageDialogTrig', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[Prince01]
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_PlayASForDemo', 'Demo_MoveToAnchor', 'Demo_LookAtTheFront', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora015
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[another_system]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo_Prince]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Demo_Link]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall', 'Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora014
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora032
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora011[Town]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora009
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora012
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo344_0() {

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {

            call DemoInitialize()


            fork {

                call Demo_intro()

                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_003', 'ASName': 'Talk_Hello', 'IsCloseMessageDialog': False})
                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_038', 'ASName': ''})

                call camera_D_closeup_center()

                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_039', 'ASName': ''})
            } {
                GameROMPlayer.Demo_PlayerGoStraightAhead({'DestPosX': 3333.610107421875, 'DestPosY': 270.6716003417969, 'DestPosZ': -541.2423095703125, 'StickValue': 0.0, 'IsWaitFinish': True})
            }

            Event508:

            call camera_L_full()

            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_004', 'IsCloseMessageDialog': True})

            call camera_L_close()

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})

                call camera_D_talkto_L_low()

                Npc_ZoraB001[Prince01].Demo_LookAtObject({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': 'GameROMPlayer'})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            } {
                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_025', 'ASName': '', 'IsCloseMessageDialog': True})
            }

            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
            if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {

                fork {
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_010'})
                } {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 26})
                    Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

                    call camera_S_talkto_L()

                    Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'GameROMPlayer', 'UniqueName': ''})
                }

            }

            call camera_D_shoulder_link()

            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsWaitFinish': False, 'ASName': 'Talk'})
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_026', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'TalkingL', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})

                call camera_D_talktoL_low_left()


                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 2})
                } {
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_005', 'ASName': 'Talk_Surprised'})
                }

                Event34:
                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_007', 'ASName': '', 'IsCloseMessageDialog': True})
                if EventSystemActor.GeneralChoice2() in [0, 1] {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'TalkingS', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
                    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'Talk', 'IsWaitFinish': False})
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_008', 'IsCloseMessageDialog': True, 'ASName': 'Talk_Sad'})

                    call camera_M_statue()

                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_035', 'IsCloseMessageDialog': True, 'ASName': ''})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                    call camera_D_shoulder_link()

                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_020'})

                    call camera_S_closeup()

                    Npc_ZoraB001[Prince01].Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora003', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 1, 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})

                    fork {
                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_006'})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                        Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'TurnDirection': 0.0, 'TurnPosition': [3340.77001953125, 271.6300048828125, -549.6900024414062], 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0]})
                        Npc_Zora003.Demo_ChangeEmotion({'IsWaitFinish': False, 'IsOnlyFace': True, 'EmotionType': 'Normal'})
                    } {
                        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': 0, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'Talk'})
                    }


                    call camera_S_closeup_to_2shot()

                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_029', 'ASName': 'Talk_Yes'})
                    Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 180.0, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0]})

                    call camera_D_shoulder_link()

                    if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_010', 'ASName': ''})
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_033', 'ASName': '', 'IsBecomingSpeaker': False})
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_045', 'ASName': 'Laugh'})
                        Event249:

                        fork {
                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_032'})
                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_011', 'IsCloseMessageDialog': True})
                        } {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                            Npc_ZoraB001[Prince01].Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora003', 'ObjectId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                        }

                        Npc_Zora004[Daijin01].Demo_LookAtObject({'ActorName': 'Npc_Zora003', 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 1, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
                        Npc_Zora004[Daijin01].Demo_Talk({'ASName': 'Talk_Surprise_Small', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_R_008', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})

                        fork {
                            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'ActorName': 'Npc_Zora003', 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 1, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                        } {

                            call camera_M_talkabout_link()

                        }


                        fork {
                            Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_R_001', 'IsCloseMessageDialog': True})
                        } {
                            Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': 'Npc_Zora004', 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': 'Daijin01'})
                            Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_Zora004', 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'UniqueName': 'Daijin01'})
                        }


                        call camera_D_talkto_M()

                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_012', 'IsCloseMessageDialog': True})

                        call camera_D_talkto_M_pan()

                        if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
                            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_003', 'IsCloseMessageDialog': False})
                        } else {
                            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Normal', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_008'})
                        }
                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_004', 'IsCloseMessageDialog': True, 'ASName': 'Talk'})

                        call camera_4shot_back()

                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_021', 'IsCloseMessageDialog': True, 'ASName': 'Talk'})

                        call camera_M_sad()

                        Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_R_002', 'IsCloseMessageDialog': True, 'ASName': 'Demo344_0-C01-Npc_Zora_Priest-A-1'})

                        fork {
                            Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_R_005', 'IsCloseMessageDialog': True, 'ASName': 'Demo344_0-C01-Npc_Zora_Priest-A-1'})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                            Npc_Zora004[Daijin01].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'Demo344_0-C01-Npc_Zora_Priest-A-5', 'ClothWarpMode': -1})

                            call camera_M_sad_turn()

                            Npc_Zora004[Daijin01].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1, 'IsIgnoreSame': True})
                        } {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 113})
                        }

                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'ObjectId': 2, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'TurnDirection': 0.0, 'TurnPosition': [3330.6201171875, 269.260009765625, -548.969970703125], 'IsValid': False, 'IsWaitFinish': True})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                        Npc_Zora003.Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1})
                        Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_R_006'})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                        call camera_4shot_back()


                        fork {
                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_013', 'IsCloseMessageDialog': True})
                        } {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                            Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                        }

                        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'RemainsWater_Vo_Cry'})
                        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 2, 'IsWait': False})
                        EventCameraRumble.Demo_RotRumble({'IsWaitFinish': True, 'Power': 1.0, 'Count': 1, 'Pattern': 4})
                        Npc_ZoraB001[Prince01].Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': 'AnchorAction10', 'ObjectId': 2, 'IsValid': True, 'IsWaitFinish': False, 'FaceId': 2, 'TurnPosition': [3662.39990234375, 273.1099853515625, -175.4199981689453], 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0]})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
                        GameROMPlayer.Demo_LookAtObject({'TurnPosition': [3662.39990234375, 273.1099853515625, -175.4199981689453], 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 90.0, 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 7})
                        Npc_Zora003.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Look_L', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                        Npc_Zora003.Demo_LookAtObject({'TurnDirection': 0.0, 'IsWaitFinish': False, 'ActorName': 'AnchorAction10', 'ObjectId': 2, 'TurnPosition': [3662.39990234375, 273.1099853515625, -175.4199981689453], 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 0})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                        Npc_Zora004[Daijin01].Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': 'AnchorAction10', 'ObjectId': 2, 'TurnPosition': [3662.39990234375, 273.1099853515625, -175.4199981689453], 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0]})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                        fork {
                            GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': -1.0, 'SceneName': 'C01-5', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
                        } {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'DemoWait'})
                            Npc_Zora003.Demo_OpenMessageDialog({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_015', 'IsWaitFinish': False, 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 105})
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                            Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 1, 'DispMode': 'Auto'})
                        } {
                            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': 'AnchorAction10', 'ObjectId': 2, 'TurnPosition': [3662.39990234375, 273.1099853515625, -175.4199981689453], 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                        }

                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo112_0', 'EntryPointName': '', 'EndFade': 0})
                        if EventSystemActor.CheckFlag({'FlagName': 'Find_Impa_Finish'}) {
                            Event522:

                            call camera_D_talktoL_low_left()

                            Fader.Demo_FadeIn({'Color': 1, 'Frame': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
                            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade'})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                            Npc_Zora003.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Wait', 'ClothWarpMode': -1})
                            Npc_Zora003.Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

                            fork {
                                if EventSystemActor.CheckFlag({'FlagName': 'Find_Impa_Finish'}) {
                                    Event48:
                                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_016', 'IsCloseMessageDialog': True})
                                } else
                                if EventSystemActor.CheckFlag({'FlagName': '3Relic_ZeldaVoice'}) {
                                    goto Event48
                                } else {
                                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_040'})
                                    if !EventSystemActor.GeneralChoice2() {
                                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'TalkingS', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
                                        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsWaitFinish': False, 'ASName': 'Talk'})

                                        fork {
                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                            EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 2})
                                        } {
                                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_041', 'ASName': 'Talk_Surprised', 'IsCloseMessageDialog': True})
                                        }

                                        if !EventSystemActor.GeneralChoice2() {
                                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ASName': 'TalkingL', 'NoErrorCheck': False, 'ClothWarpMode': -1})
                                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_042', 'ASName': '', 'IsCloseMessageDialog': True})
                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_043', 'IsCloseMessageDialog': False})
                                            goto Event48
                                        }
                                    }
                                }
                            } {
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_Zora003', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False, 'IsUseSlowTurn': True, 'IsValid': True, 'IsWaitFinish': True})
                                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ASName': 'Talk', 'ClothWarpMode': -1})
                                Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                            }


                            call camera_S_talkto_L()

                            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'IsValid': True})
                            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_001', 'IsCloseMessageDialog': True, 'ASName': ''})

                            call camera_S_posing()


                            fork {
                                Npc_ZoraB001[Prince01].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_002', 'ASName': 'Talk_Prince_Special', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                            } {
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 23})
                                Npc_ZoraB001[Prince01].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth', 'IsTargetDemoSLinkUser': False})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                                Npc_ZoraB001[Prince01].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth'})
                            }


                            call camera_S_talkto_L()

                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                            if EventSystemActor.CheckFlag({'FlagName': 'Find_Impa_Finish'}) {
                                Event709:
                                Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_005'})
                                if !EventSystemActor.GeneralChoice2() {
                                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'TalkingS', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
                                    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsWaitFinish': False, 'ASName': 'Talk'})

                                    call camera_D_talktoL_low_left()


                                    fork {

                                        fork {
                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                                            EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
                                        } {
                                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprised', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_044'})
                                        }

                                    } {
                                        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_Zora003', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': False})
                                    }

                                    if !EventSystemActor.GeneralChoice2() {
                                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ASName': 'TalkingL', 'NoErrorCheck': False, 'ClothWarpMode': -1})
                                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_042', 'ASName': '', 'IsCloseMessageDialog': True})

                                        call camera_S_talkto_L()

                                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_012', 'ASName': ''})

                                        call camera_S_posing()


                                        fork {
                                            Npc_ZoraB001[Prince01].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Prince_Special', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_013'})
                                        } {
                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 23})
                                            Npc_ZoraB001[Prince01].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth', 'IsTargetDemoSLinkUser': False})
                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                                            Npc_ZoraB001[Prince01].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth'})
                                        }


                                        call camera_S_talkto_L()

                                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_014', 'ASName': ''})
                                        Event315:
                                        if !EventSystemActor.GeneralChoice2() {
                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

                                            call camera_4shot_back()

                                            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_Zora003', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': False})
                                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_014', 'IsCloseMessageDialog': True})

                                            fork {
                                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
                                                Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'ActorName': 'Npc_Zora003', 'TurnDirection': 0.0, 'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                                                Npc_Zora004[Daijin01].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ASName': 'Demo344_0-C01-Npc_Zora_Priest-A-1', 'ClothWarpMode': -1})
                                            } {
                                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Armor_006_Upper'}) {

                                                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Armor_006_Upper'})

                                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_ArmorSend'})
                                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Armor_Get'})
                                                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_034', 'ASName': 'Talk'})
                                                } else {
                                                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_030'})
                                                }
                                            }


                                            fork {
                                                Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_R_003', 'IsCloseMessageDialog': True, 'ASName': 'Demo344_0-C01-Npc_Zora_Priest-A-6'})
                                            } {

                                                call camera_M_talkabout_link()

                                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
                                                GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'IsValid': True})
                                                Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': 'Npc_Zora004', 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'UniqueName': 'Daijin01'})
                                            }

                                            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})

                                            call camera_M_leave()

                                            Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Demo344_0-C01-Npc_Zora_Priest-A-0', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_R_007', 'IsCloseMessageDialog': False})
                                            Npc_Zora004[Daijin01].Demo_OpenMessageDialogTrig({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_R_004', 'IsWaitFinish': False, 'CloseDialogOption': 3})
                                            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 1, 'ActorName': 'DestinationAnchor', 'UniqueName': 'Walk01', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                                            Npc_Zora004[Daijin01].Demo_MoveToAnchor({'AnchorUniqueName': 'Walk01', 'IsWaitFinish': False, 'AnchorName': 'DestinationAnchor', 'ASKeyName': 'Demo344_0-C01-Npc_Zora_Priest-A-3', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
                                            EventSystemActor[another_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

                                            fork {
                                                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_022'})
                                                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_036', 'ASName': 'Talk_Sad'})
                                            } {
                                                EventSystemActor[another_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                                                Npc_Zora004[Daijin01].Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                                            } {

                                                call camera_4shot_back()

                                                GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': False})
                                            }

                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                            Npc_Zora003.Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
                                            Npc_Zora004[Daijin01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': 'DaijinWarp'})
                                            Npc_Zora004[Daijin01].Demo_PlayASForDemo({'IsEnabledAnimeDriven': -1, 'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                                            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_017', 'IsCloseMessageDialog': True})

                                            call camera_S_talkto_L()

                                            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_007'})
                                            Npc_ZoraB001[Prince01].Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
                                            SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'NpcVoice', 'FadeOutSec': 0.10000000149011612, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeInSec': 0.5})
                                            Npc_ZoraB001[Prince01].Demo_MoveToAnchor({'IsWaitFinish': False, 'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'PrinceGo02', 'IsTurnToAnchorDir': False, 'ASKeyName': 'Run', 'IsAlignmentAnchor': False})
                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})

                                            call camera_S_leave()

                                            Npc_ZoraB001[Prince01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'PrinceGo02'})
                                            Npc_ZoraB001[Prince01].Demo_MoveToAnchor({'IsWaitFinish': False, 'AnchorUniqueName': 'PrinceGo03', 'AnchorName': 'DestinationAnchor', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                                            Npc_Zora003.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_028', 'IsWaitFinish': True})
                                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                            SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
                                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

                                            call camera_4shot_back()

                                            Npc_ZoraB001[Prince01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction4'})
                                            Npc_ZoraB001[Prince01].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': 1})
                                            if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Activated'}) {
                                                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_023', 'ASName': 'Talk'})
                                                GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                                                Event801:
                                                Npc_Zora015.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
                                                EventSystemActor.Demo_FlagON({'FlagName': 'Water_Relic_Activated', 'IsWaitFinish': True})
                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BoysNotRun'})
                                            } else {
                                                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_023', 'ASName': 'Talk', 'IsCloseMessageDialog': False})
                                                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_046'})
                                                GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GotoZoraVillage_Activated'})
                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GotoZoraVillage_Step1'})
                                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GotoZoraVillage_Finish'})
                                                goto Event801
                                            }
                                        }
                                    }
                                }
                            } else
                            if EventSystemActor.CheckFlag({'FlagName': '3Relic_ZeldaVoice'}) {
                                goto Event709
                            } else {
                                Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_R_011'})
                                goto Event315
                            }
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo051_0'}) {
                            goto Event522
                        } else {
                            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 1, 'SceneName': 'C01-2', 'IsWaitFinish': False, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo051_0', 'EntryPointName': 'Demo051_0_Water'})
                            goto Event522
                        }
                    } else {
                        goto Event249
                    }
                }
            } else {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'TalkingL', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})

                call camera_D_talktoL_low_left()


                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 2})
                } {
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_006', 'ASName': 'Talk_Surprised'})
                }

                goto Event34
            }
        } else {

            call NoSidoTalk()

        }
    } else {

        call DemoInitialize()


        fork {

            call Demo_intro()

            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_002', 'ASName': 'Talk_Hello', 'IsCloseMessageDialog': False})

            call camera_D_closeup_center()

            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_037', 'ASName': ''})
        } {
            GameROMPlayer.Demo_PlayerGoStraightAhead({'DestPosX': 3333.610107421875, 'DestPosY': 270.6716003417969, 'DestPosZ': -541.2423095703125, 'StickValue': 0.0, 'IsWaitFinish': True})
        }

        goto Event508
    }
}

void DemoInitialize() {
    Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
    }
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 153.95700073242188, 'DestinationY': 268.6499938964844, 'DestinationX': 3328.9599609375, 'DestinationZ': -531.1599731445312})
    Npc_ZoraB001[Prince01].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': -68.0, 'DestinationX': 3340.260009765625, 'DestinationZ': -541.3499755859375, 'DestinationY': 269.9700012207031})
    Npc_Zora004[Daijin01].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 13.0, 'DestinationX': 3329.6298828125, 'DestinationY': 269.4700012207031, 'DestinationZ': -546.2999877929688})

    fork {
        Npc_ZoraB001[Prince01].Demo_PlayASForDemo({'ASName': 'Wait', 'ClothWarpMode': 1, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False})
        Npc_ZoraB001[Prince01].Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        Npc_Zora003.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
        Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'IsValid': True, 'ObjectId': 0, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_Zora003', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    } {
        Npc_Zora004[Daijin01].Demo_PlayASForDemo({'ASName': 'Wait', 'ClothWarpMode': 1, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False})
        Npc_Zora004[Daijin01].Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
    }

    Fader.Demo_FadeIn({'Frame': 2, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': False})
}

void NoSidoTalk() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'ActorName1': '', 'UniqueName1': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 1, 'PosAppendMode': 2, 'Pattern1Fovy': 50.0, 'Pattern1PosZ': -3.0, 'MotionMode': 1, 'Pattern1PosY': 0.0, 'Pattern1PosX': 1.0, 'Cushion': 0.6000000238418579, 'Count': 8.0, 'AtAppendMode': 3, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1AtY': 8.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'TargetActor2': 3, 'ActorName2': 'Npc_Zora003', 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    }

    Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'IsValid': True, 'ObjectId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 2})
    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_R_001'})
}

void camera_4shot_back() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Npc_Zora003', 'SceneName': 'C50-0', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2})
}

void camera_D_closeup_right() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Npc_Zora003', 'IsWaitFinish': False, 'SceneName': 'C50-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_L_full() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'ActorName': 'GameROMPlayer', 'TargetActor': 1, 'SceneName': 'C51-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_D_talkto_L_low() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'SceneName': 'C50-2', 'TargetActor': 3, 'ActorName': 'Npc_Zora003', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_M_statue() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C54-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_S_closeup_to_2shot() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'TargetActor': 3, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'SceneName': 'C52-0', 'EndFrame': -1.0, 'StartFrame': 10.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_S_closeup() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'TargetActor': 3, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'SceneName': 'C52-0', 'EndFrame': 10.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_M_middle() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': True, 'TargetActor': 3, 'SceneName': 'C53-0', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_D_talktoL_low_left() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_Zora003', 'SceneName': 'C50-3', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_M_talkabout_link() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': True, 'TargetActor': 3, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_Zora003', 'TargetActorDirReferenceMode': 1, 'SceneName': 'C53-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_D_talkto_M() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_Zora003', 'EndFrame': 5.0, 'SceneName': 'C50-4', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_D_talkto_M_pan() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_Zora003', 'EndFrame': -1.0, 'SceneName': 'C50-4', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_D_shoulder_link() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_Zora003', 'EndFrame': -1.0, 'SceneName': 'C50-5', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_M_sad() {
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_Zora003', 'TargetActorDirReferenceMode': 1, 'SceneName': 'C53-2', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 5.0})
}

void camera_M_pass_L() {
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'IsWaitFinish': False, 'SceneName': 'C53-4', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'StartFrame': 0.0, 'EndFrame': 120.0})
}

void Demo_intro() {

    call camera_birdeye()

    GameROMPlayer.Demo_LookAtTheFront({'IsValid': True, 'IsWaitFinish': True})
    Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'IsConfront': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 105})

    call camera_M_pass_L()

    Npc_Zora004[Daijin01].Demo_LookAtObject({'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'GameROMPlayer'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 3333.610107421875, 'DestinationZ': -541.2423095703125, 'IsWaitFinish': True, 'DirectionY': 155.0, 'DestinationY': 270.1700134277344})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})

    call camera_TurnAround_L()


    call Link_Prince_Yes()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_ZoraB001[Prince01].Demo_LookAtObject({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_Zora003'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Zora003', 'UniqueName': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 85})
}

void camera_S_posing() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'TargetActor': 3, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'EndFrame': -1.0, 'SceneName': 'C52-1', 'StartFrame': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_S_leave() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'TargetActor': 3, 'IsWaitFinish': False, 'EndFrame': -1.0, 'SceneName': 'C52-2', 'ActorName': 'Npc_Zora003', 'StartFrame': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_S_talkto_L() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'TargetActor': 3, 'IsWaitFinish': False, 'EndFrame': -1.0, 'ActorName': 'Npc_Zora003', 'SceneName': 'C52-3', 'StartFrame': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_M_leave() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'TargetActor': 3, 'IsWaitFinish': False, 'EndFrame': -1.0, 'ActorName': 'Npc_Zora003', 'SceneName': 'C53-3', 'StartFrame': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_L_close() {
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'SceneName': 'C53-5', 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_birdeye() {
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Npc_Zora003', 'IsWaitFinish': False, 'SceneName': 'C50-6', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_M_sad_turn() {
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_Zora003', 'TargetActorDirReferenceMode': 1, 'SceneName': 'C53-2', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'StartFrame': 15.0})
}

void camera_M_CloseUp() {
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'ActorName': 'Npc_Zora004', 'SceneName': 'C00-0', 'UniqueName': 'Daijin01'})
}

void camera_TurnAround_L() {
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_Zora003', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-0', 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2})
}

void camera_M_closeUP() {
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'IsWaitFinish': False, 'SceneName': 'C53-4', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'StartFrame': 210.0, 'EndFrame': 220.0})
}

void Link_Prince_Yes() {

    fork {
        EventSystemActor[Demo_Link].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        EventSystemActor[Demo_Link].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 55})
        EventSystemActor[Demo_Link].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 8})
    } {
        Npc_ZoraB001[Prince01].Demo_LookAtObject({'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'ObjectId': 0, 'PosOffset': [0.0, -1.0, 0.0]})
        EventSystemActor[Demo_Prince].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 55})
        EventSystemActor[Demo_Prince].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 7})
    }

}

void camera_D_closeup_center() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-1'})
}
