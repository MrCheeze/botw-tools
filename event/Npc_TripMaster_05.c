-------- EventFlow: Npc_TripMaster_05 --------

Actor: Npc_TripMaster_05
entrypoint: None()
actions: ['Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_TripMaster_00.TripMaster({'Self': ActorIdentifier(name="Npc_TripMaster_05")})

}

void Near() {
    if Npc_TripMaster_05.CheckActorAction13() in [0, 1, 2, 12] {
        Npc_TripMaster_05.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_05:Near', 'IsChecked': False, 'DispFrame': 90})
    }
}
