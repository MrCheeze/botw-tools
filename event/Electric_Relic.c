-------- EventFlow: Electric_Relic --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_IncreasePorchItem', 'Demo_FlagOFF', 'Demo_WarpPlayer', 'Demo_WaitFrame', 'Demo_AutoSave', 'Demo_WarpPlayerToAnchor', 'Demo_AdvanceQuest', 'Demo_CallDemo', 'Demo_IncreaseGameDataInt', 'Demo_ChangeScene', 'Demo_WaitMessageDialogEnd', 'Demo_SetGameDataInt', 'Demo_WarpPLToPosAndResetGimmick', 'Demo_CloseMessageDialog', 'Demo_ChkExistenceOfParticipant', 'Demo_SwitchPlayerEquipment', 'Demo_ResetGimmick', 'Demo_WarpPlayerToDestination', 'Demo_WarpPLAndResetGimmick']
queries: ['GeneralChoice2', 'GeneralChoice3', 'HasPorchItemByCategory', 'CheckFlag', 'CheckAddPorchItem', 'CheckEquipArmorSeriesType', 'HasPorchItem', 'CheckDistanceForWarp', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_Join', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_GerudoDesert004
entrypoint: None()
actions: ['Demo_TalkASync', 'Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis042
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_GerudoDesert001
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWakeBoardReady', 'Demo_SunazarashiRaceGoal', 'Demo_PlayerWakeBoardEnd', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerDestinationMove', 'Demo_PlayerWait', 'Demo_LookAtTheFront', 'Demo_DisableGetOffSunaZInEvent', 'Demo_PlayerAirWait', 'Demo_LookAtObject', 'Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MiddleFront', 'Demo_GameCamera', 'Demo_PlayerHideOff', 'Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis040
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis041
entrypoint: None()
actions: ['Demo_Talk', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Animal_SunazarashiSP_A[tokusei2]
entrypoint: None()
actions: ['Demo_Stop', 'Demo_PlayASForDemo']
queries: []
params: {'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4, 'IsGrounding': True}

Actor: Npc_oasis003[Rouge03]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_BecomeSpeaker']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis033
entrypoint: None()
actions: ['Demo_OpenMessageDialogTrig', 'Demo_ChangeWeaponEquipState']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: Animal_SunazarashiSP_B[RougeSuna]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Stop', 'Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['Demo_ChkExistenceOfParticipant']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis003[RougeDefeat01]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void GetBack_Npc_oasis003_Talk() {
    Event12:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_001', 'IsOverWriteLabelActorName': False})
    Npc_oasis007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'ActorName': 'Npc_oasis003', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': 'Rouge01', 'IsConfront': False, 'IsValid': True})
    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_002'})
    Npc_oasis003.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis007', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': ''})
    Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_GetBack_003'})
}

void GetBack_Npc_oasis007_Talk() {
    Event15:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis007_GetBack_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    Npc_oasis007.Demo_LookAtObject({'IsWaitFinish': True, 'TurnPosition': [-3889.430908203125, 160.3769989013672, 2960.199951171875], 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3889.4306640625, 'Pattern1PosY': 160.376953125, 'Pattern1PosZ': 2963.293212890625, 'Pattern1AtX': -3890.396484375, 'Pattern1AtY': 159.79295349121094, 'Pattern1AtZ': 2960.199951171875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'Count': 30.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'TurnPosition': [-3889.430908203125, 160.3769989013672, 2960.199951171875], 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis007_GetBack_002'})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})

    fork {
        Npc_oasis007.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': 'Npc_oasis007', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis007_GetBack_003'})
}

void Defeat_Npc_oasis007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis007_Defeat_001', 'IsOverWriteLabelActorName': False})
}

void Defeat_Npc_oasis003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis003[RougeDefeat01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Defeat_001', 'IsOverWriteLabelActorName': False})
}

void Strategy_Npc_oasis003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        Event105:
        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_001', 'IsOverWriteLabelActorName': False})
        if !EventSystemActor.GeneralChoice2() {
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_003', 'IsOverWriteLabelActorName': False})
            Event119:
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_004', 'IsOverWriteLabelActorName': False})
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_006', 'IsOverWriteLabelActorName': False})
            if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_BomArrowGet'}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_BombArrow_A_01', 'Count': 10}) {
                    Event541:
                    Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_023', 'IsCloseMessageDialog': True})
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                        if !EventSystemActor.HasPorchItemByCategory({'Category': 1, 'Count': 1}) {
                            Event349:
                            EventSystemActor.Demo_FlagON({'FlagName': 'Electlic_Relic_Rush', 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagON({'FlagName': 'PSavePosNotUpdate', 'IsWaitFinish': True})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo347_2', 'EntryPointName': 'Demo', 'EndFade': 0})
                        } else {
                            EventSystemActor.Demo_IncreasePorchItem({'Value': 1, 'IsWaitFinish': True, 'PorchItemName': 'Weapon_Shield_001'})
                            EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'PorchItemName_Shield': 'Weapon_Shield_001', 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Weapon': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': ''})
                            goto Event349
                        }
                      case 1:
                        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_007', 'IsOverWriteLabelActorName': False})
                        goto Event119
                      case 2:
                        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_008', 'IsOverWriteLabelActorName': False})
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_BomArrowGet2'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_BomArrowGet3'}) {
                        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_025'})
                        goto Event541
                    } else
                    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Obj_BombArrow_A_04', 'Count': 1}) {
                        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_027'})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Obj_BombArrow_A_04'})

                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_BomArrowGet3'})
                        goto Event541
                    } else {
                        goto Event541
                    }
                } else
                if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Obj_BombArrow_A_04', 'Count': 1}) {
                    Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_026'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Obj_BombArrow_A_04'})

                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_BomArrowGet2'})
                    goto Event541
                } else {
                    goto Event541
                }
            } else
            if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Obj_BombArrow_A_04', 'Count': 1}) {
                Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_024'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Obj_BombArrow_A_04'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_BomArrowGet', 'IsWaitFinish': True})
                goto Event541
            } else {
                goto Event541
            }
        } else {
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_002', 'IsOverWriteLabelActorName': False})
        }
    } else {
        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_022'})
        goto Event105
    }
}

void GetBack_Npc_oasis042_Talk() {
    Event1055:

    call InitTalk.InitTalk_Trio({'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_oasis041', 'Actor2': 'Npc_oasis042', 'Actor3': 'Npc_oasis040', 'Arg_Turn': 5})


    fork {
        Npc_oasis042.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis040', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_201'})
    } {
        Npc_oasis040.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis042', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    } {
        Npc_oasis041.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis042', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }


    fork {
        Npc_oasis040.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_202'})
    } {
        Npc_oasis042.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis040', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_203'})
    Npc_oasis040.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_204'})

    fork {
        Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_205'})
    } {
        Npc_oasis042.Demo_LookAtObject({'IsWaitFinish': False, 'FaceId': 1, 'IsValid': False, 'ObjectId': 1, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }


    fork {
        Npc_oasis041.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_206'})
    } {
        Npc_oasis042.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_oasis041', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_207'})
    EventSystemActor.Demo_FlagON({'FlagName': 'Drag_Hero_FirstTime', 'IsWaitFinish': True})
}

void GetBack_Npc_GerudoDesert004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_GerudoDesert004.IsOnInstEventFlag() {
        Npc_GerudoDesert004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis004_GetBack_004', 'ASName': ''})
    } else
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        Npc_GerudoDesert004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis004_GetBack_001', 'IsOverWriteLabelActorName': False, 'ASName': ''})
        EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_Varetta_first_lady', 'IsWaitFinish': True})
    } else {
        Npc_GerudoDesert004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis004_GetBack_001', 'IsOverWriteLabelActorName': False, 'ASName': ''})
        EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_Varetta_first', 'IsWaitFinish': True})
    }
}

void GetBack_Npc_GerudoDesert004_Near() {
    Npc_GerudoDesert004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis004_GetBack_Near_001', 'IsChecked': False, 'DispFrame': 90})
}

void Deliver_Npc_oasis007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis007_GetBack_101', 'IsOverWriteLabelActorName': False})
}

void Strategy_Npc_oasis007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis007_thanks'}) {
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis007_Strategy_001', 'IsOverWriteLabelActorName': False})
    } else {
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis007_Strategy_003'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis007_thanks', 'IsWaitFinish': True})
    }
}

void Invasion_Npc_oasis003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_BombArrow_A_01', 'Count': 10}) {
        Event919:
        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_028'})
        Event136:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_005', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False})
            EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_PosReset', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_PosReset'})
            EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'ibutubattleStart2', 'AnchorName': 'DestinationAnchor'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3262.954345703125, 'Pattern1PosY': 127.84246063232422, 'Pattern1PosZ': 3281.4169921875, 'Pattern1AtX': -3255.652099609375, 'Pattern1AtY': 127.32319641113281, 'Pattern1AtZ': 3285.82861328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_Battle'})

            fork {
                EventSystemActor.Demo_ChkExistenceOfParticipant({'ActorName': 'Animal_SunazarashiSP_A', 'InstanceName': 'tokusei2', 'IsWaitFinish': True})
                Animal_SunazarashiSP_A[tokusei2].Demo_PlayASForDemo({'ASName': 'Wait_No_Move', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                GameROMPlayer.Demo_PlayerWakeBoardReady({'IsWaitFinish': True, 'CreateSelf': False, 'UniqueName': 'tokusei2'})
            } {
                EventSystemActor[1].Demo_ChkExistenceOfParticipant({'IsWaitFinish': True, 'ActorName': 'Animal_SunazarashiSP_B', 'InstanceName': 'RougeSuna'})
                Animal_SunazarashiSP_B[RougeSuna].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait_No_Move', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                Npc_oasis033.Demo_ChangeWeaponEquipState({'EquipState': 'Hold', 'IsWaitFinish': True})
            }

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_SunazarashiRouge'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
            EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'EnterDungeonProhibition'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Electric_Relic_PosReset', 'IsWaitFinish': True})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            EventBgmCtrlTag.Demo_Start({'BgmName': 'RemainsElecBattleBgm', 'IsWaitFinish': True})
          case 1:
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_003', 'IsOverWriteLabelActorName': False})
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_004', 'IsOverWriteLabelActorName': False})
            goto Event136
          case 2:
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_002', 'IsOverWriteLabelActorName': False})
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_BomArrowGet2'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_BomArrowGet3'}) {
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_025'})
            goto Event919
        } else
        if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Obj_BombArrow_A_04', 'Count': 1}) {
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_027'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Obj_BombArrow_A_04'})

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_BomArrowGet3'})
            goto Event919
        }
    } else
    if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Obj_BombArrow_A_04', 'Count': 1}) {
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        Npc_oasis003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Strategy_026'})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': True, 'CheckTargetActorName': 'Obj_BombArrow_A_04'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_BomArrowGet2'})
        goto Event919
    }
}

void Electric_Relic_BattleField01() {
    GameROMPlayer.Demo_DisableGetOffSunaZInEvent({'IsWaitFinish': False})
    if EventSystemActor.CheckPlayerState({'PlayerState': 1}) {
        GameROMPlayer.Demo_SunazarashiRaceGoal({'IsWaitFinish': False, 'ASName': 'WakeBoarding'})
        Event202:
        Animal_SunazarashiSP_A[tokusei2].Demo_Stop({'IsWaitFinish': False})
        Npc_oasis033.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_007', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0})
        EventSystemActor.Demo_WaitMessageDialogEnd({'IsWaitFinish': True})
        if !EventSystemActor.GeneralChoice2() {
            Event148:
            Npc_oasis033.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_008', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
            EventSystemActor.Demo_WaitMessageDialogEnd({'IsWaitFinish': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            EventBgmCtrlTag.Demo_Stop({'FadeSec': 2.0, 'BgmName': 'RemainsElecBattleBgm', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerWakeBoardEnd({'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Electric_Relic_Battle', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})

            call Electric_Relic_Recovery()

            if !EventSystemActor.CheckDistanceForWarp({'WarpDestPosName': 'ibuturetry', 'WarpDestMapName': 'B-8'}) {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_PosReset'})
                EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'ibuturetry', 'WarpDestMapName': 'B-8'})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3442.48193359375, 'Pattern1PosY': 159.77828979492188, 'Pattern1PosZ': 3110.043701171875, 'Pattern1AtX': -3441.556396484375, 'Pattern1AtY': 159.99649047851562, 'Pattern1AtZ': 3114.730712890625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_PosReset'})
                Event191:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_SunazarashiRouge'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'EnterDungeonProhibition'})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            } else {
                EventSystemActor.Demo_ChangeScene({'WarpDestMapName': 'MainField/B-8', 'WarpDestPosName': 'ibuturetry', 'EvflName': 'Electric_Relic', 'EntryPointName': 'Retry_AfterSceneChange', 'IsWaitFinish': True, 'StartType': -1, 'FadeType': 0})
            }
        } else {
            Npc_oasis033.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_009', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
            EventSystemActor.Demo_WaitMessageDialogEnd({'IsWaitFinish': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            GameROMPlayer.Demo_PlayerWakeBoardEnd({'IsWaitFinish': False})
            EventSystemActor.Demo_FlagON({'FlagName': 'Electric_Relic_PosReset', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_Battle'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            EventSystemActor.Demo_WarpPLAndResetGimmick({'SystemResetOption': 2, 'StartPosName': 'ibutubattleStart', 'IsWaitFinish': True, 'AdditionalResetActor': ''})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3262.954345703125, 'Pattern1PosY': 127.84246063232422, 'Pattern1PosZ': 3281.4169921875, 'Pattern1AtX': -3255.652099609375, 'Pattern1AtY': 127.32319641113281, 'Pattern1AtZ': 3285.82861328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Electric_Relic_PosReset', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Electric_Relic_Battle'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

            fork {
                EventSystemActor.Demo_ChkExistenceOfParticipant({'ActorName': 'Animal_SunazarashiSP_A', 'InstanceName': 'tokusei2', 'IsWaitFinish': True})
                Animal_SunazarashiSP_A[tokusei2].Demo_PlayASForDemo({'ASName': 'Wait_No_Move', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                GameROMPlayer.Demo_PlayerWakeBoardReady({'IsWaitFinish': True, 'CreateSelf': False, 'UniqueName': 'tokusei2'})
            } {
                EventSystemActor[1].Demo_ChkExistenceOfParticipant({'IsWaitFinish': True, 'ActorName': 'Animal_SunazarashiSP_B', 'InstanceName': 'RougeSuna'})
                Animal_SunazarashiSP_B[RougeSuna].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait_No_Move', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                Npc_oasis033.Demo_ChangeWeaponEquipState({'EquipState': 'Hold', 'IsWaitFinish': True})
            }

            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        }
    } else
    if EventSystemActor.CheckPlayerState({'PlayerState': 13}) {
        GameROMPlayer.Demo_PlayerAirWait({'IsWaitFinish': False})
        goto Event202
    } else {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
        goto Event202
    }
}

void Strategy_Npc_GerudoDesert001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_GerudoDesert001.IsOnInstEventFlag() {
        Npc_GerudoDesert001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_GerudoDesert001_Strategy_002'})
    } else {
        Npc_GerudoDesert001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_GerudoDesert001_Strategy_001', 'IsOverWriteLabelActorName': False})
    }
}

void Invasion_Npc_GerudoDesert001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_GerudoDesert001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_GerudoDesert001_Invasion_001', 'IsOverWriteLabelActorName': False})
}

void Electric_Relic_BattleField02() {
    GameROMPlayer.Demo_DisableGetOffSunaZInEvent({'IsWaitFinish': False})
    Npc_oasis033.Demo_OpenMessageDialogTrig({'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_006', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3})
    EventSystemActor.Demo_WaitMessageDialogEnd({'IsWaitFinish': True})
}

void Invasion_Npc_oasis007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis007_Strategy_001', 'IsOverWriteLabelActorName': False})
}

void Defeat_Npc_GerudoDesert001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_GerudoDesert001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_GerudoDesert001_Invasion_001'})
}

void GetBack_Npc_oasis042_Drag_Hero_FirstTime_Talk() {
    Event523:
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_permitted'}) {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        if Npc_oasis042.IsOnInstEventFlag() {
            Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_006'})
            Event326:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_008'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_009', 'IsCloseMessageDialog': True})
                } else {
                    Event521:
                    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_007'})
                }
              case 1:
                Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_005'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_004', 'IsCloseMessageDialog': True})
                } else {
                    goto Event521
                }
              case 2:
                goto Event521
            }
        } else {
            Npc_oasis042.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis042_GetBack_001'})
            goto Event326
        }
    } else {

        call Npc_oasis042.Talk()

    }
}

void Electric_Relic_BattleField03() {
    Npc_oasis033.Demo_OpenMessageDialogTrig({'CloseDialogOption': 0, 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_007'})
    EventSystemActor.Demo_WaitMessageDialogEnd({'IsWaitFinish': True})
    if !EventSystemActor.GeneralChoice2() {
        goto Event148
    } else {
        Npc_oasis033.Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Invasion_009', 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        EventSystemActor.Demo_WaitMessageDialogEnd({'IsWaitFinish': True})
    }
}

void Deliver_Npc_oasis003_Talk() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'Helmet_Equipping', 'DemoName': 'Demo347_6'})
}

void Retry_AfterSceneChange() {
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    goto Event191
}

void Search_Npc_oasis003_Talk() {
    goto Event12
}

void Search_Npc_oasis007_Talk() {
    goto Event15
}

void Arrival_Npc_oasis003_Talk() {
    goto Event12
}

void Arrival_Npc_oasis007_Talk() {
    goto Event15
}

void Arrival_Npc_oasis042_Drag_Hero_FirstTime_Talk() {
    goto Event523
}

void Search_Npc_oasis042_Drag_Hero_FirstTime_Talk() {
    goto Event523
}

void Arrival_Npc_oasis042_Talk() {
    goto Event1055
}

void Search_Npc_oasis042_Talk() {
    goto Event1055
}

void Finish_Npc_oasis007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis007_Finish_001', 'IsOverWriteLabelActorName': False})
}

void Finish_Npc_GerudoDesert001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_GerudoDesert001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_GerudoDesert001_Finish_001'})
}

void Finish_Npc_oasis003_Talk() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis003", sub_name="Rouge03")})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TaiyoBox_Appear'})
    Npc_oasis007.Demo_Join({'IsWaitFinish': True})
    Npc_oasis003[Rouge03].Demo_BecomeSpeaker({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.6025999784469604, 'Pattern1PosY': 1.4381099939346313, 'Pattern1PosZ': 0.6831049919128418, 'Pattern1AtX': 0.022338999435305595, 'Pattern1AtY': 1.748810052871704, 'Pattern1AtZ': -0.32177698612213135, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis003', 'UniqueName1': 'Rouge03', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Finish_001', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Electlic_Relic_LastTalk_Side'}) {
        Event770:
        Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Finish_003'})
        if EventSystemActor.CheckFlag({'FlagName': 'Electlic_Relic_LastTalk_Side'}) {
            Fader.Demo_FadeOut({'Color': 1, 'Frame': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
            EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': -3886.89990234375, 'DestinationY': 157.5, 'DestinationZ': 2965.77001953125, 'IsWaitFinish': True, 'DirectionY': 0.0})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_oasis003', 'UniqueName': 'Rouge03', 'IsValid': False, 'FaceId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3886.629150390625, 'Pattern1PosY': 158.3207550048828, 'Pattern1PosZ': 2963.624267578125, 'Pattern1AtX': -3887.213623046875, 'Pattern1AtY': 158.53933715820312, 'Pattern1AtZ': 2964.779052734375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Fader.Demo_FadeIn({'Color': 1, 'Frame': 0, 'IsWaitFinish': True, 'DispMode': 'Auto'})
            Event746:
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Finish_004', 'IsCloseMessageDialog': True})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3885.8984375, 'Pattern1PosY': 161.76290893554688, 'Pattern1PosZ': 2967.98828125, 'Pattern1AtX': -3887.874267578125, 'Pattern1AtY': 160.04476928710938, 'Pattern1AtZ': 2970.104736328125, 'Pattern1Fovy': 51.24998474121094, 'Count': 60.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Finish_009'})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.6025999784469604, 'Pattern1PosY': 1.4381099939346313, 'Pattern1PosZ': 0.6831049919128418, 'Pattern1AtX': 0.022338999435305595, 'Pattern1AtY': 1.748810052871704, 'Pattern1AtZ': -0.32177698612213135, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_oasis003', 'UniqueName1': 'Rouge03', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_oasis003[Rouge03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Electric_Relic:Npc_oasis003_Finish_005', 'IsCloseMessageDialog': True})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_oasis003[Rouge03].Demo_BecomeSpeaker({'IsWaitFinish': True})
            GameRomCamera.Demo_MiddleFront({'IsWaitFinish': True, 'PlayerRelative': False, 'UseImaginaryLineAngle': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'NearSide': False, 'Lat': -10.0, 'Lng': 0.0, 'Count': -5.0, 'StartCalcOnly': True, 'Offset': [0.0, 0.0, 0.0]})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Gerudo_Ch_Helmet_Ready'})
            EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'MsterSword_TalkLv', 'Value': 1, 'IsWaitFinish': True})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'StepName': '', 'QuestName': 'Electric_Relic', 'ForceRunTelop': True})
        } else {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3886.629150390625, 'Pattern1PosY': 158.3207550048828, 'Pattern1PosZ': 2963.624267578125, 'Pattern1AtX': -3887.213623046875, 'Pattern1AtY': 158.53933715820312, 'Pattern1AtZ': 2964.779052734375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            goto Event746
        }
    } else {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3888.45068359375, 'Pattern1PosY': 159.15391540527344, 'Pattern1PosZ': 2962.21630859375, 'Pattern1AtX': -3888.035400390625, 'Pattern1AtY': 158.8502655029297, 'Pattern1AtZ': 2965.54345703125, 'Pattern1Fovy': 51.24998474121094, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameROMPlayer.Demo_PlayerDestinationMove({'IsWaitFinish': True, 'DestPosX': -3886.89990234375, 'DestPosY': 157.5, 'DestPosZ': 2965.77001953125, 'StickValue': 0.25})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'Npc_oasis003', 'UniqueName': 'Rouge03', 'IsValid': False, 'FaceId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        goto Event770
    }
}

void Ready_Npc_oasis003_Talk() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo347_5', 'EntryPointName': 'Demo347_5'})
}

void Electric_Relic_Recovery() {
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Electric_Relic_WeakPointLife_FL', 'Value': 2})
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'Value': 2, 'GameDataIntName': 'Electric_Relic_WeakPointLife_FR'})
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'Value': 2, 'GameDataIntName': 'Electric_Relic_WeakPointLife_BL'})
    EventSystemActor.Demo_SetGameDataInt({'IsWaitFinish': True, 'Value': 2, 'GameDataIntName': 'Electric_Relic_WeakPointLife_BR'})
}

void Electric_Relic_Contact_Retry() {

    call Common.AirStartUP_Player()


    fork {
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/Common:Relic_Contact_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
    }

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPLToPosAndResetGimmick({'IsWaitFinish': True, 'Destination': [-2139.010009765625, 470.7099914550781, 2553.090087890625], 'RotationY': 20.0, 'SystemResetOption': 2, 'AdditionalResetActor': ''})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2140.57470703125, 'Pattern1PosY': 472.3157043457031, 'Pattern1PosZ': 2548.199951171875, 'Pattern1AtX': -2139.010009765625, 'Pattern1AtY': 472.5099792480469, 'Pattern1AtZ': 2553.090087890625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
}

void WaitStable() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'None'})
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    Event1176:
    if EventSystemActor.CheckPlayerState({'PlayerState': 21}) {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        goto Event1176
    } else {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo347_0', 'EntryPointName': 'Appear', 'EndFade': 0})
    }
}
