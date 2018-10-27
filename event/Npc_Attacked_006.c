-------- EventFlow: Npc_Attacked_006 --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject', 'Demo_ReturnAnchor']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_PlayASForDemo']
queries: ['IsWeaponDrawn']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Attacked_006.CheckTerrorLevel() {
      case 0:
        Event3:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set3_Saved'}) {
            Npc_Attacked_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_006:After00'})
        } else {
            Event5:

            call Npc_Road_Common.Atacked_Pair({'Flag': 'Npc_Attacked_006_CookReward', 'AttackedState': 'Npc_Attacked_011_AttackedState', 'TerrorState': 'Npc_Attacked_011_TerrorState', 'Self': ActorIdentifier(name="Npc_Attacked_006"), 'Pair': ActorIdentifier(name="Npc_Attacked_011")})

            Npc_Attacked_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_006:GoodBye00', 'ASName': ''})
        }
      case 1:
        goto Event3
      case 2:
        goto Event3
      case 3:
        switch Npc_Attacked_006.CheckResultOfNPCConflict() {
          case 0:
            Event34:
            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'Npc_Attacked_011_AttackedState'}) {
                goto Event3
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})

                goto Event5
            }
          case 1:
            goto Event34
          case 2:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            Event22:

            call Npc_Road_Common.Atacked_Pair({'Flag': 'Npc_Attacked_006_CookReward', 'AttackedState': 'Npc_Attacked_011_AttackedState', 'Self': ActorIdentifier(name="Npc_Attacked_006"), 'Pair': ActorIdentifier(name="Npc_Attacked_011"), 'TerrorState': 'Npc_Attacked_011_TerrorState'})

          case 3:

            call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            goto Event22
        }
      case 4:
        goto Event3
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Attacked_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_006:Guardian00', 'ASName': 'Detect'})
    }
}

void MeetingTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0, 'Actor1': 'Npc_Attacked_006', 'Actor2': 'Npc_Attacked_011'})


    fork {
        Npc_Attacked_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_006:Meeting02', 'ASName': ''})
    } {
        Npc_Attacked_011.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'GameROMPlayer'})
        if Npc_Attacked_011.IsWeaponDrawn() {
            Npc_Attacked_011.Demo_PlayASForDemo({'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'IsIgnoreSame': True, 'TargetIndex': 0})
            Npc_Attacked_011.Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait', 'IsWaitFinish': False})
        }
    }


    fork {
        Npc_Attacked_011.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Attacked_006'})
        Npc_Attacked_011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_011:Meeting00', 'ASName': 'Talk'})
    } {
        Npc_Attacked_006.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Attacked_011'})
    }

    Npc_Attacked_006.Demo_ReturnAnchor({'IsWaitFinish': True})
    Npc_Attacked_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_006:Meeting00', 'ASName': 'Act_TreasureHunter'})
}

void Near() {
    Npc_Attacked_006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_006:Near00'})
}

void MeetingNear() {
    Npc_Attacked_006.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_006:Near01'})
}
