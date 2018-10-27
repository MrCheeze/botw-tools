-------- EventFlow: RitoRabitMountain --------

void Finish_Npc_HighMountain003_Talk() {

    call Npc_HighMountain003.NPC003_MtUsagi_Finish()

}

void Finish_Npc_HighMountain003_Near() {
    Event125:

    call Npc_HighMountain003.Near()

}

void Ready_Npc_HighMountain003_Talk() {

    call Npc_HighMountain003.NPC003_MtUsagi_Ready()

}

void Ready_Npc_HighMountain003_Near() {
    goto Event125
}
