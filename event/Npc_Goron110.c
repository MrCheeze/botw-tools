-------- EventFlow: Npc_Goron110 --------

Actor: Npc_Goron110
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'GeneralChoice3']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron110.CheckActorAction13() {
      case 0:
        Event7:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Goron110_Talk'}) {
            Npc_Goron110.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron110:Talk10'})
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Goron110_Talk', 'IsWaitFinish': True})
            Npc_Goron110.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Goron110:Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_Goron110.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron110:Talk01'})
              case 1:
                Npc_Goron110.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron110:Talk02'})
              case 2:
                Npc_Goron110.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron110:Talk03'})
            }
        }
      case 1:
        goto Event7
      case 2:
        goto Event7
      case 3:
        goto Event7
      case 4:
        goto Event7
      case 5:
        goto Event7
      case 6:
        goto Event7
      case 7:
        goto Event7
      case 8:
        goto Event7
      case 9:
        goto Event7
      case 10:
        goto Event7
      case 11:
        Npc_Goron110.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron110:Talk30'})
      case 12:
        goto Event7
      case 13:
        goto Event7
    }
}

void Near() {
    if Npc_Goron110.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_Goron110.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_Goron110:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    }
}
