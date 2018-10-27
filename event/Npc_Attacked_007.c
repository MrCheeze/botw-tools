-------- EventFlow: Npc_Attacked_007 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_ChangePostureWithAS']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Attacked_007.CheckTerrorLevel() {
      case [0, 1, 2, 4]:
        Event3:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set8_Saved'}) {
            Event27:
            if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set8_FirstTalk2'}) {
                Npc_Attacked_007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_007:After00'})
            } else {
                Npc_Attacked_007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_007:GoodBye00', 'ASName': ''})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AttackedNPC_Set8_FirstTalk2'})
            }
        } else {
            Event5:

            call Npc_Road_Common.Atacked_Pair({'Flag': 'Npc_Attacked_007_CookReward', 'AttackedState': 'Npc_Attacked_002_AttackedState', 'Self': ActorIdentifier(name="Npc_Attacked_007"), 'Pair': ActorIdentifier(name="Npc_Attacked_002"), 'TerrorState': 'Npc_Attacked_002_TerrorState'})

            goto Event27
        }
      case 3:
        switch Npc_Attacked_007.CheckResultOfNPCConflict() {
          case [0, 1]:
            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'Npc_Attacked_002_AttackedState'}) {
                goto Event3
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})

                goto Event5
            }
          case [2, 3]:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})


            call Npc_Road_Common.Atacked_Pair({'Flag': 'Npc_Attacked_007_CookReward', 'AttackedState': 'Npc_Attacked_002_AttackedState', 'TerrorState': 'Npc_Attacked_002_TerrorState', 'Self': ActorIdentifier(name="Npc_Attacked_007"), 'Pair': ActorIdentifier(name="Npc_Attacked_002")})

        }
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Attacked_007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_007:Guardian00', 'ASName': 'Detect'})
    }
}

void MeetingTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Attacked_007', 'Actor2': 'Npc_Attacked_002', 'Arg_Turn': 0})

    Npc_Attacked_007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_007:Meeting02', 'ASName': ''})
    Npc_Attacked_002.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
    Npc_Attacked_002.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Attacked_007', 'IsConfront': False})

    fork {
        Npc_Attacked_002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_007:Meeting03'})
    } {
        Npc_Attacked_007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Attacked_002', 'IsConfront': False})
    }

    Npc_Attacked_007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_007:Meeting00', 'ASName': ''})
}

void Near() {
    Event12:
    Npc_Attacked_007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_007:Near00'})
}

void MeetingNear() {
    goto Event12
}
