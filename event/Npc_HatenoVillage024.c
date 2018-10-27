-------- EventFlow: Npc_HatenoVillage024 --------

Actor: Npc_HatenoVillage024
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog']
queries: ['CheckPlayerWeaponFired', 'CheckTimeType', 'CheckWeather', 'RandomChoice2', 'GeneralChoice4', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    Event11:
    switch Npc_HatenoVillage024.CheckActorAction13() {
      case 0:
        Event15:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            Event14:

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if Npc_HatenoVillage024.IsOnInstEventFlag() {
                Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk01'})
            } else {
                Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk00', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_HatenoVillage024.IsOnInstEventFlag() {
                Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk17'})
            } else {
                Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk16'})
            }
        }
      case 1:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event14
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage024_First'}) {

                call RoreruHello()

                Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk15'})
                Event28:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage024_UotoriFirst'}) {
                        Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk24', 'IsCloseMessageDialog': True})
                        Event78:
                        Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk13'})
                        goto Event28
                    } else {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage024_UotoriFirst', 'IsWaitFinish': True})
                        Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk23', 'IsCloseMessageDialog': True})
                        goto Event78
                    }
                  case 1:
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage024_WhatsFirst'}) {
                        Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk22', 'IsCloseMessageDialog': True})
                        goto Event78
                    } else {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage024_WhatsFirst', 'IsWaitFinish': True})
                        Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk10', 'IsCloseMessageDialog': True})
                        goto Event78
                    }
                  case 2:
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3580.29638671875, 'Pattern1PosY': 268.4642028808594, 'Pattern1PosZ': 2110.64501953125, 'Pattern1AtX': 3580.683837890625, 'Pattern1AtY': 268.5150146484375, 'Pattern1AtZ': 2105.6064453125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 10.0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    Npc_HatenoVillage024.Demo_LookAtObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [3581.0, 267.0, 2104.0], 'IsWaitFinish': True})
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage024_ThisFirst'}) {
                        Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk20', 'IsCloseMessageDialog': True})
                        Event100:
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        Npc_HatenoVillage024.Demo_LookAtObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'ObjectId': 2, 'IsWaitFinish': True, 'TurnPosition': [3617.0, 282.0, 2111.0]})
                        GameROMPlayer.Demo_LookAtObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsWaitFinish': True, 'TurnPosition': [3617.0, 282.0, 2111.0], 'ObjectId': 1})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3572.70703125, 'Pattern1PosY': 267.48968505859375, 'Pattern1PosZ': 2107.614501953125, 'Pattern1AtX': 3576.2607421875, 'Pattern1AtY': 268.9198913574219, 'Pattern1AtZ': 2107.90673828125, 'Pattern1Fovy': 50.00001907348633, 'Count': 15.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk21', 'IsCloseMessageDialog': True})
                        GameROMPlayer.Demo_LookAtObject({'IsValid': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_HatenoVillage024', 'TurnPosition': [0.0, 0.0, 0.0]})
                        Npc_HatenoVillage024.Demo_LookAtObject({'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsWaitFinish': True, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0]})
                        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 10.0})
                        goto Event78
                    } else {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage024_ThisFirst', 'IsWaitFinish': True})
                        Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk09', 'IsCloseMessageDialog': False})
                        goto Event100
                    }
                  case 3:
                    Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk02'})
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage024_First', 'IsWaitFinish': True})
                switch EventSystemActor.CheckWeather() {
                  case 0:
                    Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk08'})
                    Event87:
                    Npc_HatenoVillage024.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
                    Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk12'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage024_UotoriFirst', 'IsWaitFinish': True})
                    Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk23', 'IsCloseMessageDialog': True})
                  case 1:
                    Event42:
                    Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk07'})
                    goto Event87
                  case 2:
                    goto Event42
                  case 3:
                    goto Event42
                }
            }
        }
      case 10:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {
            goto Event14
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_HatenoVillage024.IsOnInstEventFlag() {
                Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk14'})
            } else {
                Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk11'})
            }
        }
      case 11:
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event56:
            if !EventSystemActor.RandomChoice2() {
                Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk19'})
            } else {
                Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk18'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event56
        }
      case 12:
        goto Event15
    }
}

void Near() {
    Event36:
    switch Npc_HatenoVillage024.CheckActorAction13() {
      case 0:
        Event35:
        Npc_HatenoVillage024.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:near00', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        Npc_HatenoVillage024.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:near01', 'IsChecked': False, 'DispFrame': 90})
      case 10:
        Npc_HatenoVillage024.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:near02', 'IsChecked': False, 'DispFrame': 90})
      case 12:
        goto Event35
    }
}

void RoreruHello() {
    if Npc_HatenoVillage024.IsOnInstEventFlag() {
        Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk03'})
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event24:
            Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk04'})
          case 1:
            goto Event24
          case 2:
            Event25:
            Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk05'})
          case 3:
            goto Event25
          case 4:
            Event26:
            Npc_HatenoVillage024.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage024:talk06'})
          case 5:
            goto Event26
          case 6:
            goto Event26
          case 7:
            goto Event26
        }
    }
}

void Npc_HatenoVillage024_First_Talk() {
    goto Event11
}

void Npc_HatenoVillage024_First_Near() {
    goto Event36
}
