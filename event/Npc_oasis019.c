-------- EventFlow: Npc_oasis019 --------

Actor: Npc_oasis019
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkToPlayer']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event14:
        if Npc_oasis019.IsOnInstEventFlag() {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_010'})
            Event10:
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_002'})
        } else {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_008'})
            goto Event10
        }
      case 1:
        goto Event14
      case 2:
        Event13:
        if Npc_oasis019.IsOnInstEventFlag() {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_010'})
            Event0:
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_001', 'IsOverWriteLabelActorName': False})
        } else {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_007'})
            goto Event0
        }
      case 3:
        goto Event13
      case 4:
        goto Event13
      case 5:
        Event12:
        if Npc_oasis019.IsOnInstEventFlag() {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_010'})
            Event11:
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_003'})
        } else {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_009'})
            goto Event11
        }
      case 6:
        goto Event12
      case 7:
        goto Event12
    }
}

void Near() {
    Npc_oasis019.Demo_TalkToPlayer({'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_Near01', 'IsWaitFinish': True, 'ASKeyName': 'Act_Touting'})
}
