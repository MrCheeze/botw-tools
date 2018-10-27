-------- EventFlow: StolenBook --------

Actor: Npc_Kakariko002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_PlayASForDemo', 'Demo_WarpToScheduleAnchor', 'Demo_ChangePostureWithAS', 'Demo_ChangeEmotion']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_LoopEnd', 'Demo_WarpPlayer', 'Demo_CloseMessageDialog', 'Demo_AdvanceQuest', 'Demo_CallDemo', 'Demo_AdvanceTime', 'Demo_WarpPlayerToAnchor', 'Demo_ResetGimmick']
queries: ['CheckFlag', 'GeneralChoice2', 'isBloodyMoonTrig', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayASAdapt', 'Demo_Unequip', 'Demo_Idling', 'Demo_LookAtObject', 'Demo_DestinationTurnRefActor', 'Demo_PlayerTurnAndLookToObject', 'Demo_Talk', 'Demo_PlayerHorseGetOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: Npc_Kakariko007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_BecomeSpeaker', 'Demo_WarpToScheduleAnchor', 'Demo_SetWanderPathIndex', 'Demo_OpenMessageDialog', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_ChangeEquipState', 'Demo_LookAtObject']
queries: ['CheckActorAction', 'IsNeedEquipWeapon', 'CheckDistanceFromPlayer']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Npc_Kakariko016
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_SetWanderPathIndex', 'Demo_OpenMessageDialog', 'Demo_BecomeSpeaker', 'Demo_ChangeEquipState', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction', 'CheckDistanceFromPlayer']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_Talk', 'Demo_GameCamera', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_NotifyTalk', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko008
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_OpenMessageDialog', 'Demo_SetWanderPathIndex', 'Demo_BecomeSpeaker', 'Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction', 'CheckDistanceFromPlayer']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Npc_Kakariko001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Npc_Kakariko005
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_PublicVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kakariko006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_Assassin_Middle_Quest[Kakariko_Hoju]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

void Ready_Npc_Kakariko002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_R_001', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Cry'})
    if !EventSystemActor.GeneralChoice2() {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.868530035018921, 'Pattern1PosY': 1.928454041481018, 'Pattern1PosZ': -0.06426999717950821, 'Pattern1AtX': 0.038086000829935074, 'Pattern1AtY': 0.1303119957447052, 'Pattern1AtZ': -0.08148200064897537, 'Pattern1Fovy': 40.88374710083008, 'IsWaitFinish': True, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 3, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 2, 'Count': 30.0, 'ActorName1': 'AncientBall_Kakariko', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_R_002', 'ASName': 'Talk_Cry'})
        Event568:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Npc_Kakariko001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_Kakariko001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_R_004', 'ASName': ''})
        } {
            Npc_Kakariko002.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Act_Cry', 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'Talk'})
        }


        fork {
            Npc_Kakariko001.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0]})
            Npc_Kakariko001.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        } {
            Npc_Kakariko002.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_R_006', 'IsWaitFinish': True, 'ASName': 'Talk_Cry'})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'Talk'})
        }

        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'StepName': 'Finish', 'QuestName': '', 'ForceRunTelop': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_KaidoNPC_Delete'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        Npc_Kakariko002.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': 'Talk_Cry', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_R_009'})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Npc_Kakariko001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_R_010'})
        } {
            Npc_Kakariko002.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Act_Cry', 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'Talk'})
        }

        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False})

        fork {
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 1, 'Color': 1})
            EventSystemActor.Demo_AdvanceTime({'IsWaitFinish': True, 'DestTime': -1, 'DirectTime': 19, 'PassTime': -1, 'ActReset': True})
        } {
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        }

        if !EventSystemActor.isBloodyMoonTrig() {
            Event955:
            Npc_Kakariko002.Demo_WarpToScheduleAnchor({'IsWaitFinish': False, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Paya_Wakeup'})
            Npc_Kakariko002.Demo_ChangePostureWithAS({'Posture': 'Stand', 'IsWaitFinish': True})
            Npc_Kakariko002.Demo_PlayASForDemo({'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
            Npc_Kakariko002.Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            EventSystemActor.Demo_WarpPlayerToAnchor({'UniqueName': 'Link_Wakeup', 'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1773.8896484375, 'Pattern1PosY': 236.93084716796875, 'Pattern1PosZ': 985.5161743164062, 'Pattern1AtX': 1775.23779296875, 'Pattern1AtY': 236.79592895507812, 'Pattern1AtZ': 986.800048828125, 'Pattern1Fovy': 60.000030517578125, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'ActorName': 'Npc_Kakariko002', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})

            fork {
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 1, 'Color': 1})
            } {
                GameROMPlayer.Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
            }

            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'Start'})
            Npc_Kakariko002.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_R_011', 'ASName': ''})
        } else {
            EventSystemActor.Demo_CallDemo({'DemoName': 'Demo011_0', 'EntryPointName': 'Demo011_0', 'IsWaitFinish': True, 'EndFade': 1})
            goto Event955
        }
    } else {
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.868530035018921, 'Pattern1PosY': 1.928454041481018, 'Pattern1PosZ': -0.06426999717950821, 'Pattern1AtX': 0.038086000829935074, 'Pattern1AtY': 0.1303119957447052, 'Pattern1AtZ': -0.08148200064897537, 'Pattern1Fovy': 40.88374710083008, 'IsWaitFinish': True, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 3, 'TargetActor2': -1, 'PosAppendMode': 2, 'AtAppendMode': 2, 'FovyAppendMode': 1, 'MotionMode': 0, 'ReviseModeEnd': 2, 'Count': 30.0, 'ActorName1': 'AncientBall_Kakariko', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_R_003', 'ASName': 'Talk_Cry'})
        goto Event568
    }
}

void Ready_Npc_Kakariko002_Near() {
    Npc_Kakariko002.Demo_TalkASync({'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_Near', 'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True})
}

void Finish_Npc_Kakariko007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Alert_NPC007'}) {

        call DiscoverPlayer_Npc_Kakariko007()

    } else
    if Npc_Kakariko007.CheckActorAction({'ActionName': 'Root/Timeline/Action10/到着'}) {
        Event37:
        Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_001', 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Talk02'})
        } else {
            Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Talk03'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Return_NPC007'}) {
        Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_7'})
        Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_3'})
    } else {
        goto Event37
    }
}

void Finish_Npc_Kakariko016_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Destination_NPC016'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Conclusion_NPC016'}) {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_003_6'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_003_7'})
            } else {
                Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_003_8'})
            }
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_003_1', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprised'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
            Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_003_2', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
            Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_003_3', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_003_5', 'ASName': 'Talk'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
            Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_003_4', 'ASName': 'Wait'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Conclusion_NPC016'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Alert_NPC016'}) {

        call DiscoverPlayer_Npc_Kakariko016()

    } else
    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_SpeechBalloon_NPC016_1'}) {
        Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko016_100'})

        call NPC016_FalgResetByReturn()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Return_NPC016'})
    } else
    if Npc_Kakariko016.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_001', 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Talk08'})
        } else {
            Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Talk09'})
        }
    } else {
        Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko016_101'})
    }
}

void DiscoverPlayer_Npc_Kakariko007() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    Npc_Kakariko007.Demo_BecomeSpeaker({'IsWaitFinish': True})
    if Npc_Kakariko007.IsNeedEquipWeapon() {
        Npc_Kakariko007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_Kakariko007.Demo_PlayASForDemo({'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'TargetIndex': 0, 'IsIgnoreSame': True})
        Event309:
        Npc_Kakariko007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})

        fork {
            GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'NoConnect': False, 'CameraReset': True})
        } {
            SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        } {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
        }

        Npc_Kakariko007.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_1', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Talk_Surprised'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_2', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            Event722:

            call NPC007_FlagResetByReturn()

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Return_NPC007'})
        } else {
            Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_3', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            goto Event722
        }
    } else {
        goto Event309
    }
}

void DiscoverPlayer_Npc_Kakariko016() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    Npc_Kakariko016.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_Kakariko016.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'NoConnect': False, 'CameraReset': True})
    Npc_Kakariko016.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_002', 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Talk_Surprised', 'IsOverWriteLabelActorName': False})
    Npc_Kakariko016.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_003', 'ASName': ''})

    call NPC016_FalgResetByReturn()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Return_NPC016'})
}

void AssassinDead() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        Event780:
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_AssassinGenerate'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_JewelGenerate'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': False})
        Npc_Kakariko007.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_Kakariko007.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_Kakariko007.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction5'})
        EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'G-6', 'WarpDestPosName': 'AssassinEnd', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        LastRiddenHorse_ForEvent.Demo_VisibleOff({'IsWaitFinish': False})
        Npc_Kakariko007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        Npc_Kakariko007.Demo_ChangeEquipState({'IsWaitFinish': False, 'EquipState': 'Equip'})
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2014.9884033203125, 'Pattern1PosY': 286.4170227050781, 'Pattern1PosZ': 960.4453735351562, 'Pattern1AtX': 2014.9693603515625, 'Pattern1AtY': 286.216552734375, 'Pattern1AtZ': 959.42041015625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
        Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_105', 'IsCloseMessageDialog': True})
        Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_109', 'IsCloseMessageDialog': True})
        Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_111', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2015.7314453125, 'Pattern1PosY': 286.38665771484375, 'Pattern1PosZ': 958.4735107421875, 'Pattern1AtX': 2015.5576171875, 'Pattern1AtY': 286.3670959472656, 'Pattern1AtZ': 953.18212890625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_106', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2017.803955078125, 'Pattern1PosY': 285.39666748046875, 'Pattern1PosZ': 959.20556640625, 'Pattern1AtX': 2016.946044921875, 'Pattern1AtY': 285.506591796875, 'Pattern1AtZ': 958.6209106445312, 'Pattern1Fovy': 50.00001907348633, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_107', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
        Npc_Kakariko007.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_112', 'IsCloseMessageDialog': True, 'ASName': '', 'IsWaitFinish': True})
        Npc_Kakariko007.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_117'})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    } else {
        goto Event780
    }
}

void BallSet() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})

    call Common.RemainsLithogragh_Hole()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_JewelGenerate'})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsUseSlowTurn': False, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 3, 'ActorName': '', 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'NotBack_Demo016Camera', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'DungeonArrival_StolenBook'})
    Npc_Kakariko007.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff', 'BgmCtrlType': 'MuteOff'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_Kakariko007.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_Kakariko007.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_Kakariko007.Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 4, 'TurnDirection': 0.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2019.854736328125, 'Pattern1PosY': 286.738037109375, 'Pattern1PosZ': 953.0215454101562, 'Pattern1AtX': 2021.3514404296875, 'Pattern1AtY': 286.7525329589844, 'Pattern1AtZ': 954.3474731445312, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_118', 'ASName': 'Talk_Surprised', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True})
    Npc_Kakariko007.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'FaceId': 1, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2025.207763671875, 'Pattern1PosY': 286.5267333984375, 'Pattern1PosZ': 955.9143676757812, 'Pattern1AtX': 2023.8714599609375, 'Pattern1AtY': 286.5177917480469, 'Pattern1AtZ': 954.4269409179688, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'ReviseModeEnd': 0, 'Accept1FrameDelay': True})
    Npc_Kakariko007.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_119', 'IsCloseMessageDialog': True, 'ASName': ''})
    Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_108', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'Count': 0.0, 'Pattern1PosX': 2019.52001953125, 'Pattern1PosY': 286.8900146484375, 'Pattern1PosZ': 959.719970703125, 'Pattern1AtX': 2024.02001953125, 'Pattern1AtY': 287.6600036621094, 'Pattern1AtZ': 962.3599853515625, 'Pattern1Fovy': 50.0, 'StartCalcOnly': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 3, 'TurnPosition': [0.0, 0.0, 0.0]})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Kakariko007.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction10'})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})

    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Alert_NPC008'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Alert_NPC016'})
    EventSystemActor.Demo_FlagON({'FlagName': 'StolenBook_Finish', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_KaidoNPC_Delete'})
}

void AssassinAppear() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})

    call Common.DisableSaveAndWarp()

    Npc_Kakariko007.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'UniqueName': ''})
    Npc_Kakariko007.Demo_BecomeSpeaker({'IsWaitFinish': True})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Kakariko007")})

    if Npc_Kakariko007.IsNeedEquipWeapon() {
        Npc_Kakariko007.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'GuardUnequip', 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'TargetIndex': 0, 'IsIgnoreSame': True})
        Event347:
        Npc_Kakariko007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2022.92578125, 'Pattern1PosY': 286.1626281738281, 'Pattern1PosZ': 956.035888671875, 'Pattern1AtX': 2023.82421875, 'Pattern1AtY': 286.29803466796875, 'Pattern1AtZ': 954.005126953125, 'Pattern1Fovy': 43.736331939697266, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'G-6', 'WarpDestPosName': 'AssassinDemo'})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
        Npc_Kakariko007.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_101', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2020.6190185546875, 'Pattern1PosY': 285.6466979980469, 'Pattern1PosZ': 951.4181518554688, 'Pattern1AtX': 2021.6781005859375, 'Pattern1AtY': 286.1770935058594, 'Pattern1AtZ': 953.30126953125, 'Pattern1Fovy': 43.736331939697266, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_AssassinGenerate'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Enemy_Assassin_Middle_Quest[Kakariko_Hoju].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DoronAppear', 'SLinkKey': 'DoronAppear'})
        Enemy_Assassin_Middle_Quest[Kakariko_Hoju].Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'EncounterStart', 'IsWaitFinish': True, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Enemy_Assassin_Middle_Quest[Kakariko_Hoju].Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Wait', 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

        fork {
            NPC_PublicVoice.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Assassin_1', 'IsCloseMessageDialog': True})
        } {
            Enemy_Assassin_Middle_Quest[Kakariko_Hoju].Demo_XLinkEventCreate({'SLinkKey': 'Greeting', 'IsWaitFinish': True, 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})
        }

        Npc_Kakariko007.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_102', 'ASName': 'Guard'})
        NPC_PublicVoice.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Assassin_0', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
        Npc_Kakariko007.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_103', 'ASName': 'Guard'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.0837400034070015, 'Pattern1PosY': 1.7840579748153687, 'Pattern1PosZ': 2.699950933456421, 'Pattern1AtX': 0.2617189884185791, 'Pattern1AtY': 2.969512939453125, 'Pattern1AtZ': -0.2829590141773224, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': 'Kakariko_Hoju', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'ActorName1': 'Enemy_Assassin_Middle_Quest', 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        NPC_PublicVoice.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Assassin_2', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
        Npc_Kakariko007.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_104', 'ASName': 'Guard'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.0837400034070015, 'Pattern1PosY': 1.7840579748153687, 'Pattern1PosZ': 2.699950933456421, 'Pattern1AtX': 0.2617189884185791, 'Pattern1AtY': 2.969512939453125, 'Pattern1AtZ': -0.2829590141773224, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': 'Kakariko_Hoju', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'ActorName1': 'Enemy_Assassin_Middle_Quest', 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        NPC_PublicVoice.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Assassin_3', 'IsCloseMessageDialog': True})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Enemy_Assassin_Middle_Quest', 'UniqueName': 'Kakariko_Hoju', 'FaceId': 2, 'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Event383:
            NPC_PublicVoice.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Assassin_4', 'IsCloseMessageDialog': True})
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Bgm_AssassinAppear', 'SoundDelay': 0, 'SLinkInst': ''})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2027.5947265625, 'Pattern1PosY': 288.91571044921875, 'Pattern1PosZ': 957.4427490234375, 'Pattern1AtX': 2025.5592041015625, 'Pattern1AtY': 288.5963439941406, 'Pattern1AtZ': 958.281982421875, 'Pattern1Fovy': 43.736331939697266, 'Count': 30.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsWaitFinish': False, 'ASName': 'DemoWaitAttention'})
            Npc_Kakariko007.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction6', 'UniqueName': ''})
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo347_1'}) {
                NPC_PublicVoice.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Assassin_6'})
                Event977:
                SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'EndTalk', 'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.7456669807434082, 'Pattern1PosY': 1.5925899744033813, 'Pattern1PosZ': -5.432860851287842, 'Pattern1AtX': -0.0408330000936985, 'Pattern1AtY': 1.6499940156936646, 'Pattern1AtZ': 0.05859399959445, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
            } else {
                NPC_PublicVoice.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Assassin_5', 'IsCloseMessageDialog': True})
                goto Event977
            }
        } else {
            GameROMPlayer.Demo_DestinationTurnRefActor({'UniqName': 'Kakariko_Hoju', 'IsWaitFinish': True})
            goto Event383
        }
    } else {
        goto Event347
    }
}

void Finish_Npc_Kakariko007_StolenBook_AssassinAttack_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_110', 'ASName': 'Guard'})
}

void Finish_Npc_Kakariko007_StolenBook_AssassinAttack_Near() {
    Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Kakariko007:TerrorEnemy'})
}

void Finish_Npc_Kakariko007_StolenBook_AssassinDead_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_113'})
}

void Finish_Npc_Kakariko002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kakariko002.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko002_R_008', 'ASName': ''})
}

void Finish_Npc_Kakariko007_StolenBook_Npc007_Return_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Kakariko007.CheckActorAction({'ActionName': 'Root/Timeline/Action10/到着'}) {
        Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_001', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Talk02'})
        } else {
            Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Talk03'})
        }
    } else {
        Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_7'})
        Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_3'})
    }
}

void Finish_Npc_Kakariko007_StolenBook_Npc007_Return_EachFrame() {
    Event1088:
    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_NPC007_Base'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 300})
        Npc_Kakariko007.Demo_SetWanderPathIndex({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Return_NPC007'})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event1088
    }
}

void BattleReset() {

    call Common.AirStartUP_Player()

    Npc_Kakariko007.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_Kakariko007.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Guard', 'MorphingFrame': -1.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko007', 'PosAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'MotionMode': 1, 'Pattern1PosX': 0.0, 'AtAppendMode': 2, 'Pattern1PosY': 1.0, 'Pattern1PosZ': 2.0, 'Pattern1AtY': 1.5, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'G-6', 'IsWaitFinish': True, 'WarpDestPosName': 'AssassinDemo'})
    Npc_Kakariko007.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_114', 'IsCloseMessageDialog': True, 'ASName': 'Guard'})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2005.22705078125, 'Pattern1PosY': 286.7701110839844, 'Pattern1PosZ': 965.1785888671875, 'Pattern1AtX': 2010.2598876953125, 'Pattern1AtY': 286.7674255371094, 'Pattern1AtZ': 963.5105590820312, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
}

void JewelReset() {

    call Common.AirStartUP_Player()

    Npc_Kakariko007.Demo_BecomeSpeaker({'IsWaitFinish': True})
    if Npc_Kakariko007.IsNeedEquipWeapon() {
        Npc_Kakariko007.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'GuardUnequip', 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'TargetIndex': 0, 'IsIgnoreSame': True})
        Event962:
        Npc_Kakariko007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsConfront': True, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko007', 'PosAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'MotionMode': 1, 'Pattern1PosX': 0.0, 'AtAppendMode': 2, 'Pattern1AtY': 1.5, 'Pattern1PosY': 1.2000000476837158, 'Pattern1PosZ': 2.5, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_JewelGenerate'})
        Npc_Kakariko007.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_115', 'IsCloseMessageDialog': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            Event993:
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'G-6', 'WarpDestPosName': 'AssassinEnd', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3.282227039337158, 'Pattern1PosY': 1.5778809785842896, 'Pattern1PosZ': 3.5084381103515625, 'Pattern1AtX': -1.764404058456421, 'Pattern1AtY': 1.285248041152954, 'Pattern1AtZ': 2.619710922241211, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Kakariko007', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Kakariko007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsConfront': True, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_JewelGenerate'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'IsResetCamera': False, 'SystemResetOption': 1})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        } else {
            goto Event993
        }
    } else {
        goto Event962
    }
}

void Finish_Npc_Kakariko016_StolenBook_Npc016_Return_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Kakariko016.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko016_002'})
    } else {
        Npc_Kakariko016.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko016_001'})
    }
}

void Finish_Npc_Kakariko016_StolenBook_Npc016_Return_EachFrame() {
    Event1087:
    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_NPC016_Base'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Return_NPC016'})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event1087
    }
}

void Finish_Npc_Kakariko008_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Destination_NPC008'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Conclusion_NPC008'}) {
            Npc_Kakariko008.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
            Npc_Kakariko008.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_11', 'IsCloseMessageDialog': True, 'ASName': 'Talk'})
            Npc_Kakariko008.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_15', 'ASName': 'Talk'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_12', 'ASName': 'Talk_Eat_Item_Carot'})
                Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_17', 'ASName': 'Talk'})
            } else {
                Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_13', 'ASName': 'Talk_Eat_Item_Carot'})
            }
        } else {
            Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_05', 'ASName': 'Talk_Eat_Item_Carot'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Kakariko008.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_08', 'ASName': 'Talk'})
            Npc_Kakariko008.Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_14'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkingL', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
            Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_09', 'ASName': ''})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_10', 'ASName': 'Talk_Eat_Item_Carot'})
            Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_16'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Conclusion_NPC008'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Alert_NPC008'}) {

        call DiscoverPlayer_Npc_Kakariko008()

    } else
    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Conclusion_NPC008'}) {
        Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_04'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_19'})
        } else {
            Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_18'})
        }
    } else {
        Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_04'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_06'})
        } else {
            Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_07'})
        }
    }
}

void DiscoverPlayer_Npc_Kakariko008() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    Npc_Kakariko008.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_Kakariko008.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'NoConnect': False, 'CameraReset': True})
    Npc_Kakariko008.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_03', 'ASName': 'Talk_Surprised', 'IsWaitAS': False})

    call NPC008_FlagResetByReturn()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Return_NPC008'})
}

void Finish_Npc_Kakariko008_StolenBook_Npc008_Return_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Kakariko008.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_02'})
    } else {
        Npc_Kakariko008.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko008_01'})
    }
}

void Finish_Npc_Kakariko008_StolenBook_Npc008_Return_EachFrame() {
    Event1086:
    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_NPC008_Base'}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Return_NPC008'})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event1086
    }
}

void Ready_Npc_Kakariko007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Talk01', 'ASName': ''})
    Npc_Kakariko007.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/StolenBook:Talk10'})
}

void Ready_Npc_Kakariko005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Talk00', 'ASName': ''})
}

void Finish_Npc_Kakariko005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_Alert_NPC007'}) {
        Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/StolenBook:Talk05'})
    } else {
        Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/StolenBook:Talk04'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/StolenBook:Talk06'})
        } else {
            Npc_Kakariko005.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/StolenBook:Talk07'})
        }
    }
}

void Ready_Npc_Kakariko008_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Npc_Kakariko008.Talk()

}

void SpeechBalloon_NPC007_1() {
    if !Npc_Kakariko007.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near001', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC007_Alert() {
    if !Npc_Kakariko007.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near002', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC007_2() {
    if !Npc_Kakariko007.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near003', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC007_3() {
    if !Npc_Kakariko007.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near007'})
    }
}

void SpeechBalloon_NPC007_4() {
    if !Npc_Kakariko007.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near008', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC007_5() {
    if !Npc_Kakariko007.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near009', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC016_1() {
    if !Npc_Kakariko016.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_Near001', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC016_2() {
    if !Npc_Kakariko016.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_Near002', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC016_3() {
    if !Npc_Kakariko016.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_Near003', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC016_4() {
    if !Npc_Kakariko016.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_Near004', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC008_1() {
    if !Npc_Kakariko008.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC008_2() {
    if !Npc_Kakariko008.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC008_3() {
    if !Npc_Kakariko008.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Near02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC008_4() {
    if !Npc_Kakariko008.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_Near004', 'IsChecked': False, 'DispFrame': 90})
    }
}

void SpeechBalloon_NPC016_Alert() {
    if !Npc_Kakariko016.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_Near002'})
    }
}

void SpeechBalloon_NPC008_Alert() {
    if !Npc_Kakariko008.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void NPC007_Destination() {
    if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_SpeechBalloon_NPC007_5'}) {

        call NPC007_FlagResetByReturn()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Destination_NPC007'})
        if !Npc_Kakariko007.CheckDistanceFromPlayer({'Border': 100.0}) {
            Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near010', 'IsChecked': False, 'DispFrame': 90})
        }
    }
}

void NPC016_Destination() {

    call NPC016_FalgResetByReturn()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Destination_NPC016'})
    Npc_Kakariko016.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})
    if !Npc_Kakariko016.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_Near004'})
    }
}

void NPC008_Destination() {

    call NPC008_FlagResetByReturn()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Destination_NPC008'})
    if !Npc_Kakariko008.CheckDistanceFromPlayer({'Border': 100.0}) {
        Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/StolenBook:Near03'})
    }
}

void NPC007_FlagResetByReturn() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC007_1'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC007_2'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC007_3'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC007_4'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC007_5'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Destination_NPC007'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Alert_NPC007'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_NakinCheck'})
    Npc_Kakariko007.Demo_SetWanderPathIndex({'IsWaitFinish': False})
}

void NPC007_FlagResetByMorning() {

    call NPC007_FlagResetByReturn()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'StolenBook_Return_NPC007'})
    if Npc_Kakariko007.CheckActorAction({'ActionName': 'Root/Timeline/Action3/到着'}) {
        Event840:
        Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near004', 'IsChecked': False, 'DispFrame': 90})
    } else
    if Npc_Kakariko007.CheckActorAction({'ActionName': 'Root/Timeline/Action3/移動'}) {
        goto Event840
    } else
    if Npc_Kakariko007.CheckActorAction({'ActionName': 'Root/Timeline/Wander/'}) {
        goto Event840
    }
}

void NPC008_FlagResetByMorning() {

    call NPC008_FlagResetByReturn()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'StolenBook_Return_NPC008'})
    if Npc_Kakariko008.CheckActorAction({'ActionName': 'Root/Timeline/Action3/到着'}) {
        Event849:
        Npc_Kakariko008.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/StolenBook:Near01'})
    } else
    if Npc_Kakariko008.CheckActorAction({'ActionName': 'Root/Timeline/Wander/'}) {
        goto Event849
    }
}

void NPC016_FlagResetByMorning() {

    call NPC016_FalgResetByReturn()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': False, 'FlagName': 'StolenBook_Return_NPC016'})
    if Npc_Kakariko016.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
        Event852:
        Npc_Kakariko016.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko012_S1_Near001'})
    } else
    if Npc_Kakariko016.CheckActorAction({'ActionName': 'Root/Timeline/Wander/'}) {
        goto Event852
    }
}

void NPC008_FlagResetByReturn() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC008_1'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC008_2'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC008_3'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC008_4'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Alert_NPC008'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Destination_NPC008'})
    Npc_Kakariko008.Demo_SetWanderPathIndex({'IsWaitFinish': False})
}

void NPC016_FalgResetByReturn() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC016_1'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC016_2'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC016_3'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_SpeechBalloon_NPC016_4'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Alert_NPC016'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'StolenBook_Destination_NPC016'})
    Npc_Kakariko016.Demo_SetWanderPathIndex({'IsWaitFinish': False})
}

void Finish_Npc_Kakariko016_Near() {

    call Npc_Kakariko016.Near()

}

void Finish_Npc_Kakariko008_Near() {

    call Npc_Kakariko008.Near()

}

void DoranGoHome() {
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    Npc_Kakariko007.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_Kakariko007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 3, 'ActorName1': 'Npc_Kakariko007', 'PosAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'MotionMode': 1, 'Pattern1PosX': 0.0, 'AtAppendMode': 2, 'Pattern1PosY': 1.0, 'Pattern1PosZ': 2.0, 'Pattern1AtY': 1.5, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_Kakariko007.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Talk_Surprised', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_4'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Kakariko007.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_6'})
        Event916:

        call NPC007_FlagResetByReturn()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StolenBook_Return_NPC007'})
    } else {
        Npc_Kakariko007.Demo_OpenMessageDialog({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_002_5'})
        goto Event916
    }
}

void Ready_Npc_Kakariko006_Talk() {
    switch Npc_Kakariko006.CheckActorAction13() {
      case [0, 1]:

        call Npc_Kakariko006.Talk()

      case [2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13]:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_first'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Npc_Kakariko006.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko006_03'})
        } else {

            call Npc_Kakariko006.Talk()

        }
      case 7:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Kakariko006_first'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if EventSystemActor.CheckFlag({'FlagName': 'StolenBook_NakinCheck'}) {
                Npc_Kakariko006.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko006_02'})
            } else {
                Npc_Kakariko006.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko006_01'})
            }
        } else {

            call Npc_Kakariko006.Talk()

        }
    }
}

void Ready_Npc_Kakariko006_Near() {
    switch Npc_Kakariko006.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13]:

        call Npc_Kakariko006.Near()

      case 7:
        Npc_Kakariko006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko006_Near', 'DispFrame': 90, 'IsChecked': False})
    }
}

void Ready_Npc_Kakariko007_Near() {
    Npc_Kakariko007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near012'})
}

void Ready_Npc_Kakariko005_Near() {
    Npc_Kakariko005.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/StolenBook:Npc_Kakariko007_S1_Near013'})
}

void PayaWarp() {
    Npc_Kakariko002.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
}
