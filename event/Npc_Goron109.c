-------- EventFlow: Npc_Goron109 --------

Actor: Npc_Goron109
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag', 'CheckActorAction', 'CheckActorAction13', 'CheckTerrorLevel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron109.CheckActorAction13() {
      case [0, 10]:
        Event12:
        Npc_Goron109.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron109:Talk04'})
        Npc_Goron109.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
      case 1:
        switch Npc_Goron109.CheckTerrorLevel() {
          case 0:
            if Npc_Goron109.IsOnInstEventFlag() {
                Npc_Goron109.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Goron109:Talk00', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Dig', 'IsCloseMessageDialog': True})
                Npc_Goron109.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                Npc_Goron109.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron109:Talk02'})
            } else {
                Npc_Goron109.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_Goron109:Talk00', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Dig', 'IsCloseMessageDialog': True})
                Npc_Goron109.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                Npc_Goron109.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron109:Talk01'})
            }
          case [1, 2, 3, 4, 5]:
            goto Event12
        }
      case 11:
        Npc_Goron109.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Goron109:Talk03', 'ASName': ''})
    }
}

void Near() {
    if Npc_Goron109.CheckActorAction({'ActionName': 'Root/Timeline/Sleep/到着'}) {
        Npc_Goron109.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_Goron109:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
    }
}
