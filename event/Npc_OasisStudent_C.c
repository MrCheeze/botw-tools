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

    if Npc_OasisStudent_C.IsOnInstEventFlag() {
        Event2:
        switch Npc_OasisStudent_C.CheckActorAction13() {
          case 0:
            Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk03'})
          case 1:
            Event1:
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
          case 4:
            goto Event1
          case 5:
            goto Event1
          case 6:
            goto Event1
          case 7:
            goto Event1
          case 8:
            goto Event1
          case 9:
            goto Event1
          case 10:
            goto Event1
          case 11:
            goto Event1
          case 12:
            goto Event1
          case 13:
            goto Event1
        }
    } else {

        call hello()

        goto Event2
    }
}

void NearActorsTalk() {
    goto Event0
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event18:
        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk08'})
      case 1:
        goto Event18
      case 2:
        Event19:
        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk09'})
      case 3:
        goto Event19
      case 4:
        goto Event19
      case 5:
        Event20:
        Npc_OasisStudent_C.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_C:talk10'})
      case 6:
        goto Event20
      case 7:
        goto Event20
    }
}

void NearActorsTalk2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_OasisStudent_C.IsOnInstEventFlag() {
        goto Event4
    } else {

        call hello()

        goto Event4
    }
}
