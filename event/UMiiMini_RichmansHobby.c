-------- EventFlow: UMiiMini_RichmansHobby --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Finish_Npc_UMiiVillage009_Talk() {

    call Npc_UMiiVillage009.Hagi_Richmans_Finish()

}

void Ready_Npc_UMiiVillage009_Talk() {

    call Npc_UMiiVillage009.Hagi_Richmans_Ready()

}

void Ready_Npc_UMiiVillage009_Near() {
    Event6:

    call Npc_UMiiVillage009.NearChallenge()

}

void Finish_Npc_UMiiVillage009_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'UMiiVillage_NPC009_BeatGuardians'}) {
        goto Event6
    } else {

        call Npc_UMiiVillage009.Near()

    }
}

void NearActorsNear() {

    call Npc_UMiiVillage009.NearActorsNear()

}

void NearActorsTalk() {

    call Npc_UMiiVillage009.NearActorsTalk()

}
