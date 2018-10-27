-------- EventFlow: Npc_Goron012 --------

Actor: Npc_Goron012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_FlagOFF', 'Demo_WaitFrame']
queries: ['RandomChoice4', 'CheckTimeType', 'CheckFlag', 'RandomChoice2', 'GeneralChoice4', 'GeneralChoice2', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_SavePoint1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call DorirudoHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Clear_RemainsFire'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron012_Clear_First'}) {
            Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk30'})
            Event54:
            if !EventSystemActor.GeneralChoice2() {
                Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk26'})
                Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk28'})
            } else {
                Event19:
                Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk09', 'IsOverWriteLabelActorName': False})
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NPC_Goron012_Clear_First'})
            Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk22', 'IsOverWriteLabelActorName': False})
            goto Event54
        }
    } else {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Location_Goron', 'Value': 1, 'Operator': 'GreaterThanOrEqualTo'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron012_City', 'IsWaitFinish': True})
            Event45:
            if Npc_Goron012.IsOnInstEventFlag() {
                Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk24'})
                Event17:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk07', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                    Npc_Goron012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': False, 'TurnDirection': 180.0})
                    GameROMPlayer.Demo_LookAtObject({'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 180.0})
                    EventSystemActor.Demo_WaitFrame({'Frame': 10, 'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'FaceId': 1, 'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 180.0, 'IsTurnToLookAtPos': False})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1650.1314697265625, 'Pattern1PosY': 432.1246337890625, 'Pattern1PosZ': -1971.0987548828125, 'Pattern1AtX': 1646.3714599609375, 'Pattern1AtY': 432.3018493652344, 'Pattern1AtZ': -1972.8043212890625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk19', 'IsCloseMessageDialog': True, 'ASName': 'Point'})

                    fork {
                        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 20.0})
                    } {
                        Npc_Goron012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': True, 'FaceId': 2})
                    }

                    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0, 'ActorName': 'Npc_Goron012', 'FaceId': 2, 'IsTurnToLookAtPos': False})
                    Event89:
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk05', 'ASName': ''})
                    goto Event17
                  case 1:
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk26'})
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk28', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'NPC_Goron012_City', 'IsWaitFinish': True})
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Location_Goron', 'Value': 1, 'Operator': 'GreaterThanOrEqualTo'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron012_City', 'IsWaitFinish': True})
                        goto Event89
                    } else {
                        goto Event89
                    }
                  case 2:
                    if Npc_Goron012.IsOnInstEventFlag() {
                        Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk29', 'IsCloseMessageDialog': True})
                        goto Event89
                    } else {
                        Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk08', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        goto Event89
                    }
                  case 3:
                    goto Event19
                }
            } else {
                Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk06', 'IsOverWriteLabelActorName': False})
                goto Event17
            }
        } else {
            goto Event45
        }
    }
}

void Near() {
    switch Npc_Goron012.CheckActorAction13() {
      case 0:
        Npc_Goron012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:near04', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Goron012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:near00', 'IsChecked': False, 'DispFrame': 90})
          case 1:
            Npc_Goron012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:near01', 'IsChecked': False, 'DispFrame': 90})
          case 2:
            Npc_Goron012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:near03', 'IsChecked': False, 'DispFrame': 90})
          case 3:
            Npc_Goron012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:near02', 'IsChecked': False, 'DispFrame': 90})
        }
      case 10:
        Npc_Goron012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:near05', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_Goron012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:near06', 'IsChecked': False, 'DispFrame': 90})
    }
}

void DorirudoHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron012.CheckActorAction13() {
      case 0:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk15', 'IsOverWriteLabelActorName': False})
            Event73:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        } else {
            Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk14', 'IsOverWriteLabelActorName': False})
            goto Event73
        }
      case 1:
        Event71:
        Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk00'})
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_Goron012_First'}) {
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event24:
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk11', 'IsOverWriteLabelActorName': False})
                  case 1:
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk10', 'IsOverWriteLabelActorName': False})
                  case 2:
                    Event9:
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk02', 'IsOverWriteLabelActorName': False})
                  case 3:
                    Event12:
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk01', 'IsOverWriteLabelActorName': False})
                }
              case 1:
                goto Event24
              case 2:
                Event3:
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    goto Event12
                  case 1:
                    goto Event9
                  case 2:
                    Event10:
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk03', 'IsOverWriteLabelActorName': False})
                  case 3:
                    Event27:
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk13', 'IsOverWriteLabelActorName': False})
                }
              case 3:
                goto Event3
              case 4:
                goto Event3
              case 5:
                Event26:
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    goto Event10
                  case 1:
                    goto Event9
                  case 2:
                    goto Event27
                  case 3:
                    Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk12', 'IsOverWriteLabelActorName': False})
                }
              case 6:
                goto Event26
              case 7:
                goto Event26
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Goron012_First', 'IsWaitFinish': True})
            Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk04', 'IsOverWriteLabelActorName': False})
        }
      case 2:
        goto Event71
      case 3:
        goto Event71
      case 4:
        goto Event71
      case 5:
        goto Event71
      case 6:
        goto Event71
      case 7:
        goto Event71
      case 8:
        goto Event71
      case 9:
        goto Event71
      case 10:
        Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk18'})
        Event74:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
      case 11:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk17'})
            goto Event74
        } else {
            Npc_Goron012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron012:talk16'})
            goto Event74
        }
      case 12:
        goto Event71
      case 13:
        goto Event71
    }
}
