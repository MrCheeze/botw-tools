-------- EventFlow: Npc_Attacked_001 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Attacked_001.CheckTerrorLevel() {
      case 0:
        Event3:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set6_Wander'}) {
            Npc_Attacked_001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_001:After02'})
        } else {
            Event18:
            if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set6_FirstTalk'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Attacked_001_Saved'}) {
                    Npc_Attacked_001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_001:After01'})
                } else {
                    Npc_Attacked_001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_001:After00'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'AttackedNPC_Set6_FirstTalk', 'IsWaitFinish': True})
                Npc_Attacked_001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_001:GoodBye00', 'ASName': ''})
            }
        }
      case 1:
        goto Event3
      case 2:
        goto Event3
      case 3:
        switch Npc_Attacked_001.CheckResultOfNPCConflict() {
          case 0:
            Event12:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})


            call Npc_Road_Common.Atacked({'Flag': 'Npc_Attacked_001_CookReward', 'Self': ActorIdentifier(name="Npc_Attacked_001")})

            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Attacked_001_Reward', 'IsWaitFinish': True})
            goto Event18
          case 1:
            goto Event12
          case 2:
            Event0:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})


            call Npc_Road_Common.Atacked({'Self': ActorIdentifier(name="Npc_Attacked_001"), 'Flag': 'Npc_Attacked_001_CookReward'})

          case 3:
            goto Event0
        }
      case 4:
        goto Event3
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Attacked_001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_001:Guardian00', 'ASName': 'Detect'})
    }
}

void Near() {
    if !EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set6_Wander'}) {
        Npc_Attacked_001.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_001:Near00'})
    }
}
