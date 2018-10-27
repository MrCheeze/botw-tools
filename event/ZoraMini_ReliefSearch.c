-------- EventFlow: ZoraMini_ReliefSearch --------

Actor: Npc_Zora035
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreaseGameDataInt', 'Demo_SetGameDataInt', 'Demo_WaitFrame']
queries: ['CheckFlag', 'RandomChoice8', 'RandomChoice2', 'GeneralChoice2', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Zora035_Talk() {

    call Npc_Zora035.Ready_JiatoSekihi()

}

void Finish_Npc_Zora035_Talk() {
    Event88:

    call Npc_Zora035.Finish_JiatoSekihi()

}

void Ready_Npc_Zora035_Near() {

    call Npc_Zora035.ReadyNear_JiatoSekihi()

}

void Finish_Npc_Zora035_Near() {
    Event90:

    call Npc_Zora035.FinishNear_JiatoSekihi()

}

void SearchRelief_Npc_Zora035_Talk() {
    goto Event88
}

void SearchRelief_Npc_Zora035_Near() {
    goto Event90
}
