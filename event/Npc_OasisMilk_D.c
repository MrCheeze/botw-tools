-------- EventFlow: Npc_OasisMilk_D --------

Actor: Npc_OasisMilk_D
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckTimeType', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event7:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_OasisMilk_D.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_OasisMilk_D:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 1:
            Npc_OasisMilk_D.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_D:talk02'})
          case 2:
            Npc_OasisMilk_D.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_D:talk03'})
          case 3:
            Npc_OasisMilk_D.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_D:talk04'})
        }
      case 1:
        Event3:
        Npc_OasisMilk_D.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_D:talk01'})
      case 2:
        goto Event3
      case 3:
        goto Event3
      case 4:
        goto Event3
      case 5:
        goto Event3
      case 6:
        goto Event7
      case 7:
        goto Event7
    }
}

void Near() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event5:
        Npc_OasisMilk_D.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_D:near00', 'DispFrame': 90, 'IsChecked': False})
      case 1:
        goto Event5
      case 2:
        Event6:
        Npc_OasisMilk_D.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_OasisMilk_D:near01', 'DispFrame': 90, 'IsChecked': False})
      case 3:
        goto Event6
      case 4:
        goto Event6
      case 5:
        goto Event6
      case 6:
        goto Event5
      case 7:
        goto Event5
    }
}
