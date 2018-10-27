-------- EventFlow: Npc_Attacked_010 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_010
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_TalkASync']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: ['IsWeaponDrawn']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Attacked_010.CheckTerrorLevel() {
      case [0, 1, 2, 4]:
        Event3:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set2_Saved'}) {
            Event22:
            if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set2_FirstTalk'}) {
                Npc_Attacked_010.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_010:After00'})
            } else {
                Npc_Attacked_010.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_010:GoodBye00', 'ASName': ''})
                EventSystemActor.Demo_FlagON({'FlagName': 'AttackedNPC_Set2_FirstTalk', 'IsWaitFinish': True})
            }
        } else {
            Event5:

            call Npc_Road_Common.Atacked_Pair({'Flag': 'Npc_Attacked_010_CookReward', 'AttackedState': 'Npc_Attacked_004_AttackedState', 'TerrorState': 'Npc_Attacked_004_TerrorState', 'Self': ActorIdentifier(name="Npc_Attacked_010"), 'Pair': ActorIdentifier(name="Npc_Attacked_004")})

            goto Event22
        }
      case 3:
        switch Npc_Attacked_010.CheckResultOfNPCConflict() {
          case [0, 1]:
            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'Npc_Attacked_004_AttackedState'}) {
                goto Event3
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})

                goto Event5
            }
          case [2, 3]:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})


            call Npc_Road_Common.Atacked_Pair({'Flag': 'Npc_Attacked_010_CookReward', 'AttackedState': 'Npc_Attacked_004_AttackedState', 'Self': ActorIdentifier(name="Npc_Attacked_010"), 'Pair': ActorIdentifier(name="Npc_Attacked_004"), 'TerrorState': 'Npc_Attacked_004_TerrorState'})

        }
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Attacked_010.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_010:Guardian00', 'ASName': 'Detect'})
    }
}

void MeetingTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0, 'Actor1': 'Npc_Attacked_010', 'Actor2': 'Npc_Attacked_004'})


    fork {
        Npc_Attacked_010.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_010:Meeting00', 'ASName': ''})
    } {
        Npc_Attacked_004.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'GameROMPlayer'})
        if Npc_Attacked_004.IsWeaponDrawn() {
            Npc_Attacked_004.Demo_PlayASForDemo({'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'IsIgnoreSame': True, 'TargetIndex': 0})
            Npc_Attacked_004.Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait', 'IsWaitFinish': False})
        }
    }


    fork {
        Npc_Attacked_004.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Attacked_010'})
        Npc_Attacked_004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_010:Meeting02', 'ASName': ''})
    } {
        Npc_Attacked_010.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Attacked_004'})
    }

    Npc_Attacked_010.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_010:Meeting03', 'ASName': ''})
}

void Near() {
    Npc_Attacked_010.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_010:Near00'})
}

void MeetingNear() {
    Npc_Attacked_010.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_010:Near01'})
}
