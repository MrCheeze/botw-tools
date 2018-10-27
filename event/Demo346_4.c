-------- EventFlow: Demo346_4 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_ForceSetPlayerSavePosAngle', 'Demo_IncreaseGameDataInt', 'Demo_WarpPlayer']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire_Drone_A_01[Demo346_4_Drone_A]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_VisibleOff', 'Demo_NoHitRigidBody', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire_Drone_A_01[Demo346_4_Drone_B]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_VisibleOff', 'Demo_NoHitRigidBody']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire_Drone_A_01[Demo346_4_Drone_C]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_VisibleOff', 'Demo_NoHitRigidBody']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire_Drone_A_01[Demo346_4_Drone_D]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_VisibleOff', 'Demo_NoHitRigidBody']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire_Drone_A_01[Demo346_4_Drone_E]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_VisibleOff', 'Demo_NoHitRigidBody']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire_Drone_A_01[Demo346_4_Drone_F]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_VisibleOff', 'Demo_NoHitRigidBody']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire_Drone_A_01[Demo346_4_Drone_G]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_VisibleOff', 'Demo_NoHitRigidBody']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsFire_Drone_A_01[Demo346_4_Drone_H]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_VisibleOff', 'Demo_NoHitRigidBody']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir', 'Demo_PlayASAdapt', 'Demo_PlayerWait', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: RemainsFire[RemainsFire_Battle]
entrypoint: None()
actions: ['Demo_AnimMatrixDriven', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_FollowGoron[YunBo_Bridge]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_BecomeSpeaker']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetWind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall', 'Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo346_4() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    WorldManagerControl.Demo_SetWind({'IsWaitFinish': False, 'WindPower': 1.5, 'WindDirX': 0.0, 'WindDirY': 0.0, 'WindDirZ': 0.0, 'IsAutoWind': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'Fire_Relic_DeathMt_Wind_OFF', 'IsWaitFinish': True})
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Demo346_4_1st'}) {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2, 'Color': 1})
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'H-2', 'IsWaitFinish': True, 'WarpDestPosName': 'BattlePlaying_Start'})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        Npc_FollowGoron[YunBo_Bridge].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'Demo346_4_After_YunBo_Start', 'AnchorName': 'DestinationAnchor'})
        Npc_FollowGoron[YunBo_Bridge].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2, 'Color': 1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2227.466064453125, 'Pattern1PosY': 637.200439453125, 'Pattern1PosZ': -2362.898681640625, 'Pattern1AtX': 2222.205322265625, 'Pattern1AtY': 635.529296875, 'Pattern1AtZ': -2362.337890625, 'Pattern1Fovy': 40.00001525878906, 'ReviseModeEnd': 0, 'Count': 30.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False})

        fork {
            Npc_FollowGoron[YunBo_Bridge].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo346_4:talk00'})
        } {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_FollowGoron', 'UniqueName': 'YunBo_Bridge', 'FaceId': 0, 'IsValid': True, 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaInAppear'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaIn'})
        EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Battle'})
        EventBgmCtrlTag.Demo_Start({'BgmName': 'RemainsFireBattleBgm', 'IsWaitFinish': True})
        Event197:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Demo346_4'})
        EventSystemActor.Demo_ForceSetPlayerSavePosAngle({'IsWaitFinish': True, 'AnchorName': 'ForceSetPosDirAutoSaveAnchor', 'UniqueName': 'BattlePlaying_Bridge_Player_Start'})
    } else {
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0, 'Color': 1})
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'H-2', 'IsWaitFinish': True, 'WarpDestPosName': 'BattlePlaying_Start'})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        Npc_FollowGoron[YunBo_Bridge].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'Demo346_4_After_YunBo_Start', 'AnchorName': 'DestinationAnchor'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_FireRelicONOFF'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_DroneONOFF_Demo346_4'})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

        fork {
            RemainsFire_Drone_A_01[Demo346_4_Drone_A].Demo_NoHitRigidBody({'IsWaitFinish': False})
            RemainsFire_Drone_A_01[Demo346_4_Drone_A].Demo_VisibleOff({'IsWaitFinish': False})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_B].Demo_NoHitRigidBody({'IsWaitFinish': False})
            RemainsFire_Drone_A_01[Demo346_4_Drone_B].Demo_VisibleOff({'IsWaitFinish': False})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_C].Demo_NoHitRigidBody({'IsWaitFinish': False})
            RemainsFire_Drone_A_01[Demo346_4_Drone_C].Demo_VisibleOff({'IsWaitFinish': False})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_D].Demo_NoHitRigidBody({'IsWaitFinish': False})
            RemainsFire_Drone_A_01[Demo346_4_Drone_D].Demo_VisibleOff({'IsWaitFinish': False})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_E].Demo_NoHitRigidBody({'IsWaitFinish': False})
            RemainsFire_Drone_A_01[Demo346_4_Drone_E].Demo_VisibleOff({'IsWaitFinish': False})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_F].Demo_NoHitRigidBody({'IsWaitFinish': False})
            RemainsFire_Drone_A_01[Demo346_4_Drone_F].Demo_VisibleOff({'IsWaitFinish': False})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_G].Demo_NoHitRigidBody({'IsWaitFinish': False})
            RemainsFire_Drone_A_01[Demo346_4_Drone_G].Demo_VisibleOff({'IsWaitFinish': False})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_H].Demo_NoHitRigidBody({'IsWaitFinish': False})
            RemainsFire_Drone_A_01[Demo346_4_Drone_H].Demo_VisibleOff({'IsWaitFinish': False})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Life', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 1.0, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

        fork {
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'Location_RemainsFire', 'Value': 1, 'IsWaitFinish': True})
        } {
            RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'ASName': 'Demo346_4-C01-DgnObj_IbutsuFireField_A_01-A-0', 'IsWaitFinish': True, 'StartFrame': -1.0})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'SceneName': 'C01-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'FldObj_DeathBridge_A_02', 'UniqueName': '', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'SceneName': 'C02-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
            } {
                EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': False})
            }

            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'RemainsFire', 'UniqueName': 'RemainsFire_Battle', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            RemainsFire[RemainsFire_Battle].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': 'Demo346_4_RemainsFireCry', 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
            SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'RemainsFire', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'UniqueName': 'RemainsFire_Battle', 'SceneName': 'C03-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 3, 'IsWait': False})
        }


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'RemainsFire', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'UniqueName': 'RemainsFire_Battle', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
            EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 2})
        } {
            RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'ASName': 'Demo346_4-C02-DgnObj_IbutsuFireField_A_01-A-0', 'IsWaitFinish': True, 'StartFrame': -1.0})
        }


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventBgmCtrlTag.Demo_Start({'BgmName': 'RemainsFireBattleBgm', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
            RemainsFire[RemainsFire_Battle].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'ASName': 'Demo346_4-C03-DgnObj_IbutsuFireField_A_01-A-0', 'IsWaitFinish': False, 'StartFrame': -1.0})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'RemainsFire', 'UniqueName': 'RemainsFire_Battle', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'RemainsFire', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'UniqueName': 'RemainsFire_Battle', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-0', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

            fork {
                EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 2, 'IsWait': False})
                EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
                EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 2, 'IsWait': False})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 180})
            }

        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_A].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_4-C03-DgnObj_Drone_A_01-A-0', 'StartFrame': -1.0})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_B].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_4-C03-DgnObj_Drone_A_01-B-0', 'StartFrame': -1.0})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_C].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_4-C03-DgnObj_Drone_A_01-C-0', 'StartFrame': -1.0})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_D].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_4-C03-DgnObj_Drone_A_01-D-0', 'StartFrame': -1.0})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_E].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_4-C03-DgnObj_Drone_A_01-E-0', 'StartFrame': -1.0})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_F].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_4-C03-DgnObj_Drone_A_01-F-0', 'StartFrame': -1.0})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_G].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_4-C03-DgnObj_Drone_A_01-G-0', 'StartFrame': -1.0})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_H].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_4-C03-DgnObj_Drone_A_01-H-0', 'StartFrame': -1.0})
        }


        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'TargetActor': 3, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C08-0', 'ActorName': 'RemainsFire_Drone_A_01', 'UniqueName': 'Demo346_4_Drone_A', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
        } {
            RemainsFire_Drone_A_01[Demo346_4_Drone_A].Demo_AnimMatrixDriven({'ASSlot': 0, 'SequenceBank': 0, 'IsIgnoreSame': False, 'IsChangeable': False, 'IsWaitFinish': False, 'ASName': 'Demo346_4-C04-DgnObj_Drone_A_01-A-0', 'StartFrame': -1.0})
            RemainsFire_Drone_A_01[Demo346_4_Drone_A].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_Searchlight_Active', 'SLinkKey': 'Demo_Searchlight_Active', 'IsTargetDemoSLinkUser': False})
        }

        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'H-2', 'IsWaitFinish': True, 'WarpDestPosName': 'BattlePlaying_Start'})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': 1})
        Npc_FollowGoron[YunBo_Bridge].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': 'Demo346_4_After_YunBo_Start', 'AnchorName': 'DestinationAnchor'})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_DroneONOFF_Demo346_4'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaInAppear'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_BattlePlaying_AreaIn'})
        EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0, 'Color': 1})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Battle'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Fire_Relic_Demo346_4_1st'})
        goto Event197
    }
}
