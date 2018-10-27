-------- EventFlow: Gaman --------

Actor: Npc_Gaman01
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MoveToAnchor', 'Demo_TalkASync', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_ChangePostureWithAS']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_MiniGameStart', 'Demo_WaitFrame', 'Demo_RollbackQuest', 'Demo_WarpPlayerToDestination', 'Demo_MiniGameTime', 'Demo_AdvanceQuest', 'Demo_LoopEnd', 'Demo_CallDemo']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckPlayerState', 'HasPorchItem', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Gaman02
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MoveToAnchor', 'Demo_TalkASync', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_ChangePostureWithAS', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Gaman03
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MoveToAnchor', 'Demo_TalkASync', 'Demo_WarpToScheduleAnchor', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_ChangePostureWithAS', 'Demo_ChangeEmotion', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_LookAtTheFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventTimerTag
entrypoint: None()
actions: []
queries: ['CheckMiniGameTimeOver']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Gaman01_Talk() {

    call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Gaman01', 'Actor2': 'Npc_Gaman02', 'Actor3': 'Npc_Gaman03'})

    Npc_Gaman02.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    Npc_Gaman03.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    if Npc_Gaman01.IsOnInstEventFlag() {
        Event483:
        if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Finish'}) {
            Npc_Gaman01.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Talk_03'})
            Event52:
            Npc_Gaman02.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_R_003', 'IsOverWriteLabelActorName': False})
            Npc_Gaman03.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_R_003', 'IsOverWriteLabelActorName': False})
            Event10:
            if !EventSystemActor.GeneralChoice2() {
                Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_R_004', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                Npc_Gaman02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_R_004', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                Npc_Gaman03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_R_004', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2009.0224609375, 'Pattern1PosY': 229.96556091308594, 'Pattern1PosZ': 1744.6025390625, 'Pattern1AtX': -2007.0411376953125, 'Pattern1AtY': 228.08782958984375, 'Pattern1AtZ': 1736.560302734375, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': False, 'CollisionInterpolateSkip': False, 'Count': 120.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

                fork {
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Npc_Gaman01.Demo_MoveToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'Gaman001', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
                    Npc_Gaman01.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                } {
                    Npc_Gaman02.Demo_MoveToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'Gaman002', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
                    Npc_Gaman02.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                } {
                    Npc_Gaman03.Demo_MoveToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'AnchorUniqueName': 'Gaman003', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
                    Npc_Gaman03.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                }

                Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_R_005', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gaman_Activated'})
            } else {
                Npc_Gaman01.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_R_006', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                Npc_Gaman02.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_R_005', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                Npc_Gaman03.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_R_005', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                Npc_Gaman01.Demo_Talk({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_R_007', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                Npc_Gaman02.Demo_Talk({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_R_006', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
                Npc_Gaman03.Demo_Talk({'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_R_006', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Activated'}) {
            Npc_Gaman01.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Talk_20'})
            goto Event52
        } else {
            Event51:
            Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_R_003', 'IsOverWriteLabelActorName': False})
            goto Event52
        }
    } else
    if Npc_Gaman02.IsOnInstEventFlag() {
        goto Event483
    } else
    if Npc_Gaman03.IsOnInstEventFlag() {
        goto Event483
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Finish'}) {
        Npc_Gaman01.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Talk_00'})
        Npc_Gaman02.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Talk_01'})
        Npc_Gaman03.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Talk_02'})
        Event48:
        Npc_Gaman01.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_R_002', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
        Npc_Gaman02.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_R_002', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
        Npc_Gaman03.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_R_002', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
        goto Event10
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Activated'}) {
        Npc_Gaman01.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Talk_10'})
        Npc_Gaman02.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Talk_11'})
        Npc_Gaman03.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Talk_12'})
        goto Event48
    } else {
        Event45:
        Npc_Gaman01.Demo_Talk({'ASName': '', 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_R_001', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
        Npc_Gaman02.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_R_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
        Npc_Gaman03.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_R_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
        goto Event48
    }
}

void EntryPoint0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2001.970703125, 'Pattern1PosY': 233.6050262451172, 'Pattern1PosZ': 1743.0762939453125, 'Pattern1AtX': -2003.4342041015625, 'Pattern1AtY': 229.91859436035156, 'Pattern1AtZ': 1738.5634765625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 227.10000610351562, 'DestinationZ': 1734.800048828125, 'IsWaitFinish': True, 'DestinationX': -2005.4000244140625, 'DirectionY': 180.0})

    fork {
        Npc_Gaman01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Zen_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_Gaman02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Zen_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        Npc_Gaman03.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Zen_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Npc_Gaman01.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_001', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo_Zen_Talk', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
    EventBgmCtrlTag.Demo_Start({'BgmName': 'GamanContestBgm', 'IsWaitFinish': True})

    call Common.DisableSaveAndWarp()

    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gaman', 'StepName': 'Step1_2'})
}

void EntryPoint1() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    Npc_Gaman03.Demo_PlayASForDemo({'ASName': 'Act_Trainer_Wait', 'MorphingFrame': 15.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False})
    Npc_Gaman02.Demo_PlayASForDemo({'ASName': 'Act_Trainer_Wait', 'MorphingFrame': 15.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2004.836669921875, 'Pattern1PosY': 232.70872497558594, 'Pattern1PosZ': 1704.1146240234375, 'Pattern1AtX': -2004.7720947265625, 'Pattern1AtY': 232.15914916992188, 'Pattern1AtZ': 1698.435302734375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'Count': 30.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'Goron', 'CheckUpper': False, 'CheckLower': False}) {
        Event642:
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Talk_21'})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 30.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': -2004.5, 'DestinationY': 227.89999389648438, 'DestinationZ': 1719.9000244140625})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    } else
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'Goron', 'CheckLower': False, 'CheckHead': False, 'CheckUpper': True}) {
        goto Event642
    } else
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'Goron', 'CheckUpper': False, 'CheckHead': False, 'CheckLower': True}) {
        goto Event642
    } else {
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 30.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
        EventBgmCtrlTag.Demo_Start({'BgmName': 'GamanContestBgm', 'IsWaitFinish': True})

        call Common.DisableSaveAndWarp()

        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gaman', 'StepName': 'Gaman_Step2_2'})
    }
}

void Ready_Npc_Gaman01_Near() {
    Npc_Gaman01.Demo_TalkASync({'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_R_Near', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': True})
}

void Ready_Npc_Gaman02_Near() {
    Npc_Gaman02.Demo_TalkASync({'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_R_Near', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': True})
}

void Ready_Npc_Gaman03_Near() {
    Npc_Gaman03.Demo_TalkASync({'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_R_Near', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': True})
}

void Step1_Npc_Gaman01_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_S1_001', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo_Zen_Wait'})
}

void Step1_Npc_Gaman02_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Gaman02.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_S1_001', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo_Zen_Wait'})
}

void Step1_Npc_Gaman03_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Gaman03.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_S1_001', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo_Zen_Wait'})
}

void Step2_Npc_Gaman01_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Gaman01.IsOnInstEventFlag() {
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_S2_001', 'IsOverWriteLabelActorName': False})
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_S2_004'})
    } else {
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_S2_002'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_S2_003'})
        } else {
            Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_S2_005'})
        }
    }
}

void Step2_Npc_Gaman02_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Gaman02.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_S2_001', 'IsOverWriteLabelActorName': False})
}

void Step2_Npc_Gaman03_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Gaman03.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_S2_001', 'IsOverWriteLabelActorName': False})
}

void Ready_Npc_Gaman02_Talk() {

    call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Gaman01', 'Actor2': 'Npc_Gaman02', 'Actor3': 'Npc_Gaman03'})

    Npc_Gaman01.Demo_TurnAndLookToObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    Npc_Gaman03.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    if Npc_Gaman01.IsOnInstEventFlag() {
        Event93:
        Npc_Gaman02.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_R_007', 'IsOverWriteLabelActorName': False})
        goto Event51
    } else
    if Npc_Gaman02.IsOnInstEventFlag() {
        goto Event93
    } else
    if Npc_Gaman03.IsOnInstEventFlag() {
        goto Event93
    } else {
        Npc_Gaman02.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman02_R_007', 'IsOverWriteLabelActorName': False})
        goto Event45
    }
}

void Ready_Npc_Gaman03_Talk() {

    call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Gaman01', 'Actor2': 'Npc_Gaman02', 'Actor3': 'Npc_Gaman03'})

    Npc_Gaman01.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsConfront': True})
    Npc_Gaman02.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'IsConfront': True})
    if Npc_Gaman01.IsOnInstEventFlag() {
        Event106:
        Npc_Gaman03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_R_007', 'IsOverWriteLabelActorName': False, 'ASName': ''})
        goto Event51
    } else
    if Npc_Gaman02.IsOnInstEventFlag() {
        goto Event106
    } else
    if Npc_Gaman03.IsOnInstEventFlag() {
        goto Event106
    } else {
        Npc_Gaman03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman03_R_007', 'IsOverWriteLabelActorName': False, 'ASName': ''})
        goto Event45
    }
}

void Gaman_Step2_2_Npc_Gaman01_EachFrame() {
    Event411:

    call GamanCheck2({'CountStartTime': 5})

}

void Gaman_Step2_Failed_Npc_Gaman01_StepStart() {

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gaman_Step2_Retry'})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GamanContestBgm', 'IsWaitFinish': True, 'FadeSec': 0.5})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    fork {
        Npc_Gaman01.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
    } {
        Npc_Gaman02.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
    } {
        Npc_Gaman03.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2})
        Npc_Gaman03.Demo_ChangeEmotion({'IsWaitFinish': False, 'IsOnlyFace': True, 'EmotionType': 'Normal'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'Goron', 'CheckLower': False, 'CheckUpper': False}) {
        Event637:
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Talk_22'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Gaman02.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Talk_23'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Event573:
        Npc_Gaman03.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_03_01', 'IsOverWriteLabelActorName': False})
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationX': -2004.5, 'DestinationY': 227.89999389648438, 'DestinationZ': 1719.9000244140625})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        Event463:

        call Common.EnableSaveAndWarp()

        EventSystemActor.Demo_RollbackQuest({'QuestName': 'Gaman', 'StepName': 'Step2', 'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckUpper': True, 'CheckType': 'Goron', 'CheckHead': False, 'CheckLower': False}) {
        goto Event637
    } else
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': True, 'CheckType': 'Goron', 'CheckHead': False, 'CheckUpper': False}) {
        goto Event637
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_01_02'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Gaman02.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_02_02'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        goto Event573
    } else {
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_01_01', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Gaman02.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_02_01', 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Gaman03.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_03_01', 'IsOverWriteLabelActorName': False})
        goto Event463
    }
}

void Finish_Npc_Gaman01_StepStart() {

    call Common.AirStartUP_Player()

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2004.836669921875, 'Pattern1PosY': 232.70872497558594, 'Pattern1PosZ': 1704.1146240234375, 'Pattern1AtX': -2004.7720947265625, 'Pattern1AtY': 232.15914916992188, 'Pattern1AtZ': 1698.435302734375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'Count': 30.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Accept1FrameDelay': True, 'ReviseModeEnd': 2})

    fork {
        Npc_Gaman01.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'Wait_Angry'})
    } {
        Npc_Gaman02.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'Wait_Angry'})
    } {
        Npc_Gaman03.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'Wait_Angry'})
        Npc_Gaman03.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': True})
    }

    Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_002_01_01', 'IsOverWriteLabelActorName': False})
    Npc_Gaman02.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_002_02_01', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'StopWithFade'})
    EventSystemActor.Demo_FlagON({'FlagName': 'NotBack_Demo016Camera', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'IsWaitFinish': True, 'EntryPointName': 'DungeonArrival_Gaman', 'EndFade': 0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2006.359130859375, 'Pattern1PosY': 231.67190551757812, 'Pattern1PosZ': 1705.1868896484375, 'Pattern1AtX': -2005.369384765625, 'Pattern1AtY': 232.02267456054688, 'Pattern1AtZ': 1699.830078125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 2})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff', 'BgmCtrlType': 'StartWithFade'})

    fork {
        Npc_Gaman01.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'TurnPosition': [-2003.9000244140625, 230.60000610351562, 1680.699951171875], 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
    } {
        Npc_Gaman03.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'TurnPosition': [-2003.9000244140625, 230.60000610351562, 1680.699951171875], 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
    } {
        Npc_Gaman02.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'TurnPosition': [-2003.9000244140625, 230.60000610351562, 1680.699951171875], 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
    }

    Npc_Gaman03.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_002_03_01', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

    fork {
        Npc_Gaman01.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0]})
    } {
        Npc_Gaman03.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0]})
    } {
        Npc_Gaman02.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsConfront': True, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0]})
    }


    fork {
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_002_01_02', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    } {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ActorName': 'Npc_Gaman01', 'IsUseSlowTurn': False, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    }


    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gaman_Finish'})
}

void Step1_2_Failed_StepStart() {

    call Common.AirStartUP_Player()

    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GamanContestBgm', 'IsWaitFinish': True, 'FadeSec': 0.5})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Demo_Zen_Talk', 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_01_02'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Gaman02.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Demo_Zen_Talk', 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_02_02'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Gaman03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_03_01', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo_Zen_Talk'})
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': -2005.5, 'DestinationY': 226.0, 'DestinationZ': 1745.300048828125, 'DirectionY': 180.0, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        Event465:

        call Common.EnableSaveAndWarp()

        EventSystemActor.Demo_RollbackQuest({'QuestName': 'Gaman', 'IsWaitFinish': True, 'StepName': 'Step1'})
    } else {
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_01_01', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Demo_Zen_Talk'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Gaman02.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_02_01', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo_Zen_Talk'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Npc_Gaman03.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_003_03_01', 'IsOverWriteLabelActorName': False, 'ASName': 'Demo_Zen_Talk'})
        goto Event465
    }
}

void Step1_2_Successed_StepStart() {

    call Common.AirStartUP_Player()

    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2001.381103515625, 'Pattern1PosY': 228.9036102294922, 'Pattern1PosZ': 1727.32373046875, 'Pattern1AtX': -2004.1756591796875, 'Pattern1AtY': 228.75209045410156, 'Pattern1AtZ': 1722.0465087890625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': -2005.0999755859375, 'DestinationY': 227.0, 'DestinationZ': 1722.300048828125, 'IsWaitFinish': True, 'DirectionY': 0.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [-2005.0999755859375, 227.89999389648438, 1720.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Npc_Gaman01.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Gaman011'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Npc_Gaman01.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2, 'IsConfront': False})
    Npc_Gaman01.Demo_ChangePostureWithAS({'Posture': 'Stand', 'IsWaitFinish': True})
    Npc_Gaman01.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Trainer_Wait'})
    Npc_Gaman02.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Gaman012'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Npc_Gaman02.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2, 'IsConfront': False})
    Npc_Gaman02.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
    Npc_Gaman02.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Trainer_Wait'})
    Npc_Gaman03.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Gaman013'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Npc_Gaman03.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 2, 'IsConfront': False})
    Npc_Gaman03.Demo_ChangePostureWithAS({'Posture': 'Stand', 'IsWaitFinish': True})
    Npc_Gaman03.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Act_Trainer_Wait'})
    Npc_Gaman03.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': True})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_002_01_01', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Trainer_Wait'})
    Npc_Gaman02.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_002_02_01', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Trainer_Wait'})
    Npc_Gaman03.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_002_03_01', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_Trainer_Wait'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2001.7384033203125, 'Pattern1PosY': 233.22789001464844, 'Pattern1PosZ': 1728.030029296875, 'Pattern1AtX': -2002.9306640625, 'Pattern1AtY': 231.06954956054688, 'Pattern1AtZ': 1722.5892333984375, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_002_01_02', 'IsOverWriteLabelActorName': False})
    Npc_Gaman02.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_002_02_02', 'IsOverWriteLabelActorName': False})
    Npc_Gaman03.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_002_03_02', 'IsOverWriteLabelActorName': False})
    Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Gaman:Npc_Gaman01_S2_006'})
    Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_002_01_03', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Armor_011_Head', 'Count': 1}) {
        Event665:
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Gaman01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Gaman:Talk_21'})
        Event470:

        fork {
            Npc_Gaman01.Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'AnchorUniqueName': 'Gaman001_2', 'IsWaitFinish': False, 'IsAlignmentAnchor': False})
        } {
            Npc_Gaman02.Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'AnchorUniqueName': 'Gaman002_2', 'IsWaitFinish': False, 'IsAlignmentAnchor': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Gaman03.Demo_MoveToAnchor({'AnchorName': 'DestinationAnchor', 'ASKeyName': 'Run', 'IsTurnToAnchorDir': False, 'AnchorUniqueName': 'Gaman003_2', 'IsWaitFinish': False, 'IsAlignmentAnchor': False})
        }

        Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})

        fork {
            Npc_Gaman01.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Gaman001_2'})
        } {
            Npc_Gaman02.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Gaman002_2'})
        } {
            Npc_Gaman03.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Gaman003_2'})
        }

        GameRomCamera.Demo_ReturnSavePoint_1({'Count': 0.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})

        call Common.EnableSaveAndWarp()

        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gaman', 'StepName': 'Step2'})
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_037_Head'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_074_Head'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_075_Head'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_076_Head'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_011_Upper'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_037_Upper'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_074_Upper'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_075_Upper'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_076_Upper'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_011_Upper'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_037_Upper'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_074_Upper'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_075_Upper'}) {
        goto Event665
    } else
    if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Armor_076_Upper'}) {
        goto Event665
    } else {
        goto Event470
    }
}

void GamanCheck() {
    EventSystemActor.Demo_MiniGameTime({'CountStartTime': 'CountStartTime', 'IsWaitFinish': True, 'CountMode': 1, 'IsShowTimeUI': False, 'MaxTime': -1})
    Event370:
    if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Step1_Failed'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Step1_2_Failed', 'QuestName': 'Gaman'})
    } else
    if EventTimerTag.CheckMiniGameTimeOver() {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event370
    }
}

void Step1_2_1_Npc_Gaman01_StepStart() {
    Npc_Gaman03.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_001_03_01', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman03.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Act_Zen_Wait_Weaken', 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
}

void Step1_2_Npc_Gaman01_EachFrame() {
    Event369:

    call GamanCheck({'CountStartTime': 5})

}

void Step1_2_2_Npc_Gaman01_EachFrame() {
    goto Event369
}

void Step1_2_3_Npc_Gaman01_StepStart() {
    Npc_Gaman02.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_001_02_01', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman02.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Act_Zen_Wait_Weaken', 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
}

void Step1_2_4_Npc_Gaman01_EachFrame() {
    goto Event369
}

void Step1_2_5_Npc_Gaman01_StepStart() {
    Npc_Gaman01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_001_01_01', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman01.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Act_Zen_Wait_Weaken', 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
}

void Step1_2_6_Npc_Gaman01_EachFrame() {
    goto Event369
}

void Step1_2_7_Npc_Gaman01_StepStart() {
    Npc_Gaman03.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_001_03_02', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman03.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Zen_Down', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
}

void Step1_2_8_Npc_Gaman01_EachFrame() {
    goto Event369
}

void Step1_2_9_Npc_Gaman01_StepStart() {
    Npc_Gaman02.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_001_02_02', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Zen_Down', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
}

void Step1_2_10_Npc_Gaman01_EachFrame() {
    goto Event369
}

void Step1_2_11_Npc_Gaman01_StepStart() {
    Npc_Gaman01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S1_001_01_02', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman01.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Zen_Down', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'StepName': '', 'ForceRunTelop': False})
}

void Step1_2_12_Npc_Gaman01_EachFrame() {

    call GamanCheck({'CountStartTime': 3})

}

void Step1_2_13_Npc_Gaman01_StepStart() {
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GamanContestBgm', 'FadeSec': 3.0, 'IsWaitFinish': True})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Step1_2_Successed', 'QuestName': 'Gaman'})
}

void GamanCheck2() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 1, 'CountStartTime': 'CountStartTime', 'IsShowTimeUI': False, 'MaxTime': -1})
    Event635:
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckType': 'Goron', 'CheckUpper': False, 'CheckLower': False}) {
        Event414:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gaman', 'StepName': 'Gaman_Step2_Failed'})
    } else
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'Goron', 'CheckLower': False, 'CheckUpper': True, 'CheckHead': False}) {
        goto Event414
    } else
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'Goron', 'CheckUpper': False, 'CheckHead': False, 'CheckLower': True}) {
        goto Event414
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Step2_Failed'}) {
        goto Event414
    } else
    if EventTimerTag.CheckMiniGameTimeOver() {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event635
    }
}

void Step2_4_Npc_Gaman01_EachFrame() {
    goto Event411
}

void Step2_6_Npc_Gaman01_EachFrame() {
    goto Event411
}

void Step2_8_Npc_Gaman01_EachFrame() {
    goto Event411
}

void Step2_10_Npc_Gaman01_EachFrame() {
    goto Event411
}

void Step2_12_Npc_Gaman01_EachFrame() {
    goto Event411
}

void Step2_14_Npc_Gaman01_EachFrame() {
    goto Event411
}

void Step2_16_Npc_Gaman01_EachFrame() {
    goto Event411
}

void Step2_18_Npc_Gaman01_EachFrame() {
    goto Event411
}

void Step2_20_Npc_Gaman01_EachFrame() {

    call GamanCheck2({'CountStartTime': 3})

}

void Step2_3_Npc_Gaman01_StepStart() {
    Npc_Gaman01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001_01_01', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman01.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'Wait_Angry'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
}

void Step2_5_Npc_Gaman01_StepStart() {
    Npc_Gaman02.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001_02_01', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman02.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'Wait_Angry'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
}

void Step2_7_Npc_Gaman01_StepStart() {
    Npc_Gaman03.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001_03_01', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman03.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': 15.0, 'ASName': 'Wait_Angry'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
}

void Step2_9_Npc_Gaman01_StepStart() {
    Npc_Gaman01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001_01_02', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman01.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'ASName': 'Act_Muscle_Wait', 'MorphingFrame': 15.0})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
}

void Step2_11_Npc_Gaman01_StepStart() {
    Npc_Gaman02.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001_02_02', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman02.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'ASName': 'Act_Muscle_Wait', 'MorphingFrame': 15.0})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
}

void Step2_13_Npc_Gaman01_StepStart() {
    Npc_Gaman03.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001_03_02', 'IsChecked': False, 'DispFrame': 90})
    Npc_Gaman03.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'ASName': 'Act_Muscle_Wait', 'MorphingFrame': 15.0})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
}

void Step2_15_Npc_Gaman01_StepStart() {
    Npc_Gaman01.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001_01_03'})
    Npc_Gaman01.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': 15.0, 'ASName': 'Act_Happy_Wait'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
}

void Step2_17_Npc_Gaman01_StepStart() {
    Npc_Gaman02.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001_02_03'})
    Npc_Gaman02.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': 15.0, 'ASName': 'Act_Happy_Wait'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
}

void Step2_19_Npc_Gaman01_StepStart() {
    Npc_Gaman03.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Gaman:Event_S2_001_03_03'})
    Npc_Gaman03.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': 15.0, 'ASName': 'Act_Happy_Wait'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': '', 'QuestName': ''})
}

void Step2_21_Npc_Gaman01_StepStart() {
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GamanContestBgm', 'FadeSec': 3.0, 'IsWaitFinish': True})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'Gaman', 'StepName': 'Finish'})
}
