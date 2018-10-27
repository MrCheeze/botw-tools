-------- EventFlow: Wind_Relic --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_MiniGameStart', 'Demo_MiniGameTime', 'Demo_RegisterToDeathCounter', 'Demo_DisableMiniGameTime', 'Demo_UnregisterFromDeathCounter', 'Demo_CallDemo', 'Demo_LoopEnd', 'Demo_AutoSave', 'Demo_AppearNumTargets', 'Demo_DisappearNumTargets', 'Demo_SwitchPlayerEquipment', 'Demo_SetGameDataInt', 'Demo_AdvanceQuest', 'Demo_WaitFrame', 'Demo_CloseMessageDialog', 'Demo_ResetGimmick', 'Demo_WarpPLAndResetGimmick']
queries: ['GeneralChoice2', 'CheckFlag', 'GeneralChoice3', 'HasPorchItem', 'CheckGameDataInt', 'CheckMiniGameTimeOver', 'HasPorchItemByCategory', 'CheckAddPorchItem', 'GeneralChoice4', 'CheckPlayerState', 'CheckElapsedTimeOfMiniGame', 'RandomChoice4', 'HasPorchArrow', 'CheckExistArrow', 'CheckExistActor']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ValleyVillage010
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_WarpToScheduleAnchor', 'Demo_ChangeEquipState']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ValleyVillage031
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayerWait', 'Demo_LookAtTheFront', 'Demo_PlayerHorseGetOffInDemo', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetEndProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ValleyVillage010[Teba_FlightTraining]
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_Idling', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl[fog]
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_CookSet_PanOnly[FlightRange]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FidObj_TorchStand_A_01[FlightRange1]
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FidObj_TorchStand_A_01[FlightRange2]
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TBox_Field_Stone[TebaTreasureBox]
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_HighMountain004_Talk() {

    call Npc_HighMountain004.WindRelic_Karn_Ready()

}

void Finish_Npc_HighMountain004_Talk() {

    call Npc_HighMountain004.WindRelic_Karn_Finished()

}

void Step1_Npc_HighMountain004_Talk() {
    Event607:

    call Npc_HighMountain004.WindRelic_Karn_ToTeba()

}

void Parashawl_Npc_HighMountain004_Talk() {
    Event608:

    call Npc_HighMountain004.WindRelic_Karn_MeetTeba()

}

void Battle_Npc_HighMountain004_Talk() {
    goto Event608
}

void Dungeon_Npc_HighMountain004_Talk() {
    goto Event608
}

void Parashawl_Npc_ValleyVillage010_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010_First_Parashawl'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk14', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
        Event344:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if !EventSystemActor.HasPorchItemByCategory({'Category': 0, 'Count': 1}) {
                if !EventSystemActor.HasPorchArrow({'CheckNum': 5}) {
                    Npc_ValleyVillage010.Demo_Talk({'MessageId': 'EventFlowMsg/Wind_Relic:talk08', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
                    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
                    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                    EventSystemActor.Demo_RegisterToDeathCounter({'IsWaitFinish': True, 'IsInitializeData': True, 'ActorName': 'TwnObj_FlightTraningTarget_A_01', 'GameDataName': 'Wind_Relic_BreakTarget'})
                    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Parashawl_Fail_AreaInAppear'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
                    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'ParashawlPlaying', 'WarpDestMapName': 'B-2'})
                    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 1, 'AdditionalResetActor': '', 'IsResetCamera': False})
                    Npc_ValleyVillage010.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    Npc_ValleyVillage010.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Parashawl'})

                    call Common.DisableSaveAndWarp()

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'ParasailStaminaRecover'})
                    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'TargetActor2': -1, 'ActorName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'UniqueName2': '', 'ActorIgnoringCollision': -1, 'Pattern1PosX': -3797.1201171875, 'Pattern1PosY': 269.4700012207031, 'Pattern1PosZ': -2316.610107421875, 'Pattern1AtX': -3801.93994140625, 'Pattern1AtY': 269.0899963378906, 'Pattern1AtZ': -2313.830078125, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'TurnDirection': 300.0, 'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsValid': True, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                    EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                    EventSystemActor.Demo_AppearNumTargets({'IsWaitFinish': True, 'GameDataIntTargetCounter': 'Wind_Relic_BreakTarget'})
                    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': 'NormalArrow'})
                    EventBgmCtrlTag.Demo_Start({'BgmName': 'FlightTrainingBgm', 'IsWaitFinish': True})
                } else {
                    if !EventSystemActor.HasPorchArrow({'CheckNum': 1}) {
                        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk12', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup', 'IsCloseMessageDialog': False})
                    } else {
                        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk79'})
                    }
                }
            } else {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk28', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
            }
          case 1:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk64', 'IsCloseMessageDialog': True, 'ASName': 'Talk_BowSetup'})
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk25', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
            goto Event344
          case 2:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk09', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC010_First_Parashawl'})
        if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_NPC010_Parashowl_First'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Event343:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk63', 'ASName': 'Talk_BowSetup'})
            goto Event344
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_NPC010_Parashowl_First'})
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk07', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk22', 'ASName': 'Talk_BowSetup'})
            goto Event343
        }
    }
}

void Battle_Npc_ValleyVillage010_Talk() {
    Event53:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010_Question'}) {
        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk38', 'IsCloseMessageDialog': False})
        Event167:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            if !EventSystemActor.HasPorchItemByCategory({'Category': 0, 'Count': 1}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'BombArrow_A', 'Count': 10}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC010_Question'}) {
                        Event781:
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})

                        call Common.DisableSaveAndWarp()

                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk81'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo020_0', 'EntryPointName': '', 'EndFade': 0})
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo105_0'}) {
                            EventSystemActor.Demo_FlagOFF({'FlagName': 'Wind_Relic_NPC10_HelpYou', 'IsWaitFinish': True})
                            Event348:
                            Npc_ValleyVillage010.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk60', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                            switch EventSystemActor.GeneralChoice4() {
                              case 0:
                                Npc_ValleyVillage010.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk71', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                                Event464:
                                EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC010_Question', 'IsWaitFinish': True})
                                goto Event781
                              case 1:
                                Npc_ValleyVillage010.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk72', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                                Event617:
                                Npc_ValleyVillage010.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk61', 'IsCloseMessageDialog': False})
                                goto Event464
                              case 2:
                                Npc_ValleyVillage010.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk73', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                                goto Event617
                              case 3:
                                Npc_ValleyVillage010.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk74', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                                goto Event617
                            }
                        } else {
                            goto Event348
                        }
                    }
                } else {
                    if EventSystemActor.HasPorchItem({'PorchItemName': 'BombArrow_A', 'Count': 1}) {
                        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk80'})
                        Event555:
                        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk29', 'IsOverWriteLabelActorName': False})
                    } else {
                        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk11', 'IsOverWriteLabelActorName': False})
                        goto Event555
                    }
                }
            } else {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk35', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
          case 1:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk33', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            Event618:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk46'})
            goto Event167
          case 2:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk24', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
            goto Event618
          case 3:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk56'})
        }
    } else {
        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk32', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_BombArrow2'}) {
            Event806:
            Npc_ValleyVillage010.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk77'})
            Event836:
            Npc_ValleyVillage010.Demo_Talk({'ASName': '', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk78'})
            goto Event167
        } else {
            if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Obj_BombArrow_A_01', 'Count': 20}) {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk75'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_BombArrow_A_04'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BombArrow2'})
                goto Event836
            } else {
                goto Event806
            }
        }
    }
}

void Finish_Npc_ValleyVillage010_Talk() {

    call Npc_ValleyVillage010.Teba_WindRelic_Finished()

}

void ParashawlPlaying_Npc_ValleyVillage010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Event77:
    Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk16', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    switch EventSystemActor.GeneralChoice3() {
      case 0:
        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk17', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Wind_Relic_ParashawlClear', 'IsWaitFinish': True})
        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Value': 4})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'StepName': 'ParashawlFailed', 'ForceRunTelop': False})
      case 1:
        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk64', 'IsCloseMessageDialog': True})
        goto Event77
      case 2:
        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk08'})
    }
}

void ParashawlPlaying_Npc_ValleyVillage010_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 1, 'CountStartTime': 180, 'IsShowTimeUI': True, 'MaxTime': -1})
    WorldManagerControl[fog].Demo_EventSetAddFogOff({'IsWaitFinish': True})
    Event122:
    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 5}) {
        Event680:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'ForceRunTelop': False, 'StepName': 'ParashawlSucceeded'})
    } else {
        if !EventSystemActor.HasPorchItemByCategory({'Category': 0, 'Count': 1}) {
            if !EventSystemActor.HasPorchArrow({'CheckNum': 1}) {
                Event812:
                if EventSystemActor.CheckMiniGameTimeOver() {
                    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Value': 2})
                    Event667:
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'StepName': 'ParashawlFailed', 'ForceRunTelop': False})
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Parashawl_Fail_AreaIn'}) {
                        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                        goto Event122
                    } else {
                        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Value': 3})
                        goto Event667
                    }
                }
            } else {
                if EventSystemActor.CheckExistArrow() {
                    goto Event812
                } else {
                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 5}) {
                        goto Event680
                    } else {
                        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Value': 1})
                        goto Event667
                    }
                }
            }
        } else {
            if EventSystemActor.CheckExistArrow() {
                Event817:
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'Wind_Relic_BreakTarget', 'Value': 5}) {
                    goto Event680
                } else {
                    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Value': 0})
                    goto Event667
                }
            } else {
                goto Event817
            }
        }
    }
}

void ParashawlPlaying_Npc_HighMountain004_Talk() {
    goto Event608
}

void ParashawlFinished_Npc_HighMountain004_Talk() {
    goto Event608
}

void BattlePlaying_Npc_HighMountain004_Talk() {
    goto Event608
}

void Dungeon_Npc_ValleyVillage010_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_ValleyVillage010.IsOnInstEventFlag() {
        switch EventSystemActor.RandomChoice4() {
          case 0:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk66', 'ASName': ''})
          case 1:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk67', 'ASName': ''})
          case 2:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk68', 'ASName': ''})
          case 3:
            Event225:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk70', 'ASName': ''})
        }
    } else {
        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk65', 'ASName': ''})
        goto Event225
    }
}

void ParashawlFinished_Npc_ValleyVillage010_StepStart() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3802.32666015625, 'Pattern1PosY': 268.2849426269531, 'Pattern1PosZ': -2312.41845703125, 'Pattern1AtX': -3798.602294921875, 'Pattern1AtY': 268.79437255859375, 'Pattern1AtZ': -2315.4892578125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Item_CookSet_PanOnly[FlightRange].Demo_Join({'IsWaitFinish': True})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_ValleyVillage010.Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
    Npc_ValleyVillage010.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': False})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk43', 'IsOverWriteLabelActorName': False})
        Event725:
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk10', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk47'})
            Event874:
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk44'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_ParashawlFinished'})
        } else {
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk48'})
            goto Event874
        }
    } else {
        if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 150}) {
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk49', 'IsOverWriteLabelActorName': False})
            goto Event725
        } else {
            if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 30}) {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk50', 'IsOverWriteLabelActorName': False})
                goto Event725
            } else {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk51', 'IsOverWriteLabelActorName': False})
                goto Event725
            }
        }
    }
}

void BattlePlaying_Npc_ValleyVillage031_EachFrame() {
    Event925:
    if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_BattleStart'}) {
        if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'Value': 4, 'GameDataIntName': 'Wind_Relic_BreakBattery'}) {
            Event984:
            if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Battle'}) {
                if !EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_BattleFinished'}) {
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'StepName': 'BattleSucceeded', 'ForceRunTelop': False})
                }
            }
        } else {
            if !EventSystemActor.HasPorchItemByCategory({'Category': 0, 'Count': 1}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'BombArrow_A', 'Count': 1}) {
                    Event400:
                    EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                    goto Event925
                } else {
                    if !EventSystemActor.CheckExistActor({'ActorName': 'BombArrow_A', 'IsCheckEquipStand': False, 'IsCheckLife': False}) {
                        goto Event400
                    } else {
                        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                        if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'Value': 4, 'GameDataIntName': 'Wind_Relic_BreakBattery'}) {
                            goto Event984
                        } else {
                            EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Value': 1})
                            Event985:
                            if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Battle'}) {
                                if !EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_BattleFinished'}) {
                                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'ForceRunTelop': False, 'StepName': 'BattleEscape'})
                                }
                            }
                        }
                    }
                }
            } else {
                if !EventSystemActor.CheckExistActor({'ActorName': 'BombArrow_A', 'IsCheckEquipStand': False, 'IsCheckLife': False}) {
                    goto Event400
                } else {
                    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                    if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'Value': 4, 'GameDataIntName': 'Wind_Relic_BreakBattery'}) {
                        goto Event984
                    } else {
                        EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Value': 0})
                        goto Event985
                    }
                }
            }
        }
    }
}

void Saki_Npc_HighMountain004_Talk() {
    goto Event607
}

void Ready_Npc_HighMountain005_Talk() {

    call Npc_HighMountain005.Saki_WindRelic_Ready()

}

void Saki_Npc_HighMountain005_Talk() {

    call Npc_HighMountain005.Saki_WindRelic_Saki()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Saki'})
}

void Step1_Npc_HighMountain005_Talk() {

    call Npc_HighMountain005.Saki_WindRelic_Step1()

}

void Parashawl_Npc_HighMountain005_Talk() {
    Event602:

    call Npc_HighMountain005.Saki_WindRelic_Parashawl()

}

void ParashawlPlaying_Npc_HighMountain005_Talk() {
    goto Event602
}

void Battle_Npc_HighMountain005_Talk() {
    goto Event602
}

void ParashawlFinished_Npc_HighMountain005_Talk() {
    goto Event602
}

void BattlePlaying_Npc_HighMountain005_Talk() {
    goto Event602
}

void Dungeon_Npc_HighMountain005_Talk() {
    goto Event602
}

void Dungeon_Npc_ValleyVillage010_Near() {
    Npc_ValleyVillage010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Wind_Relic:near00', 'IsChecked': False, 'DispFrame': 90})
}

void Finish_Npc_HighMountain005_Talk() {

    call Npc_HighMountain005.Saki_WindRelic_Finish()

}

void Ready_Npc_HighMountain005_Near() {

    call Npc_HighMountain005.WindRelic_Saki_Ready_near()

}

void Saki_Npc_HighMountain005_Near() {

    call Npc_HighMountain005.WindRelic_Saki_Saki_near()

}

void Ready_Npc_HighMountain004_Near() {

    call Npc_HighMountain004.WindRelic_Karn_Ready_near()

}

void Finish_Npc_HighMountain004_Near() {

    call Npc_HighMountain004.WindRelic_Karn_Finish_near()

}

void ParashawlFailed_Npc_ValleyVillage010_StepStart() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Value': 3, 'Operator': 'LessThanOrEqualTo'}) {

        call Common.AirStartUP_Player2()

        Npc_ValleyVillage010.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Operator': 'Equal', 'Value': 0}) {
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk20', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            Event666:
            EventBgmCtrlTag.Demo_Stop({'BgmName': 'FlightTrainingBgm', 'FadeSec': 3.0, 'IsWaitFinish': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerHorseGetOffInDemo({'IsWaitFinish': True})
            EventSystemActor.Demo_DisappearNumTargets({'IsWaitFinish': True})
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'B-2', 'WarpDestPosName': 'ParashawlTalk'})

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Npc_ValleyVillage010.Demo_WarpToScheduleAnchor({'IsWaitFinish': False, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
            Npc_ValleyVillage010.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Talk_BowSetup', 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': 0.0})
            EventSystemActor.Demo_UnregisterFromDeathCounter({'ActorName': 'TwnObj_FlightTraningTarget_A_01', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Parashawl_Fail_AreaInAppear'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3802.32666015625, 'Pattern1PosY': 268.2849426269531, 'Pattern1PosZ': -2312.41845703125, 'Pattern1AtX': -3798.602294921875, 'Pattern1AtY': 268.79437255859375, 'Pattern1AtZ': -2315.4892578125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Item_CookSet_PanOnly[FlightRange].Demo_Join({'IsWaitFinish': True})

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk26', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Wind_Relic_Parashawl_Fail_Self', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Parashawl_Fail_AreaIn'})

            call Common.EnableSaveAndWarp()

            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ParasailStaminaRecover'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'ForceRunTelop': False, 'StepName': 'Parashawl'})
        } else {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Operator': 'Equal', 'Value': 1}) {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk19', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                goto Event666
            } else {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Operator': 'Equal', 'Value': 2}) {
                    Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk27', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
                    goto Event666
                } else {
                    Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk15', 'IsOverWriteLabelActorName': False})
                    goto Event666
                }
            }
        }
    } else {
        goto Event666
    }
}

void ParashawlSucceeded_Npc_ValleyVillage010_StepStart() {
    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})

    call Common.AirStartUP_Player2()

    Npc_ValleyVillage010.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'ShoutMsg/Shout_Npc_ValleyVillage010:BreakTarget_04', 'DispFrame': 90, 'IsChecked': False})
    Npc_ValleyVillage010.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
    Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk18', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'FlightTrainingBgm', 'FadeSec': 3.0, 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerHorseGetOffInDemo({'IsWaitFinish': True})
    EventSystemActor.Demo_DisappearNumTargets({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'B-2', 'WarpDestPosName': 'ParashawlTalk'})
    EventSystemActor.Demo_UnregisterFromDeathCounter({'ActorName': 'TwnObj_FlightTraningTarget_A_01', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_TargetONOFF'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Parashawl_Fail_AreaInAppear'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagON({'FlagName': 'Wind_Relic_ParashawlClear', 'IsWaitFinish': True})

    call Common.EnableSaveAndWarp()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ParasailStaminaRecover'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'StepName': 'ParashawlFinished', 'ForceRunTelop': False})
    SceneSoundCtrlTag.Demo_SetEndProc({'CtrlType': 'SkipAll', 'IsWaitFinish': True})
}

void BattleSucceeded_Npc_ValleyVillage031_StepStart() {

    call Common.AirStartUP_Player2()

    EventSystemActor.Demo_UnregisterFromDeathCounter({'IsWaitFinish': True, 'ActorName': 'RemainsWind_Battery_A_01'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BattleClear'})

    call Common.EnableSaveAndWarp()


    call GetDemo.PorchProhibitionOFF()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ParasailStaminaRecover'})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'StepName': 'Dungeon', 'ForceRunTelop': False})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo348_0', 'EntryPointName': 'Demo348_0', 'EndFade': 0})
}

void BattleEscape_Npc_ValleyVillage031_StepStart() {

    call Common.AirStartUP_Player2()

    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Wind_Relic_Parashawl_FailReason', 'Operator': 'Equal', 'Value': 0}) {
        Npc_ValleyVillage031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk40', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        Event978:
        EventBgmCtrlTag.Demo_Stop({'BgmName': 'RemainsWindBattleBgm', 'FadeSec': 2.0, 'IsWaitFinish': True})
        Fader.Demo_FadeOut({'Color': 1, 'Frame': 0, 'DispMode': 'Auto', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Wind_Relic_Sky', 'IsWaitFinish': True})
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'BackToBattleStep', 'EndFade': 1, 'DemoName': 'Wind_Relic'})
    } else {
        Npc_ValleyVillage031.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk41', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        goto Event978
    }
}

void Demo022_0_FadeOut() {
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo022_0', 'EntryPointName': 'Demo022_0', 'IsWaitFinish': True, 'EndFade': 0})
}

void Wind_Relic_Contact_Retry() {

    call Common.AirStartUP_Player()


    fork {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Common:Relic_Contact_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
    }

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'StartPosName': 'Clear_RemainsWind', 'SystemResetOption': 2, 'AdditionalResetActor': ''})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.3767090141773224, 'Pattern1PosY': 2.064971923828125, 'Pattern1PosZ': -5.476562976837158, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
}

void Step1_Npc_ValleyVillage010_IsPlayed_Demo174_0_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_NPC010_First'}) {
        Event338:
        Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk03', 'ASName': 'Talk_BowSetup'})
        if !EventSystemActor.GeneralChoice2() {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_Step1'})

            call Parashawl_Npc_ValleyVillage010_Talk()

        } else {
            if Npc_ValleyVillage010.IsOnInstEventFlag() {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup', 'MessageId': 'EventFlowMsg/Wind_Relic:talk23'})
            } else {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk62', 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
            }
        }
    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk00', 'ASName': 'Talk_BowSetup'})
            Event406:
            if !EventSystemActor.GeneralChoice2() {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk06', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk02', 'ASName': 'Talk_BowSetup'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Wind_Relic_NPC010_First', 'IsWaitFinish': True})
                goto Event338
            } else {
                Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Wind_Relic:talk01', 'ASName': 'Talk_BowSetup'})
            }
        } else {
            Npc_ValleyVillage010.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Wind_Relic:talk05', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_BowSetup'})
            goto Event406
        }
    }
}

void Step1_Npc_ValleyVillage010_IsPlayed_Demo174_0_Near() {
    Npc_ValleyVillage010[Teba_FlightTraining].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Wind_Relic:near01', 'IsChecked': False, 'DispFrame': 90})
}

void BackToBattleStep() {
    Npc_ValleyVillage010[Teba_FlightTraining].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    Npc_ValleyVillage010[Teba_FlightTraining].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'Wind_Relic', 'StepName': 'Battle', 'ForceRunTelop': False})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BattleClear'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BattleFailed'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BattleStart'})
    EventSystemActor.Demo_UnregisterFromDeathCounter({'IsWaitFinish': True, 'ActorName': 'RemainsWind_Battery_A_01'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BatteryONOFF'})

    call Common.EnableSaveAndWarp()


    call GetDemo.PorchProhibitionOFF()

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'ParasailStaminaRecover'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BattleFailed'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3802.32666015625, 'Pattern1PosY': 268.2849426269531, 'Pattern1PosZ': -2312.41845703125, 'Pattern1AtX': -3798.602294921875, 'Pattern1AtY': 268.79437255859375, 'Pattern1AtZ': -2315.4892578125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0})
    Npc_ValleyVillage010[Teba_FlightTraining].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
    EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'StartPosName': 'ParashawlTalk', 'AdditionalResetActor': ''})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 1, 'ActorName': 'Npc_ValleyVillage010', 'UniqueName': 'Teba_FlightTraining', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Item_CookSet_PanOnly[FlightRange].Demo_Join({'IsWaitFinish': True})
    FidObj_TorchStand_A_01[FlightRange1].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    FidObj_TorchStand_A_01[FlightRange2].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    TBox_Field_Stone[TebaTreasureBox].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_ValleyVillage010", sub_name="Teba_FlightTraining")})

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeIn({'Color': 1, 'Frame': 0, 'DispMode': 'Auto', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Wind_Relic_BattleFailed'})
    Npc_ValleyVillage010[Teba_FlightTraining].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Wind_Relic:talk42', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'PosAppendMode': 0, 'AtAppendMode': 0, 'FovyAppendMode': 0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'GameDataVec3fCameraPos': '', 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'GameDataVec3fCameraAt': '', 'Pattern1Fovy': 0.0, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
}

void BattlePlaying_Npc_ValleyVillage010_Talk() {
    Event983:
    EventSystemActor.Demo_AdvanceQuest({'QuestName': 'Wind_Relic', 'StepName': 'Battle', 'IsWaitFinish': True, 'ForceRunTelop': False})
    goto Event53
}

void BattleSucceeded_Npc_ValleyVillage010_Talk() {
    goto Event983
}

void BattleEscape_Npc_ValleyVillage010_Talk() {
    goto Event983
}

void BattleFinished_Npc_ValleyVillage010_Talk() {
    goto Event983
}
