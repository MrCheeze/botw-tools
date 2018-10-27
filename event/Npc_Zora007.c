-------- EventFlow: Npc_Zora007 --------

Actor: Npc_Zora007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_ExitEventPlayer', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckWeather', 'RandomChoice4', 'GeneralChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_MovePosFlow', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora028
entrypoint: None()
actions: ['Demo_Join', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora025
entrypoint: None()
actions: ['Demo_Join', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event32:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event40:

    call RurachuHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora007_First'}) {

        call Rurachu4taku()

    } else {

        call RurachuFirst()

    }
}

void NearActorsNear() {
    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
        Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora007:near05'})
    } else {
        Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora007:near04'})
    }
}

void Near() {
    Event93:
    switch Npc_Zora007.CheckActorAction13() {
      case [0, 1, 8, 9, 12]:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora007:near00'})
          case 1:
            Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora007:near01'})
          case 2:
            Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora007:near02'})
          case 3:
            Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora007:near03'})
        }
      case 10:
        Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora007:near06'})
    }
}

void Water_Relic_Activated_Near() {
    goto Event93
}

void Step1Near_RurachuStatue() {
    goto Event93
}

void FinishNear_RurachuStatue() {
    goto Event93
}

void Step1_RurachuStatue() {
    Event146:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call RurachuHello()

    Event46:
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora007_AfterRelicFirst'}) {

        call Rurachu4taku()

    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora007_AfterRelicFirst', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora007_First', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora007_RainFirst', 'IsWaitFinish': True})
        Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk23'})
        Event126:
        if EventSystemActor.CheckFlag({'FlagName': 'StatueofZora_Finish'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora007_MifaSong', 'IsWaitFinish': True})
            Event59:
            Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk06', 'IsCloseMessageDialog': False})
            Event61:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk22', 'IsCloseMessageDialog': True})

                fork {
                    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'FaceId': 1, 'IsValid': True, 'TurnDirection': 200.0, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
                } {
                    Npc_Zora007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'TurnDirection': 200.0, 'IsValid': False, 'FaceId': 1, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                }

                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'Count': 30.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'MotionMode': 1, 'TargetActor1': -1, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'Pattern1PosX': 3302.280029296875, 'Pattern1PosY': 253.66000366210938, 'Pattern1PosZ': -474.82000732421875, 'Pattern1AtX': 3293.969970703125, 'Pattern1AtY': 257.1099853515625, 'Pattern1AtZ': -491.5899963378906})
                Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk26'})
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})

                fork {
                    EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'ObjectId': 3, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
                } {
                    Npc_Zora007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                }

                Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk27', 'IsCloseMessageDialog': True})
                Event78:
                Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk16'})
                goto Event61
              case 1:
                Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk18', 'IsCloseMessageDialog': False})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk20'})
                    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk11', 'IsCloseMessageDialog': False})
                    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk12', 'IsCloseMessageDialog': False})
                    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk13'})
                    if EventSystemActor.CheckFlag({'FlagName': 'Water_Relic_Finished'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'StatueofZora_Finish'}) {
                            Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk28'})
                            goto Event78
                        } else {
                            Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk21', 'IsCloseMessageDialog': True})
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora007_MifaSong', 'IsWaitFinish': True})
                            if EventSystemActor.CheckFlag({'FlagName': 'StatueofZora_Activated'}) {
                                goto Event78
                            } else {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StatueofZora_Activated'})
                                if EventSystemActor.CheckFlag({'FlagName': 'StatueofZora_Dungeon'}) {
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'StatueofZora_Finish'})
                                }
                            }
                        }
                    } else {
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        goto Event78
                    }
                } else {
                    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk19', 'IsCloseMessageDialog': False})
                }
              case 2:
                Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk15', 'IsCloseMessageDialog': True})
                goto Event78
              case 3:
                Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk14'})
            }
        } else {
            goto Event59
        }
    }
}

void Finish_RurachuStatue() {
    goto Event146
}

void Water_Relic_RainStop_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event64:

    call RurachuHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora007_RainFirst'}) {
        Event82:

        call Rurachu4taku()

    } else
    switch EventSystemActor.CheckWeather() {
      case 0:
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora007_RainFirst', 'IsWaitFinish': True})
        Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk17'})
        Event68:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora007_First'}) {
            goto Event82
        } else {

            call RurachuFirst()

        }
      case [1, 2, 3]:
        goto Event68
    }
}

void Water_Relic_Activated_Talk() {
    goto Event32
}

void NearActorsTalk() {
    Event138:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call RurachuInit()

    goto Event40
}

void Water_Relic_RainStop_Near() {
    goto Event93
}

void Water_Relic_Finished_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event83:

    call RurachuHello()

    goto Event46
}

void Water_Relic_Finished_Near() {
    goto Event93
}

void RurachuHello() {
    switch Npc_Zora007.CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        if Npc_Zora007.IsOnInstEventFlag() in [1, 0] {
            if !EventSystemActor.RandomChoice2() {
                Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk24'})
                Event55:
                switch EventSystemActor.RandomChoice4() {
                  case 0:
                    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk11', 'IsCloseMessageDialog': False})
                    Event60:
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Zora007_SongFirst'})
                  case 1:
                    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk12', 'IsCloseMessageDialog': False})
                    goto Event60
                  case [2, 3]:
                    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk13', 'IsCloseMessageDialog': False})
                    goto Event60
                }
            } else {
                Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk25'})
                goto Event55
            }
        }
      case 10:
        Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk05', 'IsCloseMessageDialog': False})
        Event39:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case 11:
        Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk04', 'IsCloseMessageDialog': False})
        goto Event39
    }
}

void RurachuFirst() {
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora007_First', 'IsWaitFinish': True})
    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk07', 'IsCloseMessageDialog': False})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk08', 'IsCloseMessageDialog': False})
        Event53:
        Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk10'})
    } else {
        Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk09', 'IsCloseMessageDialog': False})
        goto Event53
    }
}

void Rurachu4taku() {
    Npc_Zora007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora007:talk03'})
    goto Event126
}

void ReadyNear_RurachuStatue() {
    switch Npc_Zora007.CheckActorAction13() {
      case [0, 1, 8, 9, 12]:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora007:near00', 'DispFrame': 300, 'IsChecked': True})
          case 1:
            Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora007:near01', 'IsChecked': True, 'DispFrame': 300})
          case 2:
            Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora007:near02', 'IsChecked': True, 'DispFrame': 300})
          case 3:
            Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora007:near03', 'IsChecked': True, 'DispFrame': 300})
        }
      case 10:
        Npc_Zora007.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_Zora007:near06'})
    }
}

void Ready_RurachuStatue() {
    goto Event146
}

void RurachuInit() {

    fork {
        Npc_Zora028.Demo_Join({'IsWaitFinish': True})
        Npc_Zora028.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_Zora028.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False})
    } {
        Npc_Zora007.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    } {
        Npc_Zora025.Demo_Join({'IsWaitFinish': True})
        Npc_Zora025.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_Zora025.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False})
    }

}

void Water_Relic_Activated_NearActorsTalk() {
    goto Event138
}

void Water_Relic_RainStop_NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call RurachuInit()

    goto Event64
}

void Water_Relic_Finished_NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call RurachuInit()

    goto Event83
}
