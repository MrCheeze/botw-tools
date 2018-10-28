-------- EventFlow: MiniGame_ShieldSurfing --------

Actor: Npc_IceVillage011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialog', 'Demo_ChangeEmotion', 'Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_BecomeSpeaker']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AppearRupee', 'Demo_IncreaseRupee', 'Demo_WarpPlayerToDestination', 'Demo_AdvanceQuest', 'Demo_FlagON', 'Demo_LoopEnd', 'Demo_FlagOFF', 'Demo_MiniGameTime', 'Demo_DisableMiniGameTime', 'Demo_ResetGimmick', 'Demo_WaitFrame', 'Demo_MiniGameStart', 'Demo_CloseMessageDialog', 'Demo_WarpPLToPosAndResetGimmick', 'Demo_WarpPlayer', 'Demo_ExitEventPlayer', 'Demo_AutoSave', 'Demo_MiniGameFinish']
queries: ['GeneralChoice2', 'CheckEquipment', 'CheckGameDataInt', 'CheckFlag', 'CheckAddPorchItem', 'GeneralChoice3', 'CheckElapsedTimeOfMiniGame', 'HasPorchItemByCategory', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_Unequip', 'Demo_PlayerHorseGetOff', 'Demo_PlayerWait', 'Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_MiniGameTimerWrite', 'Demo_GameDataConvertIntToString']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetEndProc', 'Demo_NotifyTalk']
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

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetAddFogOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Item_CookSet[Selmie_s_CookSet]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_WarpToAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: FldObj_FlagLarge_A_02[ForMiniGame]
entrypoint: None()
actions: ['Demo_Idling']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_IceVillage011_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsGoalOnce'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_9'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_022'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check00', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_022'})

                EventSystemActor.Demo_FlagOFF({'FlagName': 'NotGet_Premium_Shield_9', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_9', 'IsWaitFinish': True})
                Event771:
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check05', 'ASName': ''})
                Event291:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    if !EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 1}) {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:IfSelectBeginnerCourse_Expert', 'ASName': ''})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskRupee_Expert', 'ASName': ''})
                        if !EventSystemActor.GeneralChoice2() {
                            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {

                                fork {

                                    call Common.DisableSaveAndWarp()

                                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'})
                                } {
                                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:LetsStart_01', 'IsCloseMessageDialog': True, 'ASName': ''})
                                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Explain'})
                                }

                            } else {
                                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NotHadEnoughRupee', 'ASName': ''})
                            }
                        } else {
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NoPlay_00', 'IsCloseMessageDialog': False, 'ASName': ''})
                        }
                    } else {
                        Event963:
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_No_Shield', 'IsCloseMessageDialog': False, 'ASName': ''})
                    }
                  case 1:
                    if !EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 1}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:ChangeBeginnerToExpert_Expert1', 'ASName': ''})
                            Event411:
                            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskRupee_Expert', 'ASName': ''})
                            if !EventSystemActor.GeneralChoice2() {
                                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {

                                    fork {

                                        call Common.DisableSaveAndWarp()

                                        EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                                        EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                    } {
                                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:LetsStart_01', 'IsCloseMessageDialog': True, 'ASName': ''})
                                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Explain'})
                                    }

                                } else {
                                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NotHadEnoughRupee', 'ASName': ''})
                                }
                            } else {
                                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NoPlay_00', 'IsCloseMessageDialog': True, 'ASName': ''})
                            }
                        } else
                        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_001'}) {
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:IfSelectExpertCourse_Expert', 'ASName': ''})
                            goto Event411
                        } else {
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:IfSelectExpertCourse_Expert1', 'ASName': ''})
                        }
                    } else {
                        goto Event963
                    }
                  case 2:
                    Event290:
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NG_00', 'IsCloseMessageDialog': False, 'ASName': ''})
                }
            } else
            Event764:
            if !Npc_IceVillage011.IsOnInstEventFlag() {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check01', 'IsCloseMessageDialog': False, 'ASName': ''})
            }
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check02', 'ASName': ''})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_8'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_003'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check00', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_003'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_8', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'NotGet_Premium_Shield_8', 'IsWaitFinish': True})
                goto Event771
            } else
            goto Event764
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_7'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_002'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check00', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_002'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_7', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_7'})
                goto Event771
            } else
            goto Event764
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_6'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_042'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check00', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_042'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_6', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_6'})
                goto Event771
            } else
            goto Event764
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_5'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_035'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check00', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_035'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_5', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_5'})
                goto Event771
            } else
            goto Event764
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_4'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_032'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check00', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_032'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_4', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_4'})
                goto Event771
            } else
            goto Event764
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_3'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_034'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check00', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_034'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_3', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_3'})
                goto Event771
            } else
            goto Event764
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_2'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_031'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check00', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_031'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_2', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_2'})
                goto Event771
            } else
            goto Event764
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_1'}) {
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_001'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check00', 'IsCloseMessageDialog': True, 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_001'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_1', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_1'})
                goto Event771
            } else
            goto Event764
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_026'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_GoldenShield1', 'ASName': ''})
            Event285:
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_Expert_SP', 'ASName': ''})
            Event287:
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskPurpose_Expert', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskCourse_Expert', 'ASName': ''})
                goto Event291
            } else {
                goto Event290
            }
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_036'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_MoonlightShield1', 'ASName': ''})
            goto Event285
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_037'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_SunShield1', 'ASName': ''})
            goto Event285
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_009'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_SpikeShield1', 'ASName': ''})
            goto Event285
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_033'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_GlassShield1', 'ASName': ''})
            goto Event285
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_022'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_RoyalShield1', 'ASName': ''})
            goto Event285
        } else {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_Expert_Default', 'ASName': ''})
            goto Event287
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_Try'}) {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_Beginner_Default_00', 'ASName': ''})
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_026'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_GoldenShield', 'IsCloseMessageDialog': True, 'ASName': ''})
            Event883:
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_Beginner_Default_02', 'IsCloseMessageDialog': False, 'ASName': ''})
            Event41:
            if !EventSystemActor.GeneralChoice2() {
                if !EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 1}) {
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {

                        fork {

                            call Common.DisableSaveAndWarp()

                            EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'})
                        } {
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:TalkForPay_Beginner', 'ASName': ''})
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:LetsStart_01', 'IsCloseMessageDialog': True, 'ASName': ''})
                            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Explain'})
                        }

                    } else {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NotHadEnoughRupee', 'IsCloseMessageDialog': True, 'ASName': ''})
                    }
                } else {
                    Event974:
                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_No_Shield', 'IsCloseMessageDialog': False, 'ASName': ''})
                }
            } else {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:RefusePay_00', 'IsCloseMessageDialog': True, 'ASName': ''})
            }
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_036'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_MoonlightShield', 'IsCloseMessageDialog': True, 'ASName': ''})
            goto Event883
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_037'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_SunShield', 'IsCloseMessageDialog': True, 'ASName': ''})
            goto Event883
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_009'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_SpikeShield', 'IsCloseMessageDialog': True, 'ASName': ''})
            goto Event883
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_033'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_GlassShield', 'IsCloseMessageDialog': True, 'ASName': ''})
            goto Event883
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_022'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_RoyalShield', 'IsCloseMessageDialog': True, 'ASName': ''})
            goto Event883
        } else {
            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_Beginner_Default_01', 'ASName': ''})
            goto Event41
        }
    } else {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_Beginner', 'ASName': ''})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ShieldSurfing_Try', 'IsWaitFinish': True})
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_026'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_GoldenShield', 'IsCloseMessageDialog': False, 'ASName': ''})
            Event31:
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_Beginner_SP', 'ASName': ''})
            Event32:
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskPurpose_Beginner', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskTraining_Beginner', 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    if !EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 1}) {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:TellRupee_Beginner', 'ASName': ''})
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskRupee_Beginner', 'ASName': ''})
                        goto Event41
                    } else {
                        goto Event974
                    }
                } else {
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NoPlay_00', 'IsCloseMessageDialog': True, 'ASName': ''})
                }
            } else {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NG_00', 'IsCloseMessageDialog': True, 'ASName': ''})
            }
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_036'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_MoonlightShield', 'ASName': ''})
            goto Event31
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_037'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_SunShield', 'ASName': ''})
            goto Event31
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_009'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_SpikeShield', 'ASName': ''})
            goto Event31
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_033'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_GlassShield', 'ASName': ''})
            goto Event31
        } else
        if EventSystemActor.CheckEquipment({'EquipItemName': 'Weapon_Shield_022'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Initial_RoyalShield', 'ASName': ''})
            goto Event31
        } else {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_Beginner_Default', 'ASName': ''})
            goto Event32
        }
    }
}

void Explain_Npc_IceVillage011_StepStart() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call WarpToStart()

    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduceOff'})
    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:LetsStart_02', 'ASName': ''})
    if !EventSystemActor.GeneralChoice2() {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AboutGame_00', 'ASName': ''})
    } else {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:LetsStart_03', 'ASName': ''})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'}) {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceExplain_Beginner', 'IsCloseMessageDialog': True, 'ASName': ''})

        call First_Camera()

        if !EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsGoalOnce'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:HintNextStep_Beginner', 'IsCloseMessageDialog': True, 'ASName': ''})
        }
        Event83:
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:LetsStart_04', 'IsCloseMessageDialog': True, 'ASName': ''})

        fork {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 270.9179992675781, 'IsUseSlowTurn': False, 'FaceId': 1, 'IsTurnToLookAtPos': False})
        } {
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': -3042.260009765625, 'Pattern1PosY': 680.1199951171875, 'Pattern1PosZ': -3217.610107421875, 'Pattern1AtX': -3046.949951171875, 'Pattern1AtY': 678.219970703125, 'Pattern1AtZ': -3217.550048828125, 'Pattern1Fovy': 50.0, 'Count': 20.0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        }

        EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
        EventBgmCtrlTag.Demo_Start({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
    } else {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:ExplainExpertCourseToBeginner_Expert_00', 'ASName': ''})

        call Senior_Camera()

        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:CautionBigDoor_Expert', 'IsCloseMessageDialog': True, 'ASName': ''})
        goto Event83
    }
}

void Game_Npc_IceVillage011_EachFrame() {
    EventSystemActor.Demo_MiniGameTime({'IsWaitFinish': True, 'CountMode': 0, 'CountStartTime': 0, 'IsShowTimeUI': True, 'MaxTime': -1})
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'}) {
        Event268:
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsInBeginnerGoalArea'}) {
            GameDataCalcMachine.Demo_MiniGameTimerWrite({'GameDataIntNameMiliseconds': 'MiniGame_ShieldSurfing_ResultMilliSecond', 'GameDataIntNameSeconds': 'MiniGame_ShieldSurfing_ResultSecond', 'GameDataIntNameMintues': 'MiniGame_ShieldSurfing_ResultMinute', 'IsWaitFinish': True})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsInGameArea'}) {
            if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 120}) {
                Event616:
                EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Failed'})
            } else {
                EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
                goto Event268
            }
        } else {
            goto Event616
        }
    } else
    Event108:
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsInGoalArea'}) {
        GameDataCalcMachine.Demo_MiniGameTimerWrite({'GameDataIntNameMiliseconds': 'MiniGame_ShieldSurfing_ResultMilliSecond', 'GameDataIntNameSeconds': 'MiniGame_ShieldSurfing_ResultSecond', 'GameDataIntNameMintues': 'MiniGame_ShieldSurfing_ResultMinute', 'IsWaitFinish': True})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Finish'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsInGameArea'}) {
        if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 240}) {
            Event615:
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Failed'})
        } else {
            EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
            goto Event108
        }
    } else {
        goto Event615
    }
}

void Finish_Npc_IceVillage011_StepStart() {
    FldObj_FlagLarge_A_02[ForMiniGame].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    EventSystemActor.Demo_MiniGameFinish({'TextType': 0, 'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True, 'FadeSec': 0.5})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_IceVillage011.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_00', 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    if EventSystemActor.CheckPlayerRideHorse() {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3044.77001953125, 'Pattern1PosY': 678.1109619140625, 'Pattern1PosZ': -3219.177734375, 'Pattern1AtX': -3048.534423828125, 'Pattern1AtY': 678.1813354492188, 'Pattern1AtZ': -3214.11669921875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})

        fork {
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3046.953857421875, 'DestinationZ': -3217.55224609375, 'DirectionY': -89.73899841308594, 'DestinationY': 676.2576293945312})
        } {
            Npc_IceVillage011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
        }

        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsInBeginnerGoalArea'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsInGoalArea'})
        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ShieldSurfing_House', 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'AnchorName': 'TargetPosMarker', 'IsWaitFinish': True, 'UniqueName': 'ShieldSurfing_HousePos'})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3046.953857421875, 'DestinationY': 676.4212036132812, 'DestinationZ': -3217.55224609375, 'DirectionY': -89.73899841308594})
        Event854:
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_IceVillage011', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduceOff'})

        call Result()

        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsGoalOnce'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskRetry_Expert', 'IsCloseMessageDialog': False, 'ASName': ''})
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                if !EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 1}) {
                    Event360:
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:ChangeExpertToBeginner_Expert', 'IsCloseMessageDialog': False, 'ASName': ''})
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Check_Money02', 'ASName': ''})
                    Event343:
                    if !EventSystemActor.GeneralChoice2() {
                        if !EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 1}) {
                            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {

                                fork {
                                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                    if !EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'}) {
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'})
                                    }
                                } {
                                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:LetsStart_04', 'IsCloseMessageDialog': True, 'ASName': ''})

                                    fork {
                                        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 270.9179992675781, 'IsUseSlowTurn': False, 'FaceId': 1, 'IsTurnToLookAtPos': False})
                                    } {
                                        GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': -3042.260009765625, 'Pattern1PosY': 680.1199951171875, 'Pattern1PosZ': -3217.610107421875, 'Pattern1AtX': -3046.949951171875, 'Pattern1AtY': 678.219970703125, 'Pattern1AtZ': -3217.550048828125, 'Pattern1Fovy': 50.0, 'Count': 20.0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                    }

                                    EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                                    EventBgmCtrlTag.Demo_Start({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True})
                                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                                }

                            } else {
                                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NotHadEnoughRupee', 'ASName': ''})
                                Event391:

                                call Exit()

                            }
                        } else {
                            Event973:
                            EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:EntranceTalk_No_Shield', 'IsCloseMessageDialog': True, 'ASName': ''})
                            EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
                            Event195:
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Exit_01', 'IsCloseMessageDialog': True, 'ASName': ''})

                            call Exit()

                        }
                    } else {
                        goto Event195
                    }
                } else {
                    goto Event973
                }
              case 1:
                if !EventSystemActor.HasPorchItemByCategory({'Count': 1, 'Category': 1}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:ChangeBeginnerToExpert_Expert1', 'ASName': ''})
                        Event696:
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Check_Money00', 'ASName': ''})
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:
                            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'CurrentRupee', 'Operator': 'GreaterThanOrEqualTo', 'Value': 20}) {

                                fork {
                                    EventSystemActor.Demo_IncreaseRupee({'Value': -20, 'IsWaitFinish': True})
                                    EventSystemActor.Demo_AppearRupee({'IsVisible': 1, 'IsWaitFinish': True})
                                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'}) {
                                        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'})
                                    }
                                } {
                                    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_Camera'}) {
                                        Event194:
                                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:LetsStart_04', 'IsCloseMessageDialog': True, 'ASName': ''})

                                        fork {
                                            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 270.9179992675781, 'IsUseSlowTurn': False, 'FaceId': 1, 'IsTurnToLookAtPos': False})
                                        } {
                                            GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': -3042.260009765625, 'Pattern1PosY': 680.1199951171875, 'Pattern1PosZ': -3217.610107421875, 'Pattern1AtX': -3046.949951171875, 'Pattern1AtY': 678.219970703125, 'Pattern1AtZ': -3217.550048828125, 'Pattern1Fovy': 50.0, 'Count': 20.0, 'CollisionInterpolateSkip': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                                        }

                                        EventSystemActor.Demo_MiniGameStart({'IsWaitFinish': True, 'TextType': 0})
                                        EventBgmCtrlTag.Demo_Start({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True})
                                        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Game'})
                                    } else {
                                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:ExplainExpertCourseToBeginner_Expert_00', 'ASName': ''})

                                        call Senior_Camera()

                                        goto Event194
                                    }
                                }

                            } else {
                                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:NotHadEnoughRupee', 'ASName': ''})

                                call Exit()

                            }
                          case 1:
                            goto Event360
                          case 2:
                            goto Event195
                        }
                    } else
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_001'}) {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:ChangeBeginnerToExpert_Expert', 'IsCloseMessageDialog': False, 'ASName': ''})
                        goto Event696
                    } else {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:IfSelectExpertCourse_Expert1', 'ASName': ''})
                        goto Event391
                    }
                } else {
                    goto Event973
                }
              case 2:
                goto Event195
            }
        } else {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskRetry_Beginner', 'IsBecomingSpeaker': False, 'ASName': ''})
            goto Event343
        }
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3044.77001953125, 'Pattern1PosY': 678.1109619140625, 'Pattern1PosZ': -3219.177734375, 'Pattern1AtX': -3048.534423828125, 'Pattern1AtY': 678.1813354492188, 'Pattern1AtZ': -3214.11669921875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})

        fork {
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3046.953857421875, 'DestinationZ': -3217.55224609375, 'DirectionY': -89.73899841308594, 'DestinationY': 676.2576293945312})
        } {
            Npc_IceVillage011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
        }

        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsInBeginnerGoalArea'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsInGoalArea'})
        goto Event854
    }
}

void Game_Npc_IceVillage011_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Stop_00', 'IsCloseMessageDialog': False, 'ASName': ''})
    if !EventSystemActor.GeneralChoice2() {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Stop_01', 'IsCloseMessageDialog': False, 'ASName': ''})
        if !EventSystemActor.GeneralChoice2() {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Stop_02', 'ASName': ''})
            EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True, 'FadeSec': 2.0})
            EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
            if EventSystemActor.CheckPlayerRideHorse() {
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ShieldSurfing_House', 'IsWaitFinish': True})
            }

            call Exit()

        } else {
            Event137:
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Stop_03', 'IsCloseMessageDialog': True, 'ASName': ''})
        }
    } else {
        goto Event137
    }
}

void Exit() {

    call Common.EnableSaveAndWarp()

    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'}) {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'})
    }
    Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Exit_02', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Exit'})
    SceneSoundCtrlTag.Demo_SetEndProc({'IsWaitFinish': True, 'CtrlType': 'SkipAll'})
}

void Result() {
    GameDataCalcMachine.Demo_GameDataConvertIntToString({'GameDataIntInput': 'MiniGame_ShieldSurfing_ResultMilliSecond', 'GameDataStringOutput': 'ScoreStringBuffer', 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsGoalOnce'}) {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_ShieldSurfing_ResultMinute', 'Operator': 'LessThan', 'Value': 1})
            && EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_ShieldSurfing_ResultSecond', 'Operator': 'LessThan', 'Value': 45}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:GoalBeginnerCourse_GoodTime_Expert', 'ASName': ''})
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_Present1', 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

            } else {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:GoalBeginnerCourse_BadTime_Expert', 'IsCloseMessageDialog': False, 'ASName': ''})
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_Present1', 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

            }
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_ShieldSurfing_ResultMinute', 'Operator': 'LessThan', 'Value': 1}) {
            if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'MiniGame_ShieldSurfing_ResultSecond', 'Operator': 'LessThan', 'Value': 45}) {
                EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ShieldSurfing_IsGoalOnce', 'IsWaitFinish': True})

                call Common.EnableSaveAndWarp()

                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Beginner', 'IsCloseMessageDialog': False, 'ASName': ''})
                EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

                call Common.DisableSaveAndWarp()

            } else {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Beginner', 'ASName': ''})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AskAboutShieldSurfing_Beginner', 'IsCloseMessageDialog': False, 'ASName': ''})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:IfAnswerSurface_Beginner', 'ASName': ''})
                    } else {
                        EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ShieldSurfing_IsGoalOnce', 'IsWaitFinish': True})

                        call Common.EnableSaveAndWarp()

                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:IfAnswerFact_Beginner', 'ASName': ''})
                        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

                        call Common.DisableSaveAndWarp()

                    }
                } else {
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:IfAnswerRetry_Beginner', 'ASName': ''})
                }
            }
        } else {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Beginner', 'ASName': ''})
        }
    } else
    if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 95}) {
        if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 110}) {
            if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 125}) {
                if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 140}) {
                    if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 155}) {
                        if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 170}) {
                            if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 185}) {
                                if EventSystemActor.CheckElapsedTimeOfMiniGame({'Threshold': 200}) {
                                    if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
                                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_dame', 'ASName': ''})
                                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_Present1', 'ASName': ''})

                                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee'})

                                    } else {
                                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_dame', 'ASName': ''})
                                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_Present', 'ASName': ''})
                                        if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_1'}) {
                                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_01', 'ASName': ''})

                                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee'})

                                        } else
                                        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_001'}) {

                                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_001'})

                                            EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_1', 'IsWaitFinish': True})
                                        } else {
                                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi', 'ASName': ''})
                                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_1'})

                                            call Pouch_Check()

                                        }
                                    }
                                } else
                                if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
                                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_05', 'IsCloseMessageDialog': False, 'ASName': ''})
                                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_Present1', 'ASName': ''})

                                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Blue'})

                                } else {
                                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert', 'ASName': ''})
                                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_Present', 'ASName': ''})
                                    if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_2'}) {
                                        Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_01'})

                                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Blue'})

                                    } else
                                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_031'}) {

                                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_031'})

                                        EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_2', 'IsWaitFinish': True})
                                    } else {
                                        Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi'})
                                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_2'})

                                        call Pouch_Check()

                                    }
                                }
                            } else
                            if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
                                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_dame1', 'IsCloseMessageDialog': False, 'ASName': ''})
                                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_Present1', 'ASName': ''})

                                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Blue'})

                            } else {
                                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_dame1', 'ASName': ''})
                                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_Present', 'ASName': ''})
                                if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_3'}) {
                                    Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_01'})

                                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Blue'})

                                } else
                                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_032'}) {

                                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_034'})

                                    EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_3', 'IsWaitFinish': True})
                                } else {
                                    Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_3'})

                                    call Pouch_Check()

                                }
                            }
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_04', 'IsCloseMessageDialog': False, 'ASName': ''})
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert_Present1', 'ASName': ''})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                        } else {
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert', 'IsCloseMessageDialog': False, 'ASName': ''})
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert_Present', 'ASName': ''})
                            if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_4'}) {
                                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_01', 'ASName': ''})

                                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                            } else
                            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_032'}) {

                                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_032'})

                                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_4', 'IsWaitFinish': True})
                            } else {
                                Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi'})
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_4'})

                                call Pouch_Check()

                            }
                        }
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert1'})
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert_Present1', 'ASName': ''})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                    } else {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert1', 'ASName': ''})
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert_Present', 'ASName': ''})
                        if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_5'}) {
                            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_01', 'ASName': ''})

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                        } else
                        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_035'}) {

                            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_035'})

                            EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_5', 'IsWaitFinish': True})
                        } else {
                            Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_5'})

                            call Pouch_Check()

                        }
                    }
                } else
                if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert2', 'ASName': ''})
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert_Present1', 'ASName': ''})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                } else {
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert2', 'ASName': ''})
                    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_CommonTime_Expert_Present', 'ASName': ''})
                    if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_6'}) {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_01', 'ASName': ''})

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Red'})

                    } else
                    if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_042'}) {

                        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_042'})

                        EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_6', 'IsWaitFinish': True})
                    } else {
                        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi', 'ASName': ''})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_6'})

                        call Pouch_Check()

                    }
                }
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_03', 'IsCloseMessageDialog': False, 'ASName': ''})
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Expert_Present2', 'ASName': ''})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

            } else {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Expert', 'IsCloseMessageDialog': False, 'ASName': ''})
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Expert_Present', 'ASName': ''})
                if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_7'}) {
                    Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_01'})

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

                } else
                if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_002'}) {

                    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_002'})

                    EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_7', 'IsWaitFinish': True})
                } else {
                    Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_7'})

                    call Pouch_Check()

                }
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Expert1', 'IsCloseMessageDialog': False, 'ASName': ''})
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Expert_Present1', 'ASName': ''})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

        } else {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Expert1', 'IsCloseMessageDialog': False, 'ASName': ''})
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Expert_Present1', 'ASName': ''})
            if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_8'}) {
                Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_01'})

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Purple'})

            } else
            if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_003'}) {

                call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_003'})

                EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_8', 'IsWaitFinish': True})
            } else {
                Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_8'})

                call Pouch_Check()

            }
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_conp'}) {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_02', 'IsCloseMessageDialog': False, 'ASName': ''})
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Expert_Present1', 'ASName': ''})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

    } else {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_WonderfulTime_Expert', 'IsCloseMessageDialog': False, 'ASName': ''})
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_GoodTime_Expert_Present1', 'ASName': ''})
        if EventSystemActor.CheckFlag({'FlagName': 'Premium_Shield_9'}) {
            Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi_01'})

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'PutRupee_Silver'})

        } else
        if EventSystemActor.CheckAddPorchItem({'Count': 1, 'PorchItemName': 'Weapon_Shield_022'}) {

            call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Shield_022'})

            EventSystemActor.Demo_FlagON({'FlagName': 'Premium_Shield_9', 'IsWaitFinish': True})
        } else {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Goal_BadTime_Expert_rupi', 'IsCloseMessageDialog': False, 'ASName': ''})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NotGet_Premium_Shield_9'})

            call Pouch_Check()

        }
    }
}

void Exit_Npc_IceVillage011_StepStart() {
    Item_CookSet[Selmie_s_CookSet].Demo_Join({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2954.36767578125, 'Pattern1PosY': 679.5574340820312, 'Pattern1PosZ': -3138.083740234375, 'Pattern1AtX': -2951.334716796875, 'Pattern1AtY': 678.86865234375, 'Pattern1AtZ': -3141.6572265625, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    call WarpToCabin()


    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_IceVillage011.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_House'}) {
        LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'AnchorName': 'TargetPosMarker', 'IsWaitFinish': True, 'UniqueName': 'ShieldSurfing_HousePos2'})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -2952.60009765625, 'DestinationZ': -3141.89990234375, 'DirectionY': 121.5999984741211, 'DestinationY': 677.5659790039062})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_IceVillage011', 'IsValid': True, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'MiniGame_ShieldSurfing_House', 'IsWaitFinish': True})
        Event214:
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_9'}) {
            Event735:
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check04'})
            Event207:
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Ready'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_8'}) {
            goto Event735
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_7'}) {
            goto Event735
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_6'}) {
            goto Event735
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_5'}) {
            goto Event735
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_4'}) {
            goto Event735
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_3'}) {
            goto Event735
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_2'}) {
            goto Event735
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'NotGet_Premium_Shield_1'}) {
            goto Event735
        } else {
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Exit_03', 'ASName': ''})
        }
        goto Event207
    } else {
        goto Event214
    }
}

void WarpToCabin() {

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_House'}) {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
            Event658:
            EventSystemActor.Demo_WarpPLToPosAndResetGimmick({'IsWaitFinish': True, 'Destination': [-2952.60009765625, 678.5999755859375, -3141.89990234375], 'RotationY': 121.5999984741211, 'SystemResetOption': 0, 'AdditionalResetActor': ''})
        } else {
            goto Event658
        }
    } {
        Npc_IceVillage011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction1', 'UniqueName': ''})
    }

}

void WarpToStart() {

    fork {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3046.953857421875, 'DestinationZ': -3217.55224609375, 'DirectionY': -89.73899841308594, 'DestinationY': 676.2576293945312})
    } {
        Npc_IceVillage011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3044.77001953125, 'Pattern1PosY': 678.1109619140625, 'Pattern1PosZ': -3219.177734375, 'Pattern1AtX': -3048.534423828125, 'Pattern1AtY': 678.1813354492188, 'Pattern1AtZ': -3214.11669921875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True})
}

void Failed_Npc_IceVillage011_StepStart() {
    FldObj_FlagLarge_A_02[ForMiniGame].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_DisableMiniGameTime({'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_Minigame_Retire', 'SoundDelay': 0, 'SLinkInst': ''})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'GameRaceBgm', 'IsWaitFinish': True, 'FadeSec': 0.5})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsInGameArea'}) {
        Npc_IceVillage011.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Failed_00_00', 'ASName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3044.77001953125, 'Pattern1PosY': 678.1109619140625, 'Pattern1PosZ': -3219.177734375, 'Pattern1AtX': -3048.534423828125, 'Pattern1AtY': 678.1813354492188, 'Pattern1AtZ': -3214.11669921875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})

        fork {
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3046.953857421875, 'DestinationZ': -3217.55224609375, 'DirectionY': -89.73899841308594, 'DestinationY': 678.2576293945312})
        } {
            Npc_IceVillage011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
        }

        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        if EventSystemActor.CheckPlayerRideHorse() {
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ShieldSurfing_House', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
            LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'AnchorName': 'TargetPosMarker', 'IsWaitFinish': True, 'UniqueName': 'ShieldSurfing_HousePos'})
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3046.953857421875, 'DestinationZ': -3217.55224609375, 'DirectionY': -89.73899841308594, 'DestinationY': 676.2570190429688})
            Event1043:
            Npc_IceVillage011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_IceVillage011', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Failed_00_01', 'IsCloseMessageDialog': False, 'ASName': ''})
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Failed_00_02', 'ASName': ''})
            Event655:
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Failed_02', 'ASName': '', 'IsCloseMessageDialog': False})

            call Exit()

        } else {
            goto Event1043
        }
    } else {
        Npc_IceVillage011.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'CloseDialogOption': 3, 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Failed_01_00', 'ASName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'WallOff', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3044.77001953125, 'Pattern1PosY': 678.1109619140625, 'Pattern1PosZ': -3219.177734375, 'Pattern1AtX': -3048.534423828125, 'Pattern1AtY': 678.1813354492188, 'Pattern1AtZ': -3214.11669921875, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Accept1FrameDelay': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})

        fork {
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3046.953857421875, 'DestinationZ': -3217.55224609375, 'DirectionY': -89.73899841308594, 'DestinationY': 678.2576293945312})
        } {
            Npc_IceVillage011.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
        }

        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        if EventSystemActor.CheckPlayerRideHorse() {
            EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ShieldSurfing_House', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
            LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'AnchorName': 'TargetPosMarker', 'IsWaitFinish': True, 'UniqueName': 'ShieldSurfing_HousePos'})
            EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3046.953857421875, 'DestinationZ': -3217.55224609375, 'DirectionY': -89.73899841308594, 'DestinationY': 676.2570190429688})
            Event1042:
            Npc_IceVillage011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_IceVillage011', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 0, 'DispMode': 'Auto'})
            Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Failed_01_01', 'ASName': ''})
            if !EventSystemActor.GeneralChoice2() {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Failed_01_02_00', 'ASName': ''})
            } else {
                Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Failed_01_02_01', 'ASName': ''})
            }
            goto Event655
        } else {
            goto Event1042
        }
    }
}

void Game_shieldfireworks() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_IceVillage011")})

    Npc_IceVillage011.Demo_Talk({'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:suremi_fire_shield1', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2956.337158203125, 'Pattern1PosY': 679.2293701171875, 'Pattern1PosZ': -3138.620361328125, 'Pattern1AtX': -2954.953369140625, 'Pattern1AtY': 679.0724487304688, 'Pattern1AtZ': -3139.760498046875, 'Pattern1Fovy': 54.999996185302734, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
    Npc_IceVillage011.Demo_MoveToAnchor({'AnchorName': 'AnchorAction1', 'IsTurnToAnchorDir': True, 'AnchorUniqueName': '', 'ASKeyName': '', 'IsWaitFinish': False, 'IsAlignmentAnchor': False})
    Npc_IceVillage011.Demo_ChangeEmotion({'IsWaitFinish': False, 'IsOnlyFace': False, 'EmotionType': 'Normal'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'C-1', 'WarpDestPosName': 'Slemie_Anger'})
    Npc_IceVillage011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
}

void Senior_Camera() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 50.0, 'ReviseModeEnd': 0, 'Pattern1PosX': -3036.780029296875, 'Pattern1PosY': 684.760009765625, 'Pattern1PosZ': -3218.10009765625, 'Pattern1AtX': -3041.530029296875, 'Pattern1AtY': 683.280029296875, 'Pattern1AtZ': -3218.050048828125, 'MotionMode': 1, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3203.545166015625, 'Pattern1PosY': 644.2372436523438, 'Pattern1PosZ': -3235.53173828125, 'Pattern1AtX': -3210.330322265625, 'Pattern1AtY': 639.995361328125, 'Pattern1AtZ': -3237.6259765625, 'Pattern1Fovy': 50.00001907348633, 'Count': 150.0, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'StartCalcOnly': True, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:ExplainExpertCourseToBeginner_Expert_01', 'ASName': ''})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3206.0576171875, 'Pattern1PosY': 696.7341918945312, 'Pattern1PosZ': -3233.116455078125, 'Pattern1AtX': -3213.057861328125, 'Pattern1AtY': 692.6441650390625, 'Pattern1AtZ': -3231.475830078125, 'Pattern1Fovy': 50.00001907348633, 'Count': 60.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:ExplainExpertCourseToBeginner_Expert_02', 'ASName': ''})
    }

    Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'MiniGame_ShieldSurfing_Camera', 'IsWaitFinish': True})
}

void First_Camera() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    fork {
        WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 50.0, 'ReviseModeEnd': 0, 'Pattern1PosX': -3036.780029296875, 'Pattern1PosY': 684.760009765625, 'Pattern1PosZ': -3218.10009765625, 'Pattern1AtX': -3041.530029296875, 'Pattern1AtY': 683.280029296875, 'Pattern1AtZ': -3218.050048828125, 'MotionMode': 1, 'Count': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3203.545166015625, 'Pattern1PosY': 644.2372436523438, 'Pattern1PosZ': -3235.53173828125, 'Pattern1AtX': -3210.330322265625, 'Pattern1AtY': 639.995361328125, 'Pattern1AtZ': -3237.6259765625, 'Pattern1Fovy': 50.00001907348633, 'Count': 150.0, 'ReviseModeEnd': 0, 'Accept1FrameDelay': False, 'StartCalcOnly': True, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_IceVillage011.Demo_Talk({'ASName': 'Talk', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:AboutCourse_Beginner', 'IsCloseMessageDialog': True})
    }

    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
}

void Pouch_Check() {
    Npc_IceVillage011.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:Pouch_Check03', 'IsCloseMessageDialog': True, 'ASName': ''})

    call Common.EnableSaveAndWarp()

    if EventSystemActor.CheckFlag({'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'}) {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'MiniGame_ShieldSurfing_IsBeginnerCourse'})
    }
    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '', 'ForceRunTelop': False, 'StepName': 'Exit'})
    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
}

void Game_shieldfireworks_out() {

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    } {
        Npc_IceVillage011.Demo_BecomeSpeaker({'IsWaitFinish': True})
        Npc_IceVillage011.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsConfront': True, 'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'TurnDirection': 0.0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': 3, 'ActorName1': 'Npc_IceVillage011', 'ActorIgnoringCollision': -1, 'LngShiftRange': 0.0, 'LatShiftRange': 0.0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': True, 'Cushion': 0.0, 'Count': 0.0, 'MotionMode': 0, 'StartCalcOnly': False, 'FovyAppendMode': 1, 'AtAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'TargetActor2': -1, 'PosAppendMode': 2, 'ReviseModeEnd': 0, 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'Pattern1PosX': 1.0, 'Pattern1PosY': 6.0, 'Pattern1PosZ': 18.0, 'Pattern1AtY': 1.0})
    Npc_IceVillage011.Demo_Talk({'MessageId': 'EventFlowMsg/MiniGame_ShieldSurfing:suremi_fire_shield1', 'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
    Npc_IceVillage011.Demo_MoveToAnchor({'AnchorName': 'AnchorAction1', 'IsTurnToAnchorDir': True, 'AnchorUniqueName': '', 'ASKeyName': '', 'IsWaitFinish': False, 'IsAlignmentAnchor': False})
    Npc_IceVillage011.Demo_ChangeEmotion({'IsWaitFinish': False, 'IsOnlyFace': False, 'EmotionType': 'Normal'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'C-1', 'WarpDestPosName': 'Slemie_Anger_out'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2962.626953125, 'Pattern1PosY': 677.8529052734375, 'Pattern1PosZ': -3133.5732421875, 'Pattern1AtX': -2958.89990234375, 'Pattern1AtY': 678.4647827148438, 'Pattern1AtZ': -3136.449951171875, 'TargetActor1': -1, 'IsWaitFinish': True, 'TargetActor2': -1, 'PosAppendMode': 1, 'ActorIgnoringCollision': -1, 'LngShiftRange': 0.0, 'LatShiftRange': 0.0, 'Accept1FrameDelay': False, 'CollisionInterpolateSkip': True, 'Cushion': 0.0, 'Count': 0.0, 'MotionMode': 0, 'StartCalcOnly': False, 'ReviseModeEnd': 2, 'FovyAppendMode': 1, 'Pattern1Fovy': 55.0, 'AtAppendMode': 1, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    Npc_IceVillage011.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True})
}
