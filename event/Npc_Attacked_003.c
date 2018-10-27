-------- EventFlow: Npc_Attacked_003 --------

Actor: Npc_Attacked_003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangeEmotion', 'Demo_TurnAndLookToObject']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict', 'CheckActorAction']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Attacked_003.CheckTerrorLevel() {
      case [0, 1, 2, 4]:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Event19:
        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set4_FirstTalk'}) {
            if Npc_Attacked_003.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
                Npc_Attacked_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_003:After02'})
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Attacked_003_Saved'}) {
                Npc_Attacked_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_003:After01'})
            } else {
                Npc_Attacked_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_003:After00'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AttackedNPC_Set4_FirstTalk'})
            Npc_Attacked_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_003:GoodBye00', 'ASName': ''})
        }
      case 3:
        switch Npc_Attacked_003.CheckResultOfNPCConflict() {
          case [0, 1]:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})


            call Npc_Road_Common.Atacked({'Flag': 'Npc_Attacked_003_CookReward', 'Self': ActorIdentifier(name="Npc_Attacked_003")})

            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Attacked_003_Reward', 'IsWaitFinish': True})
            goto Event19
          case [2, 3]:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})


            call Npc_Road_Common.Atacked({'Self': ActorIdentifier(name="Npc_Attacked_003"), 'Flag': 'Npc_Attacked_003_CookReward'})

            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            if !EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set4_FirstTalk'}) {
                Npc_Attacked_003.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
                Npc_Attacked_003.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                goto Event19
            }
        }
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Attacked_003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_003:Guardian00', 'ASName': 'Detect'})
    }
}

void Near() {
    if Npc_Attacked_003.CheckActorAction({'ActionName': 'Root/Timeline/Action2/到着'}) {
        Npc_Attacked_003.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_003:Near01'})
    } else {
        Npc_Attacked_003.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_003:Near00', 'IsChecked': False, 'DispFrame': 90})
    }
}
