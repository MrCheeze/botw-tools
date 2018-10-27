-------- EventFlow: HatenoMini_CameraBoy --------

void Finish_Npc_AncientAssistant001_Talk() {

    call Npc_AncientAssistant001.SSLv2_Simon_Finish()

}

void Ready_Npc_AncientAssistant001_Talk() {

    call Npc_AncientAssistant001.SSLv2_Simon_Ready()

}

void Ready_Npc_AncientAssistant001_Near() {
    Event2:

    call Npc_AncientAssistant001.Near()

}

void Finish_Npc_AncientAssistant001_Near() {
    goto Event2
}

void Shot_Npc_AncientAssistant001_Near() {
    goto Event2
}

void Shot_Npc_AncientAssistant001_Talk() {

    call Npc_AncientAssistant001.SSLv2_Simon_Sbot()

}
