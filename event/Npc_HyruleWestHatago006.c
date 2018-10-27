-------- EventFlow: Npc_HyruleWestHatago006 --------

Actor: Npc_HyruleWestHatago006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_ChangePosture']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['CheckFlag', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonRelief_NPC_AfterTalk'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk03'})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'BloodyMoonRelief_NPC_Talk'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk01', 'IsCloseMessageDialog': True})
            Event8:
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingS', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk02'})
            EventSystemActor.Demo_FlagON({'FlagName': 'BloodyMoonRelief_NPC_AfterTalk', 'IsWaitFinish': True})
        } else {
            switch Npc_HyruleWestHatago006.CheckActorAction13() {
              case 0:
                Event13:

                call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                Event4:
                Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk00', 'IsCloseMessageDialog': True})
                goto Event8
              case 1:
                Event12:

                call InitTalk.InitTalk({'Arg_Turn': 5, 'Arg_Greeting': 'NotAndNot'})

                Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk05', 'ASName': 'Act_SitChair_Wait'})
                Npc_HyruleWestHatago006.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                goto Event4
              case 2:
                goto Event13
              case 3:
                switch EventSystemActor.CheckWeather() {
                  case 0:

                    call InitTalk.InitTalk({'Arg_Turn': 5, 'Arg_Greeting': 'NotAndNot'})

                    Npc_HyruleWestHatago006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago006:talk04', 'ASName': 'Act_GoatCare', 'IsCloseMessageDialog': True})
                    Npc_HyruleWestHatago006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    goto Event4
                  case 1:
                    Event19:
                    Npc_HyruleWestHatago006.Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'SitOnObject'})
                    goto Event12
                  case 2:
                    goto Event19
                  case 3:
                    goto Event19
                }
              case 4:
                goto Event13
              case 5:
                goto Event13
              case 6:
                goto Event13
              case 7:
                goto Event13
              case 8:
                goto Event13
              case 9:
                goto Event13
              case 10:
                goto Event13
              case 11:
                goto Event13
              case 12:
                goto Event13
              case 13:
                goto Event13
            }
        }
    }
}
