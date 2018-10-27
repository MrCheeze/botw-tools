-------- EventFlow: Npc_Musician_AoC_BalladOfHeroes_Last --------

Actor: Npc_Musician_AoC_BalladOfHeroes_Last
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Musician_AoC_BalladOfHeroes_Last:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}
