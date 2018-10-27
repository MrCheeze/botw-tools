-------- EventFlow: Npc_TripMaster_14 --------

Actor: Npc_TripMaster_14
entrypoint: None()
actions: ['Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call Npc_TripMaster_00.TripMaster({'Self': ActorIdentifier(name="Npc_TripMaster_14")})

}

void Near() {
    Event2:
    switch Npc_TripMaster_14.CheckActorAction13() {
      case 0:
        Event1:
        Npc_TripMaster_14.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_14:Near', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        goto Event1
      case 2:
        goto Event1
      case 12:
        goto Event1
    }
}

void FironeMini_HorseEnemy_Finish_Talk() {
    goto Event0
}

void FironeMini_HorseEnemy_Finish_Near() {
    goto Event2
}
