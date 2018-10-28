-------- EventFlow: Npc_AncientAssistant001 --------

Actor: Npc_AncientAssistant001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SellItem', 'Demo_OpenMessageDialog', 'Demo_SellPictureBookUI', 'Demo_TalkASync', 'Demo_TurnAndLookToObject', 'Demo_BecomeSpeaker', 'Demo_SalePictureReception', 'Demo_ShopFixedItemNum', 'Demo_ChangeEmotion', 'Demo_LookAtObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreasePorchItem', 'Demo_FlagON', 'Demo_FlagOFF', 'Demo_CallDemo', 'Demo_AppearRupee', 'Demo_CloseMessageDialog', 'Demo_CloseItemMenu', 'Demo_AutoSave', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_IncreaseRupee']
queries: ['CheckTimeType', 'HasPorchItem', 'CheckFlag', 'GeneralChoice2', 'IsItemInStock', 'CheckItemShopDecide', 'HasEnoughPayment', 'CheckItemShopSelect', 'CheckPictureBookVacancy', 'CheckSelectPicture', 'CheckAddPorchItem', 'CheckGameDataInt', 'CheckNumOfBuyPicture', 'RandomChoice2', 'GeneralChoice4', 'GeneralChoice3', 'RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_AncientDoctor
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

void Talk() {

    call Simon_PictureFullComp()


    call Simon_Hello()

    if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_FullComp'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_GetReward'}) {
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_Chat'})
                if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_FullCompFirst'}) {
                    Event89:
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk18', 'IsOverWriteLabelActorName': False})
                    Event35:
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_Intro'}) {
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk68', 'IsCloseMessageDialog': True})
                            Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_AncientAssistant001', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})

                            call PuruaCameraSmall()

                            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk71'})
                            Event525:

                            fork {
                                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 0.0})
                            } {
                                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk70', 'IsCloseMessageDialog': True})
                            }

                            Event456:
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk19'})
                            goto Event35
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientAssistant001_Intro', 'IsWaitFinish': True})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk67', 'IsCloseMessageDialog': True})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk68', 'IsCloseMessageDialog': True})
                            Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_AncientAssistant001', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})

                            call PuruaCameraSmall()

                            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk69'})
                            goto Event525
                        }
                      case 1:
                        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk17', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                        goto Event456
                      case 2:
                        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_ExplainStudy'}) {
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk22'})
                            Event321:
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk23', 'IsCloseMessageDialog': True})
                            goto Event456
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientAssistant001_ExplainStudy', 'IsWaitFinish': True})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk21', 'IsOverWriteLabelActorName': False})
                            goto Event321
                        }
                      case 3:
                        Event63:
                        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk16', 'IsOverWriteLabelActorName': False})
                    }
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientAssistant001_FullCompFirst', 'IsWaitFinish': True})
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk84'})
                }
            } else {

                call FullCompReward()

            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_Buy_First'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_Bought'}) {
                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk88'})
                Event572:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    if EventSystemActor.CheckFlag({'FlagName': 'GameClear'}) {
                        Event597:
                        EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
                        Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:Com_Talk_00'})
                        Event457:

                        call OpenYorozu2D()

                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_Are'}) {
                        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk95'})
                        if !EventSystemActor.GeneralChoice2() {
                            EventSystemActor.Demo_AppearRupee({'IsWaitFinish': True, 'IsVisible': 0})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Shop_IsSelectPurchase'})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk40', 'IsCloseMessageDialog': True})
                            goto Event457
                        } else {
                            goto Event63
                        }
                    } else {
                        goto Event597
                    }
                  case 1:
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk90'})
                    Event579:
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk93', 'IsCloseMessageDialog': False})
                    goto Event572
                  case 2:
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk94'})
                    goto Event579
                  case 3:
                    goto Event63
                }
            } else {
                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk47'})
                Event264:
                if !EventSystemActor.GeneralChoice2() {
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk29'})
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk57', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_ChoiceA'})
                    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'DemoName': 'Demo032_0', 'EntryPointName': 'Demo032_0', 'EndFade': 0})
                    Npc_AncientDoctor.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                    Event269:
                    if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_Bought'}) {
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Creature', 'VacancyNum': 1}) {
                            Event550:
                            Npc_AncientAssistant001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk55'})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk66'})
                            Event328:
                            EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                        } else
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Enemy', 'VacancyNum': 1}) {
                            goto Event550
                        } else
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Material', 'VacancyNum': 1}) {
                            goto Event550
                        } else
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Weapon', 'VacancyNum': 1}) {
                            goto Event550
                        } else
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Others', 'VacancyNum': 1}) {
                            goto Event550
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'GameClear'}) {
                            if EventSystemActor.CheckPictureBookVacancy({'VacancyNum': 1, 'Category': 'Boss'}) {
                                goto Event550
                            } else {

                                call FullCompReward()

                            }
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_Are'}) {
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk87', 'IsCloseMessageDialog': False})
                            Event563:
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk86'})
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientAssistant001_Are', 'IsWaitFinish': True})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk85', 'IsCloseMessageDialog': False})
                            goto Event563
                        }
                    } else {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})

                        call Common.ShowSheikPad({'Self': ActorIdentifier(name="Npc_AncientAssistant001")})

                        Npc_AncientAssistant001.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk52', 'ASName': 'Talk_WatchLink', 'IsCloseMessageDialog': True, 'IsWaitFinish': True})
                        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk06'})
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Creature', 'VacancyNum': 1}) {
                            Event184:
                            Npc_AncientAssistant001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk61'})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk65', 'IsCloseMessageDialog': True})
                            Event270:
                            Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': False, 'FaceId': 1, 'IsConfront': True})
                            Npc_AncientDoctor.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Talk_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3778.0927734375, 'Pattern1PosY': 358.3380126953125, 'Pattern1PosZ': 2130.44873046875, 'Pattern1AtX': 3775.895751953125, 'Pattern1AtY': 357.9323425292969, 'Pattern1AtZ': 2128.446533203125, 'Pattern1Fovy': 54.999996185302734, 'Count': 20.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk41', 'IsCloseMessageDialog': True})

                            call SimonCamera()

                            Npc_AncientAssistant001.Demo_BecomeSpeaker({'IsWaitFinish': True})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk56'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_Bought'})
                            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_BuyPicture'})
                            goto Event328
                        } else
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Enemy', 'VacancyNum': 1}) {
                            goto Event184
                        } else
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Material', 'VacancyNum': 1}) {
                            goto Event184
                        } else
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Weapon', 'VacancyNum': 1}) {
                            goto Event184
                        } else
                        if EventSystemActor.CheckPictureBookVacancy({'Category': 'Others', 'VacancyNum': 1}) {
                            goto Event184
                        } else
                        if EventSystemActor.CheckFlag({'FlagName': 'GameClear'}) {
                            if EventSystemActor.CheckPictureBookVacancy({'VacancyNum': 1, 'Category': 'Boss'}) {
                                goto Event184
                            } else {

                                call FullCompReward()

                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientAssistant001_Are', 'IsWaitFinish': True})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk85', 'IsCloseMessageDialog': False})
                            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk86'})
                            goto Event270
                        }
                    }
                } else {
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk39'})
                }
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'HatenoMini_CameraBoy_Buy_First', 'IsWaitFinish': True})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk43'})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk54', 'IsCloseMessageDialog': False})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk89', 'IsCloseMessageDialog': False})
            Event574:
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk90', 'IsCloseMessageDialog': False})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk91', 'IsCloseMessageDialog': False})
            if !EventSystemActor.GeneralChoice2() {
                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk92'})
                Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'FaceId': 1, 'IsValid': False})

                call PuruaCameraSmall()

                Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk44', 'IsCloseMessageDialog': True})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'ActorName': 'Npc_AncientAssistant001', 'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})

                fork {
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 0.0})
                } {
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk45'})
                }

                goto Event264
            } else {
                goto Event574
            }
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Activated'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'CarryingBlueFireEXMini_Permit'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientDoctor001_Irregular'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_IrregularFirst'}) {
                    goto Event89
                } else {
                    EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientAssistant001_IrregularFirst', 'IsWaitFinish': True})
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk42'})
                }
            } else {
                goto Event89
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_First'}) {
            goto Event89
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_GetOut'}) {
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk02'})
        } else {

            call ShowPadForSimon()

        }
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk01', 'IsOverWriteLabelActorName': False})
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk03', 'IsOverWriteLabelActorName': False})
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk04', 'IsOverWriteLabelActorName': False})
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk24', 'IsCloseMessageDialog': True})
        Npc_AncientAssistant001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': 'Npc_AncientDoctor', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'ObjectId': 1, 'IsConfront': True})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk07', 'IsOverWriteLabelActorName': False, 'ASName': 'Hello', 'IsCloseMessageDialog': True})
        Npc_AncientAssistant001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk08', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        Npc_AncientAssistant001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': 'Npc_AncientDoctor', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'ObjectId': 1, 'IsConfront': True})
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk10', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_AncientDoctor'})
        Npc_AncientDoctor.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
        Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 20.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})

        call PuruaCamera()

        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk51', 'ASName': 'Talk_Special', 'IsCloseMessageDialog': True})
        Npc_AncientAssistant001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 1, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_AncientAssistant001.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

        fork {
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'Count': 0.0})
        } {
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk11', 'IsOverWriteLabelActorName': False})
        } {
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_AncientAssistant001'})
        }

        EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientAssistant001_First', 'IsWaitFinish': True})
        Npc_AncientDoctor.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/CarryingBlueFireEXMini:near00', 'IsChecked': False, 'DispFrame': 90})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_GetOut'}) {
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk26'})
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'AncientLabo_AncientAssistant001_GetOut', 'IsWaitFinish': True})

        call ShowPadForSimon()

        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk25'})
    }
}

void SSLv2_Simon_Ready() {

    call Simon_Hello()

    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk30'})
    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk34'})
    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk77'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_Activated'})
}

void SSLv2_Simon_Finish() {

    call Simon_Hello()

    if EventSystemActor.HasPorchItem({'PorchItemName': 'Item_Mushroom_C', 'Count': 3}) {
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk32'})
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk37', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            Npc_AncientAssistant001.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'ASName': 'TalkHandOver', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk29'})
            if EventSystemActor.CheckAddPorchItem({'PorchItemName': 'Item_Mushroom_F', 'Count': 3}) {
                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk38'})
                EventSystemActor.Demo_IncreasePorchItem({'PorchItemName': 'Item_Mushroom_C', 'Value': -3, 'IsWaitFinish': True})

                call GetDemo.GetManyItemsByName({'IsInvalidOpenPouch': False, 'IncreaseTargetActorName': 'Item_Mushroom_F', 'GetNumber': 3, 'ShowDialogTargetActorName': 'Item_Mushroom_F_00'})

                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_Get'})
                Event98:
                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk33'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_Finish'})
                EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_BuyPicture'})
            } else {
                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk48'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk53'})
                } else {
                    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk09'})
                    goto Event98
                }
            }
        } else {
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk39'})
        }
    } else {
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk35'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk05', 'IsCloseMessageDialog': True})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk28'})
        } else {
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk16'})
        }
    }
}

void Simon_Hello() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'AncientLabo_AncientAssistant001_UpArea'}) {
        if !EventSystemActor.RandomChoice2() {
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk59'})
        } else {
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk60'})
        }
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else
    if Npc_AncientAssistant001.IsOnInstEventFlag() {
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk15'})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk12', 'IsOverWriteLabelActorName': False})
      case [2, 3, 4, 5]:
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk13', 'IsOverWriteLabelActorName': False})
      case [6, 7]:
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk14', 'IsOverWriteLabelActorName': False})
    }
}

void Simon_PictureFullComp() {
    if !EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_FullComp'})
    && !EventSystemActor.CheckPictureBookVacancy({'Category': 'Creature', 'VacancyNum': 1})
    && !EventSystemActor.CheckPictureBookVacancy({'Category': 'Enemy', 'VacancyNum': 1})
    && !EventSystemActor.CheckPictureBookVacancy({'Category': 'Material', 'VacancyNum': 1})
    && !EventSystemActor.CheckPictureBookVacancy({'Category': 'Weapon', 'VacancyNum': 1})
    && !EventSystemActor.CheckPictureBookVacancy({'Category': 'Others', 'VacancyNum': 1})
    && !EventSystemActor.CheckPictureBookVacancy({'VacancyNum': 1, 'Category': 'Boss'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_FullComp'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    }
}

void Near() {
    Npc_AncientAssistant001.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:near00', 'IsChecked': False, 'DispFrame': 90})
}

void OpenYorozu2D() {
    if EventSystemActor.CheckFlag({'FlagName': 'GameClear'}) {
        Npc_AncientAssistant001.Demo_SalePictureReception({'IsWaitFinish': True, 'TableName': 'GameClear'})
    } else {
        Npc_AncientAssistant001.Demo_SalePictureReception({'IsWaitFinish': True, 'TableName': 'Normal'})
    }
    switch EventSystemActor.CheckItemShopSelect() {
      case 0:
        if EventSystemActor.CheckItemShopDecide() {
            if EventSystemActor.IsItemInStock() {
                if EventSystemActor.HasEnoughPayment() {
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Shop_SelectItemNum', 'Operator': 'Equal', 'Value': 1}) {
                        Npc_AncientAssistant001.Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:Com_Talk_10', 'IsCloseMessageDialog': True})
                        Event205:
                        if !EventSystemActor.GeneralChoice2() {
                            if !EventSystemActor.CheckNumOfBuyPicture() {
                                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk82'})
                                Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk62', 'IsCloseMessageDialog': True})
                                if !EventSystemActor.GeneralChoice2() {
                                    Event467:
                                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                                    Npc_AncientAssistant001.Demo_SellItem({'IsWaitFinish': True})
                                    EventSystemActor.Demo_IncreaseRupee({'IsWaitFinish': True, 'Value': 0})
                                    Npc_AncientAssistant001.Demo_SellPictureBookUI({'IsWaitFinish': True, 'SellPicturePack': -1})
                                    NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk83'})
                                    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
                                    Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:Com_Talk_11', 'CloseDialogOption': 0})
                                    Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:Com_Talk_06'})

                                    call OpenYorozu2D()

                                } else {
                                    Event209:
                                    Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:Com_Talk_06'})
                                    Event359:

                                    call OpenYorozu2D()

                                }
                            } else {
                                goto Event467
                            }
                        } else {
                            goto Event209
                        }
                    } else {
                        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:Com_Talk_31', 'IsCloseMessageDialog': False})
                        switch EventSystemActor.GeneralChoice3() {
                          case 0:
                            Npc_AncientAssistant001.Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': False})
                            if EventSystemActor.HasEnoughPayment() {
                                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:Com_Talk_30'})
                                goto Event205
                            } else
                            Event609:
                            switch EventSystemActor.RandomChoice4() {
                              case 0:
                                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk100'})
                                goto Event359
                              case 1:
                                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk101'})
                                goto Event359
                              case 2:
                                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk102'})
                                goto Event359
                              case 3:
                                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk103'})
                                goto Event359
                            }
                          case 1:
                            Npc_AncientAssistant001.Demo_ShopFixedItemNum({'IsWaitFinish': True, 'IsSelectAll': True})
                            if EventSystemActor.HasEnoughPayment() {
                                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:Com_Talk_34', 'IsOverWriteLabelActorName': False})
                                goto Event205
                            } else
                            goto Event609
                          case 2:
                            goto Event209
                        }
                    }
                } else
                goto Event609
            } else
            switch EventSystemActor.RandomChoice4() {
              case 0:
                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk96'})
                goto Event359
              case 1:
                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk97'})
                goto Event359
              case 2:
                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk98'})
                goto Event359
              case 3:
                Npc_AncientAssistant001.Demo_OpenMessageDialog({'IsWaitFinish': True, 'CloseDialogOption': 1, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk99'})
                goto Event359
            }
        } else {
            goto Event209
        }
      case 2:
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        goto Event269
    }
}

void SSLv2_Simon_Sbot() {

    call Simon_Hello()

    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk74'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk75', 'IsCloseMessageDialog': True})

        call Common.ShowSheikPad({'Self': ActorIdentifier(name="Npc_AncientAssistant001")})

        if EventSystemActor.CheckSelectPicture({'ActorName': 'Item_Mushroom_C'}) {
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk36'})
            GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk76'})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk27'})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk63'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_Shot'})
        } else {
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk78'})
            Event412:
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk58'})
            Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk73'})
        }
    } else {
        goto Event412
    }
}

void FullCompReward() {
    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk64', 'IsCloseMessageDialog': True})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Obj_ProofBook'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_GetReward'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_FullComp'})
    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk104'})
    goto Event328
}

void ShowPadForSimon() {
    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk00', 'IsOverWriteLabelActorName': False})
    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk79', 'ASName': 'Talk_WatchLink'})
    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk80', 'IsCloseMessageDialog': True})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk81'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    }

    Npc_AncientAssistant001.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk20'})
}

void PuruaCamera() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3775.950439453125, 'Pattern1PosY': 357.650634765625, 'Pattern1PosZ': 2128.308349609375, 'Pattern1AtX': 3774.071533203125, 'Pattern1AtY': 357.59527587890625, 'Pattern1AtZ': 2124.0361328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'ActorName2': '', 'UniqueName2': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 30.0, 'TargetActor1': -1, 'TargetActor2': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void SimonCamera() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3778.16796875, 'Pattern1PosY': 358.57794189453125, 'Pattern1PosZ': 2129.35791015625, 'Pattern1AtX': 3777.93408203125, 'Pattern1AtY': 358.0953063964844, 'Pattern1AtZ': 2133.743896484375, 'Pattern1Fovy': 40.00001525878906, 'Count': 20.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}

void PuruaCameraSmall() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3776.99853515625, 'Pattern1PosY': 358.52752685546875, 'Pattern1PosZ': 2132.378173828125, 'Pattern1AtX': 3775.589111328125, 'Pattern1AtY': 357.9249572753906, 'Pattern1AtZ': 2129.79931640625, 'Pattern1Fovy': 54.999996185302734, 'Count': 30.0, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
}
