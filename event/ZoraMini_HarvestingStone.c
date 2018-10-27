-------- EventFlow: ZoraMini_HarvestingStone --------

Actor: Npc_Zora013
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseRupee', 'Demo_IncreasePorchItem']
queries: ['CheckFlag', 'GeneralChoice2', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Finish_Npc_Zora013_Talk() {

    call Npc_Zora013.Finish_RetoganGetStone()

}

void Ready_Npc_Zora013_Near() {

    call Npc_Zora013.ReadyNear_RetoganGetStone()

}

void Ready_Npc_Zora013_Talk() {

    call Npc_Zora013.Ready_RetoganGetStone()

}

void Finish_Npc_Zora013_Near() {

    call Npc_Zora013.FinishNear_RetoganGetStone()

}
