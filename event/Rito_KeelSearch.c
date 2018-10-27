-------- EventFlow: Rito_KeelSearch --------

Actor: Npc_HighMountain036
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ForbidSettingInstEventFlag']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_AppearRupee', 'Demo_AdvanceQuest', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_HighMountain036_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

    Npc_HighMountain036.Demo_Talk({'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_R_001', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Act_SearchChild', 'IsCloseMessageDialog': True})
    Npc_HighMountain036.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_R_001_2', 'IsCloseMessageDialog': True})

    fork {
        Npc_HighMountain036.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'TurnDirection': 270.0, 'IsConfront': True, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnDirection': 270.0, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 2, 'IsTurnToLookAtPos': False})
    }

    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_R_003', 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3702.01708984375, 'Pattern1PosY': 322.81634521484375, 'Pattern1PosZ': -1755.095947265625, 'Pattern1AtX': -3707.1953125, 'Pattern1AtY': 322.33624267578125, 'Pattern1AtZ': -1754.7332763671875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'Count': 30.0, 'Cushion': 30.0, 'ActorName1': '', 'ActorName2': '', 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'StartCalcOnly': True, 'ReviseModeEnd': 2, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_R_002', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_BrosRock_Activated'}) {

        fork {
            Npc_HighMountain036.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
        } {
            EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 3, 'TurnDirection': 0.0, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
        }

        Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_F_101', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

        call Remuneration()

        Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_F_002', 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_AdvanceQuest({'StepName': 'Step1', 'ForceRunTelop': True, 'IsWaitFinish': True, 'QuestName': ''})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_KeelSearch_Finish'})
        Npc_HighMountain036.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
    } else {
        EventSystemActor.Demo_AdvanceQuest({'StepName': 'Step1', 'ForceRunTelop': True, 'IsWaitFinish': True, 'QuestName': ''})
    }
}

void Step1_Npc_HighMountain036_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_S01_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3702.01708984375, 'Pattern1PosY': 322.81634521484375, 'Pattern1PosZ': -1755.095947265625, 'Pattern1AtX': -3707.1953125, 'Pattern1AtY': 322.33624267578125, 'Pattern1AtZ': -1754.7332763671875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'CollisionInterpolateSkip': True, 'Count': 30.0, 'Cushion': 30.0, 'ActorName1': '', 'ActorName2': '', 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'StartCalcOnly': True, 'ReviseModeEnd': 2, 'MotionMode': 1, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_S01_002', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
}

void Finish_Npc_HighMountain036_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_F_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

    call Remuneration()

    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_F_002', 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_KeelSearch_Finish'})
    Npc_HighMountain036.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
}

void Ready_Npc_HighMountain036_Near() {
    Npc_HighMountain036.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_R_Near', 'DispFrame': 300, 'IsChecked': True})
}

void Finish_Npc_HighMountain036_Near() {
    Npc_HighMountain036.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_F_Near'})
}

void Finish_Npc_HighMountain036_Rito_BrosRock_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_F_102', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})

    call Remuneration()

    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_F_103', 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_KeelSearch_Finish'})
}

void Finish_Npc_HighMountain036_Rito_BrosRock_Finish_Near() {
    Npc_HighMountain036.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_F_Near_Rock'})
}

void Remuneration() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'PutRupee_Purple'})

    EventSystemActor.Demo_AppearRupee({'IsVisible': 0, 'IsWaitFinish': True})
}

void Ready_Npc_HighMountain036_Rito_BrosRock_Finish_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_R_004', 'IsCloseMessageDialog': True})

    call Remuneration()

    Npc_HighMountain036.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_F_103', 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_AdvanceQuest({'StepName': 'Step1', 'ForceRunTelop': True, 'IsWaitFinish': True, 'QuestName': ''})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_KeelSearch_Finish'})
}

void Ready_Npc_HighMountain036_Rito_BrosRock_Finish_Near() {
    Npc_HighMountain036.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Rito_KeelSearch:Npc_HighMountain036_R_Near_01'})
}
