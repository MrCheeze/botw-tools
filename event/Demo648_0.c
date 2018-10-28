-------- EventFlow: Demo648_0 --------

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_OpenDungeonMessage', 'Demo_WaitFrame', 'Demo_ResetGimmick', 'Demo_WarpPlayerToDestination', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_FlagOFF', 'Demo_AutoSave', 'Demo_ForceSetPlayerSavePosAngle', 'Demo_FlagON']
queries: ['CheckEventCancel', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_GameCamera', 'Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_Unequip', 'Demo_ResetBoneCtrl', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_XLinkEventKill']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_StopAllDemoSound', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall', 'Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc2nd_Boss
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_VisibleOff', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Priest_Boss_Normal[Priest_Boss_Normal]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_Join', 'Demo_WarpToAnchor', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_VisibleOff', 'Demo_']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger', 'Demo_SoundTriggerFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[WarpEffect]
entrypoint: None()
actions: ['Demo_PlayerWarpEffectSet']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_GoalShield_A
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_Join', 'Demo_XLinkEventKill']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: DgnObj_DLC_IbutsuEx_F_GoalSystem_A_01
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[forBGM]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetWeather']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo648_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})

    call FlagOperationBeforeDemo()

    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})

    call C01Before({'Arg_DestinationX': 'Arg_DestinationX', 'Arg_DestinationY': 'Arg_DestinationY', 'Arg_DestinationZ': 'Arg_DestinationZ', 'Arg_DestinationDirY': 'Arg_DestinationDirY'})


    call C01()


    call C02()


    call C03-05()


    call C06Before()


    call C06-08()

    EventSystemActor.Demo_ForceSetPlayerSavePosAngle({'AnchorName': 'ForceSetPosDirAutoSaveAnchor', 'IsWaitFinish': True, 'UniqueName': 'PriestBoss'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step06'})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    SoundTriggerTag.Demo_SoundTriggerFade({'Sound': 'DLC_Demo648_0_EnvRain', 'IsWaitFinish': False})

    call FlagOperationAfterDemo()

}

void C01Before() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C01-0', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': False, 'TargetActor': -1, 'ActorName': '', 'TargetActorPosReferenceMode': 0})
    } {
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'DemoWait', 'IsWaitFinish': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0})
        EventSystemActor[01].Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 'Arg_DestinationX', 'DestinationY': 'Arg_DestinationY', 'DestinationZ': 'Arg_DestinationZ', 'DirectionY': 'Arg_DestinationDirY'})
    } {
        DgnObj_DLC_GoalShield_A.Demo_Join({'IsWaitFinish': True})
        DgnObj_DLC_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    }

    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
}

void C01() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'ASName': 'Demo648_0-C01-Link-A-0', 'IsWaitFinish': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        DgnObj_DLC_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark_Active', 'SLinkKey': 'DoushiMark_Active', 'IsTargetDemoSLinkUser': False})
        EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        DgnObj_DLC_GoalShield_A.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': ''})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 140})
    } {
        DgnObj_DLC_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'BreakOmen', 'SLinkKey': 'BreakOmen', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})
        DgnObj_DLC_GoalShield_A.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Break', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    }

    SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'Remains_StartBossSeq'})
    if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo648_0'}) {
        EventSystemActor.Demo_EventCancelStart({'IsWaitFinish': True, 'ShowLogo': False})
    }
}

void C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C02-0', 'TargetActor': -1, 'ActorName': '', 'UniqueName': '', 'TargetActorDirReferenceMode': 0, 'Accept1FrameDelay': False, 'TargetActorPosReferenceMode': 0})
    } {
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_DungeonPriestDlc2nd_Boss'})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo648_0'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo681_0'}) {
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo648_0:Demo648_0_Text004'})
            } else {
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo648_0:Demo648_0_Text008'})
            }
        } else {
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo648_0:Demo648_0_Text000'})
        }
    }

    EventSystemActor.Demo_WaitFrame({'Frame': 60, 'IsWaitFinish': True})
}

void C03-05() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_DungeonPriestDlc2nd_Boss', 'Accept1FrameDelay': True, 'SceneName': 'C03-0', 'IsWaitFinish': True, 'TargetActorDirReferenceMode': 1})
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_DungeonPriestDlc2nd_Boss', 'Accept1FrameDelay': True, 'IsWaitFinish': True, 'SceneName': 'C04-0', 'TargetActorDirReferenceMode': 1})
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_DungeonPriestDlc2nd_Boss', 'Accept1FrameDelay': True, 'SceneName': 'C05-0', 'TargetActorDirReferenceMode': 1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo681_0'}) {
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo648_0:Demo648_0_Text005'})
        } else {
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo648_0:Demo648_0_Text001'})
        }
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 275})
        GameROMPlayer.Demo_PlayASForDemo({'ASName': 'DemoWaitAttention', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

        fork {
            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo681_0'}) {
                EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo648_0:Demo648_0_Text006'})
            } else {
                EventSystemActor.Demo_OpenDungeonMessage({'MessageId': 'DemoMsg/Demo648_0:Demo648_0_Text002', 'IsWaitFinish': True})
            }
        } {
            EventSystemActor[forBGM].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'PriestBossBgm_Start', 'IsWaitFinish': True})
        }


        fork {
            GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo005_0_warp', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo005_0_warp', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        } {
            EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 1, 'SetFrame': 120.0, 'IsWaitFinish': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        }

        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Reduce', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    } {
        Npc_DungeonPriestDlc2nd_Boss.Demo_PlayASForDemo({'ASName': 'Demo648_0-C01-Npc_DungeonPriestDlc2nd_Boss-A-0', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_DungeonPriestDlc2nd_Boss.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossDustArm', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 220})
        Npc_DungeonPriestDlc2nd_Boss.Demo_XLinkEventKill({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossDustArm', 'SLinkKey': ''})
        Npc_DungeonPriestDlc2nd_Boss.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DLC_Demo_BossDustBody', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    }

    EventSystemActor.Demo_FlagOFF({'FlagName': 'HeroSoulProhibition', 'IsWaitFinish': True})
    EventSystemActor.Demo_EventCancelEnd({'IsWaitFinish': True, 'NoFadeIn': True})
}

void C06Before() {
    if !EventSystemActor.CheckEventCancel() {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationZ': 930.0, 'DirectionY': 180.0, 'DestinationX': 0.0, 'DestinationY': 0.0})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'IsResetCamera': True, 'SystemResetOption': 3})
        Npc_DungeonPriestDlc2nd_Boss.Demo_VisibleOff({'IsWaitFinish': False})
        Event202:
        DgnObj_DLC_IbutsuEx_F_GoalSystem_A_01.Demo_VisibleOff({'IsWaitFinish': False})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        GameROMPlayer.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'Demo005_0_warp', 'SLinkKey': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    } else {
        DgnObj_DLC_GoalShield_A.Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'Break', 'SLinkKey': 'Break'})
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationZ': 930.0, 'DirectionY': 180.0, 'DestinationX': 0.0, 'DestinationY': 0.0})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'IsResetCamera': True, 'SystemResetOption': 3})
        Npc_DungeonPriestDlc2nd_Boss.Demo_VisibleOff({'IsWaitFinish': False})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        goto Event202
    }
}

void C06-08() {
    Priest_Boss_Normal[Priest_Boss_Normal].Demo_Join({'IsWaitFinish': False})
    Priest_Boss_Normal[Priest_Boss_Normal].Demo_WarpToAnchor({'IsWaitFinish': False, 'DestinationZ': 900.0, 'DestinationX': 0.0, 'DirectionY': 0.0, 'DestinationY': 0.0})
    Priest_Boss_Normal[Priest_Boss_Normal].Demo_VisibleOff({'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayASForDemo({'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})

    fork {
        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'PriestBossBgm_AllowBreakIntro'})
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'ReduceOff', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff'})
        Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': False})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': True, 'SceneName': 'C06-0', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'GameROMPlayer'})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 310})
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'EndFrame': 145.0, 'IsWaitFinish': False, 'SceneName': 'C07-2'})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'DLC_Demo648_0_EnvRain', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
        WorldManagerControl.Demo_EventSetWeather({'WeatherType': 2, 'IsWaitFinish': True})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 115})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.9093079566955566, 'Pattern1PosY': 1.0374000072479248, 'Pattern1PosZ': 3.913939952850342, 'Pattern1AtX': -7.736659049987793, 'Pattern1AtY': 2.0949840545654297, 'Pattern1AtZ': -9.6234130859375, 'Pattern1Fovy': 15.18928337097168, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo648_0_C07_Priest_Boss_Normal_A_0'})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'DoushiWarp', 'SLinkKey': 'Demo648_0_DoushiWarp', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 55})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_({'IsWaitFinish': False, 'ChangeType': 0, 'SetFrame': 75.0})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    } {

        call CommonPreFunc()

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo648_0-C06-Link-A-0', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 360})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'TargetActor': 3, 'ActorName': 'Priest_Boss_Normal', 'Accept1FrameDelay': True, 'SceneName': 'C07-0', 'EndFrame': 180.0, 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': 'Priest_Boss_Normal', 'TargetActorDirReferenceMode': 1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameROMPlayer.Demo_PlayASForDemo({'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 68})
        GameROMPlayer.Demo_PlayASForDemo({'ASName': 'DemoWaitAttention', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'TargetActor': 3, 'SceneName': 'C08-0', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'UniqueName': 'Priest_Boss_Normal', 'Accept1FrameDelay': True, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Priest_Boss_Normal', 'EndFrame': -1.0})
    } {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo681_0'}) {
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': False, 'MessageId': 'DemoMsg/Demo648_0:Demo648_0_Text007'})
        } else {
            EventSystemActor.Demo_OpenDungeonMessage({'MessageId': 'DemoMsg/Demo648_0:Demo648_0_Text003', 'IsWaitFinish': False})
        }
    } {
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo648_0_C08_Priest_Boss_Normal_A_0'})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC_Demo_BossStripe_R_01'})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC_Demo_BossStripe_L_01'})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 140})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'FaceFlash'})
        EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': -1})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_XLinkEventFade({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'DLC_Demo_BossStripe_R_01'})
        Priest_Boss_Normal[Priest_Boss_Normal].Demo_XLinkEventFade({'IsWaitFinish': False, 'SLinkKey': '', 'ELinkKey': 'DLC_Demo_BossStripe_L_01'})
    }

}

void CommonPreFunc() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    } {
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
        EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 1, 'SetFrame': 1.0, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
    }

    GameROMPlayer.Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Demo005_1_warp_appear', 'ELinkKey': 'Demo005_1_warp_appear'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
    EventSystemActor[WarpEffect].Demo_PlayerWarpEffectSet({'ChangeType': 0, 'SetFrame': 60.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -2})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
}

void FlagOperationBeforeDemo() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_KillByDemo'})
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Electric_Trick1'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick1_Temp'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick1_Temp'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Electric_Trick2'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick2_Temp'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick2_Temp'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Wind_Trick2'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Wind_Trick2_Temp'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Wind_Trick2_Temp'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Electric_Trick4'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick4_Temp'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick4_Temp'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_EleMagPole_Wind3'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_EleMagPole_Wind3_Temp'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_EleMagPole_Wind3_Temp'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Wind_Trick3'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Wind_Trick3_Temp'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Wind_Trick3_Temp'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_WindMagnePole_Ele4'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_WindMagnePole_Ele4_Temp'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_WindMagnePole_Ele4_Temp'})
    }
}

void FlagOperationAfterDemo() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_KillByDemo'})
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Electric_Trick1_Temp'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick1'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick1'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Electric_Trick2_Temp'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick2'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick2'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Wind_Trick2_Temp'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Wind_Trick2'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Wind_Trick2'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Electric_Trick4_Temp'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick4'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Electric_Trick4'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_EleMagPole_Wind3_Temp'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_EleMagPole_Wind3'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_EleMagPole_Wind3'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_Wind_Trick3_Temp'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Wind_Trick3'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_Wind_Trick3'})
    }
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_WindMagnePole_Ele4_Temp'}) {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FinalTrial_WindMagnePole_Ele4'})
    } else {
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'FinalTrial_WindMagnePole_Ele4'})
    }
}
