-------- EventFlow: Demo378_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_WarpPLToPosAndResetGimmick', 'Demo_WarpPLAndResetGimmick', 'Demo_ResetGimmick']
queries: ['CheckFlag', 'CheckEquipArmorSeriesType', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis024
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_WarpToScheduleAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis010
entrypoint: None()
actions: ['Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_WarpToScheduleAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo() {

    call Common.AirStartUP_Player()

    if EventSystemActor.CheckFlag({'FlagName': 'Gerudo_Front_Passing'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        if !EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
            SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})

            fork {
                Npc_oasis024.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                Npc_oasis024.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0', 'ClothWarpMode': -1})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'ASName': 'Talk', 'MorphingFrame': 30.0, 'ClothWarpMode': -1})
                } {
                    Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_oasis024:Npc_oasis024_Near001', 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0'})
                }

            } {
                Npc_oasis010.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                Npc_oasis010.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0', 'ClothWarpMode': -1})
            } {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3780.439453125, 'Pattern1PosY': 151.03485107421875, 'Pattern1PosZ': 2859.66748046875, 'Pattern1AtX': -3784.171142578125, 'Pattern1AtY': 150.52027893066406, 'Pattern1AtZ': 2862.95263671875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            } {

                call SDemo_B-7.PlayerReaction_and_Animal_CK_Demo378_0()

            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'NoLogo'})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'StartPosName': 'FrontGate_Stop', 'SystemResetOption': 2, 'AdditionalResetActor': ''})

            fork {
                Npc_oasis024.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                Npc_oasis024.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
            } {
                Npc_oasis010.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                Npc_oasis010.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
            }

            GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'ActorName1': '', 'ActorName2': '', 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'Count': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'TargetActor2': -1, 'FovyAppendMode': 1, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'MotionMode': 0, 'TargetActor1': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'Pattern1PosX': -3779.300048828125, 'Pattern1PosY': 150.5399932861328, 'Pattern1PosZ': 2857.800048828125, 'Pattern1AtX': -3783.0, 'Pattern1AtY': 150.60000610351562, 'Pattern1AtZ': 2861.5, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'NoLogo'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Gerudo_Front_Passing'})
        }
    } else {
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

        call SDemo_B-7.PlayerReaction_and_Animal_CK_Demo378_0()


        fork {
            Npc_oasis024.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'TurnPosition': [-3781.389892578125, 148.75999450683594, 2863.949951171875], 'ObjectId': 0})
            Npc_oasis024.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0', 'ClothWarpMode': -1})
        } {
            Npc_oasis010.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': True})
            Npc_oasis010.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0', 'ClothWarpMode': -1})
        }

        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
                GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'ASName': 'Talk', 'MorphingFrame': 30.0, 'ClothWarpMode': -1})
            }
        } {
            Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis024_Ready_001', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0'})
        }

        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WarpPLToPosAndResetGimmick({'IsWaitFinish': True, 'Destination': [-3782.909912109375, 149.13999938964844, 2865.300048828125], 'RotationY': 0.0, 'SystemResetOption': 2, 'AdditionalResetActor': ''})

        fork {
            Npc_oasis024.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            Npc_oasis024.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
        } {
            Npc_oasis010.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            Npc_oasis010.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            Npc_oasis024.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False, 'ObjectId': 2, 'TurnPosition': [-3781.389892578125, 148.75999450683594, 2863.949951171875]})
            Npc_oasis024.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0', 'ClothWarpMode': -1})
        } {
            Npc_oasis010.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
            Npc_oasis010.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0', 'ClothWarpMode': -1})
        }

        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [-3783.1298828125, 150.0, 2865.8701171875], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'Npc_oasis024', 'SceneName': 'C01-0', 'StartFrame': 0.0, 'EndFrame': 5.0, 'IsWaitFinish': False, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo378_0-C02-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': 1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
            GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'Demo378_0_Smoke', 'IsTargetDemoSLinkUser': False})
        } {
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 2})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'Npc_oasis024', 'StartFrame': 0.0, 'IsWaitFinish': False, 'EndFrame': -1.0, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
            EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': True, 'Count': 1})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
        if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_warning01'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_warning02'}) {

                fork {
                    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'Npc_oasis024', 'StartFrame': 0.0, 'IsWaitFinish': False, 'EndFrame': -1.0, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                } {
                    Npc_oasis024.Demo_Talk({'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis024_Ready_007', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Drag_Hero_Trespassing'})
                }

                Event118:
                GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'StartFrame': 0.0, 'IsWaitFinish': False, 'EndFrame': -1.0, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

                fork {
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'Demo378_0-C02-Link-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
                } {
                    Npc_oasis024.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-1', 'IsWaitFinish': True, 'ClothWarpMode': -1})
                } {
                    Npc_oasis010.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-1', 'IsWaitFinish': True, 'ClothWarpMode': -1})
                }

            } else {

                fork {
                    Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis024_Ready_006', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Drag_Hero_warning02'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Drag_Hero_Trespassing'})
                } {
                    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'Npc_oasis024', 'StartFrame': 0.0, 'IsWaitFinish': False, 'EndFrame': -1.0, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                }

                goto Event118
            }
        } else {

            fork {
                Npc_oasis024.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis024_Ready_005', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Demo378_0-C01-UMii_Gerudo_W-0'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Drag_Hero_warning01'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Drag_Hero_Trespassing'})
            } {
                GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'Npc_oasis024', 'StartFrame': 0.0, 'IsWaitFinish': False, 'EndFrame': -1.0, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            }

            goto Event118
        }
    }
}
