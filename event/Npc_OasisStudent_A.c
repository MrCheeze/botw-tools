-------- EventFlow: Npc_OasisStudent_A --------

Actor: Npc_OasisStudent_A
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisTeacher
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_OasisStudent_C
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event0:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_OasisStudent_A.CheckActorAction13() {
      case 0:
        Event17:
        if Npc_OasisStudent_A.IsOnInstEventFlag() {
            Event5:
            Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk02'})
        } else {

            call hello()

            goto Event5
        }
      case 1:
        Event15:
        if Npc_OasisStudent_A.IsOnInstEventFlag() {
            Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk03'})
        } else {
            Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk01'})
        }
      case 2:
        goto Event17
      case 3:
        Event1:
        Npc_OasisStudent_A.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_EquipBook'})
      case 4:
        goto Event15
      case 5:
        goto Event15
      case 6:
        goto Event15
      case 7:
        goto Event15
      case 8:
        goto Event15
      case 9:
        goto Event15
      case 10:
        goto Event15
      case 11:
        goto Event15
      case 12:
        goto Event15
      case 13:
        goto Event15
    }
}

void Near() {
    switch Npc_OasisStudent_A.CheckActorAction13() {
      case 0:
        Event7:
        Npc_OasisStudent_A.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:near00', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
      case 1:
        Npc_OasisStudent_A.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:near01', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
      case 2:
        goto Event7
    }
}

void NearActorsTalk() {
    goto Event0
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event19:
        Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk04'})
      case 1:
        goto Event19
      case 2:
        Event20:
        Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk05'})
      case 3:
        goto Event20
      case 4:
        goto Event20
      case 5:
        Event21:
        Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk06'})
      case 6:
        goto Event21
      case 7:
        goto Event21
    }
}

void NearActorsTalk2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    goto Event1
}
