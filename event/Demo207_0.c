-------- EventFlow: Demo207_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_OpenDungeonMessage', 'Demo_FlagON', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt', 'Demo_ResetBoneCtrl', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayerWait', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_PlayerHideOff', 'Demo_MovePosFlow', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_GoalShield_B
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc001
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc002
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc003
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc004
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc005
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc006
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DungeonPriestDlc007
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[doushiMS]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Doshi2]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Doshi3]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Doshi4]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Doshi5]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Doshi6]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Doshi7]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Doshi_Message]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[LinkAnim]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo207_0() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce'})
    DgnObj_GoalShield_B.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})

    fork {
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 180.0, 'DestinationX': -3500.0, 'DestinationY': 1001.5, 'DestinationZ': 512.2000122070312})
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': -1, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'ASName': 'Demo207_0-C01-Link-A-0', 'IsOneTimeEndKeep': True})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'DgnObj_MasterSwordBase_100Enemy', 'SceneName': 'C01-0', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'Base_3'})
    }

    GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'NoErrorCheck': False, 'ASName': 'Demo207_0-C02-Link-A-0', 'IsOneTimeEndKeep': False, 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'IsWaitFinish': False})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.575438976287842, 'Pattern1PosY': 1.0422240495681763, 'Pattern1PosZ': -0.741752028465271, 'Pattern1AtX': -0.7089840173721313, 'Pattern1AtY': 1.0500940084457397, 'Pattern1AtZ': 2.09820294380188, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
    }


    fork {
        DgnObj_GoalShield_B.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark_Active', 'SLinkKey': 'DoushiMark_Active', 'IsTargetDemoSLinkUser': False})
        EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
        DgnObj_GoalShield_B.Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'DoushiMark', 'SLinkKey': ''})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.008301000110805035, 'Pattern1PosY': 2.821589946746826, 'Pattern1PosZ': -27.877687454223633, 'Pattern1AtX': -0.007813000120222569, 'Pattern1AtY': 2.821589946746826, 'Pattern1AtZ': -21.87842559814453, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'UniqueName1': 'Base_3'})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 110})
    } {
        DgnObj_GoalShield_B.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'BreakOmen', 'SLinkKey': 'BreakOmen', 'IsTargetDemoSLinkUser': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 65})
        DgnObj_GoalShield_B.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Break', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_FlagON({'FlagName': '100enemy_VanishShield', 'IsWaitFinish': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.5170810222625732, 'Pattern1PosZ': -15.33919620513916, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.3136719465255737, 'Pattern1AtZ': -12.635152816772461, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'DgnObj_MasterSwordBase_100Enemy', 'Pattern1Fovy': 42.0, 'Pattern1PosX': 0.0, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'UniqueName1': 'Base_3'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        EventSystemActor[doushiMS].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo207_0:Demo207_0_Text000'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.8928329944610596, 'Pattern1PosZ': -15.329259872436523, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.5848400592803955, 'Pattern1AtZ': -12.635152816772461, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': False, 'Pattern1PosX': 0.0, 'Pattern1Fovy': 42.0, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 170.0, 'UniqueName1': 'Base_3'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo207_0-C04-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'NoErrorCheck': True, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0})
        EventSystemActor[LinkAnim].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 350})
    }

    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'Player', 'FadeOutSec': 0.10000000149011612, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeInSec': 0.0})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': False, 'SceneName': 'C04-0', 'TargetActorDirReferenceMode': 1, 'UniqueName': 'Base_3'})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo207_0:Demo207_0_Text001'})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': False, 'SceneName': 'C05-0', 'TargetActorDirReferenceMode': 1, 'UniqueName': 'Base_3'})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo207_0:Demo207_0_Text002'})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 180.0, 'DestinationX': -3500.0, 'DestinationY': 1002.2000122070312, 'DestinationZ': 501.5})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': False, 'SceneName': 'C06-0', 'TargetActorDirReferenceMode': 1, 'UniqueName': 'Base_3'})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo207_0:Demo207_0_Text003'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
    GameROMPlayer.Demo_PlayASAdapt({'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ClothWarpMode': 1, 'MorphingFrame': 0.0, 'IsEnabledAnimeDriven': 0, 'ASName': 'Demo207_0-C09-Link-A-0', 'IsOneTimeEndKeep': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.2924799919128418, 'Pattern1PosY': 4.2322998046875, 'Pattern1PosZ': 2.458983898162842, 'Pattern1AtX': -0.7253419756889343, 'Pattern1AtY': -0.1974489986896515, 'Pattern1AtZ': -2.418610095977783, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'DgnObj_MasterSwordBase_100Enemy', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 0.0, 'IsWaitFinish': True, 'UniqueName1': 'Base_3'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.0615229606628418, 'Pattern1PosY': 3.7239990234375, 'Pattern1PosZ': 1.8991999626159668, 'Pattern1AtX': -0.7253419756889343, 'Pattern1AtY': -0.1974489986896515, 'Pattern1AtZ': -2.418610095977783, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': False, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 250.0, 'UniqueName1': 'Base_3'})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo207_0:Demo207_0_Text004'})

    fork {

        fork {
            EventSystemActor[Doshi2].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_DungeonPriestDlc006.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
            Npc_DungeonPriestDlc006.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            EventSystemActor[Doshi3].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            Npc_DungeonPriestDlc004.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
            Npc_DungeonPriestDlc004.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            EventSystemActor[Doshi4].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
            Npc_DungeonPriestDlc002.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
            Npc_DungeonPriestDlc002.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            EventSystemActor[Doshi5].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 280})
            Npc_DungeonPriestDlc001.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
            Npc_DungeonPriestDlc001.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            EventSystemActor[Doshi6].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
            Npc_DungeonPriestDlc003.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
            Npc_DungeonPriestDlc003.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            EventSystemActor[Doshi7].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Npc_DungeonPriestDlc005.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
            Npc_DungeonPriestDlc005.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            Npc_DungeonPriestDlc007.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_PriestVanish', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
            Npc_DungeonPriestDlc007.Demo_PlayASForDemo({'ASName': 'Vanish', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': 0, 'SeqBank': 1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'DgnObj_MasterSwordBase_100Enemy', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C09-1', 'UniqueName': 'Base_3'})
        }

    } {
        EventSystemActor[Doshi_Message].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo207_0:Demo207_0_Text005'})
        EventSystemActor[Doshi_Message].Demo_OpenDungeonMessage({'MessageId': 'DemoMsg/Demo207_0:Demo207_0_Text006', 'IsWaitFinish': False})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_PriestVanish', 'SoundDelay': 0, 'SLinkInst': ''})
    }


    fork {
        Npc_DungeonPriestDlc007.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'VanishFloat', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_DungeonPriestDlc005.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'VanishFloat', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_DungeonPriestDlc003.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'VanishFloat', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_DungeonPriestDlc001.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'VanishFloat', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_DungeonPriestDlc002.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'VanishFloat', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_DungeonPriestDlc004.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'VanishFloat', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        Npc_DungeonPriestDlc006.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'VanishFloat', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'ASName': 'Demo207_0-C09-Link-A-1'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.6999509930610657, 'Pattern1PosY': 0.6761469841003418, 'Pattern1PosZ': 1.0, 'Pattern1AtX': -0.6999509930610657, 'Pattern1AtY': 1.5999759435653687, 'Pattern1AtZ': -1.758362054824829, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'DgnObj_MasterSwordBase_100Enemy', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1Fovy': 30.0, 'UniqueName1': 'Base_3'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    }

    EventSystemActor.Demo_FlagON({'FlagName': '100enemy_VanishPreist', 'IsWaitFinish': True})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 180.0, 'DestinationX': -3500.0, 'DestinationY': 1002.2000122070312, 'DestinationZ': 501.1000061035156})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnDirection': 0.0, 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [-3500.0, 1002.5, 500.0], 'ActorName': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.610352039337158, 'Pattern1PosY': 2.529236078262329, 'Pattern1PosZ': 5.143126964569092, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'DispMode': 'Logo', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None'})
}
