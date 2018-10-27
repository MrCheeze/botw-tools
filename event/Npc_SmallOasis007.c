-------- EventFlow: Npc_SmallOasis007 --------

Actor: Npc_SmallOasis007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_ChangePosture']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_SmallOasis007.CheckActorAction13() {
      case 0:
        Event0:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})

        Npc_SmallOasis007.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
        if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Activated'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Drag_Hero_Step1'}) {
                Event12:
                if EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon032'}) {
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis007:Talk_004'})
                } else {
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis007:Talk_001'})
                }
            } else {
                Npc_SmallOasis007.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                if EventSystemActor.CheckFlag({'FlagName': 'Clear_Dungeon032'}) {
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis007:Talk_005'})
                } else {
                    Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis007:Talk_003'})
                }
            }
        } else {
            goto Event12
        }
      case 1:
        goto Event0
      case 10:
        goto Event0
      case 11:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

        Npc_SmallOasis007.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
        Npc_SmallOasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis007:Talk_002'})
    }
}
