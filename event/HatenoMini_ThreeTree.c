-------- EventFlow: HatenoMini_ThreeTree --------

void Ready_Npc_HatenoVillage018_Talk() {

    call Npc_HatenoVillage018.ThreeTree_Ready()

}

void Finished_Npc_HatenoVillage018_Talk() {

    call Npc_HatenoVillage018.ThreeTree_Finish()

}

void Ready_Npc_HatenoVillage018_Near() {
    Event32:

    call Npc_HatenoVillage018.Near()

}

void Finished_Npc_HatenoVillage018_Near() {
    goto Event32
}
