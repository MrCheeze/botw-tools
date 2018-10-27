-------- EventFlow: Npc_Attacked_012 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckTerrorLevel', 'CheckResultOfNPCConflict']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_Attacked_012.CheckTerrorLevel() {
      case 0:
        Event3:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set7_FirstTalk'}) {
            Npc_Attacked_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_012:After03'})
        } else {
            Npc_Attacked_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_012:After00'})
            Event15:
            Npc_Attacked_012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'TurnPosition': [3227.0, 435.0, -1455.0]})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [3237.0, 435.0, -1455.0]})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
            WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
            GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'Pattern1Fovy': 50.0, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.20000000298023224, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'Pattern1AtX': 3110.0, 'Pattern1AtZ': -1388.0, 'Pattern1PosX': 3106.0, 'Pattern1PosZ': -1386.0, 'Pattern1AtY': 404.0, 'Pattern1PosY': 402.0, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_Attacked_012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
            Npc_Attacked_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Attacked_012:After02', 'IsCloseMessageDialog': True, 'ASName': 'Talk'})
            GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'IsWaitFinish': True, 'Count': 0.0})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'ActorName': 'Npc_Attacked_012'})
            EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
            Npc_Attacked_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_012:After02_2', 'ASName': 'Talk'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AttackedNPC_Set7_FirstTalk'})
        }
      case 1:
        goto Event3
      case 2:
        goto Event3
      case 3:
        switch Npc_Attacked_012.CheckResultOfNPCConflict() {
          case 0:
            Event12:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})


            call Npc_Road_Common.Atacked({'Flag': 'Npc_Attacked_012_CookReward', 'Self': ActorIdentifier(name="Npc_Attacked_012")})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Attacked_012_Reward'})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Attacked_012_Saved'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set7_FirstTalk'}) {
                    Npc_Attacked_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Attacked_012:After01', 'IsCloseMessageDialog': True})
                    Event23:
                    if !EventSystemActor.CheckFlag({'FlagName': 'AttackedNPC_Set7_FirstTalk'}) {
                        goto Event15
                    }
                } else {
                    Event8:
                    Npc_Attacked_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Attacked_012:GoodBye00', 'ASName': '', 'IsCloseMessageDialog': True})
                    goto Event23
                }
            } else {
                goto Event8
            }
          case 1:
            goto Event12
          case 2:

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

            Event17:

            call Npc_Road_Common.Atacked({'Self': ActorIdentifier(name="Npc_Attacked_012"), 'Flag': 'Npc_Attacked_012_CookReward'})

          case 3:

            call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 5})

            goto Event17
        }
      case 4:
        goto Event3
      case 5:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

        Npc_Attacked_012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Attacked_012:Guardian00', 'ASName': 'Detect'})
    }
}

void Near() {
    Npc_Attacked_012.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Attacked_012:Near00'})
}
