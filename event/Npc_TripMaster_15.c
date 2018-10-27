-------- EventFlow: Npc_TripMaster_15 --------

Actor: Npc_TripMaster_15
entrypoint: None()
actions: ['Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_TripMaster_15[TripMaster_15_Talk(Self)]
entrypoint: TripMaster_15_Talk(Self)
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: None

void Talk() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_TripMaster_15_Talk'})

    call Npc_TripMaster_00.TripMaster({'Self': ActorIdentifier(name="Npc_TripMaster_15")})

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_TripMaster_15_Talk'})
}

void TripMaster_15_Talk() {
    if Npc_TripMaster_15[TripMaster_15_Talk(Self)].CheckActorAction13() in [0, 1] {
        Npc_TripMaster_15[TripMaster_15_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_15:talk_26'})
    }
}

void Near() {
    if Npc_TripMaster_15.CheckActorAction13() in [0, 1, 12] {
        Npc_TripMaster_15.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_TripMaster_15:Near'})
    }
}
