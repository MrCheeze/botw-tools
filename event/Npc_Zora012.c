-------- EventFlow: Npc_Zora012 --------

Actor: Npc_Zora012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag', 'CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckWeather', 'CheckTimeType', 'GeneralChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event25:

    call AnteHello()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora012_First'}) {
        Event56:
        Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk06', 'IsCloseMessageDialog': False})
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora012_SelectDad'}) {
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk23', 'IsCloseMessageDialog': False})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora012_SelectDad', 'IsWaitFinish': True})
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk20', 'IsCloseMessageDialog': False})
            }
          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora012_SelectMom'}) {
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk21', 'IsCloseMessageDialog': False})
                Event119:
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk22', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora012_Dad', 'IsWaitFinish': True})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora012_SelectMom', 'IsWaitFinish': True})
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk19', 'IsCloseMessageDialog': False})
                goto Event119
            }
          case 2:
            if !EventSystemActor.RandomChoice2() {
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk12', 'IsCloseMessageDialog': False})
            } else {
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk15', 'IsCloseMessageDialog': False})
            }
          case 3:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk11', 'IsCloseMessageDialog': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora012_First', 'IsWaitFinish': True})
        Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk07', 'IsCloseMessageDialog': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk08', 'IsCloseMessageDialog': False})
        } else {
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk09', 'IsCloseMessageDialog': False})
        }
        Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk10', 'IsCloseMessageDialog': False})
    }
}

void Water_Relic_RainStop_Talk() {
    goto Event25
}

void Water_Relic_Finished_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora012_AfterRelicFirst'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraMini_FlowedWife_Finish'}) {
            Event111:

            call AnteHello2()

            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora012_FlowedWifeFirst'}) {
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk25', 'IsCloseMessageDialog': False})
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk18', 'IsCloseMessageDialog': False})
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora012_FlowedWifeFirst'})
                Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk24', 'IsCloseMessageDialog': False})
            }
        } else {

            call AnteHello()

            goto Event56
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora012_AfterRelicFirst', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'ZoraMini_FlowedWife_Finish'}) {
            goto Event111
        } else {

            call AnteHello()

            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk16', 'IsCloseMessageDialog': False})
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk17', 'IsCloseMessageDialog': False})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora012_Mom'})
        }
    }
}

void AnteHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora012.CheckActorAction13() {
      case [0, 12]:
        if Npc_Zora012.IsOnInstEventFlag() {
            Event32:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk03', 'IsCloseMessageDialog': False})
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk00', 'IsCloseMessageDialog': False})
          case [2, 3, 4, 5]:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk01', 'IsCloseMessageDialog': False})
          case [6, 7]:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk02', 'IsCloseMessageDialog': False})
        }
      case 1:
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_Zora012_Mom', 'IsWaitFinish': True})
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk13', 'IsCloseMessageDialog': False})
        } else {
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk14', 'IsCloseMessageDialog': False})
        }
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case 10:
        if Npc_Zora012.IsOnInstEventFlag() {
            goto Event32
        } else {
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk05', 'IsCloseMessageDialog': False})
        }
      case 11:
        Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk04', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void AnteHello2() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Zora012.CheckActorAction13() {
      case [0, 1, 8, 9, 12]:
        if Npc_Zora012.IsOnInstEventFlag() {
            Event102:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk03', 'IsCloseMessageDialog': False})
        } else
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk00', 'IsCloseMessageDialog': False})
          case [2, 3, 4, 5]:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk01', 'IsCloseMessageDialog': False})
          case [6, 7]:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk02', 'IsCloseMessageDialog': False})
        }
      case 10:
        if Npc_Zora012.IsOnInstEventFlag() {
            goto Event102
        } else {
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk05', 'IsCloseMessageDialog': False})
        }
      case 11:
        Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk04', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    }
}

void Step1_AnteStatue() {
    Event141:

    call AnteHello2()

    switch Npc_Zora012.CheckActorAction13() {
      case 8:
        Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk31'})
        if !EventSystemActor.RandomChoice2() {
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk32'})
        } else {
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk33'})
        }
      case 9:
        Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk26'})
        switch EventSystemActor.GeneralChoice4() {
          case 1:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'TurnDirection': 270.0, 'FaceId': 1, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True, 'IsTurnToLookAtPos': False})
            } {
                Npc_Zora012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'FaceId': 1, 'TurnDirection': 270.0, 'IsConfront': True, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
            }

            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3306.744140625, 'Pattern1PosY': 248.89781188964844, 'Pattern1PosZ': -473.7377624511719, 'Pattern1AtX': 3303.552001953125, 'Pattern1AtY': 249.93199157714844, 'Pattern1AtZ': -473.7146301269531, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk28', 'IsCloseMessageDialog': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 15.0})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnDirection': 270.0, 'IsValid': False, 'FaceId': 2, 'ObjectId': 3, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
            } {
                Npc_Zora012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 270.0, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
            }

            Event148:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk29'})
          case 2:
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora012_AfterRelicFirst', 'IsWaitFinish': True})
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk27', 'IsCloseMessageDialog': True})
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk34', 'ASName': 'Talk_Attack', 'IsCloseMessageDialog': True})
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk30'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Zora012_Falls'})
            goto Event148
          case 3:
            Npc_Zora012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora012:talk11', 'IsCloseMessageDialog': False})
        }
    }
}

void Finish_AnteStatue() {
    goto Event141
}

void Step1Near_AnteStatue() {
    Event149:
    Npc_Zora012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora012:near00', 'DispFrame': 90, 'IsChecked': False})
}

void FinishNear_AnteStatue() {
    goto Event149
}

void ReadyNear_AnteStatue() {
    goto Event149
}

void Ready_AnteStatue() {
    goto Event141
}
