-------- EventFlow: HatenoMini_MyHome --------

void Ready_Npc_HatenoVillage032_Talk() {

    call Npc_HatenoVillage032.HHD_Sakurada_Ready()

}

void Ready_Npc_HatenoVillage032_Near() {
    Event198:

    call Npc_HatenoVillage032.HHD_Sakurada_Near()

}

void Repurchase_Npc_HatenoVillage032_Talk() {

    call Npc_HatenoVillage032.HHD_Sakurada_Repurchase()

}

void Repurchase_Npc_HatenoVillage032_Near() {
    goto Event198
}

void Finish_Npc_HatenoVillage032_Talk() {

    call Npc_HatenoVillage032.HHD_Sakurada_Finish()

}

void Furniture_Npc_HatenoVillage032_Talk() {

    call Npc_HatenoVillage032.HHD_Sakurada_Furniture()

}

void Wood_Npc_HatenoVillage032_Talk() {

    call Npc_HatenoVillage032.HHD_Sakurada_Wood()

}

void Wood_Npc_HatenoVillage032_Near() {
    goto Event198
}

void Furniture_Npc_HatenoVillage032_Near() {
    goto Event198
}

void Finish_Npc_HatenoVillage032_Near() {
    goto Event198
}
