-------- EventFlow: ZoraMini_FlowedWife --------

void Finish_Npc_Zora006_Talk() {

    call Npc_Zora006.Finish_FukyuFlowedWife()

}

void Ready_Npc_Zora006_Talk() {

    call Npc_Zora006.Ready_FukyuFlowedWife()

}

void Ready_Npc_Zora006_Near() {
    Event1:

    call Npc_Zora006.Near()

}

void Finish_Npc_Zora006_Near() {
    goto Event1
}

void Ready_Npc_Zora010_Talk() {

    call Npc_Zora010.Ready_DhimeFlowedWife()

}

void Ready_Npc_Zora010_Near() {

    call Npc_Zora010.ReadyNear_DhimeFlowedWife()

}

void Finish_Npc_Zora010_Near() {

    call Npc_Zora010.FinishNear_DhimeFlowedWife()

}

void Finish_Npc_Zora010_Talk() {

    call Npc_Zora010.Finish_DhimeFlowedWife()

}
