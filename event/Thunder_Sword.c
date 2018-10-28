-------- EventFlow: Thunder_Sword --------

Actor: Npc_LakeSideHatago005
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_005
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsOnInstEventFlag']
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

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Musician_005_Near() {
    Npc_Musician_005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_Musician_005_R_011', 'DispFrame': 90, 'IsChecked': True})
}

void Ready_Npc_LakeSideHatago005_Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_LakeSideHatago005.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_LakeSideHatago005.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_LakeSideHatago005:talk_02'})
    } else {
        WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
        if Npc_LakeSideHatago005.IsOnInstEventFlag() {
            Npc_LakeSideHatago005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_LakeSideHatago005_R_021', 'IsCloseMessageDialog': False})
            Npc_LakeSideHatago005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_LakeSideHatago005_R_051', 'IsCloseMessageDialog': True})
        } else {
            Npc_LakeSideHatago005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_LakeSideHatago005_R_011', 'IsCloseMessageDialog': False})
            Npc_LakeSideHatago005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_LakeSideHatago005_R_021', 'IsCloseMessageDialog': False})
        }
    }
}

void Ready_Npc_Musician_005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Musician_005.IsOnInstEventFlag() {
        Event107:

        call BloodyMoonRelief.Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_005")})

        Event108:

        call Sing()

        if EventSystemActor.CheckFlag({'FlagName': 'Thunder_Sword_Step010'}) {
            Npc_Musician_005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_Musician_005_F_021'})
        }
        EventSystemActor.Demo_FlagON({'FlagName': 'Thunder_Sword_Activated', 'IsWaitFinish': True})
    } else {
        Npc_Musician_005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_Musician_005_R_021', 'IsCloseMessageDialog': True})

        call BloodyMoonRelief.Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_005")})

        goto Event108
    }
}

void Finish_Npc_LakeSideHatago005_Talk() {

    call Npc_LakeSideHatago005.Talk()

}

void Finish_Npc_Musician_005_Near() {
    Event105:
    Npc_Musician_005.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_Musician_005_R_011', 'DispFrame': 90, 'IsChecked': False})
}

void Finish_Npc_Musician_005_Talk() {
    Event54:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Musician_005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_Musician_005_F_021'})
}

void EntryPoint0() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Thunder_Sword_Step010'})
}

void Sing() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2061.68603515625, 'Pattern1PosY': 304.2466125488281, 'Pattern1PosZ': 3225.741455078125, 'Pattern1AtX': 2058.0693359375, 'Pattern1AtY': 304.1760559082031, 'Pattern1AtZ': 3229.6826171875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'Count': 260.0, 'CollisionInterpolateSkip': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'Musician005Bgm'})
    Npc_Musician_005.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': 'Talk_HintChant', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_Musician_005_R_041'})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'FadeSec': 1.0, 'BgmName': 'Musician005Bgm'})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 30.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    if !EventSystemActor.CheckFlag({'FlagName': 'Thunder_Sword_Step010'}) {
        Npc_Musician_005.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Thunder_Sword:Npc_Musician_005_R_051'})
    }
}

void After_Thunder_Sword_Finish_Talk() {
    goto Event54
}

void Step010_Npc_LakeSideHatago005_Talk() {
    goto Event1
}

void Step010_Npc_Musician_005_Near() {
    goto Event105
}

void Step010_Npc_Musician_005_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    goto Event107
}
