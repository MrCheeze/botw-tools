-------- EventFlow: UMiiMini_MakeVillage --------

Actor: Npc_UMiiVillage031[Enokida_Ichikara]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_UMiiVillage031_Talk() {
    Npc_UMiiVillage031[Enokida_Ichikara].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/UMiiMini_MakeVillage:talk9000', 'IsOverWriteLabelActorName': False})
}

void Ready_Npc_UMiiVillage031_Near() {
    Event54:

    call Npc_UMiiVillage031.Near()

}

void Invite01_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Invite01_IchikaraNpc031_Talk()

}

void Invite01_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Invite03_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Invite03_IchikaraNpc031_Talk()

}

void Invite03_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Invite04_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Invite04_IchikaraNpc031_Talk()

}

void Invite04_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Finish_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Finish_IchikaraNpc031_Talk()

}

void Finish_Npc_UMiiVillage031_Near() {

    call Npc_UMiiVillage031.FinishNear()

}

void Invite02_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Invite02_IchikaraNpc031_Talk()

}

void Invite02_Npc_UMiiVillage031_Near() {
    goto Event54
}

void LookFor01_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.LookFor01_IchikaraNPC031_Talk()

}

void LookFor01_Npc_UMiiVillage031_Near() {
    goto Event54
}

void LookFor02_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.LookFor02_IchikaraNPC031_Talk()

}

void LookFor02_Npc_UMiiVillage031_Near() {
    goto Event54
}

void LookFor03_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.LookFor03_IchikaraNPC031_Talk()

}

void LookFor03_Npc_UMiiVillage031_Near() {
    goto Event54
}

void LookFor04_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.LookFor04_IchikaraNPC031_Talk()

}

void LookFor04_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Wood01_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Wood01_IchikaraNPC031_Talk()

}

void Wood01_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Wood02_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Wood02_IchikaraNPC031_Talk()

}

void Wood02_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Wood03_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Wood03_IchikaraNPC031_Talk()

}

void Wood03_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Wood04_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Wood04_IchikaraNPC031_Talk()

}

void Marry_Npc_UMiiVillage031_Talk() {
    Event102:

    call Npc_UMiiVillage031.Marry_IchikaraNPC031_Talk()

}

void Marry_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Wood04_Npc_UMiiVillage031_Near() {
    goto Event54
}

void LookFor05_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.LookFor05_IchikaraNPC031_Talk()

}

void LookFor05_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Invite05_Npc_UMiiVillage031_Talk() {

    call Npc_UMiiVillage031.Invite05_IchikaraNpc031_Talk()

}

void Invite05_Npc_UMiiVillage031_Near() {
    goto Event54
}

void Marry_Npc_UMiiVillage031_2_Talk() {
    goto Event102
}

void Marry_Npc_oasis050_2_Talk() {

    call Npc_oasis050.Npc_oasis050_2()

}
