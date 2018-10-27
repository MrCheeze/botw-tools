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
      case [0, 2]:
        if Npc_OasisStudent_A.IsOnInstEventFlag() {
            Event5:
            Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk02'})
        } else {

            call hello()

            goto Event5
        }
      case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        if Npc_OasisStudent_A.IsOnInstEventFlag() {
            Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk03'})
        } else {
            Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk01'})
        }
      case 3:
        Event1:
        Npc_OasisStudent_A.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_EquipBook'})
    }
}

void Near() {
    switch Npc_OasisStudent_A.CheckActorAction13() {
      case [0, 2]:
        Npc_OasisStudent_A.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:near00', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
      case 1:
        Npc_OasisStudent_A.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:near01', 'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False})
    }
}

void NearActorsTalk() {
    goto Event0
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk04'})
      case [2, 3, 4]:
        Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk05'})
      case [5, 6, 7]:
        Npc_OasisStudent_A.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisStudent_A:talk06'})
    }
}

void NearActorsTalk2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    goto Event1
}
