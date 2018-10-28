-------- EventFlow: Npc_oasis027 --------

Actor: Npc_oasis027
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !Npc_oasis027.IsOnInstEventFlag() {

        call KnightDoll.hello()

    }
    Npc_oasis027.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_oasis027:Talk_01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
}
