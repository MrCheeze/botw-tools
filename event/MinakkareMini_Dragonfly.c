-------- EventFlow: MinakkareMini_Dragonfly --------

void Ready_Npc_TamourPlainHatago_002_Talk() {

    call Npc_TamourPlainHatago_002.DragonflySisters002_Ready()

}

void Ready_Npc_TamourPlainHatago_002_Near() {
    Event0:

    call Npc_TamourPlainHatago_002.Near()

}

void LittleSister_Npc_TamourPlainHatago_002_Talk() {

    call Npc_TamourPlainHatago_002.DragonflySisters002_LittleSister()

}

void LittleSister_Npc_TamourPlainHatago_002_Near() {
    goto Event0
}

void Finish_Npc_TamourPlainHatago_002_Talk() {

    call Npc_TamourPlainHatago_002.DragonflySisters002_Finish()

}

void Finish_Npc_TamourPlainHatago_002_Near() {
    goto Event0
}

void Ready_Npc_TamourPlainHatago_003_Talk() {

    call Npc_TamourPlainHatago_003.DragonflySisters003_Ready()

}

void Ready_Npc_TamourPlainHatago_003_Near() {
    Event4:

    call Npc_TamourPlainHatago_003.Near()

}

void LittleSister_Npc_TamourPlainHatago_003_Talk() {

    call Npc_TamourPlainHatago_003.DragonflySisters003_LittleSister()

}

void LittleSister_Npc_TamourPlainHatago_003_Near() {
    goto Event4
}

void Finish_Npc_TamourPlainHatago_003_Talk() {

    call Npc_TamourPlainHatago_003.DragonflySisters003_Finish()

}

void Finish_Npc_TamourPlainHatago_003_Near() {
    goto Event4
}

void Dragonfly_Npc_TamourPlainHatago_002_Talk() {

    call Npc_TamourPlainHatago_002.DragonflySisters002_Dragonfly()

}

void Dragonfly_Npc_TamourPlainHatago_002_Near() {
    goto Event0
}

void Dragonfly_Npc_TamourPlainHatago_003_Talk() {

    call Npc_TamourPlainHatago_003.DragonflySisters003_Dragonfly()

}

void Dragonfly_Npc_TamourPlainHatago_003_Near() {
    goto Event4
}

void Give_Npc_TamourPlainHatago_002_Talk() {

    call Npc_TamourPlainHatago_002.DragonflySisters002_Give()

}

void Give_Npc_TamourPlainHatago_002_Near() {
    goto Event0
}

void Give_Npc_TamourPlainHatago_003_Talk() {

    call Npc_TamourPlainHatago_003.DragonflySisters003_Give()

}

void Give_Npc_TamourPlainHatago_003_Near() {
    goto Event4
}

void Through_Npc_TamourPlainHatago_002_Talk() {

    call Npc_TamourPlainHatago_002.DragonflySisters002_Through()

}

void Through_Npc_TamourPlainHatago_002_Near() {
    goto Event0
}

void Through_Npc_TamourPlainHatago_003_Talk() {

    call Npc_TamourPlainHatago_003.DragonflySisters003_Through()

}

void Through_Npc_TamourPlainHatago_003_Near() {
    goto Event4
}
