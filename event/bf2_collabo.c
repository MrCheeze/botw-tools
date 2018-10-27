-------- EventFlow: bf2_collabo --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseGameDataInt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

}

void bf2_collabo_remaining() {
    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'bf2_collabo_remaining', 'Value': -1, 'IsWaitFinish': True})
}
