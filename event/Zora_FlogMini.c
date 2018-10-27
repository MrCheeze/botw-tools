-------- EventFlow: Zora_FlogMini --------

Actor: Npc_Zora011
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem']
queries: ['GeneralChoice2', 'CheckWeather', 'CheckFlag', 'HasPorchItem', 'CheckAddPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Zora011_Talk() {

    call Npc_Zora011.FrogPonteReady()

}

void Finish_Npc_Zora011_Talk() {

    call Npc_Zora011.FrogPonteFinish()

}

void Ready_Npc_Zora011_Near() {
    Event54:

    call Npc_Zora011.Near()

}

void Finish_Npc_Zora011_Near() {
    goto Event54
}
