-------- EventFlow: RitoMini_IceGolem --------

void Ready_Npc_HighMountain037_Talk() {

    call Npc_HighMountain037.Ready_IceGolem_Gizan()

}

void Ready_Npc_HighMountain037_Near() {
    Event5:

    call Npc_HighMountain037.MarkNear()

}

void Finish_Npc_HighMountain037_Talk() {

    call Npc_HighMountain037.Finish_IceGolem_Gizan()

}

void Finish_Npc_HighMountain037_Near() {
    goto Event5
}

void Beated_Npc_HighMountain037_Near() {

    call Npc_HighMountain037.NormalNear()

}

void Beated_Npc_HighMountain037_Talk() {

    call Npc_HighMountain037.Beated_IceGolem_Gizan()

}
