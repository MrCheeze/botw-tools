-------- EventFlow: Hateno_SheikPad_PowerUp --------

Actor: Npc_AncientDoctor
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Npc_AncientDoctor.AllFinished()

}

void Ready_Npc_AncientDoctor_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_AncientDoctor.Demo_Talk({'MessageId': 'EventFlowMsg/Hateno_SheikPad_PowerUp:talk01', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
}

void Finish_Npc_AncientDoctor_Talk() {

    call Npc_AncientDoctor.Finish_ItemPowerUp()

}

void Ready_Npc_AncientDoctor_Near() {
    Event14:

    call Npc_AncientDoctor.Near()

}

void Finish_Npc_AncientDoctor_Near() {
    goto Event14
}

void Explain_Npc_AncientDoctor_Talk() {

    call Npc_AncientDoctor.Explain_ItemPowerUp()

}

void Explain_Npc_AncientDoctor_Near() {
    goto Event14
}
