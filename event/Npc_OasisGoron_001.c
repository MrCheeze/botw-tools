-------- EventFlow: Npc_OasisGoron_001 --------

Actor: Npc_OasisGoron_001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_OasisGoron_001.IsOnInstEventFlag() {
        Npc_OasisGoron_001.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisGoron_001:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event6:
            Npc_OasisGoron_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisGoron_001:talk03'})
          case 1:
            goto Event6
          case 2:
            Event7:
            Npc_OasisGoron_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisGoron_001:talk04'})
          case 3:
            goto Event7
          case 4:
            goto Event7
          case 5:
            Event3:
            Npc_OasisGoron_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoron_001:talk02', 'ASName': ''})
          case 6:
            goto Event3
          case 7:
            goto Event3
        }
    }
}

void Clear_RemainsElectric_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_OasisGoron_001.IsOnInstEventFlag() {
        Npc_OasisGoron_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisGoron_001:talk01', 'ASName': ''})
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event11:
            Npc_OasisGoron_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisGoron_001:talk06'})
          case 1:
            goto Event11
          case 2:
            Event9:
            Npc_OasisGoron_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisGoron_001:talk05'})
          case 3:
            goto Event9
          case 4:
            goto Event9
          case 5:
            Event12:
            Npc_OasisGoron_001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_OasisGoron_001:talk07'})
          case 6:
            goto Event12
          case 7:
            goto Event12
        }
    }
}
