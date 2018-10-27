-------- EventFlow: Npc_HatenoVillage015 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'CheckPlayerWeaponFired', 'GeneralChoice2', 'GeneralChoice3', 'CheckTimeType', 'RandomChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HatenoVillage015
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_ReceiveTerror', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion', 'Demo_LookAtObject']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage015_talk'}) {
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
                if Npc_HatenoVillage015.IsOnInstEventFlag() {
                    Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk03'})
                } else {
                    Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk02'})
                }
            } else
            if Npc_HatenoVillage015.IsOnInstEventFlag() {
                Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk05'})
            } else {
                Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk04'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            switch EventSystemActor.CheckTimeType() {
              case [0, 6, 7]:
                if !EventSystemActor.RandomChoice2() {
                    Event27:
                    if Npc_HatenoVillage015.IsOnInstEventFlag() {
                        Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk09'})
                        Event29:
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:
                            Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk13', 'IsCloseMessageDialog': True})

                            fork {
                                Npc_HatenoVillage015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsConfront': True, 'IsValid': True, 'FaceId': 1, 'TurnPosition': [3353.0, 225.0, 2144.0], 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            } {
                                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3274.720458984375, 'Pattern1PosY': 209.6790008544922, 'Pattern1PosZ': 2141.739501953125, 'Pattern1AtX': 3279.234619140625, 'Pattern1AtY': 210.4582061767578, 'Pattern1AtZ': 2141.4765625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            }

                            Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk19', 'ASName': 'Point'})
                          case 1:
                            Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk12'})
                          case 2:
                            Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk11'})
                        }
                    } else {
                        Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk10'})
                        goto Event29
                    }
                } else {
                    Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk08', 'ASName': 'Talk_Yawn'})
                    goto Event27
                }
              case [1, 2, 3, 4, 5]:
                goto Event27
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_HatenoVillage015_talk', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

            call InitTalk.InitTalkEquip({'Arg_Turn': 0})

            Event36:
            switch EventSystemActor.CheckTimeType() {
              case [0, 6, 7]:
                Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk15'})
                Event13:
                if !EventSystemActor.GeneralChoice2() {
                    Event48:
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    Npc_HatenoVillage015.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Thinking', 'IsOnlyFace': True})
                    Npc_HatenoVillage015.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 1, 'IsConfront': True, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_HatenoVillage015.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    Npc_HatenoVillage015.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk17', 'ASName': '', 'IsWaitFinish': True})
                    Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk18'})
                    Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk07'})
                } else {
                    Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk16'})
                    goto Event48
                }
              case [1, 2, 3, 4, 5]:
                Npc_HatenoVillage015.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:talk00'})
                goto Event13
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            goto Event36
        }
    }
}

void Near() {
    switch Npc_HatenoVillage015.CheckActorAction13() {
      case [0, 10]:
        Npc_HatenoVillage015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:near01', 'IsChecked': False, 'DispFrame': 90})
      case 1:
        if !EventSystemActor.CheckFlag({'FlagName': 'Npc_HatenoVillage015_talk'}) {
            Npc_HatenoVillage015.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
            Npc_HatenoVillage015.Demo_ReceiveTerror({'IsWaitFinish': True})
        }
      case 11:
        Npc_HatenoVillage015.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage015:near02', 'IsChecked': False, 'DispFrame': 90})
    }
}
