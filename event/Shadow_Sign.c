-------- EventFlow: Shadow_Sign --------

Actor: Npc_Musician_003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CallDemo', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Join', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Musician_003_Talk() {
    if Npc_Musician_003.IsOnInstEventFlag() {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


        call BloodyMoonRelief.Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_003")})

        Event92:

        call Sing()

        if !EventSystemActor.CheckFlag({'FlagName': 'Shadow_Sign_Activated'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shadow_Sign_Activated'})
        }
        if EventSystemActor.CheckFlag({'FlagName': 'Shadow_Sign_Dungeon'})
        && !EventSystemActor.CheckFlag({'FlagName': 'Shadow_Sign_Finish'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shadow_Sign_Finish'})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 5, 'Arg_Greeting': 'NotAndNot'})

        Npc_Musician_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Shadow_Sign:Npc_Musician_003_R_009', 'ASName': 'Act_Accordion'})
        Npc_Musician_003.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Musician_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Shadow_Sign:Npc_Musician_003_R_010', 'IsCloseMessageDialog': True, 'ASName': ''})
        Npc_Musician_003.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
        Npc_Musician_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Shadow_Sign:Npc_Musician_003_R_008', 'ASName': '', 'IsCloseMessageDialog': False})

        call BloodyMoonRelief.Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_003")})

        goto Event92
    }
}

void Finish_Npc_Musician_003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call BloodyMoonRelief.Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_003")})


    call Sing()

}

void DungeonAppear() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3576.401123046875, 'Pattern1PosY': 367.1142883300781, 'Pattern1PosZ': 2005.665283203125, 'Pattern1AtX': -3577.16650390625, 'Pattern1AtY': 362.0061340332031, 'Pattern1AtZ': 1999.2581787109375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Count': 15.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call Common.RemainsLithograph()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3581.094970703125, 'Pattern1PosY': 361.58746337890625, 'Pattern1PosZ': 1993.1729736328125, 'Pattern1AtX': -3578.1123046875, 'Pattern1AtY': 360.0061340332031, 'Pattern1AtZ': 1987.77490234375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'IsWaitFinish': True, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'ActorIgnoringCollision': -1, 'LngShiftRange': 0.0, 'LatShiftRange': 0.0, 'ReviseModeEnd': 1, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'Cushion': 0.0, 'MotionMode': 0, 'StartCalcOnly': False, 'Count': 60.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'IsValid': True, 'FaceId': 1, 'TurnDirection': 150.0, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
    }

    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'EndFade': 0, 'IsWaitFinish': False})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Shadow_Sign_Activated'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shadow_Sign_Finish'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

        call BloodyMoonRelief.Musician_Check()

    }
}

void Ready_Npc_Musician_003_Near() {
    Npc_Musician_003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Shadow_Sign:Npc_Musician_003_R_Near', 'IsChecked': True, 'DispFrame': 300})
}

void Sing() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    Npc_Musician_003.Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 3, 'TurnDirection': 50.0})
    Npc_Musician_003.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_HintChant'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3655.94775390625, 'Pattern1PosY': 478.5270690917969, 'Pattern1PosZ': 1829.65869140625, 'Pattern1AtX': -3653.937744140625, 'Pattern1AtY': 475.20318603515625, 'Pattern1AtZ': 1833.7401123046875, 'Pattern1Fovy': 50.00001907348633, 'Count': 260.0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'Musician003Bgm'})
    Npc_Musician_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Shadow_Sign:Npc_Musician_003_R_001', 'ASName': 'Talk_HintChant'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Npc_Musician_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Shadow_Sign:Npc_Musician_003_R_005', 'ASName': 'Talk_HintChant'})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'FadeSec': 1.0, 'BgmName': 'Musician003Bgm'})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 30.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    Npc_Musician_003.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_Musician_003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Shadow_Sign:Npc_Musician_003_R_006'})
}
