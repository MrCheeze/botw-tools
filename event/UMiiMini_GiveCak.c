-------- EventFlow: UMiiMini_GiveCake --------

void Ready_Npc_UMiiVillage010_Talk() {

    call Npc_UMiiVillage010.GiveCake_Haruri_Ready()

}

void NearActorsTalk() {

    call Npc_UMiiVillage010.NearActorsTalk()

}

void NearActorsNear() {

    call Npc_UMiiVillage010.NearActorsNear()

}

void Ready_Npc_UMiiVillage010_Near() {

    call Npc_UMiiVillage010.GiveCake_Haruri_ReadyNear()

}

void Finish_Npc_UMiiVillage010_Talk() {

    call Npc_UMiiVillage010.GiveCake_Haruri_Finish()

}

void Finish_Npc_UMiiVillage010_Near() {

    call Npc_UMiiVillage010.GiveCake_Haruri_FinishNear()

}

void Give_Npc_UMiiVillage010_Near() {

    call Npc_UMiiVillage010.GiveCake_Haruri_GiveNear()

}

void Give_Npc_UMiiVillage010_Talk() {

    call Npc_UMiiVillage010.GiveCake_Haruri_Give()

}

void Ready_Npc_UMiiVillage003_Talk() {

    call Npc_UMiiVillage003.GiveCake_Honey_Ready()

}

void Ready_Npc_UMiiVillage003_Near() {
    Event9:

    call Npc_UMiiVillage003.Near()

}

void Finish_Npc_UMiiVillage003_Talk() {

    call Npc_UMiiVillage003.GiveCake_Honey_Finish()

}

void Finish_Npc_UMiiVillage003_Near() {
    goto Event9
}

void Give_Npc_UMiiVillage003_Talk() {

    call Npc_UMiiVillage003.GiveCake_Honey_Give()

}

void Give_Npc_UMiiVillage003_Near() {
    goto Event9
}

void Give_Npc_UMiiVillage010_NearActorsTalk() {

    call Npc_UMiiVillage010.GiveCake_Haruri_Give_Near_Hagi()

}

void Finish_Npc_UMiiVillage010_StepStart() {

    call Npc_UMiiVillage010.FinishStart()

}
