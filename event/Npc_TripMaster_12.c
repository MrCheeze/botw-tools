-------- EventFlow: Npc_TripMaster_12 --------

Actor: Npc_TripMaster_12
entrypoint: None()
actions: ['Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_TripMaster_00.TripMaster({'Self': ActorIdentifier(name="Npc_TripMaster_12")})

}

void Near() {
    switch Npc_TripMaster_12.CheckActorAction13() {
      case 0:
        Event1:
        Npc_TripMaster_12.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_12:Near', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        goto Event1
      case 2:
        goto Event1
      case 12:
        goto Event1
    }
}
