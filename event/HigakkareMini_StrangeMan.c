-------- EventFlow: HigakkareMini_StrangeMan --------

void Ready_Npc_TamourHatago004_Talk() {

    call Npc_TamourHatago004.Ready_Hosuta_StrangeMan()

}

void Finish_Npc_TamourHatago004_Talk() {

    call Npc_TamourHatago004.Finish_Hosuta_StrangeMan()

}

void Finish_Npc_TamourHatago004_Near() {
    Event3:

    call Npc_TamourHatago004.Near()

}

void Ready_Npc_TamourHatago004_Near() {
    goto Event3
}
