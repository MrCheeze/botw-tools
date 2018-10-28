-------- EventFlow: Npc_Goron014 --------

Actor: Npc_Goron014
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagOFF', 'Demo_ExitEventPlayer', 'Demo_FlagON', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'GeneralChoice4', 'CheckFlag', 'CheckGameDataInt', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call BorlinHello()

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron014_First'}) {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Location_Goron', 'Value': 1, 'Operator': 'GreaterThanOrEqualTo'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron014_HeroTalk', 'IsWaitFinish': True})
        }
        Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk08', 'IsCloseMessageDialog': True})
        Event17:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_Goron014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'TurnDirection': -150.0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': True})
            GameROMPlayer.Demo_LookAtObject({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 220.0})
            EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'FaceId': 1, 'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 220.0, 'IsTurnToLookAtPos': False})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1649.606689453125, 'Pattern1PosY': 434.0043029785156, 'Pattern1PosZ': -1977.4896240234375, 'Pattern1AtX': 1644.475830078125, 'Pattern1AtY': 433.4676818847656, 'Pattern1AtZ': -1979.9168701171875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk10', 'IsCloseMessageDialog': True, 'ASName': 'Point'})

            fork {
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 20.0})
            } {
                Npc_Goron014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'IsValid': True, 'IsConfront': False, 'FaceId': 2})
            }

            EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'ActorName': 'Npc_Goron014', 'FaceId': 2, 'IsTurnToLookAtPos': False})
            Event37:
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk07', 'IsCloseMessageDialog': False})
            goto Event17
          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
                Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk16'})
            } else {
                Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk06', 'IsCloseMessageDialog': True})
            }
            Event39:
            EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron014_HeroTalk', 'IsWaitFinish': True})
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Location_Goron', 'Value': 1, 'Operator': 'GreaterThanOrEqualTo'}) {
                EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron014_HeroTalk', 'IsWaitFinish': True})
            }
            goto Event37
          case 2:
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk09', 'IsCloseMessageDialog': True})
            goto Event39
          case 3:
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk02'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron014_First', 'IsWaitFinish': True})
        Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk01'})
        Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk03'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk05'})
        } else {
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk04'})
        }
        goto Event17
    }
}

void Near() {
    switch Npc_Goron014.CheckActorAction13() {
      case [0, 10]:
        Npc_Goron014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron014:near02', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        Npc_Goron014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron014:near00', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_Goron014.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron014:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void BorlinHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron014.CheckActorAction13() {
      case 0:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk14'})
        } else {
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk13'})
        }
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk17'})
        } else {
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk12'})
        }
        Event63:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
      case 11:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk15'})
        } else {
            Npc_Goron014.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron014:talk11'})
        }
        goto Event63
    }
}
