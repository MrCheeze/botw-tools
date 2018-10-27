-------- EventFlow: Npc_Attacked_009 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_009
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_TalkASync']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_008
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Attacked_009.CheckTerrorLevel() {
      case 0:
        Event3:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set1_Saved'}) {
            Npc_Attacked_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_009:After00'})
        } else {
            Event5:

            call Npc_Road_Common.Atacked_Pair({'Flag': 'Npc_Attacked_009_CookReward', 'AttackedState': 'Npc_Attacked_008_AttackedState', 'TerrorState': 'Npc_Attacked_008_TerrorState', 'Self': ActorIdentifier(name="Npc_Attacked_009"), 'Pair': ActorIdentifier(name="Npc_Attacked_008")})

            Npc_Attacked_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_009:GoodBye00', 'ASName': ''})
        }
      case 1:
        goto Event3
      case 2:
        goto Event3
      case 3:
        switch Npc_Attacked_009.CheckResultOfNPCConflict() {
          case 0:
            Event23:
            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'Npc_Attacked_008_AttackedState'}) {
                goto Event3
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})

                goto Event5
            }
          case 1:
            goto Event23
          case 2:
            Event0:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})


            call Npc_Road_Common.Atacked_Pair({'Flag': 'Npc_Attacked_009_CookReward', 'AttackedState': 'Npc_Attacked_008_AttackedState', 'Self': ActorIdentifier(name="Npc_Attacked_009"), 'Pair': ActorIdentifier(name="Npc_Attacked_008"), 'TerrorState': 'Npc_Attacked_008_TerrorState'})

          case 3:
            goto Event0
        }
      case 4:
        goto Event3
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Attacked_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_009:Guardian00', 'ASName': 'Detect'})
    }
}

void MeetingTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0, 'Actor1': 'Npc_Attacked_009', 'Actor2': 'Npc_Attacked_008'})

    Npc_Attacked_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_009:Meeting00', 'ASName': ''})

    fork {
        Npc_Attacked_008.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'ActorName': 'Npc_Attacked_009', 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True})
        Npc_Attacked_008.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_009:Meeting01', 'ASName': 'Talk'})
    } {
        Npc_Attacked_009.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Attacked_008'})
    }

    Npc_Attacked_009.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_009:Meeting02'})
}

void Near() {
    Npc_Attacked_009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_009:Near00'})
}

void MeetingNear() {
    Npc_Attacked_009.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_009:Near01'})
}
