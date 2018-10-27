-------- EventFlow: MiniGame_TimeLimitHunting --------

Actor: Npc_HatenoVillage016
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_WarpToAnchor']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceQuest', 'Demo_LoopEnd', 'Demo_MiniGameTime', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_RegisterToDeathCounter', 'Demo_UnregisterFromDeathCounter', 'Demo_ResetGimmick', 'Demo_ExitEventPlayer', 'Demo_WarpPlayer', 'Demo_MiniGameStart', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_AppearCheckPointNum', 'Demo_DisappearCheckPointNum', 'Demo_ImmediateStopOwnedHorse']
queries: ['GeneralChoice2', 'CheckGameDataInt', 'CheckPlayerWeaponFired', 'CheckFlag', 'CheckTimeType', 'GeneralChoice3', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventTimerTag
entrypoint: None()
actions: ['Demo_EventDisableMiniGameTime']
queries: ['CheckMiniGameTimeOver']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayerHorseGetOff', 'Demo_PlayerAirWait', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 2, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': ''}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: []
queries: ['DummyQuery']
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

void Ready_Npc_HatenoVillage016_Talk() {
    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_TimeLimitHunting_AnimalGenerateFlag', 'IsWaitFinish': True})

    call DodantsuHello()

    if EventSystemActor.CheckFlag({'FlagName': 'HatenoNPC016_First'}) {
        Npc_HatenoVillage016.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk14'})
        Event14:
        if !EventSystemActor.GeneralChoice2() {
            Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk15', 'IsCloseMessageDialog': True})
            Event262:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk10'})

                call Common.DisableSaveAndWarp()


                call DodantsuGameStart()

                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
              case 1:
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk12'})
                Npc_HatenoVillage016.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk19', 'ASName': ''})
                goto Event262
              case 2:
                Event22:
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk17'})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_TimeLimitHunting_AnimalGenerateFlag', 'IsWaitFinish': True})
            }
        } else {
            goto Event22
        }
    } else {
        if Npc_HatenoVillage016.IsOnInstEventFlag() {
            Event217:
            Npc_HatenoVillage016.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk16'})
            if !EventSystemActor.GeneralChoice2() {
                EventSystemActor.Demo_FlagON({'FlagName': 'HatenoNPC016_First', 'IsWaitFinish': True})
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk13'})
                goto Event14
            } else {
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk17'})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_TimeLimitHunting_AnimalGenerateFlag', 'IsWaitFinish': True})
            }
        } else {
            Npc_HatenoVillage016.Demo_Talk({'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk11', 'IsWaitFinish': True})
            goto Event217
        }
    }
}

void Game_Npc_HatenoVillage016_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 1, 'CountStartTime': 60, 'IsShowTimeUI': True, 'MaxTime': -1})
    Event252:
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_TimeLimitHunting_PlayerOut'}) {
        if EventTimerTag.CheckMiniGameTimeOver() {
            Event134:
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
        } else {
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event252
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_TimeLimitHunting_OutAndEnd', 'IsWaitFinish': True})
        goto Event134
    }
}

void Finish_Npc_HatenoVillage016_StepStart() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 12}) {
        GameROMPlayer.Demo_PlayerAirWait({'IsWaitFinish': True})
        Event168:
        EventTimerTag.Demo_EventDisableMiniGameTime({'IsWaitFinish': True})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
        EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameHuntBgm', 'FadeSec': 0.5, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_TimeLimitHunting_OutAndEnd'}) {
            Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk31'})
            Event234:
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
            if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
                GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
                Event314:
                GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_TimeLimitHunting_AnimalGenerateFlag', 'IsWaitFinish': True})
                EventSystemActor.Demo_UnregisterFromDeathCounter({'IsWaitFinish': True, 'ActorName': 'Animal_Deer_C'})
                EventSystemActor.Demo_DisappearCheckPointNum({'IsWaitFinish': True})
                EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'I-7', 'WarpDestPosName': 'MiniGameGoal'})
                Npc_HatenoVillage016.Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationX': 3631.291259765625, 'DestinationY': 283.75799560546875, 'DestinationZ': 2075.410888671875, 'DirectionY': -86.53900909423828})
                OwnedHorse_ForEvent.Demo_WarpToAnchor({'IsWaitFinish': False, 'UniqueName': 'MiniGameHorseWaitPos', 'AnchorName': 'TargetPosMarker'})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3627.454345703125, 'Pattern1PosY': 285.77203369140625, 'Pattern1PosZ': 2076.925048828125, 'Pattern1AtX': 3630.509765625, 'Pattern1AtY': 285.26513671875, 'Pattern1AtZ': 2075.458251953125, 'Pattern1Fovy': 41.06709289550781, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_TimeLimitHunting_OutAndEnd'})
                EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})

                call DodantsuBuleFire()

                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})

                call Result()

                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_TimeLimitHunting_AnimalGenerateFlag', 'IsWaitFinish': True})
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk24'})
                if !EventSystemActor.GeneralChoice2() {
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

                    call DodantsuGameStart()

                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                } else {
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_TimeLimitHunting_Area'})
                    EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_TimeLimitHunting_AnimalGenerateFlag', 'IsWaitFinish': True})
                    Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk17'})

                    call Common.EnableSaveAndWarp()

                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Ready'})
                }
            } else {
                goto Event314
            }
        } else {
            Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk22'})
            goto Event234
        }
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
            if !LastRiddenHorse_ForEvent.DummyQuery() {
                EventSystemActor.Demo_ImmediateStopOwnedHorse({'IsWaitFinish': True, 'ResetChargeNum': False})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'HorseWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
                goto Event168
            }
        } else {
            goto Event168
        }
    }
}

void Result() {
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_TimeLimitHunting_HuntedNum', 'Operator': 'LessThanOrEqualTo', 'Value': 0}) {
        Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk23'})
    } else {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_TimeLimitHunting_HuntedNum', 'Operator': 'LessThanOrEqualTo', 'Value': 3}) {
            Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk25'})
            Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk29'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee'})

        } else {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_TimeLimitHunting_HuntedNum', 'Operator': 'LessThanOrEqualTo', 'Value': 6}) {
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk26'})
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk29'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Blue'})

            } else {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_TimeLimitHunting_HuntedNum', 'Operator': 'LessThanOrEqualTo', 'Value': 9}) {
                    Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk27'})
                    Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk29'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                } else {
                    Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk28'})
                    Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk30'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

                }
            }
        }
    }
}

void DodantsuHello() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 0})

        if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
            if Npc_HatenoVillage016.IsOnInstEventFlag() {
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk01'})
                Event405:
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk04'})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': False})
            } else {
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk00'})
                goto Event405
            }
        } else {
            if Npc_HatenoVillage016.IsOnInstEventFlag() {
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk03'})
                goto Event405
            } else {
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk02'})
                goto Event405
            }
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if Npc_HatenoVillage016.IsOnInstEventFlag() {
            Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk08'})
        } else {
            switch EventSystemActor.CheckTimeType() {
              case 0:
                Event204:
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk05'})
              case 1:
                goto Event204
              case 2:
                Event207:
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk06'})
              case 3:
                goto Event207
              case 4:
                goto Event207
              case 5:
                goto Event207
              case 6:
                Event206:
                Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk07'})
              case 7:
                goto Event206
            }
        }
    }
}

void Game_Npc_HatenoVillage016_Talk() {

    call DodantsuBuleFire()

    Npc_HatenoVillage016.Demo_Talk({'IsCloseMessageDialog': False, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk09'})
    Event283:
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        Event282:
        Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk10'})
      case 1:
        Npc_HatenoVillage016.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk12', 'ASName': ''})
        Npc_HatenoVillage016.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk32'})
        goto Event283
      case 2:
        Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk20'})
        if !EventSystemActor.GeneralChoice2() {
            goto Event282
        } else {
            Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk21'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
        }
    }
}

void DodantsuGameStart() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
    if EventSystemActor.CheckPlayerState({'PlayerState': 3}) {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        Event52:
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'Pattern1PosX': 3807.090087890625, 'Pattern1PosY': 289.1400146484375, 'Pattern1PosZ': 2000.1300048828125, 'Pattern1AtX': 3802.1201171875, 'Pattern1AtY': 290.30999755859375, 'Pattern1AtZ': 1996.68994140625, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 50.0, 'Count': 1.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameROMPlayer.Demo_Idling({'DisablePhysics': False, 'IsWaitFinish': False})
        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'MiniGameStart', 'WarpDestMapName': 'I-7'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_TimeLimitHunting_Area'})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_TimeLimitHunting_AnimalGenerateFlag', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
        Npc_HatenoVillage016.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:talk18'})

        fork {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'FaceId': 1, 'TurnDirection': 99.69499969482422, 'IsTurnToLookAtPos': False})
        } {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3800.929931640625, 'Pattern1PosY': 290.3451232910156, 'Pattern1PosZ': 1999.805908203125, 'Pattern1AtX': 3805.2548828125, 'Pattern1AtY': 289.87200927734375, 'Pattern1AtZ': 1999.0438232421875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }

        EventSystemActor.Demo_RegisterToDeathCounter({'GameDataName': 'MiniGame_TimeLimitHunting_HuntedNum', 'IsWaitFinish': True, 'IsInitializeData': True, 'ActorName': 'Animal_Deer_C'})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_TimeLimitHunting_PlayerOut', 'IsWaitFinish': True})
        EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
        EventSystemActor.Demo_AppearCheckPointNum({'IsWaitFinish': True, 'IconType': 3, 'GameDataIntTargetCounter': 'MiniGame_TimeLimitHunting_HuntedNum'})
        EventBgmCtrlTag.Demo_Start({'BgmName': 'GameHuntBgm', 'IsWaitFinish': True})
    } else {
        goto Event52
    }
}

void DodantsuBuleFire() {
    if EventSystemActor.CheckPlayerWeaponFired({'CheckFireType': 2}) {

        call InitTalk.InitTalkEquip({'Arg_Turn': 1})

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

    }
}

void Ready_Npc_HatenoVillage016_Near() {
    Npc_HatenoVillage016.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/MiniGame_TimeLimitHunting:near00', 'IsChecked': False, 'DispFrame': 90})
}
