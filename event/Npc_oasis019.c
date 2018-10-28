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
      case [0, 1]:
        if Npc_oasis019.IsOnInstEventFlag() {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_010'})
        } else {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_008'})
        }
        Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_002'})
      case [2, 3, 4]:
        if Npc_oasis019.IsOnInstEventFlag() {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_010'})
        } else {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_007'})
        }
        Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_001', 'IsOverWriteLabelActorName': False})
      case [5, 6, 7]:
        if Npc_oasis019.IsOnInstEventFlag() {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_010'})
        } else {
            Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_009'})
        }
        Npc_oasis019.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_003'})
    }
}

void Near() {
    Npc_oasis019.Demo_TalkToPlayer({'MessageId': 'EventFlowMsg/Npc_oasis019:Npc_oasis019_Near01', 'IsWaitFinish': True, 'ASKeyName': 'Act_Touting'})
}
