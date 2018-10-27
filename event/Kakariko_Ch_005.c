-------- EventFlow: Kakariko_Ch_005 --------

Actor: Npc_Kakariko004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_ChangeScheduleAnchor', 'Demo_PlayASForDemo', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_ChangePostureWithAS']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_WaitFrame', 'Demo_SetPLStateToUnequipAndWait']
queries: ['CheckFlag', 'GeneralChoice3', 'GeneralChoice2', 'RandomChoice4', 'CheckAddPorchItem', 'RandomChoice2', 'RandomChoice3', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHorseGetOff', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Kakariko004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Kakurenbo'}) {
        Event246:

        call Finish_Npc_Kakariko004_Talk()

    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Kakekko'}) {
            goto Event246
        } else {
            switch Npc_Kakariko004.CheckActorAction13() {
              case 0:
                Event222:

                call Npc_Kakariko004.Talk()

              case 1:
                goto Event222
              case 2:
                goto Event222
              case 3:
                goto Event222
              case 4:
                goto Event222
              case 5:
                goto Event222
              case 6:
                goto Event222
              case 7:
                goto Event222
              case 8:
                goto Event222
              case 9:
                goto Event222
              case 10:
                goto Event222
              case 11:
                goto Event222
              case 12:
                Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk00', 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk10', 'ASName': ''})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Finish'}) {
                            Event60:

                            call Kakurenbo()

                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Ch_005_Activated', 'IsWaitFinish': True})
                            goto Event60
                        }
                      case 1:
                        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Finish'}) {
                            Event104:

                            call Kakekko()

                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Ch_005_Activated', 'IsWaitFinish': True})
                            goto Event104
                        }
                      case 2:
                        Event49:
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk03'})
                    }
                } else {
                    goto Event49
                }
              case 13:
                goto Event222
            }
        }
    }
}

void Finish_Npc_Kakariko004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_Kakariko004.CheckActorAction13() {
      case 0:
        Event126:
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakekko'})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Kakurenbo', 'IsWaitFinish': True})

        call Npc_Kakariko004.Talk()

      case 1:
        goto Event126
      case 2:
        goto Event126
      case 3:
        goto Event126
      case 4:
        goto Event126
      case 5:
        goto Event126
      case 6:
        Event113:
        if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Kakurenbo'}) {
            Npc_Kakariko004.Demo_ChangePostureWithAS({'IsWaitFinish': True, 'Posture': 'Stand'})
            Npc_Kakariko004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'IsValid': True, 'IsConfront': False})
            Npc_Kakariko004.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk02'})
            Event237:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Finish'}) {
                if !EventSystemActor.RandomChoice2() {
                    Npc_Kakariko004.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk09'})
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Item_Ore_F'}) {

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_F'})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko004_reward'})
                        Event225:
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko004_reward'})
                        Event226:
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakurenbo'})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakekko'})
                    } else {
                        Event275:
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        Npc_Kakariko004.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk14'})
                        goto Event226
                    }
                } else {
                    Npc_Kakariko004.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk11'})
                    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_H', 'Count': 1}) {

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_H'})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Kakariko004_reward'})
                        goto Event225
                    } else {
                        goto Event275
                    }
                }
            } else {
                Npc_Kakariko004.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk11'})
                if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_H', 'Count': 1}) {

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_H'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_1stReward'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakurenbo'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakekko'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Finish'})
                } else {
                    Npc_Kakariko004.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk12'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakurenbo'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakekko'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_full'})
                }
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Kakekko'}) {
                Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk08', 'ASName': 'Talk'})
                goto Event237
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_full'}) {
                    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Ore_H', 'Count': 1}) {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk06'})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Item_Ore_H'})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_1stReward'})
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk13'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Finish'})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_full'})
                    } else {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk05'})
                    }
                } else {
                    Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk00'})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk10'})
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakurenbo'})

                            call Kakurenbo()

                          case 1:
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakekko'})

                            call Kakekko()

                          case 2:
                            Npc_Kakariko004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk03'})
                        }
                    }
                }
            }
        }
      case 7:
        goto Event113
      case 8:
        goto Event126
      case 9:
        goto Event126
      case 10:
        goto Event126
      case 11:
        goto Event126
      case 12:
        goto Event113
      case 13:
        goto Event126
    }
}

void Kakekko() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakekko'})
    Npc_Kakariko004.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk07', 'ASName': 'Talk_Run'})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        Event132:
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_Kakariko004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Kakekko_1'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1805.8778076171875, 'Pattern1PosY': 221.14996337890625, 'Pattern1PosZ': 999.2567749023438, 'Pattern1AtX': 1811.1009521484375, 'Pattern1AtY': 220.22122192382812, 'Pattern1AtZ': 999.3994750976562, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'G-6', 'IsWaitFinish': True, 'WarpDestPosName': 'Kakekko_1'})
            Event322:
            EventSystemActor.Demo_SetPLStateToUnequipAndWait({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
          case 1:
            Npc_Kakariko004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Kakekko_2'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1902.714111328125, 'Pattern1PosY': 235.797119140625, 'Pattern1PosZ': 1024.4239501953125, 'Pattern1AtX': 1901.2120361328125, 'Pattern1AtY': 234.69674682617188, 'Pattern1AtZ': 1019.3200073242188, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'G-6', 'IsWaitFinish': True, 'WarpDestPosName': 'Kakekko_2'})
            goto Event322
          case 2:
            Npc_Kakariko004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Kakekko_2'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1900.3076171875, 'Pattern1PosY': 235.60150146484375, 'Pattern1PosZ': 1025.087646484375, 'Pattern1AtX': 1900.541748046875, 'Pattern1AtY': 234.70181274414062, 'Pattern1AtZ': 1019.885986328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'G-6', 'IsWaitFinish': True, 'WarpDestPosName': 'Kakekko_2'})
            goto Event322
          case 3:
            Npc_Kakariko004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Kakekko_4'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1849.3074951171875, 'Pattern1PosY': 223.24807739257812, 'Pattern1PosZ': 989.9445190429688, 'Pattern1AtX': 1851.9393310546875, 'Pattern1AtY': 223.21844482421875, 'Pattern1AtZ': 993.7315673828125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'G-6', 'IsWaitFinish': True, 'WarpDestPosName': 'Kakekko_4'})
            goto Event322
        }
    } else {
        goto Event132
    }
}

void Kakurenbo() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Kakariko_Ch_005_Kakurenbo'})
    Npc_Kakariko004.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Talk01', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': ''})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Finish'}) {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Hide01'}) {
                switch EventSystemActor.RandomChoice3() {
                  case 0:
                    Event252:
                    Npc_Kakariko004.Demo_ChangeScheduleAnchor({'IsWaitFinish': True, 'ScheduleName': 'Action4', 'AnchorUniqueName': 'Kakure_2'})
                    Npc_Kakariko004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction4', 'UniqueName': 'Kakure_2'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Ch_005_Hide02', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide01', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide03', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide04', 'IsWaitFinish': True})
                    Event153:
                    Npc_Kakariko004.Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Rest', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                  case 1:
                    Event253:
                    Npc_Kakariko004.Demo_ChangeScheduleAnchor({'IsWaitFinish': True, 'ScheduleName': 'Action4', 'AnchorUniqueName': 'Kakure_3'})
                    Npc_Kakariko004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction4', 'UniqueName': 'Kakure_3'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Ch_005_Hide03', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide01', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide02', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide04', 'IsWaitFinish': True})
                    goto Event153
                  case 2:
                    Event254:
                    Npc_Kakariko004.Demo_ChangeScheduleAnchor({'IsWaitFinish': True, 'ScheduleName': 'Action4', 'AnchorUniqueName': 'Kakure_4'})
                    Npc_Kakariko004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction4', 'UniqueName': 'Kakure_4'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Ch_005_Hide04', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide01', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide02', 'IsWaitFinish': True})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide03', 'IsWaitFinish': True})
                    goto Event153
                }
            } else {
                Event249:
                Npc_Kakariko004.Demo_ChangeScheduleAnchor({'IsWaitFinish': True, 'ScheduleName': 'Action4', 'AnchorUniqueName': 'Kakure_1'})
                Npc_Kakariko004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction4', 'UniqueName': 'Kakure_1'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Kakariko_Ch_005_Hide01', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide02', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide03', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Kakariko_Ch_005_Hide04', 'IsWaitFinish': True})
                goto Event153
            }
          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Hide02'}) {
                switch EventSystemActor.RandomChoice3() {
                  case 0:
                    goto Event249
                  case 1:
                    goto Event253
                  case 2:
                    goto Event254
                }
            } else {
                goto Event252
            }
          case 2:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Hide03'}) {
                switch EventSystemActor.RandomChoice3() {
                  case 0:
                    goto Event249
                  case 1:
                    goto Event252
                  case 2:
                    goto Event254
                }
            } else {
                goto Event253
            }
          case 3:
            if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Hide04'}) {
                switch EventSystemActor.RandomChoice3() {
                  case 0:
                    goto Event249
                  case 1:
                    goto Event252
                  case 2:
                    goto Event253
                }
            } else {
                goto Event254
            }
        }
    } else {
        Npc_Kakariko004.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction4', 'UniqueName': 'Kakure_0'})
        goto Event153
    }
}

void Ready_Npc_Kakariko004_NearActorsNear() {
    Event282:

    call Npc_Kakariko004.NearActorsNear()

}

void Ready_Npc_Kakariko004_NearActorsTalk() {
    Event281:

    call Npc_Kakariko004.NearActorsTalk()

}

void Finish_Npc_Kakariko004_NearActorsNear() {
    goto Event282
}

void Finish_Npc_Kakariko004_NearActorsTalk() {
    goto Event281
}

void Finish_Npc_Kakariko004_Kakariko_Ch_005_Kakurenbo_NearActorsNear() {
    goto Event282
}

void Finish_Npc_Kakariko004_Kakariko_Ch_005_Kakurenbo_NearActorsTalk() {
    goto Event281
}

void Ready_Npc_Kakariko004_Near() {
    if Npc_Kakariko004.CheckActorAction13() == 12 {
        Npc_Kakariko004.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Near00'})
    }
}

void Finish_Npc_Kakariko004_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Kakekko'}) {
        Npc_Kakariko004.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Near01_kakekko'})
    }
}

void Finish_Npc_Kakariko004_Kakariko_Ch_005_Kakurenbo_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'Kakariko_Ch_005_Kakurenbo'}) {
        Npc_Kakariko004.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 300, 'IsChecked': True, 'MessageId': 'EventFlowMsg/Kakariko_Ch_005:Near01_kakurenbo'})
    }
}
