-------- EventFlow: Npc_HatenoVillage018 --------

Actor: Npc_HatenoVillage018
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['CheckPlayerWeaponFired', 'CheckFlag', 'GeneralChoice2', 'CheckTimeType', 'CheckWeather', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call Kurevia_Hello()

    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC_018_First'}) {
        Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk26'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC018_First_Ready'}) {
        Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk18'})
        Event3:
        Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk23'})
        Npc_HatenoVillage018.Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk25', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoNPC_018_First'})
    } else {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        call Kurevia_Start()

        goto Event3
    }
}

void ThreeTree_Ready() {

    call Kurevia_Hello()

    switch Npc_HatenoVillage018.CheckActorAction13() {
      case 0:
        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC018_A1First', 'IsWaitFinish': True})
        if Npc_HatenoVillage018.IsOnInstEventFlag() {
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk31'})
            Event104:
            switch EventSystemActor.CheckWeather() {
              case 0:
                if Npc_HatenoVillage018.IsOnInstEventFlag() {
                    Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk30'})
                } else {
                    Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk27', 'ASName': ''})
                }
              case [1, 2, 3]:
                Event74:
                Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk20', 'ASName': ''})
            }
        } else {
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk10'})
            goto Event104
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:

            call Kurevia_Start()

            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk22', 'ASName': ''})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_ThreeTree_Activated'})
          case [1, 2, 3]:
            if Npc_HatenoVillage018.IsOnInstEventFlag() {
                goto Event74
            } else {
                Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk19', 'ASName': ''})
                goto Event74
            }
        }
      case 10:
        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk34'})
            Event131:
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk33'})
        } else {
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk09'})
            goto Event131
        }
    }
}

void ThreeTree_Finish() {

    call Kurevia_Hello()

    Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk17'})
    if EventSystemActor.GeneralChoice2() in [0, 1] {
        Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk21', 'IsOverWriteLabelActorName': False})
    }
}

void Near() {
    switch Npc_HatenoVillage018.CheckActorAction13() {
      case [0, 10]:
        Event46:
        Npc_HatenoVillage018.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:near01', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_ThreeTree_Finished'}) {
            goto Event46
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_ThreeTree_Activated'}) {
            goto Event46
        } else {
            Npc_HatenoVillage018.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:near01', 'DispFrame': 300, 'IsChecked': True})
        }
      case 11:
        Npc_HatenoVillage018.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void Kurevia_Hello() {
    switch Npc_HatenoVillage018.CheckActorAction13() {
      case [0, 1, 10]:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
                if Npc_HatenoVillage018.IsOnInstEventFlag() {
                    Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk12'})
                    Event75:
                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
                } else {
                    Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk11'})
                    goto Event75
                }
            } else
            if Npc_HatenoVillage018.IsOnInstEventFlag() {
                Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk29'})
                goto Event75
            } else {
                Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk28'})
                goto Event75
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_HatenoVillage018.IsOnInstEventFlag() {
                Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk08'})
            } else
            switch EventSystemActor.CheckTimeType() {
              case [0, 1]:
                Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk05'})
              case [2, 3]:
                Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk06'})
              case [4, 5, 6, 7]:
                Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk07'})
            }
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event78:
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk15'})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event78
        }
    }
}

void Kurevia_Start() {
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC018_First_Ready'}) {
        Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'ASName': 'Talk', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk14'})
        Event50:
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            Npc_HatenoVillage018.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 150.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})

            fork {
                Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': 'Point', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk02', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'IsValid': True, 'TurnPosition': [3443.0, 232.0, 2127.0], 'FaceId': 1, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            }

            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3434.8427734375, 'Pattern1PosY': 229.47802734375, 'Pattern1PosZ': 2144.6005859375, 'Pattern1AtX': 3437.09375, 'Pattern1AtY': 230.26882934570312, 'Pattern1AtZ': 2141.055419921875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_HatenoVillage018.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': False, 'FaceId': 1, 'IsConfront': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'FaceId': 1, 'ObjectId': 0, 'ActorName': 'Npc_HatenoVillage018', 'TurnPosition': [-1.0, -1.0, -1.0], 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk03'})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'ASName': 'Talk', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk04'})
        } else {
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk13', 'ASName': ''})
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC018_First_Ready', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC018_A1First'}) {
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk32'})
            goto Event50
        } else {
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk00'})
            Npc_HatenoVillage018.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage018:talk01', 'ASName': ''})
            goto Event50
        }
    }
}
