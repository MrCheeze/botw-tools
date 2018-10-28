-------- EventFlow: Npc_HatenoVillage012 --------

Actor: Npc_HatenoVillage012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ChangePostureWithAS', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag', 'IsAwakened']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_CloseMessageDialog', 'Demo_WaitFrame']
queries: ['CheckPlayerWeaponFired', 'CheckFlag', 'CheckTimeType', 'GeneralChoice4', 'CheckWeather', 'CheckTime', 'RandomChoice4', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event40:
    switch Npc_HatenoVillage012.CheckActorAction13() {
      case 0:

        call BuleFire_Shimotsuke()

        if !EventSystemActor.RandomChoice2() {
            switch EventSystemActor.CheckWeather() {
              case 0:
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk27', 'IsCloseMessageDialog': True})
                Event171:
                Npc_HatenoVillage012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
                if Npc_HatenoVillage012.IsOnInstEventFlag() {
                    Event169:
                    Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk34'})
                } else {
                    Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk33'})
                }
                Event166:
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk31', 'IsCloseMessageDialog': False})
                } else {
                    Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk32', 'IsCloseMessageDialog': False})
                }
              case [1, 2, 3]:
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk29', 'IsCloseMessageDialog': True})
                goto Event171
            }
        } else {
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk28', 'IsCloseMessageDialog': True})
            goto Event171
        }
      case 1:

        call BuleFire_Shimotsuke()

        Npc_HatenoVillage012.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
        Npc_HatenoVillage012.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [-1.0, -1.0, -1.0], 'FaceId': 2})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC012_First'}) {

            call ShimotsukeHello()

            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk13'})
            Event69:
            switch EventSystemActor.GeneralChoice4() {
              case 0:

                call ShimotsukeLookMtStart()

                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk19', 'IsCloseMessageDialog': True})

                call ShimotsukeLookMtEnd()

                Event115:
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk23'})
                goto Event69
              case 1:

                call ShimotsukeLookMtStart()

                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk14'})
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk04', 'IsCloseMessageDialog': True})

                call ShimotsukeLookMtEnd()

                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk15'})
                goto Event115
              case 2:
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk20', 'IsCloseMessageDialog': True})
                    goto Event115
                  case [1, 2, 3]:
                    Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk21', 'IsCloseMessageDialog': True})
                    goto Event115
                }
              case 3:
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk03'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC012_First', 'IsWaitFinish': True})
            Npc_HatenoVillage012.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk00'})
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk01', 'IsCloseMessageDialog': True})

            call ShimotsukeLookMtStart()

            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk06'})
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk04', 'IsCloseMessageDialog': True})

            call ShimotsukeLookMtEnd()

            Event48:
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk07'})
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_WhiteDragon_Activated', 'IsWaitFinish': True})
        }
      case [2, 10]:

        call BuleFire_Shimotsuke()


        call ShimotsukeSleepy()

        if !EventSystemActor.RandomChoice2() {
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk25', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
        } else {
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk26', 'IsCloseMessageDialog': True, 'ASName': 'Wait'})
        }
        Npc_HatenoVillage012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
        if Npc_HatenoVillage012.IsOnInstEventFlag() {
            goto Event169
        } else {
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk30', 'IsCloseMessageDialog': False})
        }
        goto Event166
      case [3, 11]:

        call BuleFire_Shimotsuke()

        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC012_First'}) {

            call ShimotsukeHello()

            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk13'})
            Event93:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk19', 'IsCloseMessageDialog': True})
                Event114:
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk23'})
                goto Event93
              case 1:
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk14'})
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk04'})
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk15', 'IsCloseMessageDialog': True})
                goto Event114
              case 2:
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk22', 'IsCloseMessageDialog': True})
                goto Event114
              case 3:
                Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk03'})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC012_First', 'IsWaitFinish': True})
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk17'})
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk18'})
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk04'})
            goto Event48
        }
    }
}

void Near() {

    call ShimotsukeNear()

    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_HatenoVillage012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:near06', 'DispFrame': 90, 'IsChecked': False})
      case 1:
        Event136:
        Npc_HatenoVillage012.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:near07'})
      case 2:
        Npc_HatenoVillage012.Demo_TalkASync({'IsChecked': False, 'IsWaitFinish': True, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:near04'})
      case 3:
        Npc_HatenoVillage012.Demo_TalkASync({'IsChecked': False, 'IsWaitFinish': True, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:near08'})
    }
}

void Ready_Shimotsuke_WhiteDragon() {
    goto Event40
}

void Finish_Shimotsuke_WhiteDragon() {
    goto Event40
}

void BuleFire_Shimotsuke() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        Npc_HatenoVillage012.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
        Npc_HatenoVillage012.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [-1.0, -1.0, -1.0], 'FaceId': 2})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk02'})
        } else {
            Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk05'})
        }
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    }
}

void ShimotsukeHello() {
    if Npc_HatenoVillage012.IsOnInstEventFlag() {
        Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk09'})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk10'})
      case [2, 3, 4, 5]:
        Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk11'})
      case [6, 7]:
        Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk12'})
    }
}

void Step1_Shimotsuke_WhiteDragon() {
    goto Event40
}

void Play_Shimotsuke_WhiteDragon() {
    goto Event40
}

void ReadyNear_Shimotsuke() {

    call ShimotsukeNear()

    Npc_HatenoVillage012.Demo_TalkASync({'IsChecked': True, 'IsWaitFinish': True, 'DispFrame': 300, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:near06'})
}

void PlayNear_Shimotsuke() {

    call ShimotsukeNear()

    goto Event136
}

void Step1Near_Shimotsuke() {

    call ShimotsukeNear()

    goto Event136
}

void FinishNear_Shimotsuke() {

    call ShimotsukeNear()

    goto Event136
}

void ShimotsukeNear() {
    switch Npc_HatenoVillage012.CheckActorAction13() {
      case 0:
        Npc_HatenoVillage012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:near03', 'IsChecked': False, 'DispFrame': 90})
        Event145:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case [2, 10]:
        Npc_HatenoVillage012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:near00', 'IsChecked': False, 'DispFrame': 90})
        goto Event145
      case 3:
        if EventSystemActor.CheckTime({'Hour': 0, 'Minute': 0, 'ConditionType': 'ge'})
        && EventSystemActor.CheckTime({'Minute': 0, 'ConditionType': 'le', 'Hour': 5}) {
            Event118:
            if Npc_HatenoVillage012.IsAwakened() {
                Event35:
                Npc_HatenoVillage012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:near02', 'IsChecked': False, 'DispFrame': 90})
            } else {
                Npc_HatenoVillage012.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:near05', 'IsChecked': False, 'DispFrame': 90})
            }
            goto Event145
        } else {
            goto Event35
        }
      case [4, 5, 6, 7, 8, 9, 12, 13]:
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
      case 11:
        goto Event118
    }
}

void ShimotsukeSleepy() {
    if !EventSystemActor.RandomChoice2() {
        Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk08', 'ASName': 'Talk_Yawn'})
    } else {
        Npc_HatenoVillage012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage012:talk24', 'ASName': 'Talk_Yawn'})
    }
}

void ShimotsukeLookMtStart() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    fork {
        Npc_HatenoVillage012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'FaceId': 1, 'ObjectId': 2, 'TurnPosition': [3406.0, 250.0, 2057.0], 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'IsValid': True, 'TurnPosition': [3406.0, 250.0, 2057.0], 'FaceId': 2, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3382.56103515625, 'Pattern1PosY': 238.33033752441406, 'Pattern1PosZ': 2098.641357421875, 'Pattern1AtX': 3384.747314453125, 'Pattern1AtY': 240.00363159179688, 'Pattern1AtZ': 2095.3388671875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void ShimotsukeLookMtEnd() {
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_ReturnSavePoint_1({'Count': 15.0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    } {
        Npc_HatenoVillage012.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsConfront': True, 'IsValid': False, 'FaceId': 1, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 14})
        GameROMPlayer.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': 'Npc_HatenoVillage012', 'TurnPosition': [-1.0, -1.0, -1.0], 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

}
