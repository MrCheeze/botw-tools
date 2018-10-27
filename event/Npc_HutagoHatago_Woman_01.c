-------- EventFlow: Npc_HutagoHatago_Woman_01 --------

Actor: Npc_HutagoHatago_Woman_01
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_BecomeSpeaker', 'Demo_TurnToObjectGreeting']
queries: ['CheckActorAction13', 'IsArriveAnchorForRain']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_EnableCameraInput']
queries: ['GeneralChoice2', 'CheckWeather', 'CheckFlag', 'CheckAddPorchItem', 'CheckTimeType', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HutagoHatago_Woman_01_1stGreeting'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Event45:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HutagoHatago_Woman_01_fisrt'}) {
            switch EventSystemActor.CheckWeather() {
              case 0:
                switch Npc_HutagoHatago_Woman_01.CheckActorAction13() {
                  case 0:
                    Event12:
                    Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk06'})
                  case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                    Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk04'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk12', 'IsCloseMessageDialog': True})
                        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
                        if EventSystemActor.CheckFlag({'FlagName': 'Npc_HutagoHatago_Woman_01_gave'}) {
                            Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk14'})
                        } else {
                            Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk15'})
                        }
                    } else {
                        Event7:
                        Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk03'})
                    }
                  case 2:
                    Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk05'})
                  case 3:
                    Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk01'})
                }
              case [1, 2, 3]:
                if Npc_HutagoHatago_Woman_01.IsArriveAnchorForRain() {
                    Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk08'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk09'})
                    } else {
                        Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk10'})
                    }
                } else {
                    Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk07'})
                }
            }
        } else {
            Npc_HutagoHatago_Woman_01.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            if !EventSystemActor.GeneralChoice2() {
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Cook_C_17'}) {
                    Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk02'})

                    call Demo001_0.SetCookResult2({'CookMaterial_01': 'Animal_Insect_S', 'CookMaterial_02': 'Item_Enemy_00'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_HutagoHatago_Woman_01_gave'})
                    Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk11'})
                    Event50:
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_HutagoHatago_Woman_01_fisrt'})
                } else {
                    Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:talk13'})
                    goto Event50
                }
            } else
            switch Npc_HutagoHatago_Woman_01.CheckActorAction13() {
              case 0:
                goto Event12
              case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                goto Event7
              case 2:
                Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:ByTheWay00'})
              case 3:
                Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:ByTheWay00'})
            }
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'NotAndDo'})

        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:First_Greeting02'})
            Event63:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_HutagoHatago_Woman_01_1stGreeting'})
            goto Event45
          case [2, 3, 4]:
            Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:First_Greeting00'})
            goto Event63
          case [5, 6, 7]:
            Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:First_Greeting01'})
            goto Event63
        }
    }
}

void Near() {
    switch EventSystemActor.CheckWeather() {
      case 0:
        switch Npc_HutagoHatago_Woman_01.CheckActorAction13() {
          case 1:
            Npc_HutagoHatago_Woman_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:near01', 'IsChecked': False, 'DispFrame': 90})
          case 3:
            Npc_HutagoHatago_Woman_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:near00', 'IsChecked': False, 'DispFrame': 90})
        }
      case [1, 2, 3]:
        Npc_HutagoHatago_Woman_01.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:near02', 'IsChecked': False, 'DispFrame': 90})
    }
}

void APPLE_CK() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'Npc_HutagoHatago_Woman_01', 'AtAppendMode': 2, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1Fovy': 50.0, 'MotionMode': 1, 'IsWaitFinish': True, 'TargetActor2': 1, 'Count': 20.0, 'PosAppendMode': 0, 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtY': 1.5, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': True})
    } {
        Npc_HutagoHatago_Woman_01.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_HutagoHatago_Woman_01.Demo_TurnToObjectGreeting({'ObjectId': 0, 'TurnDirection': 0.0, 'IsWaitFinish': True, 'ActorName': 'GameROMPlayer', 'GreetingType': ''})
    }

    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:Talk101', 'IsCloseMessageDialog': True})
        Event91:
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HutagoHatago_Woman_01_AppleWarning', 'IsWaitFinish': True})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 20.0})
      case 1:
        Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:Talk100', 'IsCloseMessageDialog': True})
        goto Event91
      case 2:
        Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:Talk102', 'IsCloseMessageDialog': True})
        goto Event91
      case 3:
        Npc_HutagoHatago_Woman_01.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HutagoHatago_Woman_01:Talk103', 'IsCloseMessageDialog': True})
        goto Event91
    }
}
