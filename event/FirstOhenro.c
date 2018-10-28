-------- EventFlow: FirstOhenro --------

Actor: Npc_kokiri001
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_RollbackQuest', 'Demo_CloseMessageDialog', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_ResetGimmick', 'Demo_WarpPLToPosAndResetGimmick', 'Demo_CallDemo']
queries: ['GeneralChoice2', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: Npc_kokiri009[FirstOhenro]
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_WarpToAnchor', 'Demo_SetWanderPathIndex', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag', 'CheckDistanceFromPlayer']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_kokiri001_Near() {
    Npc_kokiri001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_R_Near', 'DispFrame': 300, 'IsChecked': True})
}

void Ready_Npc_kokiri001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_kokiri001.IsOnInstEventFlag() {
        Npc_kokiri001.Demo_Talk({'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_R_005', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_kokiri001.Demo_Talk({'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_R_006', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})
            Npc_kokiri001.Demo_Talk({'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_R_003', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'FirstOhenro_Activated', 'IsWaitFinish': True})
        } else {
            Npc_kokiri001.Demo_Talk({'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_R_007', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})
        }
    } else {
        Npc_kokiri001.Demo_Talk({'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_R_001', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_kokiri001.Demo_Talk({'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_R_002', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})
            Npc_kokiri001.Demo_Talk({'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_R_003', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'FirstOhenro_Activated', 'IsWaitFinish': True})
        } else {
            Npc_kokiri001.Demo_Talk({'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_R_004', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False})
        }
    }
}

void Ready_Npc_kokiri009_Near() {
    Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_R_Near', 'IsChecked': False, 'DispFrame': 90})
}

void Ready_Npc_kokiri009_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_kokiri009[FirstOhenro].IsOnInstEventFlag() {
        Npc_kokiri009[FirstOhenro].Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_R_002', 'IsOverWriteLabelActorName': False})
    } else {
        Npc_kokiri009[FirstOhenro].Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_R_001', 'IsOverWriteLabelActorName': False})
    }
}

void EntryPoint0() {
    Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near001', 'IsChecked': False, 'DispFrame': 90})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Start'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Step1'})
}

void Step1_Npc_kokiri001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_kokiri001.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_S1_001', 'IsOverWriteLabelActorName': False})
}

void EntryPoint1() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near002', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint2() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near003', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint3() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near004', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint4() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near005', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint5() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near006_01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint6() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near007', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint7() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near008', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint8() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near009', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint9() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near010_01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint10() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near011', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint11() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near012', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint12() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near013', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint13() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near014', 'IsChecked': False, 'DispFrame': 90})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Start'})
    }
}

void DiscoverPlayer_Npc_kokiri009() {

    call Common.AirStartUP_Player()

    Event242:
    Npc_kokiri009[FirstOhenro].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_kokiri009[FirstOhenro].Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_001', 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    Npc_kokiri009[FirstOhenro].Demo_WarpToAnchor({'DestinationX': 252.89999389648438, 'DestinationY': 304.0, 'DestinationZ': -2261.199951171875, 'IsWaitFinish': True, 'DirectionY': 0.0})
    EventSystemActor.Demo_WarpPLToPosAndResetGimmick({'IsWaitFinish': True, 'Destination': [259.5, 280.5, -2228.60009765625], 'RotationY': 0.0, 'SystemResetOption': 0, 'AdditionalResetActor': ''})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 261.7893371582031, 'Pattern1PosY': 283.3376159667969, 'Pattern1PosZ': -2224.924560546875, 'Pattern1AtX': 258.40826416015625, 'Pattern1AtY': 282.42498779296875, 'Pattern1AtZ': -2228.40185546875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Npc_kokiri001', 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    }

    EventSystemActor.Demo_RollbackQuest({'QuestName': 'FirstOhenro', 'StepName': 'Step1', 'IsWaitFinish': True})

    call Arrival_FlagOFF()

    Npc_kokiri001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    Npc_kokiri001.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_S1_002', 'IsOverWriteLabelActorName': False})
    Npc_kokiri009[FirstOhenro].Demo_SetWanderPathIndex({'IsWaitFinish': True})
}

void EntryPoint14() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near006_02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void EntryPoint15() {
    if !Npc_kokiri009[FirstOhenro].CheckDistanceFromPlayer({'Border': 80.0}) {
        Npc_kokiri009[FirstOhenro].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_S1_Near010_02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void ForestFog() {

    call Demo037_0.ForestFog_FadeOut({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})

    EventSystemActor.Demo_ResetGimmick({'SystemResetOption': 1, 'IsWaitFinish': True, 'AdditionalResetActor': '', 'IsResetCamera': False})
    if EventSystemActor.CheckFlag({'FlagName': 'FirstOhenro_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'FirstOhenro_Finish'}) {
            Event150:

            call Demo037_0.ForestFog_FadeIn()

        } else {
            Npc_kokiri009[FirstOhenro].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'SeqBank': 0, 'TargetIndex': -1})
            Npc_kokiri009[FirstOhenro].Demo_WarpToAnchor({'DestinationX': 252.89999389648438, 'DestinationY': 304.0, 'DestinationZ': -2261.199951171875, 'IsWaitFinish': True, 'DirectionY': 0.0})
            EventSystemActor.Demo_RollbackQuest({'QuestName': 'FirstOhenro', 'StepName': 'Step1', 'IsWaitFinish': True})

            call Arrival_FlagOFF()

            Npc_kokiri001.Demo_BecomeSpeaker({'IsWaitFinish': True})
            Npc_kokiri001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [257.0, 309.0, -2228.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})

            call Demo037_0.ForestFog_FadeIn()

            Npc_kokiri001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_S1_003', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            Npc_kokiri009[FirstOhenro].Demo_SetWanderPathIndex({'IsWaitFinish': True})
        }
    } else {
        goto Event150
    }
}

void Step2_Npc_kokiri001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_kokiri001.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_S1_004'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_kokiri001.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_S1_007'})
    } else {
        Npc_kokiri001.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_S1_005', 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'Step2_Talk_Retry', 'DemoName': 'FirstOhenro', 'EndFade': 1})
    }
}

void Step2_Npc_kokiri009_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    goto Event242
}

void Arrival_FlagOFF() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Step1'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Start'})
    EventSystemActor.Demo_FlagOFF({'FlagName': 'FirstOhenro_Point1', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point2'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point3'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point4'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point5'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point6'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point7'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point8'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point9'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point10'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point11'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point12'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Point13'})
}

void Dungeon_Arrival() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Step2'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Start'})
}

void Finish_Npc_kokiri009_StepStart() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 5, 'Self': ActorIdentifier(name="Npc_kokiri009", sub_name="FirstOhenro")})

    Npc_kokiri009[FirstOhenro].Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_F1_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    Npc_kokiri009[FirstOhenro].Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_kokiri009[FirstOhenro].Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri009_F1_002'})
    EventSystemActor.Demo_FlagON({'FlagName': 'FirstOhenro_Finish', 'IsWaitFinish': True})

    call KorokShiren_CompleteCheck()

}

void Step2_Talk_Retry() {
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    Npc_kokiri009[FirstOhenro].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'SeqBank': 0, 'TargetIndex': -1})
    Npc_kokiri009[FirstOhenro].Demo_WarpToAnchor({'DestinationX': 252.89999389648438, 'DestinationY': 304.0, 'DestinationZ': -2261.199951171875, 'IsWaitFinish': True, 'DirectionY': 0.0})
    EventSystemActor.Demo_RollbackQuest({'QuestName': 'FirstOhenro', 'StepName': 'Step1', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_Step2'})

    call Arrival_FlagOFF()

    Npc_kokiri001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    Npc_kokiri001.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/FirstOhenro:Npc_Kokiri001_S1_006'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstOhenro_AreaMake'})
    Npc_kokiri009[FirstOhenro].Demo_SetWanderPathIndex({'IsWaitFinish': True})
}

void KorokShiren_CompleteCheck() {
    if EventSystemActor.CheckFlag({'FlagName': 'KorokMini_KorokShiren_Activated'})
    && EventSystemActor.CheckFlag({'FlagName': 'ShieldofKolog_Finish'})
    && EventSystemActor.CheckFlag({'FlagName': 'GodTree_Finish'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'KorokMini_KorokShiren_Step010', 'IsWaitFinish': True})
    }
}
