-------- EventFlow: Npc_Zora032 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckWeather', 'GeneralChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora032
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'CheckActorAction14_2', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora014
entrypoint: None()
actions: []
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora032_Second'}) {
        if Npc_Zora032.IsOnInstEventFlag() {
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk25'})
            Event50:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk13'})
                Event75:
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk26'})
                goto Event50
              case 1:
                switch Npc_Zora032.CheckActorAction13() {
                  case 0:
                    Event84:
                    Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk29'})
                    Event56:
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora032_Mifa', 'IsWaitFinish': True})
                    goto Event75
                  case 1:
                    Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk10'})
                    goto Event56
                  case 2:
                    goto Event84
                  case 3:
                    goto Event84
                  case 4:
                    goto Event84
                  case 5:
                    goto Event84
                  case 6:
                    goto Event84
                  case 7:
                    goto Event84
                  case 8:
                    goto Event84
                  case 9:
                    goto Event84
                  case 10:
                    goto Event84
                  case 11:
                    goto Event84
                  case 12:
                    goto Event84
                  case 13:
                    goto Event84
                }
              case 2:
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk11'})
                switch Npc_Zora032.CheckActorAction13() {
                  case 0:
                    Event85:
                    Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk30'})
                    goto Event75
                  case 1:
                    Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk16'})
                    switch Npc_Zora014.CheckActorAction13() {
                      case 0:
                        Event105:
                        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk37'})
                        goto Event56
                      case 1:
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                        Npc_Zora032.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_Zora014', 'IsConfront': False, 'FaceId': 2, 'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3326.2568359375, 'Pattern1PosY': 258.9659118652344, 'Pattern1PosZ': -503.0630798339844, 'Pattern1AtX': 3328.05322265625, 'Pattern1AtY': 258.4945068359375, 'Pattern1AtZ': -501.0890197753906, 'Pattern1Fovy': 45.0045166015625, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk12', 'IsCloseMessageDialog': True})
                        Npc_Zora032.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': False, 'FaceId': 2, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 15.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                        goto Event56
                      case 2:
                        goto Event105
                      case 3:
                        goto Event105
                      case 4:
                        goto Event105
                      case 5:
                        goto Event105
                      case 6:
                        goto Event105
                      case 7:
                        goto Event105
                      case 8:
                        goto Event105
                      case 9:
                        goto Event105
                      case 10:
                        goto Event105
                      case 11:
                        goto Event105
                      case 12:
                        goto Event105
                      case 13:
                        goto Event105
                    }
                  case 2:
                    goto Event85
                  case 3:
                    goto Event85
                  case 4:
                    goto Event85
                  case 5:
                    goto Event85
                  case 6:
                    goto Event85
                  case 7:
                    goto Event85
                  case 8:
                    goto Event85
                  case 9:
                    goto Event85
                  case 10:
                    goto Event85
                  case 11:
                    goto Event85
                  case 12:
                    goto Event85
                  case 13:
                    goto Event85
                }
              case 3:
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk09'})
            }
        } else {
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk08'})
            goto Event50
        }
    } else {

        call SubabaFirst()

        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk07'})
    }
}

void Near() {
    Npc_Zora032.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora032:near00'})
}

void Water_Relic_Activated_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora032_Second'}) {
        Event78:
        if Npc_Zora032.IsOnInstEventFlag() {
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk25'})
            goto Event50
        } else {

            call SubabaHello()

            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk28'})
            goto Event50
        }
    } else {

        call SubabaFirst()

        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk28'})
        goto Event50
    }
}

void Water_Relic_Activated_Near() {
    Event62:
    switch Npc_Zora032.CheckActorAction13() {
      case 0:
        Event28:
        if Npc_Zora032.CheckActorAction14_2() {
            Event30:
            Npc_Zora032.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora032:near06'})
        }
      case 1:
        goto Event30
      case 2:
        goto Event28
      case 3:
        Npc_Zora032.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora032:near02'})
      case 4:
        goto Event28
      case 5:
        Npc_Zora032.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora032:near03'})
      case 6:
        goto Event28
      case 7:
        Npc_Zora032.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora032:near04'})
      case 8:
        goto Event28
      case 9:
        Npc_Zora032.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora032:near05'})
      case 10:
        goto Event28
      case 11:
        goto Event28
      case 12:
        goto Event28
      case 13:
        goto Event28
    }
}

void Water_Relic_RainStop_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora032_Second'}) {
        Event86:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora032_RainFirst'}) {
            goto Event78
        } else {
            switch EventSystemActor.CheckWeather() {
              case 0:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora032_RainFirst'})
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk31'})
              case 1:
                goto Event78
              case 2:
                goto Event78
              case 3:
                goto Event78
            }
        }
    } else {

        call SubabaFirst()

        goto Event86
    }
}

void Water_Relic_Finished_Near() {
    goto Event62
}

void Water_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_AppearDungeon01'}) {
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora032_SD_101'})
        } else {
            Event95:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora032_NormalFirst'}) {
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk36'})
                if !EventSystemActor.RandomChoice2() {
                    Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk38'})
                } else {
                    Event99:
                    Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk35'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora032_NormalFirst', 'IsWaitFinish': True})
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk32'})
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora032_Second'}) {
                    goto Event99
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora032_Second'})
                    Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk33'})
                }
            }
        }
    } else {
        goto Event95
    }
}

void Water_Relic_RainStop_Near() {
    goto Event62
}

void SubabaFirst() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora032_First'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora032_Second'})
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk40'})
        if EventSystemActor.CheckFlag({'FlagName': 'GotoZoraVillage_Finish'}) {
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk14'})
            Event43:
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk00'})
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk01'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk02'})
                Event45:
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk04'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk05'})
                } else {
                    Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk06'})
                }
            } else {
                Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk03'})
                goto Event45
            }
        } else {
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk15'})
            goto Event43
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora032_First', 'IsWaitFinish': True})
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk39'})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void SubabaHello() {
    switch Npc_Zora032.CheckActorAction13() {
      case 0:
        Event11:
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk18'})
        } else {
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk24'})
        }
      case 1:
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk17'})
      case 2:
        goto Event11
      case 3:
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk23'})
      case 4:
        goto Event11
      case 5:
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk19'})
      case 6:
        goto Event11
      case 7:
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk20'})
      case 8:
        goto Event11
      case 9:
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk21'})
      case 10:
        Event15:
        if !Npc_Zora032.CheckActorAction14_2() {
            goto Event11
        } else {
            Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora032:talk22'})
        }
      case 11:
        goto Event15
      case 12:
        goto Event15
      case 13:
        goto Event15
    }
}
