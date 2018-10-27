-------- EventFlow: Npc_Goron009 --------

Actor: Npc_Goron009[Son_GoronsRock]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron010[Father_join_Demo327_0]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    fork {
        Npc_Goron009[Son_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk07', 'IsOverWriteLabelActorName': False, 'ASName': 'Act_Happy_Wait'})
    } {
        Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Happy_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

}

void GoronsRock_Finish_Talk() {
    goto Event0
}
