-------- EventFlow: Npc_HatenoVillage027 --------

Actor: Npc_HatenoVillage027
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_EnableCameraInput', 'Demo_ExitEventPlayer', 'Demo_FlagON']
queries: ['CheckPlayerWeaponFired', 'RandomChoice2', 'CheckFlag', 'GeneralChoice4', 'CheckWeather']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage021
entrypoint: None()
actions: ['Demo_TurnAndLookToObject', 'Demo_Talk', 'Demo_BecomeSpeaker']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    switch Npc_HatenoVillage027.CheckActorAction13() {
      case [0, 12]:

        call AotaBlueFire()


        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if Npc_HatenoVillage027.IsOnInstEventFlag() {
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk15'})
            } else {
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk14'})
            }
        } else {
            Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk00'})
        }
      case 1:

        call AotaBlueFire()

        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC027_Jamming'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk18'})
                Event86:
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    if !EventSystemActor.RandomChoice2() {
                        Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk20'})
                        Event67:
                        switch EventSystemActor.GeneralChoice4() {
                          case 2:
                            Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk23'})
                          case 3:
                            Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk22'})
                        }
                    } else {
                        Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk21'})
                        goto Event67
                    }
                  case [1, 2, 3]:
                    if !EventSystemActor.RandomChoice2() {
                        Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk26'})
                        goto Event67
                    } else {
                        Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk27'})
                        goto Event67
                    }
                }
            } else {
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk19'})
                goto Event86
            }
        } else {
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

            call AotaCamera()

            switch EventSystemActor.CheckWeather() {
              case 0:
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk07', 'IsCloseMessageDialog': True})
                    Event55:
                    if Npc_HatenoVillage021.CheckActorAction13() {
                        Npc_HatenoVillage027.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': 'Npc_HatenoVillage021', 'FaceId': 1, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'IsValid': False})
                        if !EventSystemActor.RandomChoice2() {
                            Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk11', 'IsCloseMessageDialog': True})
                            Event96:
                            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HatenoVillage021', 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})

                            fork {
                                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3668.817626953125, 'Pattern1PosY': 312.52996826171875, 'Pattern1PosZ': 2180.1689453125, 'Pattern1AtX': 3670.897216796875, 'Pattern1AtY': 312.59503173828125, 'Pattern1AtZ': 2184.982177734375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            } {
                                Npc_HatenoVillage021.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 1, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_HatenoVillage027', 'IsConfront': True, 'IsValid': False})
                            }


                            fork {
                                if !EventSystemActor.RandomChoice2() {
                                    Npc_HatenoVillage021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk12', 'IsCloseMessageDialog': True})
                                } else {
                                    Npc_HatenoVillage021.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk16', 'IsCloseMessageDialog': True})
                                }
                            } {
                                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_HatenoVillage027', 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
                            }

                            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 15.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                        } else {
                            Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk17', 'IsCloseMessageDialog': True})
                            goto Event96
                        }
                    }
                } else {
                    Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk08', 'IsCloseMessageDialog': True})
                    goto Event55
                }
              case [1, 2, 3]:
                if !EventSystemActor.RandomChoice2() {
                    Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk24'})
                    goto Event55
                } else {
                    Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk25'})
                    goto Event55
                }
            }
        }
      case 10:

        call AotaBlueFire()


        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if Npc_HatenoVillage027.IsOnInstEventFlag() {
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk13'})
            } else {
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk04'})
            }
        } else {
            Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk03'})
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event27:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk06'})
            } else {
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk05'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event27
        }
    }
}

void Near() {
    switch Npc_HatenoVillage027.CheckActorAction13() {
      case 0:
        Npc_HatenoVillage027.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:near00', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        Npc_HatenoVillage027.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:near02', 'IsChecked': False, 'DispFrame': 90})
      case 10:
        Npc_HatenoVillage027.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:near03', 'IsChecked': False, 'DispFrame': 90})
      case 11:
        Npc_HatenoVillage027.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:near04', 'IsChecked': False, 'DispFrame': 90})
    }
}

void AotaCamera() {
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3656.328125, 'Pattern1PosY': 298.5873107910156, 'Pattern1PosZ': 2156.1044921875, 'Pattern1AtX': 3659.854248046875, 'Pattern1AtY': 299.900146484375, 'Pattern1AtZ': 2155.112060546875, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    } {
        Npc_HatenoVillage021.Demo_BecomeSpeaker({'IsWaitFinish': True})
    }

}

void AotaBlueFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        Npc_HatenoVillage027.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False})
        if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC027_BlueFireFirst'}) {
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk02'})
                Event92:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC027_BlueFireFirst', 'IsWaitFinish': True})
                Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk01'})
                goto Event92
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC027_BlueFireFirst'}) {
            Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk10'})
            goto Event92
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC027_BlueFireFirst', 'IsWaitFinish': True})
            Npc_HatenoVillage027.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:talk09'})
            goto Event92
        }
    }
}
