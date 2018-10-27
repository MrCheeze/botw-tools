-------- EventFlow: Demo347_5 --------

Actor: Npc_oasis003[Rouge01]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_BecomeSpeaker', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerDestinationMove', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_WarpPlayerToDestination']
queries: ['HasPorchItem', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_CameraAnimFlowAbs', 'Demo_CameraAnimFlow']
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

Actor: EventSystemActor[CamWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CameraWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo347_5() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C01-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        Npc_oasis003[Rouge01].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Act_GdQueen_Sit', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_oasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3871.909912109375, 'DestinationY': 156.32000732421875, 'DestinationZ': 2950.31005859375, 'DirectionY': 133.0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeIn({'Frame': 2, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayerDestinationMove({'StickValue': 0.3499999940395355, 'DestPosX': -3882.8798828125, 'DestPosY': 156.32000732421875, 'DestPosZ': 2961.81005859375, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})

    fork {
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:talk00', 'ASName': '', 'IsCloseMessageDialog': True})
    } {
        EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 29})
        EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3882.129638671875, 'Pattern1PosY': 157.93087768554688, 'Pattern1PosZ': 2962.92431640625, 'Pattern1AtX': -3886.9345703125, 'Pattern1AtY': 158.2165985107422, 'Pattern1AtZ': 2964.21728515625, 'Pattern1Fovy': 32.849674224853516, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3881.019287109375, 'Pattern1PosY': 157.94393920898438, 'Pattern1PosZ': 2962.29248046875, 'Pattern1AtX': -3885.89892578125, 'Pattern1AtY': 157.7223663330078, 'Pattern1AtZ': 2963.283935546875, 'Pattern1Fovy': 40.00001525878906, 'Cushion': 5.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 10.0})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationY': 156.32000732421875, 'DestinationX': -3882.8798828125, 'DestinationZ': 2961.81005859375, 'DirectionY': 313.0})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsWaitFinish': False, 'ASName': 'Talk', 'MorphingFrame': 0.0, 'NoErrorCheck': True, 'ClothWarpMode': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})

    fork {

        call camera_side_v_talk_r()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call camera_side_r_talk_v_move()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})

        call camera_3shot_back()

    } {
        Npc_oasis003[Rouge01].Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_001', 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Talk', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    Npc_oasis007.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'IsIgnoreSame': True, 'ASName': 'Act_GeneralWait', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_002'})
    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Talk', 'NoErrorCheck': True, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    call camera_side_v_talk_r()


    fork {
        Npc_oasis003[Rouge01].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Act_GdQueen_Sit', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:talk01', 'ASName': '', 'IsCloseMessageDialog': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    }


    call camera_side_r_talk_v_move()

    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'DemoWait'})
    Npc_oasis003[Rouge01].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Talk_Rest', 'IsWaitFinish': False, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_012'})
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {

        fork {

            call camera_seekerstone()

        } {
            Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_004', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        }

        Event94:

        call camera_v_talk()

        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:talk08', 'ASName': '', 'IsCloseMessageDialog': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'Talk'})

        call camera_stopped()


        fork {
            Npc_oasis003[Rouge01].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Act_GdQueen_Sit', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        } {
            Npc_oasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False})

            fork {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:talk02', 'ASName': '', 'IsCloseMessageDialog': True})
            } {
                EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 29})
                EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
            }

        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'ASName': 'TalkSurprise', 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }


        call camera_3shot_back()

        Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_011'})

        call camera_r_talkabout_relic()

        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'DemoWait', 'MorphingFrame': 30.0})
        Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_005', 'IsOverWriteLabelActorName': False})
        Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_018', 'IsCloseMessageDialog': True})

        call camera_v_talk()

        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:talk04', 'ASName': 'Act_GeneralWait', 'IsBecomingSpeaker': False})
        Npc_oasis007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_oasis003', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': 'Rouge01', 'IsValid': True})
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_GeneralWait', 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Electric_Relic:talk15'})

        call camera_r_talk_middle()


        call camera_r_low()

        Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_008', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'ASName': 'Act_GdQueen_Sit'})
        EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_013', 'ASName': ''})
        } {

            call camera_r_low_move()

            EventSystemActor[CameraWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        }


        call camera_talkabout_c()

        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:talk13', 'ASName': 'Act_GeneralWait', 'IsCloseMessageDialog': True})
        Npc_oasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False})
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:talk05', 'IsCloseMessageDialog': True})

        fork {

            call camera_talkabout_c_move()

        } {
            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:talk07', 'IsCloseMessageDialog': True})
        } {
            EventSystemActor[CamWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 2, 'TurnDirection': -135.0, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2})
        }


        fork {
            Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_010', 'IsCloseMessageDialog': True})
            Npc_oasis003[Rouge01].Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        } {

            call camera_r_low()

        }


        fork {
            Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_014'})
        } {
            EventSystemActor[CamWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_LookAtObject({'TurnDirection': -135.0, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_oasis003', 'UniqueName': 'Rouge01', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
        } {

            call camera_seekerstone()

        }


        fork {
            Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_016', 'ASName': ''})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3887.116455078125, 'Pattern1PosY': 158.8665008544922, 'Pattern1PosZ': 2965.864013671875, 'Pattern1AtX': -3889.281982421875, 'Pattern1AtY': 159.00213623046875, 'Pattern1AtZ': 2967.93701171875, 'Pattern1Fovy': 31.139739990234375, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3886.66015625, 'Pattern1PosY': 158.8665313720703, 'Pattern1PosZ': 2965.39794921875, 'Pattern1AtX': -3888.841796875, 'Pattern1AtY': 158.8368377685547, 'Pattern1AtZ': 2967.45849609375, 'Pattern1Fovy': 31.139739990234375, 'Count': 120.0, 'Cushion': 5.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            EventSystemActor[CamWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        }

        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3880.73876953125, 'Pattern1PosY': 157.92921447753906, 'Pattern1PosZ': 2959.711669921875, 'Pattern1AtX': -3882.8798828125, 'Pattern1AtY': 157.81590270996094, 'Pattern1AtZ': 2961.81005859375, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor[CamWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'B6VarettaGenFlag'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_Activated', 'IsWaitFinish': True})
    } else {

        call camera_v_talk()

        Npc_oasis007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_oasis003', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': 'Rouge01', 'IsValid': True})
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:talk06', 'ASName': ''})

        call camera_r_talk_middle()

        if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_3rdClear'}) {
            Event41:
            Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_015'})
            Event42:

            fork {

                call camera_seekerstone()

            } {
                Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_017'})
            }

            goto Event94
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_2ndClear'}) {
                goto Event41
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Find_4Relic_1stClear'}) {
                    Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_009'})
                    goto Event42
                } else {
                    Npc_oasis003[Rouge01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Ready_006'})
                    goto Event42
                }
            }
        }
    }
}

void camera_3shot_left() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.8115839958190918, 'Pattern1PosY': 1.5546879768371582, 'Pattern1PosZ': 0.7260739803314209, 'Pattern1AtX': 1.101012945175171, 'Pattern1AtY': 1.824416995048523, 'Pattern1AtZ': 0.07617200165987015, 'Pattern1Fovy': 27.359766006469727, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis003', 'UniqueName1': 'Rouge01', 'IsWaitFinish': False, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_3shot_back() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C06-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_stopped() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C02-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_v_talk() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C07-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_r_talkabout_relic() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C10-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_talkabout_c() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C08-0', 'IsWaitFinish': False, 'StartFrame': 0.0, 'EndFrame': 5.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_r_v_right() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.696593999862671, 'Pattern1PosY': 1.3156739473342896, 'Pattern1PosZ': 3.798340082168579, 'Pattern1AtX': 1.3775629997253418, 'Pattern1AtY': 1.3602449893951416, 'Pattern1AtZ': 1.1079100370407104, 'Pattern1Fovy': 22.76980209350586, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis003', 'UniqueName1': 'Rouge01', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_r_close_left() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.4217529892921448, 'Pattern1PosY': 1.4197540283203125, 'Pattern1PosZ': 0.8139650225639343, 'Pattern1AtX': 0.7102050185203552, 'Pattern1AtY': 1.901550054550171, 'Pattern1AtZ': -1.9985350370407104, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis003', 'UniqueName1': 'Rouge01', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_talkabout_c_move() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C08-0', 'IsWaitFinish': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_backto_game() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'StartFrame': 0.0, 'SceneName': 'C11-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'EndFrame': 60.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_side_v_talk_r() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0', 'EndFrame': 5.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'ActorName': 'Npc_oasis003', 'UniqueName': 'Rouge01', 'TargetActor': 3, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False})
}

void camera_side_r_talk_v() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_side_r_talk_v_move() {
    GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_oasis003', 'UniqueName': 'Rouge01', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False})
}

void camera_seekerstone() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3882.18359375, 'Pattern1PosY': 156.9352264404297, 'Pattern1PosZ': 2964.617431640625, 'Pattern1AtX': -3883.33837890625, 'Pattern1AtY': 157.3490753173828, 'Pattern1AtZ': 2961.8837890625, 'Pattern1Fovy': 30.50971794128418, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_r_talk_middle() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C09-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}

void camera_r_low() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3887.62841796875, 'Pattern1PosY': 158.94192504882812, 'Pattern1PosZ': 2966.575439453125, 'Pattern1AtX': -3890.153076171875, 'Pattern1AtY': 159.47178649902344, 'Pattern1AtZ': 2968.108154296875, 'Pattern1Fovy': 37.61966323852539, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_L_left_low() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3882.894775390625, 'Pattern1PosY': 157.1414794921875, 'Pattern1PosZ': 2964.222900390625, 'Pattern1AtX': -3883.365478515625, 'Pattern1AtY': 157.5716094970703, 'Pattern1AtZ': 2961.290771484375, 'Pattern1Fovy': 31.67969512939453, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void camera_r_low_move() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3887.51025390625, 'Pattern1PosY': 158.94204711914062, 'Pattern1PosZ': 2966.452880859375, 'Pattern1AtX': -3890.042724609375, 'Pattern1AtY': 159.44430541992188, 'Pattern1AtZ': 2967.977294921875, 'Pattern1Fovy': 37.61966323852539, 'ReviseModeEnd': 0, 'Count': 120.0, 'Cushion': 5.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}
