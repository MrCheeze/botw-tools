-------- EventFlow: MiniGame_ParasailArchery --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_LoopEnd', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_MiniGameStart', 'Demo_MiniGameTime', 'Demo_RegisterToDeathCounter', 'Demo_UnregisterFromDeathCounter', 'Demo_AutoSave', 'Demo_AppearNumTargets', 'Demo_SwitchPlayerEquipment', 'Demo_SetGameDataInt', 'Demo_DisableMiniGameTime', 'Demo_DisappearNumTargets', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_ResetGimmick']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'CheckGameDataInt', 'CheckMiniGameTimeOver', 'HasPorchItemByCategory', 'HasPorchArrow', 'CheckExistArrow', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_StopInAir', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerHorseGetOffInDemo', 'Demo_PlayerWait', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetEndProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ValleyVillage010[Teba_FlightMinigame]
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain001[Tyuri_FlightMinigame]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl[fog]
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_CookSet_PanOnly[FlightRange]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_HighMountain001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ParasailArchery_Ready_Tyuri_First'}) {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk09'})
        Event452:
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk05', 'IsCloseMessageDialog': False})
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if !EventSystemActor.HasPorchItemByCategory({'Category': 0, 'Count': 1}) {
                if !EventSystemActor.HasPorchArrow({'CheckNum': 1}) {
                    Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk06', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})

                    call Common.DisableSaveAndWarp()

                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                    EventSystemActor.Demo_RegisterToDeathCounter({'IsWaitFinish': True, 'IsInitializeData': True, 'ActorName': 'TwnObj_FlightTraningTarget_A_01', 'GameDataName': 'Wind_Relic_BreakTarget'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_TargetONOFF'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_TargetONOFF'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Parashawl_Fail_AreaInAppear'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'ParashawlPlaying', 'WarpDestMapName': 'B-2'})
                    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': False})
                    Npc_HighMountain001[Tyuri_FlightMinigame].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    Npc_HighMountain001[Tyuri_FlightMinigame].Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ParasailStaminaRecover'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_Start'})
                    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'TargetActor2': -1, 'ActorName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'ActorIgnoringCollision': -1, 'Pattern1PosX': -3797.1201171875, 'Pattern1PosY': 269.4700012207031, 'Pattern1PosZ': -2316.610107421875, 'Pattern1AtX': -3801.93994140625, 'Pattern1AtY': 269.0899963378906, 'Pattern1AtZ': -2313.830078125, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'TurnDirection': 300.0, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsValid': True, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                    EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                    EventSystemActor.Demo_AppearNumTargets({'IsWaitFinish': True, 'GameDataIntTargetCounter': 'Wind_Relic_BreakTarget'})
                    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': 'NormalArrow'})
                    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'FlightTrainingBgm'})
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'MiniGame_ParasailArchery', 'StepName': 'Playing', 'ForceRunTelop': False})
                } else {
                    Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk18'})
                }
            } else {
                Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk13'})
            }
          case 1:
            Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk10', 'IsCloseMessageDialog': False})
            goto Event452
          case 2:
            Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk07', 'IsCloseMessageDialog': False})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_Ready_Tyuri_First'})
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk00'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk02', 'IsCloseMessageDialog': False})
        } else {
            Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk03', 'IsCloseMessageDialog': False})
        }
        goto Event452
    }
}

void Ready_Npc_ValleyVillage010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ParasailArchery_Ready_Teba_First'}) {
        if Npc_ValleyVillage010[Teba_FlightMinigame].IsOnInstEventFlag() {
            Npc_ValleyVillage010[Teba_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk102'})
        } else {
            Npc_ValleyVillage010[Teba_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk101'})
        }
    } else {
        Npc_ValleyVillage010[Teba_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk100'})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ParasailArchery_Ready_Teba_First', 'IsWaitFinish': True})
    }
}

void Playing_Npc_HighMountain001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk19'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk12'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_Clear'})
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'Value': 4, 'GameDataIntName': 'MiniGame_ParasailArchery_FailReason'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ParasailStaminaRecover'})
        EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_Fail_Self'})
        EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'FlightTrainingBgm', 'FadeSec': 3.0})
        SceneSoundCtrlTag.Demo_SetEndProc({'CtrlType': 'SkipAll', 'IsWaitFinish': True})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'MiniGame_ParasailArchery', 'StepName': 'Finish'})
    } else {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk20'})
    }
}

void Playing_Npc_HighMountain001_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 1, 'IsShowTimeUI': True, 'MaxTime': -1, 'CountStartTime': 30})
    WorldManagerControl[fog].Demo_EventSetAddFogOff({'IsWaitFinish': True})
    Event500:
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 20}) {
        Event321:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Succeeded', 'QuestName': 'MiniGame_ParasailArchery'})
    } else
    if !EventSystemActor.HasPorchItemByCategory({'Category': 0, 'Count': 1}) {
        if !EventSystemActor.HasPorchArrow({'CheckNum': 1}) {
            Event281:
            if EventSystemActor.CheckMiniGameTimeOver() {
                EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'Value': 2, 'GameDataIntName': 'MiniGame_ParasailArchery_FailReason'})
                Event311:
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Failed', 'QuestName': 'MiniGame_ParasailArchery'})
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ParasailArchery_Fail_AreaIn'}) {
                EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                goto Event500
            } else {
                EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'Value': 3, 'GameDataIntName': 'MiniGame_ParasailArchery_FailReason'})
                goto Event311
            }
        } else
        if EventSystemActor.CheckExistArrow() {
            goto Event281
        } else {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 20}) {
                goto Event321
            } else {
                EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'Value': 1, 'GameDataIntName': 'MiniGame_ParasailArchery_FailReason'})
                goto Event311
            }
        }
    } else
    if EventSystemActor.CheckExistArrow() in [1, 0] {
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 20}) {
            goto Event321
        } else {
            EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'Value': 0, 'GameDataIntName': 'MiniGame_ParasailArchery_FailReason'})
            goto Event311
        }
    }
}

void Playing_Npc_ValleyVillage010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_ValleyVillage010[Teba_FlightMinigame].Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk103'})
}

void Succeeded_Npc_HighMountain001_StepStart() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})

    call Common.AirStartUP_Player2()

    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'FlightTrainingBgm', 'FadeSec': 0.5})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    switch EventSystemActor.RandomChoice4() {
      case 0:
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprised', 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk27'})
        Event320:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_Clear'})
        SceneSoundCtrlTag.Demo_SetEndProc({'CtrlType': 'SkipAll', 'IsWaitFinish': True})
        Event625:

        call Finish_Npc_HighMountain001_StepStart()

      case 1:
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprised', 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk28'})
        goto Event320
      case 2:
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprised', 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk29'})
        goto Event320
      case 3:
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprised', 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk30'})
        goto Event320
    }
}

void Failed_Npc_HighMountain001_StepStart() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})

    call Common.AirStartUP_Player2()

    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'FlightTrainingBgm', 'FadeSec': 0.5})
    Npc_HighMountain001[Tyuri_FlightMinigame].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 0, 'GameDataIntName': 'MiniGame_ParasailArchery_FailReason'}) {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk14'})
        Event301:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_Fail_Self'})
        SceneSoundCtrlTag.Demo_SetEndProc({'CtrlType': 'SkipAll', 'IsWaitFinish': True})
        goto Event625
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'MiniGame_ParasailArchery_FailReason'}) {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk15'})
        goto Event301
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'MiniGame_ParasailArchery_FailReason'}) {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk16'})
        goto Event301
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'GameDataIntName': 'MiniGame_ParasailArchery_FailReason', 'Value': 3}) {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk17'})
    }
    goto Event301
}

void Finish_Npc_HighMountain001_StepStart() {
    Item_CookSet_PanOnly[FlightRange].Demo_Join({'IsWaitFinish': True})
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerHorseGetOffInDemo({'IsWaitFinish': True})
    EventSystemActor.Demo_DisappearNumTargets({'IsWaitFinish': True})
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'ParashawlPlaying', 'WarpDestMapName': 'B-2'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3802.673583984375, 'Pattern1PosY': 268.90716552734375, 'Pattern1PosZ': -2311.022705078125, 'Pattern1AtX': -3800.919677734375, 'Pattern1AtY': 268.95281982421875, 'Pattern1AtZ': -2313.575927734375, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'Pattern1Fovy': 50.0, 'Count': 1.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_UnregisterFromDeathCounter({'ActorName': 'TwnObj_FlightTraningTarget_A_01', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_TargetONOFF'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_TargetONOFF'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Parashawl_Fail_AreaInAppear'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ParasailArchery_Start'})
    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ParasailArchery_Fail_AreaIn', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'None', 'BgmCtrlType': 'Start', 'IsWaitFinish': True})

    call Result()


    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ParasailStaminaRecover'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Ready', 'QuestName': 'MiniGame_ParasailArchery'})
}

void Ready_Npc_HighMountain001_Near() {
    Npc_HighMountain001[Tyuri_FlightMinigame].Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:near00'})
}

void Playing_Npc_HighMountain001_Near() {
    Npc_HighMountain001[Tyuri_FlightMinigame].Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:near01'})
}

void Result() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 20}) {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk22'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Gold'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_PutRupee_Gold'})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 15}) {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk23'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_PutRupee_Silver'})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 10}) {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk24'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_PutRupee_Purple'})
    } else
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 5}) {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk25'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_PutRupee_Red'})
    } else {
        Npc_HighMountain001[Tyuri_FlightMinigame].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ParasailArchery:talk26'})
    }
}
