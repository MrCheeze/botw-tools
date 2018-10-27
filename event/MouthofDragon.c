-------- EventFlow: MouthofDragon --------

Actor: Npc_Musician_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Musician_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Musician_002.IsOnInstEventFlag() {

        call BloodyMoonRelief.Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_002")})

        Event26:

        call Sing()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MouthofDragon_Activated'})
    } else {
        Npc_Musician_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MouthofDragon:Text007'})

        call BloodyMoonRelief.Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_002")})

        goto Event26
    }
}

void Ready_Npc_Musician_002_Near() {
    Event29:
    if EventSystemActor.CheckFlag({'FlagName': 'MouthofDragon_Finish'}) {
        Npc_Musician_002.Demo_TalkASync({'IsChecked': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MouthofDragon:Npc_Musician_002_R_Near2', 'DispFrame': 90})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'MouthofDragon_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Enemy_Dragon_Electric_DoorOpen'}) {
                Event13:
                Npc_Musician_002.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/MouthofDragon:Npc_Musician_002_R_Near0'})
            } else {
                Npc_Musician_002.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MouthofDragon:Npc_Musician_002_R_Near1', 'DispFrame': 90})
            }
        } else {
            goto Event13
        }
    }
}

void Finish_Npc_Musician_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call BloodyMoonRelief.Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_002")})


    call Sing()

}

void Sing() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 814.14111328125, 'Pattern1PosY': 148.8155059814453, 'Pattern1PosZ': 3064.489013671875, 'Pattern1AtX': 817.6222534179688, 'Pattern1AtY': 148.43421936035156, 'Pattern1AtZ': 3061.5888671875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'ReviseModeEnd': 0, 'Count': 260.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'Musician002Bgm'})
    Npc_Musician_002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_HintChant', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MouthofDragon:Text004'})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'FadeSec': 1.0, 'BgmName': 'Musician002Bgm'})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 30.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Enemy_Dragon_Electric_DoorOpen'}) {
        Npc_Musician_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MouthofDragon:Text006'})
    } else {
        Npc_Musician_002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MouthofDragon:Text005'})
    }
}

void Finish_Npc_Musician_002_Near() {
    goto Event29
}

void Step1_Npc_Musician_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call BloodyMoonRelief.Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_002")})


    call Sing()

}

void Step1_Npc_Musician_002_Near() {
    goto Event29
}
