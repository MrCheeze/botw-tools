-------- EventFlow: NPC_Lanayru002 --------

Actor: NPC_Lanayru002
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPLAndResetGimmick', 'Demo_FlagON', 'Demo_WaitFrame']
queries: ['GeneralChoice2', 'CheckWeather', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_Lanayru001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {
    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Lanayru002_First'}) {
        if NPC_Lanayru002.IsOnInstEventFlag() {
            NPC_Lanayru002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_07'})
            Event13:
            if !EventSystemActor.GeneralChoice2() {
                NPC_Lanayru002.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_05', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
                Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'StartPosName': 'NPC_Lanayru001_Warp', 'SystemResetOption': 0, 'AdditionalResetActor': ''})

                call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="NPC_Lanayru001")})

                GameRomCamera.Demo_Talk({'IsWaitFinish': True, 'NoConnect': True, 'CameraReset': True})
                Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Lanayru001_First'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Lanayru001_SoldOut'}) {
                        NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk_22'})
                        Event41:
                        NPC_Lanayru001.Demo_SetInstEventFlag({'IsWaitFinish': True})
                    } else {
                        NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk_21'})
                        goto Event41
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Lanayru001_First', 'IsWaitFinish': True})
                    NPC_Lanayru001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru001:Talk_20', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

                    call OperationGuide.Guide_Surfing()

                    goto Event41
                }
            } else {
                NPC_Lanayru002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_04'})
            }
        } else {
            NPC_Lanayru002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_06', 'IsCloseMessageDialog': True})
            Event6:
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            switch EventSystemActor.CheckWeather() {
              case 0:
                NPC_Lanayru002.Demo_TurnAndLookToObject({'ObjectId': 3, 'TurnDirection': 85.0, 'IsWaitFinish': False, 'IsConfront': True, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1430.6409912109375, 'Pattern1PosY': 140.76751708984375, 'Pattern1PosZ': -760.0464477539062, 'Pattern1AtX': 1434.682861328125, 'Pattern1AtY': 141.7274169921875, 'Pattern1AtZ': -759.0, 'Pattern1Fovy': 50.00001907348633, 'Count': 45.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Event38:
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Lanayru002_First'}) {
                    Event39:
                    NPC_Lanayru002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_08'})
                    Event28:
                    EventSystemActor.Demo_FlagON({'FlagName': 'NPC_Lanayru002_First', 'IsWaitFinish': True})
                    switch EventSystemActor.CheckWeather() {
                      case 0:
                        GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'IsWaitFinish': False, 'Count': 45.0})
                        NPC_Lanayru002.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsWaitFinish': True, 'TurnDirection': 0.0, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2})
                        Event12:
                        NPC_Lanayru002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_03'})
                        goto Event13
                      case [1, 2, 3]:
                        GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'IsWaitFinish': True, 'Count': 45.0})
                        goto Event12
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_Lanayru001_First'}) {
                    goto Event39
                } else {
                    NPC_Lanayru002.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_02', 'IsCloseMessageDialog': True, 'ASName': ''})
                    goto Event28
                }
              case [1, 2, 3]:
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1395.367431640625, 'Pattern1PosY': 130.8083038330078, 'Pattern1PosZ': -751.7801513671875, 'Pattern1AtX': 1400.0611572265625, 'Pattern1AtY': 131.96707153320312, 'Pattern1AtZ': -750.97216796875, 'Pattern1Fovy': 50.00001907348633, 'Count': 45.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                goto Event38
            }
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_Lanayru001_First'}) {
        NPC_Lanayru002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_09'})
        goto Event6
    } else {
        NPC_Lanayru002.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_00'})
        if EventSystemActor.GeneralChoice2() in [0, 1] {
            NPC_Lanayru002.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:Talk_01', 'IsCloseMessageDialog': True})
            goto Event6
        }
    }
}

void Near() {
    NPC_Lanayru002.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NPC_Lanayru002:near_00', 'DispFrame': 90, 'IsChecked': False})
}
