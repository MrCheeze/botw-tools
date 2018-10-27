-------- EventFlow: Demo205_1 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_XLinkEventCreate', 'Demo_LookAtObject', 'Demo_LookAtTheFront', 'Demo_SetPlayerDrawingSword']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayer', 'Demo_SwitchPlayerEquipment', 'Demo_WaitFrame', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_ResetMasterSwordForceMode', 'Demo_AutoSave', 'Demo_FlagON']
queries: ['CheckEventCancel']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_Korok_DekuTree_A_01
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameDataCalcMachine
entrypoint: None()
actions: []
queries: ['CompareGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[WarpEffect]
entrypoint: None()
actions: ['Demo_PlayerWarpEffectSet']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_NotifyTalk', 'Demo_Ctrl', 'Demo_KillAllDemoSound', 'Demo_GroupDisallowEmit', 'Demo_GroupAllowEmit']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall', 'Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[EfectWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[MasterSword]
entrypoint: None()
actions: ['Demo_ForceMasterSwordFakeForm', 'Demo_WaitFrame', 'Demo_SwitchPlayerEquipment']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_MasterSwordBase_100EnemyOut
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo205_1() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Stop', 'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce'})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 429.4076232910156, 'Pattern1PosY': 250.82566833496094, 'Pattern1PosZ': -2113.39990234375, 'Pattern1AtX': 432.8232116699219, 'Pattern1AtY': 250.73130798339844, 'Pattern1AtZ': -2109.196533203125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    SceneSoundCtrlTag.Demo_GroupDisallowEmit({'IsWaitFinish': True, 'GroupName': 'Weapon'})
    EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'PorchItemName_Weapon': 'Weapon_Sword_070', 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': ''})
    GameROMPlayer.Demo_SetPlayerDrawingSword({'IsWaitFinish': False})
    EventSystemActor.Demo_WarpPlayer({'WarpDestMapName': 'F-2', 'IsWaitFinish': True, 'WarpDestPosName': 'MasterSword'})
    SceneSoundCtrlTag.Demo_GroupAllowEmit({'IsWaitFinish': True, 'GroupName': 'Weapon'})
    EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 1, 'SetFrame': 1.0, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
    DgnObj_MasterSwordBase_100EnemyOut.Demo_Join({'IsWaitFinish': True})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Demo205_1-C01-Link-A-0_Loop'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'SceneName': 'C00-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1})
    } {
        GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'Demo205_1_WarpOut', 'ELinkKey': 'Demo202_1_Warp'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})

        fork {
            EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 0, 'SetFrame': 60.0, 'IsWaitFinish': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
        }

    }

    if !GameDataCalcMachine.CompareGameDataInt({'GameDataIntName_B': '100enemy_SwordPower_StartTmp', 'Operator': 'GreaterThan', 'GameDataIntName_A': 'MasterSword_Add_Power'}) {
        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'Demo205_1-C01-Link-A-0', 'IsWaitFinish': True, 'MorphingFrame': 10.0})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 79})
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        } {
            EventSystemActor[EfectWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 79})
            GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_100Dungeon_MasterSwordGlow02', 'SLinkKey': 'Demo_MasterSwordGlow_S', 'IsTargetDemoSLinkUser': True})
        } {
            EventSystemActor[MasterSword].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 147})
            EventSystemActor[MasterSword].Demo_ForceMasterSwordFakeForm({'IsWaitFinish': True})
        }

        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})

        fork {
            TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo205_1:Demo205_1_Text000', 'IsCloseMessageDialog': False})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo205_1-C02-Link-A-0', 'IsWaitFinish': False})
        }

        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.148253917694092, 'Pattern1PosY': 0.5242000222206116, 'Pattern1PosZ': -2.547485113143921, 'Pattern1AtX': -1.3636469841003418, 'Pattern1AtY': 4.3610382080078125, 'Pattern1AtZ': 8.6905517578125, 'Pattern1Fovy': 60.000030517578125, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo205_1:Demo205_1_Text001'})
        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
        if !EventSystemActor.CheckEventCancel() {
            Event167:
            SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.148253917694092, 'Pattern1PosY': 0.5242000222206116, 'Pattern1PosZ': -2.547485113143921, 'Pattern1AtX': -1.3636469841003418, 'Pattern1AtY': 4.3610382080078125, 'Pattern1AtZ': 8.6905517578125, 'Pattern1Fovy': 60.000030517578125, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

            call GetDemo.ShowGetDemoDialogByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Sword_080'})

            TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo205_1:Demo205_1_Text002', 'IsCloseMessageDialog': False})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.9718019962310791, 'Pattern1PosY': 4.1022491455078125, 'Pattern1PosZ': 4.287476062774658, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.7651209831237793, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'DemoMsg/Demo205_1:Demo205_1_Text003'})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': 30.0})
                GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
            } {
                GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.2522579431533813, 'Pattern1PosY': 2.0980069637298584, 'Pattern1PosZ': 5.367310047149658, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.8000030517578125, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Count': 60.0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True})
            }

            Event142:
            GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
            EventSystemActor.Demo_ResetMasterSwordForceMode({'IsWaitFinish': True})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StartWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '100enemy_KillMasterSwordBaseAttention'})

            call 100enemy.ClearJuniorMiddle()

            EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
        } else {
            EventSystemActor[MasterSword].Demo_SwitchPlayerEquipment({'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'IsWaitFinish': False, 'UnequipWeapon': True, 'PorchItemName_Weapon': ''})
            TwnObj_Village_Korok_DekuTree_A_01.Demo_PlayASForDemo({'ASName': 'Face_C_Default', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
            SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
            goto Event167
        }
    } else {
        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'IsWaitFinish': True, 'MorphingFrame': 10.0, 'NoErrorCheck': False, 'ASName': 'Demo205_1-C01-Link-A-0'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 79})
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
        } {
            EventSystemActor[MasterSword].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 147})
            EventSystemActor[MasterSword].Demo_ForceMasterSwordFakeForm({'IsWaitFinish': True})
        }

        EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': False})
        if !EventSystemActor.CheckEventCancel() {
            goto Event142
        } else {
            EventSystemActor[MasterSword].Demo_SwitchPlayerEquipment({'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': '', 'IsWaitFinish': False, 'UnequipWeapon': True, 'PorchItemName_Weapon': ''})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
            SceneSoundCtrlTag.Demo_KillAllDemoSound({'IsWaitFinish': True})
            goto Event142
        }
    }
}
