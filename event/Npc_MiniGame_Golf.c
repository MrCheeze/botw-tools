-------- EventFlow: Npc_MiniGame_Golf --------

Actor: Npc_MiniGame_Golf
entrypoint: None()
actions: ['Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

}

void Near() {
    Npc_MiniGame_Golf.Demo_TalkASync({'MessageId': 'EventFlowMsg/MiniGame_SmashGolf:Near00', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
}
