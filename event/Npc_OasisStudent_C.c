-------- EventFlow: Npc_OasisStudent_C --------

Actor: Npc_OasisStudent_C
entrypoint: None()
actions: ['Demo_Talk']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['GeneralChoice2', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisTeacher
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisStudent_A
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !Npc_OasisStudent_C.IsOnInstEventFlag() {

        call hello()

    }
    switch Npc_OasisStudent_C.CheckActorAction13() {
      case 0:
        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk03'})
      case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Npc_OasisStudent_C.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk04'})
        } else {
            Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk05'})
        }
      case 2:
        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk01'})
      case 3:
        Event4:
        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk02', 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk06', 'ASName': ''})
        } else {
            Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk07', 'ASName': ''})
        }
    }
}

void NearActorsTalk() {
    goto Event0
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk08'})
      case [2, 3, 4]:
        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk09'})
      case [5, 6, 7]:
        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk10'})
    }
}

void NearActorsTalk2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !Npc_OasisStudent_C.IsOnInstEventFlag() {

        call hello()

    }
    goto Event4
}
