-------- EventFlow: Npc_Goron031 --------

Actor: Npc_Goron031
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13', 'CheckTerrorLevel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'RandomChoice2', 'HasPorchItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron031.CheckActorAction13() {
      case 0:
        Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk08'})
      case 1:
        switch Npc_Goron031.CheckTerrorLevel() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Storage'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_GoDeathMt'}) {
                    Event1:
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk00'})
                    if !EventSystemActor.GeneralChoice2() {
                        Event5:
                        Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk02'})
                    } else {
                        Event4:
                        Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk01'})
                    }
                } else
                if Npc_Goron031.IsOnInstEventFlag() {
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk04'})
                } else {
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk05'})
                }
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    if !Npc_Goron031.IsOnInstEventFlag() {
                        Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk06'})
                    }
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk07'})
                  case 1:
                    goto Event5
                  case 2:
                    goto Event4
                }
            } else {
                goto Event1
            }
          case [1, 2, 3, 4, 5]:
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk30'})
        }
      case 10:
        if Npc_Goron031.IsOnInstEventFlag() {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk10'})
        } else {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk09'})
        }
      case 11:
        Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk31'})
    }
}

void Near() {
    Event114:
    switch Npc_Goron031.CheckActorAction13() {
      case 1:
        Npc_Goron031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron031:near00', 'DispFrame': 90, 'IsChecked': False})
      case 10:
        Event29:
        Npc_Goron031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron031:near02', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Event28:
        Npc_Goron031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron031:near01', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Ready_WallCrack_Cops() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron031.CheckActorAction13() {
      case 0:
        Event56:
        Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk08'})
      case 1:
        switch Npc_Goron031.CheckTerrorLevel() {
          case 0:
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk17'})
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk15'})
            if EventSystemActor.GeneralChoice2() in [0, 1] {
                Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk16'})
                if EventSystemActor.GeneralChoice2() in [0, 1] {
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk19'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'GoronMini_WallCrackTBox_Activated', 'IsWaitFinish': True})
                }
            }
          case [1, 2, 3, 4, 5]:
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk30'})
        }
      case [2, 3]:
        Event91:
        if EventSystemActor.HasPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Spear_031'}) {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk21'})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckFlag({'FlagName': 'GoronMini_WallCrackTBox_GetOn'}) {
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk27', 'IsCloseMessageDialog': True})

                    call Common.ShowSpear({'PorchItemName_Weapon': 'Weapon_Spear_031'})

                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk25'})
                    Npc_Goron031.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 2, 'TurnPosition': [1806.0, 588.0, -2245.0], 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1790.48828125, 'Pattern1PosY': 584.0884399414062, 'Pattern1PosZ': -2250.3291015625, 'Pattern1AtX': 1795.2806396484375, 'Pattern1AtY': 584.526123046875, 'Pattern1AtZ': -2249.282958984375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk28'})
                    Npc_Goron031.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk29'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'GoronMini_WallCrackTBox_Activated', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronMini_WallCrackTBox_Get'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'GoronMini_WallCrackTBox_Finish', 'IsWaitFinish': True})
                } else {
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk26'})
                }
            } else {
                Event87:
                Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk22'})
            }
        } else {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk23'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk24'})
            } else {
                goto Event87
            }
        }
      case 10:
        Event78:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk10'})
        } else {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk09'})
        }
      case 11:
        Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk31'})
    }
}

void Finish_WallCrack_Cops() {
    Event61:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Goron031.CheckActorAction13() {
      case 0:
        goto Event56
      case 1:
        switch Npc_Goron031.CheckTerrorLevel() {
          case 0:
            if Npc_Goron031.IsOnInstEventFlag() {
                Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk17'})
                Event52:
                Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk19'})
            } else {
                Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk18'})
                Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk15'})
                if EventSystemActor.GeneralChoice2() in [0, 1] {
                    Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk20'})
                    goto Event52
                }
            }
          case [1, 2, 3, 4, 5]:
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk30'})
        }
      case [2, 3]:
        goto Event91
      case 10:
        goto Event78
      case 11:
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk13'})
        } else {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk14'})
        }
        if !EventSystemActor.RandomChoice2() {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk12'})
        } else {
            Npc_Goron031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron031:talk11'})
        }
    }
}

void Get_WallCrack_Cops() {
    goto Event61
}

void ReadyNear_WallCrack_Cops() {
    switch Npc_Goron031.CheckActorAction13() {
      case 1:
        Npc_Goron031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron031:near00', 'DispFrame': 300, 'IsChecked': True})
      case [2, 3]:
        Event117:
        Npc_Goron031.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron031:near03', 'DispFrame': 300, 'IsChecked': True})
      case 10:
        goto Event29
      case 11:
        goto Event28
    }
}

void GetNear_WallCrack_Cops() {
    goto Event114
}

void FinishNear_WallCrack_Cops() {
    switch Npc_Goron031.CheckActorAction13() {
      case [2, 3]:
        goto Event117
      case 10:
        goto Event29
      case 11:
        goto Event28
    }
}
