-------- EventFlow: Npc_Musician_009 --------

Actor: Npc_Musician_009
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Npc_Musician_008.Umayado_Talk({'Self': ActorIdentifier(name="Npc_Musician_009")})

}
