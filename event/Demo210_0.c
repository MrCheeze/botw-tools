-------- EventFlow: Demo210_0 --------

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_XLinkEventCreate', 'Demo_SetPlayerDrawingSword']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_SwitchPlayerEquipment', 'Demo_WaitFrame', 'Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_ResetMasterSwordForceMode', 'Demo_ForceMasterSwordFakeForm', 'Demo_AutoSave']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_Korok_DekuTree_A_01
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl', 'Demo_NotifyTalk', 'Demo_GroupDisallowEmit', 'Demo_GroupAllowEmit']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventCloudShadowOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag[forCut03]
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag[forCut02]
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Kokiri008
entrypoint: None()
actions: ['Demo_VisibleOff', 'Demo_VisibleOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo210_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    Npc_Kokiri008.Demo_VisibleOff({'IsWaitFinish': False})
    WorldManagerControl.Demo_EventCloudShadowOff({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 433.586181640625, 'Pattern1PosY': 249.39791870117188, 'Pattern1PosZ': -2098.390380859375, 'Pattern1AtX': 431.2502136230469, 'Pattern1AtY': 255.50094604492188, 'Pattern1AtZ': -2113.20703125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        SceneSoundCtrlTag.Demo_GroupDisallowEmit({'GroupName': 'Weapon', 'IsWaitFinish': True})
        EventSystemActor.Demo_SwitchPlayerEquipment({'IsWaitFinish': True, 'PorchItemName_Weapon': 'Weapon_Sword_070', 'UnequipWeapon': False, 'UnequipShield': False, 'UnequipBow': False, 'UnequipArmorHead': False, 'UnequipArmorUpper': False, 'UnequipArmorLower': False, 'PorchItemName_Shield': '', 'PorchItemName_Bow': '', 'PorchItemName_ArmorHead': '', 'PorchItemName_ArmorUpper': '', 'PorchItemName_ArmorLower': '', 'PorchItemName_Arrow': ''})
        GameROMPlayer.Demo_SetPlayerDrawingSword({'IsWaitFinish': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 431.8999938964844, 'DestinationY': 249.7100067138672, 'DestinationZ': -2109.199951171875, 'IsWaitFinish': True, 'DirectionY': 180.0})
        SceneSoundCtrlTag.Demo_GroupAllowEmit({'GroupName': 'Weapon', 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'IsWaitFinish': True, 'ASName': 'Demo210_0-C01-Link-A-0', 'MorphingFrame': 0.0, 'ClothWarpMode': 1})
    } {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 0, 'Frame': 1, 'DispMode': 'NoLogo'})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ASName': 'Demo210_0-C02-Link-A-0', 'IsWaitFinish': True, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -1, 'MorphingFrame': 0.0})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C02-1', 'IsWaitFinish': True, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'TargetActorDirReferenceMode': 1})
    } {
        SoundTriggerTag[forCut02].Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_SwordAura', 'SoundDelay': 0, 'SLinkInst': ''})
    }

    SoundTriggerTag[forCut02].Demo_SoundTriggerFade({'IsWaitFinish': False, 'Sound': 'Demo_SwordAura'})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ASName': 'Demo210_0-C03-Link-A-0', 'IsWaitFinish': True, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': 0.0, 'ClothWarpMode': 1})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C03-1', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1})
    } {
        SoundTriggerTag[forCut03].Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_SwordAura_S'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
        SoundTriggerTag[forCut03].Demo_SoundTriggerFade({'IsWaitFinish': False, 'Sound': 'Demo_SwordAura_S'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        EventBgmCtrlTag.Demo_Start({'BgmName': 'EnduranceDungeonClear00Bgm', 'IsWaitFinish': True})
    }


    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'ASName': 'Demo210_0-C04-Link-A-0', 'NoErrorCheck': True, 'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 430.9985656738281, 'Pattern1PosY': 250.30825805664062, 'Pattern1PosZ': -2113.709716796875, 'Pattern1AtX': 431.7231140136719, 'Pattern1AtY': 252.74850463867188, 'Pattern1AtZ': -2111.975830078125, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 160})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo210_0_FaiMasterSwordGlow', 'SLinkKey': 'Demo_FaiGlow', 'IsTargetDemoSLinkUser': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 225})
            EventSystemActor.Demo_ForceMasterSwordFakeForm({'IsWaitFinish': True})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C04-2'})
        }

    }


    fork {
        EventSystemActor.Demo_ResetMasterSwordForceMode({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo210_0:Demo210_0_Text000', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'ASName': 'Face_C_Talk', 'IsCloseMessageDialog': False})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo210_0:Demo210_0_Text001', 'IsWaitFinish': True, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsCloseMessageDialog': False})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo210_0:Demo210_0_Text002', 'IsWaitFinish': True, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsCloseMessageDialog': True})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': 0.0, 'ASName': 'Demo210_0-C05-Link-A-0', 'IsWaitFinish': False, 'ClothWarpMode': 1})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 434.22613525390625, 'Pattern1PosY': 250.0893096923828, 'Pattern1PosZ': -2106.831298828125, 'Pattern1AtX': 428.4447021484375, 'Pattern1AtY': 255.89654541015625, 'Pattern1AtZ': -2120.27392578125, 'Pattern1Fovy': 60.000030517578125, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }


    call GetDemo.ShowGetDemoDialogByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Weapon_Sword_081'})

    EventBgmCtrlTag.Demo_Start({'BgmName': 'EnduranceDungeonClear01Bgm', 'IsWaitFinish': True})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo210_0:Demo210_0_Text003', 'IsWaitFinish': True, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsCloseMessageDialog': False})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo210_0:Demo210_0_Text004', 'IsWaitFinish': True, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsCloseMessageDialog': False})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo210_0:Demo210_0_Text005', 'IsCloseMessageDialog': False})
        TwnObj_Village_Korok_DekuTree_A_01.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'MessageId': 'DemoMsg/Demo210_0:Demo210_0_Text006', 'IsCloseMessageDialog': True})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': -1, 'MorphingFrame': 0.0, 'IsWaitFinish': False, 'ASName': 'DemoWait'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 433.9055480957031, 'Pattern1PosY': 250.46551513671875, 'Pattern1PosZ': -2096.311767578125, 'Pattern1AtX': 430.357421875, 'Pattern1AtY': 262.9874572753906, 'Pattern1AtZ': -2119.1171875, 'Pattern1Fovy': 27.999988555908203, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

    GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C07-1', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1})
    EventBgmCtrlTag.Demo_Stop({'BgmName': 'EnduranceDungeonClear01Bgm', 'IsWaitFinish': True, 'FadeSec': 5.0})
    Fader.Demo_FadeOut({'Frame': 0, 'DispMode': 'Logo', 'IsWaitFinish': True, 'Color': 1})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    Npc_Kokiri008.Demo_VisibleOn({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Logo', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})
    EventSystemActor.Demo_ResetMasterSwordForceMode({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '100enemy_KillMasterSwordBaseAttention'})
    EventSystemActor.Demo_FlagON({'FlagName': '100enemy_Finish', 'IsWaitFinish': True})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}
