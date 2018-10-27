-------- EventFlow: Giant_ZoraMini --------

Actor: Npc_Zora036
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseRupee']
queries: ['CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Zora036_Talk() {

    call Npc_Zora036.Ready_AmoneneGiant()

}

void Finish_Npc_Zora036_Talk() {

    call Npc_Zora036.Finish_AmoneneGiant()

}

void Step1_Npc_Zora036_Talk() {

    call Npc_Zora036.Step1_AmoneneGiant()

}

void Ready_Npc_Zora036_Near() {
    Event40:

    call Npc_Zora036.NearChallenge()

}

void Step1_Npc_Zora036_Near() {

    call Npc_Zora036.Near()

}

void Finish_Npc_Zora036_Near() {
    goto Event40
}
