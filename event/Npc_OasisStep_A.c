-------- EventFlow: Npc_OasisStep_A --------

Actor: Npc_OasisStep_A
entrypoint: None()
actions: ['Demo_BecomeSpeaker', 'Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayer', 'Demo_WaitFrame']
queries: ['CheckFlag', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_OasisStep_A.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:Talk01', 'ASName': 'Talk'})
}

void DemoStop() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_OasisStep_A")})

    Npc_OasisStep_A.Demo_BecomeSpeaker({'IsWaitFinish': True})
    Npc_OasisStep_A.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'FaceId': 2, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
    Npc_OasisStep_A.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisStep_A:Talk00', 'ASName': 'Guard', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'NoLogo'})
    EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'B-7', 'IsWaitFinish': True, 'WarpDestPosName': 'StopStep_C'})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'NoLogo'})
}

void Near() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckUpper': False, 'CheckLower': False, 'CheckHead': True, 'CheckType': 'Thunder'}) {
        Npc_OasisStep_A.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OasisStep_A:Near_Raimei_001', 'DispFrame': 90, 'IsChecked': False})
    }
}
