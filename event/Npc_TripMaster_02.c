-------- EventFlow: Npc_TripMaster_02 --------

Actor: Npc_TripMaster_02
entrypoint: None()
actions: ['Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_TripMaster_02[TripMaster_02_Talk(Self)]
entrypoint: TripMaster_02_Talk(Self)
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: None

void Talk() {
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_TripMaster_02_Talk', 'IsWaitFinish': True})

    call Npc_TripMaster_00.TripMaster({'Self': ActorIdentifier(name="Npc_TripMaster_02")})

    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_TripMaster_02_Talk', 'IsWaitFinish': True})
}

void TripMaster_02_Talk() {
    if !Npc_TripMaster_02[TripMaster_02_Talk(Self)].CheckActorAction13() {
        Event8:
        Npc_TripMaster_02[TripMaster_02_Talk(Self)].Demo_Talk({'MessageId': 'EventFlowMsg/Npc_TripMaster_02:talk_26', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    } else {
        goto Event8
    }
}

void Near() {
    switch Npc_TripMaster_02.CheckActorAction13() {
      case 0:
        Event9:
        Npc_TripMaster_02.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_02:Near', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        goto Event9
      case 12:
        goto Event9
    }
}
