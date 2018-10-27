-------- EventFlow: Demo346_3 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame']
queries: ['CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_ReturnSavePoint_1', 'Demo_SavePoint1', 'Demo_CameraAnimFlow', 'Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DeathBridge_A_02
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble', 'Demo_RotRumble', 'Demo_RumbleLoop', 'Demo_RumbleLoopStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_FollowGoron[YunBo_Bridge]
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_GoronHeroDescendentAppear', 'Demo_Talk', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_GoronCannonBall_YunBo
entrypoint: None()
actions: ['Demo_Delete']
queries: ['DummyQuery']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[For_YunBoCannonBall]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[For_SoundCtrlTag]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DeathBridge_A_01
entrypoint: None()
actions: ['Demo_WatchCannonHit']
queries: ['IsSuccessEndLastDemoAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_StopInAir', 'Demo_ReserveParashawlStart']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle', 'Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo346_3() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Stop', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})

    fork {
    } {
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    }

    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        Event99:
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        Event96:
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'BgCheck': False, 'ActorName': 'DgnObj_GoronCannonBase_A_01', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'IsWaitFinish': False, 'SceneName': 'C06-0', 'InterpolateCount': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        FldObj_DeathBridge_A_01.Demo_WatchCannonHit({'WatchFrame': 80.0, 'IsWaitFinish': True, 'XLinkKey': 'YunBo_Hit'})
        if FldObj_DeathBridge_A_01.IsSuccessEndLastDemoAction() {
            EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_DeathBridgeONOFF', 'IsWaitFinish': True})

            fork {
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'SceneName': 'C01-0', 'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'BgCheck': False, 'ActorName': 'DgnObj_GoronCannonBase_A_01', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'InterpolateCount': 15.0, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'BgCheck': False, 'ActorName': 'DgnObj_GoronCannonBase_A_01', 'TargetActorDirReferenceMode': 1, 'InterpolateCount': 10.0, 'SceneName': 'C01-1', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'BgCheck': False, 'ActorName': 'DgnObj_GoronCannonBase_A_01', 'InterpolateCount': 0.0, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C02-0', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

                fork {
                    GameRomCamera.Demo_CameraAnimFlow({'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'UniqueName': '', 'BgCheck': False, 'ActorName': 'DgnObj_GoronCannonBase_A_01', 'InterpolateCount': 0.0, 'SceneName': 'C03-0', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                } {
                    EventSystemActor[For_SoundCtrlTag].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
                    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StartWithFade'})
                }

            } {
                FldObj_DeathBridge_A_02.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Demo346_3-C01-FldObj_DeathMtBigBridge_A_01-A-0', 'IsWaitFinish': False})
            } {
                EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Power': 10.0, 'Pattern': 4, 'Count': 2})
                EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Power': 4.0, 'Count': 1, 'Pattern': 1})
                EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 2})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 185})
                EventCameraRumble.Demo_RotRumble({'Pattern': 1, 'Count': 1, 'Power': 3.0, 'IsWaitFinish': True})
                EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 1})
                Starter.Demo_SendSignal({'Value': True, 'IsWaitFinish': False, 'SignalType': 0})
            } {
                EventSystemActor[For_YunBoCannonBall].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
                FldObj_GoronCannonBall_YunBo.Demo_Delete({'IsWaitFinish': False})
            }


            fork {
                GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C04-0', 'TargetActorDirReferenceMode': 1, 'ActorName': 'DgnObj_GoronCannonBase_A_01', 'UniqueName': '', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            } {
                Npc_FollowGoron[YunBo_Bridge].Demo_GoronHeroDescendentAppear({'IsWaitFinish': True})
                Npc_FollowGoron[YunBo_Bridge].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'YunBo_Demo346_3'})
                Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier', 'IsTargetDemoSLinkUser': False})

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 39})
                    EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 6.0, 'Pattern': 3, 'IsWaitFinish': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
                    EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 18})
                    EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 2.0, 'Pattern': 3, 'IsWaitFinish': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
                    EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                    EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 2.0, 'Pattern': 3, 'IsWaitFinish': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 4})
                    EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
                } {
                    Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Demo346_3-C01-Npc_Goron_HeroDescendants-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': True, 'MorphingFrame': -1.0})
                }

            }

            Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier'})
            Npc_FollowGoron[YunBo_Bridge].Demo_WarpToAnchor({'IsWaitFinish': False, 'DirectionY': -60.0, 'DestinationX': 2172.680908203125, 'DestinationZ': -2330.2529296875, 'DestinationY': 632.8323364257812})
            Npc_FollowGoron[YunBo_Bridge].Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'ASName': 'Act_Dizzy', 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'ClothWarpMode': 1})
            Npc_FollowGoron[YunBo_Bridge].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': '', 'SLinkKey': 'CustomPiyoPiyo00', 'IsTargetDemoSLinkUser': False})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2168.350830078125, 'Pattern1PosY': 635.8323364257812, 'Pattern1PosZ': -2327.7529296875, 'Pattern1AtX': 2172.680908203125, 'Pattern1AtY': 634.8323364257812, 'Pattern1AtZ': -2330.2529296875, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo346_3:talk00', 'ASName': 'Act_Dizzy_Talk', 'IsCloseMessageDialog': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_DemoArea_Demo346_4'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_Cannon'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaInAppear'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaIn'})
            EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'BgCheck': False, 'InterpolateCount': 0.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'DgnObj_GoronCannonBase_A_01', 'UniqueName': '', 'SceneName': 'C05-0', 'IsWaitFinish': True, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_DemoArea_Demo346_4'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_NPC020_Follow'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaInAppear'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Bridge_AreaIn'})
        } else {
            GameRomCamera.Demo_ReturnSavePoint_1({'Count': 0.0, 'ReviseMode': 1, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True})
        }
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
            GameROMPlayer.Demo_ReserveParashawlStart({'IsWaitFinish': False})
            Event101:
            GameROMPlayer.Demo_StopInAir({'IsWaitFinish': False, 'NoFixed': False})
            goto Event96
        } else {
            if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
                goto Event101
            } else {
                goto Event99
            }
        }
    }
}
