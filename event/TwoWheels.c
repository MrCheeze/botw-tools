-------- EventFlow: TwoWheels --------

Actor: Npc_Musician_001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_CallDemo']
queries: ['CheckFlag', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Musician_001_Talk() {
    if Npc_Musician_001.IsOnInstEventFlag() {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


        call BloodyMoonRelief.Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_001")})

        Event96:

        call Sing()

        if !EventSystemActor.CheckFlag({'FlagName': 'TwoWheels_Activated'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'TwoWheels_Activated', 'IsWaitFinish': True})
        }
        if EventSystemActor.CheckFlag({'FlagName': 'TwoWheels_Dungeon'})
        && !EventSystemActor.CheckFlag({'FlagName': 'TwoWheels_Finish'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TwoWheels_Finish'})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 5, 'Arg_Greeting': 'NotAndNot'})

        Npc_Musician_001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwoWheels:Text006', 'IsWaitFinish': True, 'ASName': 'Act_Accordion', 'IsCloseMessageDialog': False})
        Npc_Musician_001.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': True})
        Npc_Musician_001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/TwoWheels:Text007', 'ASName': ''})
        Npc_Musician_001.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': True, 'IsConfront': False})
        Npc_Musician_001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwoWheels:Text008', 'IsCloseMessageDialog': True})

        call BloodyMoonRelief.Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_001")})

        goto Event96
    }
}

void Finish_Npc_Musician_001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call BloodyMoonRelief.Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_001")})


    call Sing()

}

void EntryPoint0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})

    call Common.AirStartUP_Player()

    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 3, 'FaceId': 1, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    }
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
    if EventSystemActor.CheckFlag({'FlagName': 'TwoWheels_Activated'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TwoWheels_Finish'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})

        call BloodyMoonRelief.Musician_Check()

    }
}

void Ready_Npc_Musician_001_Near() {
    Npc_Musician_001.Demo_TalkASync({'MessageId': 'EventFlowMsg/TwoWheels:Npc_Musician_001_R_Near', 'IsWaitFinish': True, 'IsChecked': True, 'DispFrame': 300})
}

void Sing() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1614.5015869140625, 'Pattern1PosY': 236.9621124267578, 'Pattern1PosZ': 24.694290161132812, 'Pattern1AtX': -1620.4635009765625, 'Pattern1AtY': 234.81033325195312, 'Pattern1AtZ': 25.779640197753906, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'TargetActor2': -1, 'ActorName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'IsWaitFinish': False, 'Count': 260.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'Musician001Bgm'})
    Npc_Musician_001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_HintChant', 'MessageId': 'EventFlowMsg/TwoWheels:Text004'})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'FadeSec': 1.0, 'BgmName': 'Musician001Bgm'})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 30.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    Npc_Musician_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/TwoWheels:Text005'})
}
