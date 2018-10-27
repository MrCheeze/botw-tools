-------- EventFlow: Npc_FaronWoods006 --------

Actor: Npc_FaronWoods006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject']
queries: ['CheckActorAction', 'IsArriveAnchorForRain', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_FlagOFF', 'Demo_WaitFrame']
queries: ['CheckFlag', 'GeneralChoice3', 'GeneralChoice2', 'CheckWeather', 'GeneralChoice4', 'RandomChoice2']
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
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods006_talk'}) {
        switch EventSystemActor.CheckWeather() {
          case 0:
            Event77:

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Wander/'}) {
                if Npc_FaronWoods006.IsArriveAnchorForRain() {
                    Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:WanderRain00'})
                    if !EventSystemActor.GeneralChoice2() {
                        Event52:
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Wander02'})
                        switch EventSystemActor.GeneralChoice4() {
                          case 0:
                            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                            if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                                Npc_FaronWoods006.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 2, 'TurnPosition': [1015.0, 110.0, 1715.0], 'ActorName': ''})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'TurnDirection': 0.0, 'TurnPosition': [1015.0, 110.0, 1715.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0]})
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Kakariko00', 'ASName': '', 'IsCloseMessageDialog': False})
                                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                                GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 302.08673095703125, 'Pattern1PosY': 124.79144287109375, 'Pattern1PosZ': 1581.7415771484375, 'Pattern1AtX': 306.7749938964844, 'Pattern1AtY': 124.98789978027344, 'Pattern1AtZ': 1582.6884765625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'Accept1FrameDelay': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Kakariko01', 'IsCloseMessageDialog': True})
                                Npc_FaronWoods006.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                Event206:
                                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'TurnDirection': 0.0, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'Npc_FaronWoods006', 'TurnPosition': [0.0, 0.0, 0.0]})
                                GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
                                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                                Event210:

                                call TalkLoop()

                            } else {
                                Npc_FaronWoods006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 2, 'TurnPosition': [1015.0, 110.0, 1715.0], 'ActorName': ''})
                                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'TurnDirection': 0.0, 'TurnPosition': [1015.0, 110.0, 1715.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0]})
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Kakariko00', 'ASName': 'Point', 'IsCloseMessageDialog': False})
                                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                                GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 302.08673095703125, 'Pattern1PosY': 124.79144287109375, 'Pattern1PosZ': 1581.7415771484375, 'Pattern1AtX': 306.7749938964844, 'Pattern1AtY': 124.98789978027344, 'Pattern1AtZ': 1582.6884765625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'Accept1FrameDelay': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'IsWaitFinish': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Kakariko01', 'IsCloseMessageDialog': True})
                                Npc_FaronWoods006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                                goto Event206
                            }
                          case 1:
                            Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Hyrule00', 'IsCloseMessageDialog': True})
                            if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                                Npc_FaronWoods006.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 2, 'TurnPosition': [-254.0, 443.0, -1061.0], 'ActorName': ''})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'TurnDirection': 0.0, 'TurnPosition': [-254.0, 443.0, -1061.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0]})
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Hyrule01', 'IsCloseMessageDialog': True, 'ASName': ''})
                                Npc_FaronWoods006.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                Event220:
                                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'TurnDirection': 0.0, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'Npc_FaronWoods006', 'TurnPosition': [0.0, 0.0, 0.0]})
                                goto Event210
                            } else {
                                Npc_FaronWoods006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 2, 'TurnPosition': [-254.0, 443.0, -1061.0], 'ActorName': ''})
                                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'TurnDirection': 0.0, 'TurnPosition': [-254.0, 443.0, -1061.0], 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0]})
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Hyrule01', 'IsCloseMessageDialog': True, 'ASName': 'Point'})
                                Npc_FaronWoods006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                                goto Event220
                            }
                          case 2:
                            Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Colony00', 'ASName': '', 'IsCloseMessageDialog': True})
                            if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                                Npc_FaronWoods006.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 2, 'TurnPosition': [-560.0, 246.0, 1695.0], 'ActorName': ''})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'TurnPosition': [-560.0, 246.0, 1695.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0]})
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Colony01', 'IsCloseMessageDialog': True, 'ASName': ''})
                                Npc_FaronWoods006.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
                                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                                Event221:
                                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'TurnDirection': 0.0, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'Npc_FaronWoods006', 'TurnPosition': [0.0, 0.0, 0.0]})
                                goto Event210
                            } else {
                                Npc_FaronWoods006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'ObjectId': 2, 'TurnPosition': [-560.0, 246.0, 1695.0], 'ActorName': ''})
                                GameROMPlayer.Demo_LookAtObject({'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'TurnPosition': [-560.0, 246.0, 1695.0], 'TurnDirection': 0.0, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0]})
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Colony01', 'IsCloseMessageDialog': True, 'ASName': 'Point'})
                                Npc_FaronWoods006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                                goto Event221
                            }
                          case 3:
                            Event66:
                            if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                                Event68:
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:GoodBye01'})
                            } else {
                                Event53:
                                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:GoodBye00', 'IsCloseMessageDialog': True})
                            }
                        }
                    } else {
                        goto Event68
                    }
                } else {

                    call WarningClear()

                }
            } else {
                if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                    Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Action5_01'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event52
                    } else {
                        goto Event68
                    }
                } else {
                    Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Action5_00'})
                    if !EventSystemActor.GeneralChoice2() {
                        goto Event52
                    } else {
                        goto Event53
                    }
                }
            }
          case 1:
            Event76:
            if Npc_FaronWoods006.IsArriveAnchorForRain() {
                goto Event77
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:RunRain00', 'IsCloseMessageDialog': True})
            }
          case 2:
            goto Event76
          case 3:
            goto Event76
        }
    } else {
        if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Terror'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods006_WarningClear'}) {

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})

                Event193:
                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:WarningClear01', 'IsCloseMessageDialog': False})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_FaronWoods006_WarningClear'})
                Event229:
                if Npc_FaronWoods006.IsOnInstEventFlag() {
                    Event7:
                    Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk02'})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_FaronWoods006_talk', 'IsWaitFinish': True})
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk03'})
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 286.6171875, 'Pattern1PosY': 120.06871032714844, 'Pattern1PosZ': 1519.3675537109375, 'Pattern1AtX': 289.35308837890625, 'Pattern1AtY': 119.47679901123047, 'Pattern1AtZ': 1513.718505859375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'IsWaitFinish': True, 'TargetActor2': -1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'StartCalcOnly': True, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk05', 'IsCloseMessageDialog': False})
                        Event134:
                        GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
                        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk06'})
                        if !EventSystemActor.GeneralChoice2() {
                            Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk07'})
                            Event43:
                            Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk09'})
                        } else {
                            goto Event43
                        }
                      case 1:
                        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_FaronWoods006_talk', 'IsWaitFinish': True})
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 286.6171875, 'Pattern1PosY': 120.06871032714844, 'Pattern1PosZ': 1519.3675537109375, 'Pattern1AtX': 289.35308837890625, 'Pattern1AtY': 119.47679901123047, 'Pattern1AtZ': 1513.718505859375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'IsWaitFinish': True, 'TargetActor2': -1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'StartCalcOnly': True, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk04', 'IsCloseMessageDialog': False})
                        goto Event134
                      case 2:
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk08'})
                    }
                } else {
                    Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk01_1'})
                    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

                    fork {
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk01_2'})
                    } {
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 225.33218383789062, 'Pattern1PosY': 131.52032470703125, 'Pattern1PosZ': 1586.8834228515625, 'Pattern1AtX': 220.86978149414062, 'Pattern1AtY': 131.78062438964844, 'Pattern1AtZ': 1587.48779296875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    }


                    fork {
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk01_3'})
                    } {
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 224.96121215820312, 'Pattern1PosY': 131.9342498779297, 'Pattern1PosZ': 1585.5947265625, 'Pattern1AtX': 220.86978149414062, 'Pattern1AtY': 131.78062438964844, 'Pattern1AtZ': 1587.48779296875, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'StartCalcOnly': True, 'ReviseModeEnd': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': False, 'Cushion': 0.20000000298023224, 'IsWaitFinish': False, 'Count': 60.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    }

                    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                    goto Event7
                }
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

                if Npc_FaronWoods006.IsOnInstEventFlag() {
                    goto Event193
                } else {
                    goto Event229
                }
            }
        } else {
            if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods006_WarningClear'}) {
                    Event225:

                    call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 6})

                    if !EventSystemActor.RandomChoice2() {
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:WarningClear01', 'IsCloseMessageDialog': True})
                        Event190:
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_FaronWoods006_WarningClear'})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        goto Event229
                    } else {
                        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:WarningClear00', 'IsCloseMessageDialog': True})
                        goto Event190
                    }
                } else {
                    if Npc_FaronWoods006.IsOnInstEventFlag() {
                        Event228:

                        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

                        goto Event229
                    } else {

                        call InitTalk.InitTalkAngleDesignation({'Arg_Greeting': 'FollowAISchedule', 'Arg_Angle': 160.0})

                        Npc_FaronWoods006.Demo_Talk({'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Talk00', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Act_Lookfar'})
                        Npc_FaronWoods006.Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': False})
                        goto Event229
                    }
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods006_WarningClear'}) {
                    goto Event225
                } else {
                    goto Event228
                }
            }
        }
    }
}

void Near() {
    if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Action1/到着'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods006_talk'}) {
            Event38:
            Npc_FaronWoods006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Near01', 'IsChecked': False, 'DispFrame': 90})
        } else {
            Npc_FaronWoods006.Demo_TalkASync({'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Near00', 'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90})
        }
    } else {
        if Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Wander/'}) {
            Event223:
            if !EventSystemActor.CheckWeather() {
                goto Event38
            }
        } else {
            if !Npc_FaronWoods006.CheckActorAction({'ActionName': 'Root/Timeline/Action5/到着'}) {
                goto Event223
            }
        }
    }
}

void Warning() {

    call Common.AirStartUP_Player()

    Npc_FaronWoods006.Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
    if !EventSystemActor.RandomChoice2() {
        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Warning01'})
        Event78:

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_FaronWoods006")})

        if !EventSystemActor.RandomChoice2() {
            Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Warning03'})
            Event87:
            if !EventSystemActor.RandomChoice2() {
                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Warning05'})
                Event90:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_FaronWoods006_Warning'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_FaronWoods006_WarningClear'})
            } else {
                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Warning04'})
                goto Event90
            }
        } else {
            Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Warning02'})
            goto Event87
        }
    } else {
        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Warning00'})
        goto Event78
    }
}

void WarningClear() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_FaronWoods006_WarningClear'}) {
        if !EventSystemActor.RandomChoice2() {
            Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:WarningClear01', 'IsCloseMessageDialog': False})
            Event96:
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_FaronWoods006_WarningClear'})
            Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:WarningClear02'})
            Event50:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Wander01', 'IsCloseMessageDialog': True})

                call TalkLoop()

              case 1:
                goto Event52
              case 2:
                goto Event66
            }
        } else {
            Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:WarningClear00', 'IsCloseMessageDialog': False})
            goto Event96
        }
    } else {
        Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:Wander00'})
        goto Event50
    }
}

void TalkLoop() {
    Npc_FaronWoods006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Npc_FaronWoods006:TalkLoop00'})
    goto Event50
}
