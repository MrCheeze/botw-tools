-------- EventFlow: HatenoMini_WeaponMania --------

void Ready_Npc_HatenoVillage008_Near() {
    Event1:

    call Npc_HatenoVillage008.Near()

}

void Ready_Npc_HatenoVillage008_Talk() {

    call Npc_HatenoVillage008.Ready_WaponMania()

}

void Weapon01_Npc_HatenoVillage008_Talk() {

    call Npc_HatenoVillage008.Weapon01_WaponMania()

}

void Weapon01_Npc_HatenoVillage008_Near() {
    goto Event1
}

void Weapon02_Npc_HatenoVillage008_Talk() {

    call Npc_HatenoVillage008.Weapon02_WaponMania()

}

void Weapon02_Npc_HatenoVillage008_Near() {
    goto Event1
}

void Weapon03_Npc_HatenoVillage008_Talk() {

    call Npc_HatenoVillage008.Weapon03_WaponMania()

}

void Weapon03_Npc_HatenoVillage008_Near() {
    goto Event1
}

void Weapon04_Npc_HatenoVillage008_Talk() {

    call Npc_HatenoVillage008.Weapon04_WaponMania()

}

void Weapon04_Npc_HatenoVillage008_Near() {
    goto Event1
}

void Weapon05_Npc_HatenoVillage008_Talk() {

    call Npc_HatenoVillage008.Weapon05_WaponMania()

}

void Weapon05_Npc_HatenoVillage008_Near() {
    goto Event1
}

void Weapon06_Npc_HatenoVillage008_Talk() {

    call Npc_HatenoVillage008.Weapon06_WaponMania()

}

void Weapon06_Npc_HatenoVillage008_Near() {
    goto Event1
}

void Weapon07_Npc_HatenoVillage008_Talk() {

    call Npc_HatenoVillage008.Weapon07_WaponMania()

}

void Weapon07_Npc_HatenoVillage008_Near() {
    goto Event1
}

void Finish_Npc_HatenoVillage008_Talk() {

    call Npc_HatenoVillage008.Finish_WaponMania()

}

void Finish_Npc_HatenoVillage008_Near() {

    call Npc_HatenoVillage008.Finish_HatenoMini_WeaponMania_Near()

}
