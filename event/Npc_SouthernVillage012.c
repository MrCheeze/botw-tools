-------- EventFlow: Npc_SouthernVillage012 --------

Actor: Npc_SouthernVillage012
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame']
queries: ['CheckWeather', 'CheckFlag', 'GeneralChoice2', 'CheckTimeType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_SouthernVillage012.CheckActorAction13() {
      case 0:
        Event23:
        switch EventSystemActor.CheckWeather() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_SourthernVillage012_IsTalked'}) {
                if Npc_SouthernVillage012.IsOnInstEventFlag() {
                    Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_03'})
                } else {
                    Event5:
                    Npc_SouthernVillage012.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_00', 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_06'})
                        Event40:
                        switch Npc_SouthernVillage012.CheckActorAction13() {
                          case 0:
                            Event43:
                            Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_13'})
                            Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_04'})
                          case 1:
                            WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
                            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                            Npc_SouthernVillage012.Demo_TurnAndLookToObject({'ObjectId': 2, 'FaceId': 2, 'TurnPosition': [3280.0, 110.0, 3584.0], 'IsValid': True, 'IsWaitFinish': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            GameROMPlayer.Demo_LookAtObject({'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [3280.0, 110.0, 3584.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

                            fork {
                                Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_02', 'IsCloseMessageDialog': True})
                            } {
                                GameRomCamera.Demo_MovePosFlow({'StartCalcOnly': False, 'MotionMode': 1, 'Count': 30.0, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1Fovy': 40.0, 'Accept1FrameDelay': True, 'Pattern1PosX': 3089.0, 'Pattern1PosY': 125.0, 'Pattern1PosZ': 3562.0, 'Pattern1AtX': 3093.0, 'Pattern1AtY': 125.0, 'Pattern1AtZ': 3562.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            }

                            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': False, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 30.0})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                            Npc_SouthernVillage012.Demo_TurnAndLookToObject({'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0]})
                            GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'ActorName': 'Npc_SouthernVillage012', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
                            Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_04'})
                          case 2:
                            goto Event43
                          case 3:
                            goto Event43
                          case 4:
                            goto Event43
                          case 5:
                            goto Event43
                          case 6:
                            goto Event43
                          case 7:
                            goto Event43
                          case 8:
                            goto Event43
                          case 9:
                            goto Event43
                          case 10:
                            goto Event43
                          case 11:
                            goto Event43
                          case 12:
                            goto Event43
                          case 13:
                            goto Event43
                        }
                    } else {
                        Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_07'})
                        goto Event40
                    }
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SourthernVillage012_IsTalked', 'IsWaitFinish': True})

                call hello()

                goto Event5
            }
          case 1:
            Event26:
            Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_05'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_09'})
            } else {
                Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_08'})
            }
          case 2:
            goto Event26
          case 3:
            goto Event26
        }
      case 1:
        goto Event23
      case 10:
        goto Event23
      case 11:
        Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_01', 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Near() {
    switch Npc_SouthernVillage012.CheckActorAction13() {
      case 0:
        switch EventSystemActor.CheckWeather() {
          case 1:
            Event19:
            Npc_SouthernVillage012.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:Near01'})
          case 2:
            goto Event19
          case 3:
            goto Event19
        }
      case 1:
        switch EventSystemActor.CheckWeather() {
          case 0:
            Npc_SouthernVillage012.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:Near00'})
          case 1:
            goto Event19
          case 2:
            goto Event19
          case 3:
            goto Event19
        }
      case 10:
        switch EventSystemActor.CheckWeather() {
          case 1:
            goto Event19
          case 2:
            goto Event19
          case 3:
            goto Event19
        }
      case 11:
        Npc_SouthernVillage012.Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:Near02'})
    }
}

void hello() {
    switch EventSystemActor.CheckTimeType() {
      case 0:
        Event35:
        Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_10'})
      case 1:
        goto Event35
      case 2:
        Event36:
        Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_11'})
      case 3:
        goto Event36
      case 4:
        goto Event36
      case 5:
        Event37:
        Npc_SouthernVillage012.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage012:talk_12'})
      case 6:
        goto Event37
      case 7:
        goto Event37
    }
}
