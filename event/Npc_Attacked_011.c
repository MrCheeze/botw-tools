-------- EventFlow: Npc_Attacked_011 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict', 'CheckMapArea']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject', 'Demo_TurnAndLookToObject', 'Demo_ReturnAnchor', 'Demo_PlayASForDemo']
queries: ['IsWeaponDrawn']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Attacked_011.CheckTerrorLevel() {
      case 0:
        Event3:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set3_Saved'}) {
            Npc_Attacked_011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_011:After00'})
        } else {
            Event5:

            call Npc_Road_Common.Atacked_Pair({'Flag': 'Npc_Attacked_011_CookReward', 'AttackedState': 'Npc_Attacked_006_AttackedState', 'TerrorState': 'Npc_Attacked_006_TerrorState', 'Self': ActorIdentifier(name="Npc_Attacked_011"), 'Pair': ActorIdentifier(name="Npc_Attacked_006")})

            Npc_Attacked_011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_011:GoodBye00', 'ASName': ''})
        }
      case 1:
        goto Event3
      case 2:
        goto Event3
      case 3:
        switch Npc_Attacked_011.CheckResultOfNPCConflict() {
          case 0:
            Event41:
            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'Npc_Attacked_006_AttackedState'}) {
                goto Event3
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})

                goto Event5
            }
          case 1:
            goto Event41
          case 2:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            goto Event5
          case 3:

            call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            goto Event5
        }
      case 4:
        goto Event3
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Attacked_011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_011:Guardian00', 'ASName': 'Detect'})
    }
}

void MeetingTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0, 'Actor1': 'Npc_Attacked_011', 'Actor2': 'Npc_Attacked_006'})


    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set3_FirstTalk'}) {
            Npc_Attacked_011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_011:Meeting05'})
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AttackedNPC_Set3_FirstTalk'})
            if Npc_Attacked_011.CheckMapArea({'MapAreaName': 'HyruleForest'}) {
                Npc_Attacked_011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_011:Meeting02_01'})
            } else {
                Npc_Attacked_011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_011:Meeting02', 'ASName': ''})
            }
        }
    } {
        Npc_Attacked_006.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'GameROMPlayer'})
        if Npc_Attacked_006.IsWeaponDrawn() {
            Npc_Attacked_006.Demo_PlayASForDemo({'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'GuardUnequip', 'IsWaitFinish': True, 'IsIgnoreSame': True, 'TargetIndex': 0})
            Npc_Attacked_006.Demo_PlayASForDemo({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk_Wait', 'IsWaitFinish': False})
        }
    }


    fork {
        Npc_Attacked_006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'FaceId': 2, 'ActorName': '', 'IsConfront': False})
        Npc_Attacked_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_011:Meeting03', 'ASName': 'Talk'})
    } {
        Npc_Attacked_011.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_Attacked_006'})
    }

    Npc_Attacked_006.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'Npc_Attacked_011'})
    Npc_Attacked_011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_011:Meeting04', 'ASName': 'Talk'})
    Npc_Attacked_006.Demo_ReturnAnchor({'IsWaitFinish': True})
    Npc_Attacked_006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_006:Meeting00', 'ASName': 'Act_TreasureHunter'})
}

void Near() {
    Npc_Attacked_011.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_011:Near00'})
}

void MeetingNear() {
    Npc_Attacked_011.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_011:Near01'})
}
