-------- EventFlow: Npc_HyruleWestHatago005 --------

Actor: Npc_HyruleWestHatago005
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Npc_RitoHatago004.UMaster_OutSideTalk({'Self': ActorIdentifier(name="Npc_HyruleWestHatago005")})

}

void UmayadoMasterInside_Talk() {

    call Npc_RitoHatago004.UMaster_InsideTalk({'Self': ActorIdentifier(name="Npc_HyruleWestHatago005")})

}
