-------- EventFlow: DokuroEye --------

void Ready_Npc_AncientAssistant004_AncientLabo_AncientDoctor_MoveA1_Talk() {

    call Npc_AncientAssistant004.Ready_DokuroEye_Jerin()

}

void Ready_Npc_AncientAssistant004_AncientLabo_AncientDoctor_MoveA1_Near() {
    Event3:

    call Npc_AncientAssistant004.Near()

}

void Finish_Npc_AncientAssistant004_Near() {
    goto Event3
}

void Finish_Npc_AncientAssistant004_Talk() {

    call Npc_AncientAssistant004.Finish_DokuroEye_Jerin()

}
