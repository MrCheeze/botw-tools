-------- EventFlow: Demo016_0 --------

Actor: DgnObj_DungeonEntranceSP
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo', 'Demo_TrigNullASPlay', 'Demo_OnMUAssignSaveForUsed']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceElevatorSP
entrypoint: None()
actions: ['Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceShutterSP
entrypoint: None()
actions: ['Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPointSP
entrypoint: None()
actions: ['Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_EntranceTerminalSP
entrypoint: None()
actions: ['Demo_PlayASForDemoPreMove', 'Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_FlagOFF']
queries: ['CheckFlag', 'CheckPlayerState', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_StopInAir', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_VisibleOff', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_SweepCollision
entrypoint: None()
actions: ['Demo_Sweep']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleMiddle', 'Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void DungeonArrival() {
    Event35:
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerRideHorse() {
        Event8:
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})

        fork {
            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
            if EventSystemActor.CheckFlag({'FlagName': 'DarkWoods_Demo016Camera'}) {

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                    EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 14})
                    EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 1})
                } {
                    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C03_0'})
                    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C03_1'})
                    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C03_2'})
                    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C03_3'})
                }

                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'DarkWoods_Demo016Camera'})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Demo016Camera'}) {

                    fork {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                        EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 14})
                        EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 1})
                    } {
                        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'SceneName': 'C02_0', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'SceneName': 'C02_1', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'SceneName': 'C02_2', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'SceneName': 'C02_3', 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                    }

                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Gaman_Demo016Camera', 'IsWaitFinish': True})
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_DungeonDemo'}) {

                        fork {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                            fork {
                                EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 14})
                                EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 1})
                            } {
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
                                GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
                            }

                        } {
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'SceneName': 'C01_0', 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'SceneName': 'C01_1', 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'SceneName': 'C01_2', 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'SceneName': 'C01_3', 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                        }

                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_DungeonDemo'})
                    } else {

                        fork {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                            EventControllerRumble.Demo_TimeSpecRumbleMiddle({'IsWaitFinish': True, 'IsWait': True, 'Seconds': 14})
                            EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 1})
                        } {
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'SceneName': 'C01_0', 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'SceneName': 'C01_1', 'IsWaitFinish': True, 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'SceneName': 'C01_2', 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'DgnObj_DungeonEntranceSP', 'TargetActor': 3, 'IsWaitFinish': True, 'SceneName': 'C01_3', 'BgCheck': False, 'TargetActorPosReferenceMode': 0, 'TargetActorDirReferenceMode': 0, 'OverwriteAtDist': 1.0, 'OverwriteAt': True})
                        }

                    }
                }
            }
        } {

            fork {
                DgnObj_DungeonEntranceSP.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'Close', 'IsIgnoreSame': True, 'ASSlot': 0, 'SequenceBank': 0})
                DgnObj_DungeonEntranceSP.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
            } {
                DgnObj_EntranceElevatorSP.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'ASName': 'Rising', 'IsEnabledAnimeDriven': 1, 'TargetIndex': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
            } {
                DgnObj_EntranceShutterSP.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'ASName': 'Rising', 'IsEnabledAnimeDriven': 1, 'TargetIndex': 0, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
            } {
                Obj_SweepCollision.Demo_Sweep({'DynScalingTime': 90.0, 'IsWaitFinish': True})
            } {
                DgnObj_WarpPointSP.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'OffWait', 'ASSlot': 0, 'IsIgnoreSame': True, 'SequenceBank': 0})
                DgnObj_WarpPointSP.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
            } {
                DgnObj_EntranceTerminalSP.Demo_TrigNullASPlay({'IsWaitFinish': True, 'ASName': 'OffWait', 'ASSlot': 0, 'IsIgnoreSame': True, 'SequenceBank': 0})
                DgnObj_EntranceTerminalSP.Demo_PlayASForDemoPreMove({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
            }


            fork {

                fork {
                    DgnObj_DungeonEntranceSP.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DungeonArrival', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
                } {
                    DgnObj_DungeonEntranceSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
                }

            } {
                DgnObj_EntranceElevatorSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'IsEnabledAnimeDriven': 1, 'TargetIndex': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
            } {
                DgnObj_EntranceShutterSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'IsEnabledAnimeDriven': 1, 'TargetIndex': 0, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
            } {
                DgnObj_WarpPointSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
            } {
                DgnObj_EntranceTerminalSP.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Rising', 'TargetIndex': 1, 'IsEnabledAnimeDriven': 1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 0, 'MorphingFrame': 0.0})
            }

        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        DgnObj_DungeonEntranceSP.Demo_OnMUAssignSaveForUsed({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'ReadRiddle'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        if EventSystemActor.CheckFlag({'FlagName': 'NotBack_Demo016Camera'}) {
            GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'NotBack_Demo016Camera', 'IsWaitFinish': True})
        } else {
            GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        }
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
            GameROMPlayer.Demo_VisibleOff({'IsWaitFinish': False})
            goto Event8
        } else {
            GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': True})
            goto Event8
        }
    }
}

void DungeonArrival_Gaman() {
    EventSystemActor.Demo_FlagON({'FlagName': 'Gaman_Demo016Camera', 'IsWaitFinish': True})
    Event76:
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    goto Event35
}

void DungeonArrival_DarkWoods() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'DarkWoods_Demo016Camera'})
    goto Event76
}

void DungeonArrival_StolenBook() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_DungeonDemo'})
    goto Event76
}
