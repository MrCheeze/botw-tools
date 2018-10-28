-------- EventFlow: Npc_Goron020_2 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ExitEventPlayer', 'Demo_WaitFrame']
queries: ['CheckTimeType', 'RandomChoice4', 'GeneralChoice4', 'CheckFlag', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron020_2[YunBo_Finished]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_TurnAndLookToObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Goron020_First'}) {

        call YunboHello()

        switch Npc_Goron020_2[YunBo_Finished].CheckActorAction13() {
          case 4:
            if Npc_Goron020_2[YunBo_Finished].IsOnInstEventFlag() {
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk18'})
            } else {
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk17'})
            }
          case 5:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
            && EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) {

                call BalladOfHeroGoron.Yunbo_AfterTalk_Entry02()

            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_Goron020_Secret'}) {
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk11'})
                Event24:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    if !Npc_Goron020_2[YunBo_Finished].IsOnInstEventFlag() {
                        Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk13'})
                    }
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk24', 'IsCloseMessageDialog': True})
                    Event57:
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk06'})
                    goto Event24
                  case 1:
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1607.1854248046875, 'Pattern1PosY': 507.4464111328125, 'Pattern1PosZ': -2434.212646484375, 'Pattern1AtX': 1610.5841064453125, 'Pattern1AtY': 508.3669128417969, 'Pattern1AtZ': -2434.633056640625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk14', 'IsCloseMessageDialog': True})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                    goto Event57
                  case 2:
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk15'})
                    Npc_Goron020_2[YunBo_Finished].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Barrier'})
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk16', 'IsCloseMessageDialog': True, 'ASName': ''})
                    Npc_Goron020_2[YunBo_Finished].Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier'})
                    goto Event57
                  case 3:
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk12'})
                }
            } else {
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk19', 'IsCloseMessageDialog': True})
                Npc_Goron020_2[YunBo_Finished].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 3, 'TurnDirection': 100.0, 'FaceId': 1, 'ActorName': ''})

                fork {
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk25', 'ASName': 'Point', 'IsCloseMessageDialog': True})
                } {
                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'TurnDirection': 100.0, 'FaceId': 1, 'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
                }

                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1607.1854248046875, 'Pattern1PosY': 507.4464111328125, 'Pattern1PosZ': -2434.212646484375, 'Pattern1AtX': 1610.5841064453125, 'Pattern1AtY': 508.3669128417969, 'Pattern1AtZ': -2434.633056640625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk20', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                Npc_Goron020_2[YunBo_Finished].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_Goron020_2', 'UniqueName': 'YunBo_Finished', 'TurnDirection': 0.0})
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk26'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Goron020_Secret'})
            }
          case 10:
            if !EventSystemActor.RandomChoice2() {
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk22'})
            } else {
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk21'})
            }
          case 11:
            Event10:
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk07'})
                Event45:
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
              case 1:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk08'})
                goto Event45
              case 2:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk10'})
                goto Event45
              case 3:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk09'})
                goto Event45
            }
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        switch Npc_Goron020_2[YunBo_Finished].CheckActorAction13() {
          case [4, 5, 10]:
            if EventSystemActor.CheckFlag({'FlagName': 'HasAoCVer3'})
            && EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) {

                call BalladOfHeroGoron.Yunbo_AfterTalk_Entry01()

            } else
            if !Npc_Goron020_2[YunBo_Finished].IsOnInstEventFlag() {
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk27'})
            }
            Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk23'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Goron020_First', 'IsWaitFinish': True})
          case 11:
            goto Event10
        }
    }
}

void Near() {
    if Npc_Goron020_2[YunBo_Finished].CheckActorAction13() == 11 {
        Npc_Goron020_2[YunBo_Finished].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:near00', 'IsChecked': False, 'DispFrame': 90})
    }
}

void YunboHello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Goron020_2[YunBo_Finished].IsOnInstEventFlag() {
        Npc_Goron020_2[YunBo_Finished].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk03', 'IsWaitFinish': True})
    } else
    switch Npc_Goron020_2[YunBo_Finished].CheckActorAction13() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        switch EventSystemActor.CheckTimeType() {
          case [0, 1]:
            Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk00'})
          case [2, 3, 4, 5]:
            Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk01'})
          case [6, 7]:
            Event13:
            Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk02'})
        }
      case 10:
        goto Event13
      case 11:
        goto Event10
    }
}
