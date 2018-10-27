-------- EventFlow: HutagoHatago_Ch_001 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_AppearRupee', 'Demo_LoopEnd', 'Demo_MiniGameTime', 'Demo_AdvanceQuest', 'Demo_WarpPlayer', 'Demo_SetPLStateToUnequipAndWait', 'Demo_FlagOFF', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_ImmediateStopOwnedHorse', 'Demo_ResetGimmick', 'Demo_WarpPLAndResetGimmick']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice4', 'CheckElapsedTimeOfMiniGame', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ReturnSavePoint_1', 'Demo_SavePoint1', 'Demo_MiddleFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_SouthHateru006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventTimerTag
entrypoint: None()
actions: ['Demo_EventDisableMiniGameTime']
queries: ['CheckMiniGameTimeOver']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: []
queries: ['DummyQuery']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHorseGetOff', 'Demo_PlayerWait', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_SouthHateru006_Talk() {
    Event60:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_ZuruCK'}) {

        call Npc_SouthHateru006.Talk()

    } else
    if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_Retry'}) {
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_08', 'IsCloseMessageDialog': False})
        Event145:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_Retry'}) {
                Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_20'})
                Event174:
                if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_Retry'}) {
                    Event143:
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_timeover'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_NowPlaying'})

                    call Common.DisableSaveAndWarp()

                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'HorseGet'})
                } else {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_Retry'})
                    goto Event143
                }
            } else {
                Event132:
                Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_12', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1744.107666015625, 'Pattern1PosY': 124.03303527832031, 'Pattern1PosZ': 1941.5382080078125, 'Pattern1AtX': 1746.8472900390625, 'Pattern1AtY': 123.5798568725586, 'Pattern1AtZ': 1946.1021728515625, 'Pattern1Fovy': 48.72278594970703, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'StartCalcOnly': True, 'ReviseModeEnd': 2, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_03', 'IsCloseMessageDialog': True})
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': True})
                Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_04', 'IsCloseMessageDialog': True})
                goto Event174
            }
          case 1:
            Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk03'})
            Event183:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_19'})
            goto Event145
          case 2:
            Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_16'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:talk04'})
                goto Event183
            } else {
                Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_18'})
                goto Event183
            }
          case 3:
            Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_14'})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Hutago_Hatago_Ch_001_Tutorial'}) {
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_13', 'IsCloseMessageDialog': False})
        goto Event145
    } else {
        Npc_SouthHateru006.Demo_Talk({'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_01', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_10'})
        if !EventSystemActor.GeneralChoice2() {
            goto Event132
        } else {
            Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_11'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Hutago_Hatago_Ch_001_Tutorial'})
        }
    }
}

void HorseGet_Npc_SouthHateru006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_05'})
}

void HorseGet_Npc_SouthHateru006_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'CountMode': 1, 'IsWaitFinish': True, 'CountStartTime': 120, 'IsShowTimeUI': True, 'MaxTime': -1})
    Event74:
    if EventTimerTag.CheckMiniGameTimeOver() {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Failed'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_HorseIn'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
    } else {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event74
    }
}

void Finish_Npc_SouthHateru006_StepStart() {

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_SouthHateru006")})

    EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': False})
    if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 110}) {
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_TimerCK_001'})
        Event188:
        EventTimerTag.Demo_EventDisableMiniGameTime({'IsWaitFinish': True})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_Get'})
        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': -1})
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_22'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_NowPlaying'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_timeover'})

        call Common.EnableSaveAndWarp()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_Finish'})
    } else {
        Npc_SouthHateru006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_06'})
        goto Event188
    }
}

void Again_Npc_SouthHateru006_Talk() {
    goto Event60
}

void Failed_Npc_SouthHateru006_StepStart() {

    call Common.AirStartUP_Player()

    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        if !LastRiddenHorse_ForEvent.DummyQuery() {
            EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': False})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'HorseWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            Event214:
            if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_AreaOUT'}) {
                Npc_SouthHateru006.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Npc_SouthHateru006_AreaOut_01'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_AreaOUT_Return'})
                Event122:
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_NowPlaying'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_timeover'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_HorseIn'})
                EventTimerTag.Demo_EventDisableMiniGameTime({'IsWaitFinish': True})
                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
                if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
                    GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
                    Event221:
                    EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'StartPosName': 'Hatago_Ch', 'SystemResetOption': 1, 'AdditionalResetActor': ''})
                    EventSystemActor.Demo_SetPLStateToUnequipAndWait({'IsWaitFinish': True})
                    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1746.3800048828125, 'Pattern1PosY': 117.72000122070312, 'Pattern1PosZ': 1923.77001953125, 'Pattern1AtX': 1754.8599853515625, 'Pattern1AtY': 119.79000091552734, 'Pattern1AtZ': 1922.8299560546875, 'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'Count': 1.0, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                    Npc_SouthHateru006.Demo_BecomeSpeaker({'IsWaitFinish': True})
                    Npc_SouthHateru006.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                    GameRomCamera.Demo_MiddleFront({'IsWaitFinish': True, 'Lng': 30.0, 'Count': 0.0, 'UseImaginaryLineAngle': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False, 'CancelDrawOther': True, 'StartCalcOnly': True, 'PlayerRelative': False, 'Offset': [0.0, -0.30000001192092896, 0.0], 'Lat': 0.0})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
                    if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_AreaOUT_Return'}) {
                        Npc_SouthHateru006.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Npc_SouthHateru006_AreaOut_02'})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_AreaOUT'})
                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HutagoHatago_Ch_001_AreaOUT_Return'})
                        Event179:

                        call Common.EnableSaveAndWarp()

                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Again'})
                    } else {
                        Npc_SouthHateru006.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_07'})
                        goto Event179
                    }
                } else {
                    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                    goto Event221
                }
            } else {
                Npc_SouthHateru006.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Talk_09', 'IsWaitFinish': True, 'ASName': 'Talk'})
                goto Event122
            }
        }
    } else
    goto Event214
}

void Ready_Npc_SouthHateru006_Near() {
    if EventSystemActor.CheckFlag({'FlagName': 'HutagoHatago_Ch_001_ZuruCK'}) {
        Npc_SouthHateru006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:near00', 'DispFrame': 300, 'IsChecked': False})
    } else {
        Npc_SouthHateru006.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_SouthHateru006:near00', 'DispFrame': 300, 'IsChecked': True})
    }
}

void Again_Npc_SouthHateru006_Near() {
    Event196:
    Npc_SouthHateru006.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/HutagoHatago_Ch_001:Npc_SouthHateru006_H_Near000'})
}

void HorseGet_Npc_SouthHateru006_Near() {
    goto Event196
}
