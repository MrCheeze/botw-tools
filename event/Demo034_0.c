-------- EventFlow: Demo034_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Talk', 'Demo_ResetBoneCtrl', 'Demo_LookAtObject', 'Demo_PlayASAdapt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_RecoverPlayerEnergy', 'Demo_RecoverPlayerLife', 'Demo_WarpPlayer', 'Demo_CancelSleepActor', 'Demo_SleepActor', 'Demo_AutoSave', 'Demo_AppearNumDungeonClrSeal', 'Demo_DisappearNumDungeonClrSeal', 'Demo_IncreaseNumDungeonClrSeal', 'Demo_CallDemo', 'Demo_SetDispHeartGauge', 'Demo_SetDispStaminaGauge', 'Demo_WaitFrame', 'Demo_IncreaseGameDataInt']
queries: ['CheckFlag', 'GeneralChoice3', 'HasPorchItem', 'CheckGameDataInt', 'ComparePlayerMaxHeart', 'ComparePlayerMaxStamina']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_GoddesStatue_A_02
entrypoint: None()
actions: ['Demo_XLinkEventFade', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_GoddesStatue_A_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetDiffuseAttenuate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_StaminaUtuwa_A_01
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_EnableModelDraw', 'Demo_DisableContactLayerTrig']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_HeartUtuwa_A_01
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_EnableModelDraw', 'Demo_DisableContactLayerTrig']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_SuperGoddesStatue_A_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter[test]
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_GoddesStatue_A_10
entrypoint: None()
actions: ['Demo_XLinkEventFade', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[down]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[camera]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_StaminaUtuwa_A_01[GetMatome(Obj_Utuwa)]
entrypoint: GetMatome(Obj_Utuwa)
actions: ['Demo_XLinkEventCreate', 'Demo_MoveToHomeMtx']
queries: []
params: None

void Demo034_0_1() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Ichikara'}) {

        call Camera_SmallGoddess({'WarpDestPosName': 'GoddessIchikara', 'MapAreaID': 'I-3'})

        Event419:

        fork {
            TwnObj_GoddesStatue_A_02.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Aureole', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Aureole'})
        } {
            WorldManagerControl.Demo_EventSetDiffuseAttenuate({'IsWaitFinish': True, 'diameter': 0.30000001192092896})
        }


        call GetUtuwa()

        TwnObj_GoddesStatue_A_02.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Aureole'})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Hateno'}) {

            call Camera_SmallGoddess({'MapAreaID': 'I-7', 'WarpDestPosName': 'GoddessHateno'})

            goto Event419
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Uotori'}) {

                call Camera_SmallGoddess({'WarpDestPosName': 'GoddessUotori', 'MapAreaID': 'H-8'})

                goto Event419
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Kakariko'}) {

                    call Camera_SmallGoddess({'MapAreaID': 'G-5', 'WarpDestPosName': 'GoddessKakariko'})

                    goto Event419
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Gerudo'}) {

                        call Camera_SmallGoddess({'WarpDestPosName': 'GoddessGerudo', 'MapAreaID': 'B-7'})

                        goto Event419
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Goron'}) {

                            call Camera_SmallGoddess({'WarpDestPosName': 'GoddessGoron', 'MapAreaID': 'G-2'})

                            goto Event419
                        } else {
                            if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Zora'}) {

                                call Camera_SmallGoddess({'WarpDestPosName': 'GoddessZora', 'MapAreaID': 'I-4'})

                                goto Event419
                            } else {
                                if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Hateno'}) {

                                    call Camera_SmallGoddess({'WarpDestPosName': 'GoddessHateno', 'MapAreaID': 'I-7'})

                                    goto Event419
                                } else {
                                    if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Rito'}) {

                                        call Camera_SmallGoddess({'WarpDestPosName': 'GoddessRito', 'MapAreaID': 'B-3'})

                                        goto Event419
                                    } else {
                                        if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_Korok'}) {

                                            call Camera_SmallGoddess({'WarpDestPosName': 'GoddessKorok', 'MapAreaID': 'F-2'})

                                            goto Event419
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void GetAndFinish() {
    Starter.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk11'})
    EventSystemActor.Demo_SetDispStaminaGauge({'IsDisplayEx': False, 'IsDisplay': False, 'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_FirstColony010_AppearHeart'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_FirstColony010_AppearStamina'})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    Event206:
    EventSystemActor.Demo_DisappearNumDungeonClrSeal({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_FirstColony010_Heart'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_FirstColony010_Stamina'})
    SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'EndTalk', 'IsWaitFinish': True})
}

void GetMatome() {
    Starter.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk08'})
    EventSystemActor.Demo_IncreaseNumDungeonClrSeal({'Value': -4, 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    EventSystemActor.Demo_DisappearNumDungeonClrSeal({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    if EventSystemActor.CheckFlag({'FlagName': 'FirstGetUtsuwaFlag'}) {
        Event436:
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_FirstColony010_ChoiceGanbari', 'IsWaitFinish': True})

        call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'CheckTargetActorName'})

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Utuwa'})
        EventSystemActor.Demo_IncreaseGameDataInt({'IsWaitFinish': True, 'GameDataIntName': 'Npc_Goddess_UtuwaSum', 'Value': 4})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'MuteOff', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        EventSystemActor.Demo_AppearNumDungeonClrSeal({'IsWaitFinish': True})
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_FirstColony010_King'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AppearFlagName'})
        EventSystemActor.Demo_CancelSleepActor({'IsWaitFinish': True, 'InstanceName': '', 'ActorName': 'ActorName'})

        fork {
            EventSystemActor[camera].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 2, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': True})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsOneTimeEndKeep': True, 'ASName': 'Demo034_0-C05-Link-A-0', 'MorphingFrame': 10.0, 'NoErrorCheck': False, 'ClothWarpMode': -2})
        } {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony010_ChoiceGanbari'}) {
                Obj_StaminaUtuwa_A_01.Demo_DisableContactLayerTrig({'IsWaitFinish': False, 'ContactType': 0})
                Obj_StaminaUtuwa_A_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Demo034_0-C05-Item_StaminaUtuwa-A-0'})
                Obj_StaminaUtuwa_A_01.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Kirakira', 'SLinkKey': 'Kirakira', 'IsTargetDemoSLinkUser': False})
                Obj_StaminaUtuwa_A_01.Demo_EnableModelDraw({'IsWaitFinish': True})
            } else {
                Obj_HeartUtuwa_A_01.Demo_DisableContactLayerTrig({'IsWaitFinish': False, 'ContactType': 0})
                Obj_HeartUtuwa_A_01.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Demo034_0-C05-Item_HeartUtuwa-A-0'})
                Obj_HeartUtuwa_A_01.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Kirakira', 'SLinkKey': 'Kirakira', 'IsTargetDemoSLinkUser': False})
                Obj_HeartUtuwa_A_01.Demo_EnableModelDraw({'IsWaitFinish': True})
            }
        }

        Obj_StaminaUtuwa_A_01[GetMatome(Obj_Utuwa)].Demo_XLinkEventCreate({'IsWaitFinish': False, 'Key': 'Kirakira', 'Target': 'B', 'SLinkKey': '', 'ELinkKey': 'Demo_Disappear', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 0})
        Obj_StaminaUtuwa_A_01[GetMatome(Obj_Utuwa)].Demo_MoveToHomeMtx({'IsWaitFinish': False})
        EventSystemActor.Demo_SleepActor({'IsWaitFinish': True, 'InstanceName': '', 'ActorName': 'ActorName'})

        fork {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstGetUtsuwaFlag'})
        } {
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_SpaGoddess_Talking'}) {
                GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'ActorName': 'TwnObj_GoddesStatue_A_10', 'SceneName': 'C01-6', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony010_Talking'}) {
                    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'SceneName': 'C01-1', 'ActorName': 'TwnObj_GoddesStatue_A_01', 'IsWaitFinish': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Npc_SuperGoddess_Talking'}) {
                        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C01-5', 'ActorName': 'TwnObj_SuperGoddesStatue_A_01', 'Accept1FrameDelay': False, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                    } else {
                        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'ActorName': 'TwnObj_GoddesStatue_A_02', 'SceneName': 'C01-3', 'IsWaitFinish': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                    }
                }
            }
        }


        fork {
            goto Event436
        } {
            EventSystemActor[down].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

            fork {
                GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'ASName': 'Demo034_0-C05-Link-A-1', 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            } {
                GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ObjectId': 3, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': ''})
            }

            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
        }

    }
}

void Camera_SmallGoddess() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony010_First'}) {

        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.7838129997253418, 'Pattern1PosY': 2.109924077987671, 'Pattern1PosZ': 3.75, 'Pattern1AtX': 0.17559799551963806, 'Pattern1AtY': 1.4460599422454834, 'Pattern1AtZ': -0.13085900247097015, 'Pattern1Fovy': 30.000015258789062, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_GoddesStatue_A_02', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.883239984512329, 'Pattern1PosY': 2.143462896347046, 'Pattern1PosZ': 3.946777105331421, 'Pattern1AtX': 0.17559799551963806, 'Pattern1AtY': 1.4460599422454834, 'Pattern1AtZ': -0.13085900247097015, 'Pattern1Fovy': 30.000015258789062, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_GoddesStatue_A_02', 'Count': 30.0, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_02', 'SceneName': 'C01-3', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
        } {
            GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'MapAreaID', 'WarpDestPosName': 'WarpDestPosName'})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
        }

    } else {

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_02', 'SceneName': 'C01-2', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'MapAreaID', 'WarpDestPosName': 'WarpDestPosName'})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
        }

    }
}

void GetUtuwa() {
    EventSystemActor.Demo_SetDispHeartGauge({'IsWaitFinish': True, 'IsDisplayEx': False, 'IsDisplay': True, 'IsGetDemo': False})
    EventSystemActor.Demo_AppearNumDungeonClrSeal({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Npc_Goddess_UtuwaSum', 'Operator': 'GreaterThanOrEqualTo', 'Value': 124}) {
        Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk33'})
        Event295:

        call GetAndFinish()

    } else {
        if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 30}) {
            Event25:
            Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk01'})
            if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony010_First'}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_DungeonClearSeal', 'Count': 4}) {
                    Event517:
                    EventSystemActor.Demo_SetDispStaminaGauge({'IsDisplay': True, 'IsDisplayEx': False, 'IsWaitFinish': True})
                    Event22:
                    Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk07'})
                    Event27:
                    switch EventSystemActor.GeneralChoice3() {
                      case 0:
                        if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 30}) {
                            Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk04'})
                            Event30:
                            switch EventSystemActor.GeneralChoice3() {
                              case 0:
                                EventSystemActor.Demo_SetDispStaminaGauge({'IsDisplayEx': False, 'IsDisplay': False, 'IsWaitFinish': True})

                                call GetMatome({'AppearFlagName': 'Npc_FirstColony010_AppearHeart', 'FirstGetUtsuwaFlag': 'Npc_FirstColony010_Heart', 'IsGet_Utuwa': 'IsGet_Obj_HeartUtuwa_A_01', 'ActorName': 'Obj_HeartUtuwa_A_01', 'CheckTargetActorName': 'Obj_HeartUtuwa_A_01', 'Obj_Utuwa': ActorIdentifier(name="Obj_HeartUtuwa_A_01")})

                                EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
                                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Npc_Goddess_UtuwaSum', 'Operator': 'GreaterThanOrEqualTo', 'Value': 124}) {
                                    Event701:
                                    Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk33'})
                                    Event145:

                                    call GetAndFinish()

                                } else {
                                    if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 30}) {
                                        Event43:
                                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_DungeonClearSeal', 'Count': 4}) {
                                            GameROMPlayer.Demo_Talk({'GreetingType': 'NotAndNot', 'IsWaitFinish': False})
                                            Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk13'})
                                            goto Event517
                                        } else {
                                            goto Event145
                                        }
                                    } else {
                                        Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk15'})
                                        goto Event43
                                    }
                                }
                              case 1:
                                Event45:
                                Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk14'})
                                goto Event27
                              case 2:
                                Event144:

                                call GetAndFinish()

                            }
                        } else {
                            Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk15'})
                            if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 15}) {
                                Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk19'})
                                Event31:
                                switch EventSystemActor.GeneralChoice3() {
                                  case 0:
                                    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_FirstColony010_ChoiceGanbari', 'IsWaitFinish': True})
                                    EventSystemActor.Demo_SetDispStaminaGauge({'IsDisplayEx': False, 'IsDisplay': False, 'IsWaitFinish': True})

                                    call GetMatome({'AppearFlagName': 'Npc_FirstColony010_AppearStamina', 'FirstGetUtsuwaFlag': 'Npc_FirstColony010_Stamina', 'IsGet_Utuwa': 'IsGet_Obj_StaminaUtuwa_A_01', 'ActorName': 'Obj_StaminaUtuwa_A_01', 'CheckTargetActorName': 'Obj_StaminaUtuwa_A_01', 'Obj_Utuwa': ActorIdentifier(name="Obj_StaminaUtuwa_A_01")})

                                    EventSystemActor.Demo_RecoverPlayerEnergy({'IsWaitFinish': True})
                                    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Npc_Goddess_UtuwaSum', 'Operator': 'GreaterThanOrEqualTo', 'Value': 124}) {
                                        goto Event701
                                    } else {
                                        if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 15}) {
                                            goto Event43
                                        } else {
                                            Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk16'})
                                            goto Event43
                                        }
                                    }
                                  case 1:
                                    goto Event45
                                  case 2:
                                    goto Event144
                                }
                            } else {
                                Event334:

                                call GetAndFinish()

                            }
                        }
                      case 1:
                        if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 15}) {
                            Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk05'})
                            goto Event31
                        } else {
                            Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk16'})
                            if !EventSystemActor.ComparePlayerMaxHeart({'Threshold': 30}) {
                                Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk18'})
                                goto Event30
                            } else {
                                goto Event334
                            }
                        }
                      case 2:
                        goto Event334
                    }
                } else {
                    Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk09'})
                    Event26:
                    Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk02'})
                    goto Event206
                }
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_FirstColony010_First', 'IsWaitFinish': True})
                Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk09'})
                if EventSystemActor.HasPorchItem({'PorchItemName': 'Obj_DungeonClearSeal', 'Count': 4}) {
                    Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk12'})
                    goto Event22
                } else {
                    goto Event26
                }
            }
        } else {
            if !EventSystemActor.ComparePlayerMaxStamina({'Threshold': 15}) {
                goto Event25
            } else {
                Starter.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk17'})
                goto Event295
            }
        }
    }
}

void Demo034_0_0() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_FirstColony010_Talking', 'IsWaitFinish': True})
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'DungeonClearCounter', 'Operator': 'GreaterThanOrEqualTo', 'Value': 1}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony010_First'}) {

            fork {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.011687994003296, 'Pattern1PosY': 3.113677978515625, 'Pattern1PosZ': 5.444091796875, 'Pattern1AtX': 0.2759400010108948, 'Pattern1AtY': 5.626143932342529, 'Pattern1AtZ': 0.6584470272064209, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_GoddesStatue_A_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.05731201171875, 'Pattern1PosY': 3.0245211124420166, 'Pattern1PosZ': 5.613770008087158, 'Pattern1AtX': 0.2759400010108948, 'Pattern1AtY': 5.626143932342529, 'Pattern1AtZ': 0.6584470272064209, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_GoddesStatue_A_01', 'Cushion': 10.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 45.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_01', 'SceneName': 'C01-1', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
            } {
                GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
                EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'UtuwaGet', 'WarpDestMapName': 'E-6'})
                GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
            } {
                TwnObj_GoddesStatue_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Aureole', 'SLinkKey': 'Aureole', 'IsTargetDemoSLinkUser': False})
            }

            Event164:
            if EventSystemActor.CheckFlag({'FlagName': 'FindDungeon_AllClear'}) {
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Tennokoe_Ready', 'IsWaitFinish': True})
                Event440:

                call GetUtuwa()

                EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_FirstColony010_Talking', 'IsWaitFinish': True})
                TwnObj_GoddesStatue_A_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Aureole'})
                if !EventSystemActor.CheckFlag({'FlagName': 'FindDungeon_Finish'}) {
                    if !EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Tennokoe'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'FindDungeon_AllClear'}) {
                            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.308655023574829, 'Pattern1PosY': 2.0979459285736084, 'Pattern1PosZ': -4.392578125, 'Pattern1AtX': 0.002257999964058399, 'Pattern1AtY': 1.6499940156936646, 'Pattern1AtZ': 0.7041019797325134, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Cushion': 0.30000001192092896, 'CollisionInterpolateSkip': False, 'Count': 30.0, 'MotionMode': 1, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'Tennokoe', 'DemoName': 'Npc_King_Common', 'EndFade': 0})
                        }
                    }
                }
            } else {
                goto Event440
            }
        } else {

            fork {
                GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0', 'IsWaitFinish': True, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_01', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            } {
                EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'UtuwaGet', 'WarpDestMapName': 'E-6'})
                GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
            } {
                TwnObj_GoddesStatue_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Aureole', 'SLinkKey': 'Aureole', 'IsTargetDemoSLinkUser': False})
            }

            goto Event164
        }
    } else {

        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.011687994003296, 'Pattern1PosY': 3.113677978515625, 'Pattern1PosZ': 5.444091796875, 'Pattern1AtX': 0.2759400010108948, 'Pattern1AtY': 5.626143932342529, 'Pattern1AtZ': 0.6584470272064209, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_GoddesStatue_A_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.05731201171875, 'Pattern1PosY': 3.0245211124420166, 'Pattern1PosZ': 5.613770008087158, 'Pattern1AtX': 0.2759400010108948, 'Pattern1AtY': 5.626143932342529, 'Pattern1AtZ': 0.6584470272064209, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_GoddesStatue_A_01', 'Cushion': 10.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 45.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'TwnObj_GoddesStatue_A_01', 'SceneName': 'C01-1', 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'UtuwaGet', 'WarpDestMapName': 'E-6'})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
        }

        Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk00'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.306427001953125, 'Pattern1PosY': 2.0979459285736084, 'Pattern1PosZ': -5.096436023712158, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.6499940156936646, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Count': 20.0, 'Cushion': 0.10000000149011612, 'MotionMode': 1, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_FirstColony010_Talking', 'IsWaitFinish': True})
    }
}

void Demo034_0_2() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_SuperGoddess_Talking', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony010_First'}) {

        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 14.142333984375, 'Pattern1PosY': 20.362300872802734, 'Pattern1PosZ': 35.5670166015625, 'Pattern1AtX': 9.36669921875, 'Pattern1AtY': 23.592761993408203, 'Pattern1AtZ': 25.483642578125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_SuperGoddesStatue_A_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 14.60791015625, 'Pattern1PosY': 20.04730224609375, 'Pattern1PosZ': 36.5501708984375, 'Pattern1AtX': 9.36669921875, 'Pattern1AtY': 23.592761993408203, 'Pattern1AtZ': 25.483642578125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_SuperGoddesStatue_A_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 40.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C01-5', 'ActorName': 'TwnObj_SuperGoddesStatue_A_01', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
        } {
            GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'D-2', 'WarpDestPosName': 'GoddessForgottenShrine'})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
        }

        Event467:

        fork {
            TwnObj_SuperGoddesStatue_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Aureole', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Aureole'})
        } {
            WorldManagerControl.Demo_EventSetDiffuseAttenuate({'IsWaitFinish': True, 'diameter': 0.30000001192092896})
        }


        call GetUtuwa()

        EventSystemActor.Demo_FlagOFF({'FlagName': 'Npc_SuperGoddess_Talking', 'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.070312976837158, 'Pattern1PosY': 3.9248409271240234, 'Pattern1PosZ': 31.88818359375, 'Pattern1AtX': 2.596436023712158, 'Pattern1AtY': 4.116950988769531, 'Pattern1AtZ': 26.87353515625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_SuperGoddesStatue_A_01', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        TwnObj_SuperGoddesStatue_A_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Aureole'})
    } else {

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C01-4', 'ActorName': 'TwnObj_SuperGoddesStatue_A_01', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'D-2', 'WarpDestPosName': 'GoddessForgottenShrine'})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
        }

        goto Event467
    }
}

void Demo034_0_3() {
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_SpaGoddess_Talking'})
    if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_PowerSpa'}) {

        call 3SpaGoddess({'OpenDoorFlagName': 'Enemy_Dragon_Fire_DoorOpen', 'WarpDestMapName': 'I-2', 'WarpDestPosName': 'GoddessPowerSpa', 'TalkFirstFlagName': 'NPC_GoddessStatue_PowerSpa_First'})

        Event541:
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Npc_SpaGoddess_Talking'})
        TwnObj_GoddesStatue_A_10.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Aureole'})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_BraveSpa'}) {

            call 3SpaGoddess({'OpenDoorFlagName': 'Enemy_Dragon_Electric_DoorOpen', 'WarpDestMapName': 'F-7', 'WarpDestPosName': 'GoddessBraveSpa', 'TalkFirstFlagName': 'NPC_GoddessStatue_BraveSpa_First'})

            goto Event541
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_WisdomSpa'}) {

                call 3SpaGoddess({'OpenDoorFlagName': 'Enemy_Dragon_Ice_DoorOpen', 'WarpDestMapName': 'I-6', 'WarpDestPosName': 'GoddessWisdomSpa', 'TalkFirstFlagName': 'NPC_GoddessStatue_WisdomSpa_First'})

                goto Event541
            }
        }
    }
}

void 3SpaGoddess() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.4234620332717896, 'Pattern1PosY': 1.3263700008392334, 'Pattern1PosZ': 4.174315929412842, 'Pattern1AtX': 0.23486299812793732, 'Pattern1AtY': 3.486907958984375, 'Pattern1AtZ': 0.7666019797325134, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_GoddesStatue_A_10', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.490844964981079, 'Pattern1PosY': 1.2386399507522583, 'Pattern1PosZ': 4.312012195587158, 'Pattern1AtX': 0.23486299812793732, 'Pattern1AtY': 3.486907958984375, 'Pattern1AtZ': 0.7666019797325134, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'TwnObj_GoddesStatue_A_10', 'Count': 45.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'ActorName': 'TwnObj_GoddesStatue_A_10', 'SceneName': 'C01-6', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
    } {
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'WarpDestMapName', 'WarpDestPosName': 'WarpDestPosName'})
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 3, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        GameROMPlayer.Demo_Talk({'IsWaitFinish': True, 'GreetingType': 'NotAndNot'})
    } {
        TwnObj_GoddesStatue_A_10.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Aureole', 'SLinkKey': 'Aureole', 'IsTargetDemoSLinkUser': False})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_WisdomSpa'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Open_Dungeon117'}) {
            Event686:

            call GetUtuwa()

        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Enemy_Dragon_Ice_DoorOpen'}) {
                Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk30'})
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Enemy_Dragon_Ice_DropItem'}) {
                    Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk32'})
                } else {
                    if EventSystemActor.CheckFlag({'FlagName': 'Enemy_Dragon_Ice_GrudgeDestroyDemoEnd'}) {
                        Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk23'})
                        Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk24'})
                    } else {
                        Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk22'})
                    }
                }
            }
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'OpenDoorFlagName'}) {
            goto Event686
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'TalkFirstFlagName'}) {
                Event692:
                if EventSystemActor.CheckFlag({'FlagName': 'NPC_GoddessStatue_BraveSpa'}) {
                    Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk28'})
                    Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk31'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'MouthofDragon_Step1', 'IsWaitFinish': True})
                } else {
                    Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk27'})
                    Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk31'})
                    EventSystemActor.Demo_FlagON({'FlagName': 'HigakkareMini_RedDragon_Step1', 'IsWaitFinish': True})
                }
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'TalkFirstFlagName'})
                Starter[test].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo034_0:talk20'})
                goto Event692
            }
        }
    }
}
