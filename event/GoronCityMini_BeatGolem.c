-------- EventFlow: GoronCityMini_BeatGolem --------

void Ready_Npc_Goron017_Talk() {

    call Npc_Goron017.Ready_BeatGolem_Fugo()

}

void Finish_Npc_Goron017_Talk() {

    call Npc_Goron017.Finish_BeatGolem_Fugo()

}

void Finish_Npc_Goron017_Near() {
    Event3:

    call Npc_Goron017.Near()

}

void Ready_Npc_Goron017_Near() {
    goto Event3
}

void Beated_Npc_Goron017_Near() {
    goto Event3
}

void Beated_Npc_Goron017_Talk() {

    call Npc_Goron017.Beated_BeatGolem_Fugo()

}
