-------- EventFlow: Demo344_4 --------

Actor: Npc_Zora003
entrypoint: None()
actions: ['Demo_Talk', 'Demo_Idling', 'Demo_WarpToScheduleAnchor', 'Demo_LookAtObject', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_FlagOFF', 'Demo_AdvanceQuest', 'Demo_DeleteAllIceMakerForDemo', 'Demo_IncreaseGameDataInt']
queries: ['CheckFlag', 'HasPorchItem', 'GeneralChoice2', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerHorseGetOff', 'Demo_PlayASAdapt', 'Demo_LookAtObject', 'Demo_PlayerWait', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_CameraAnimFlow', 'Demo_GameCamera', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[Prince03]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_Idling', 'Demo_WarpToScheduleAnchor', 'Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_PlayASForDemo', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora004[Daijin01]
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_Idling', 'Demo_TurnAndLookToObject', 'Demo_Talk', 'Demo_TurnAndLookToObjectNow', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora009[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora002[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora034[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora007[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora008[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora033[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora020[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora027[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora013[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora029[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora031[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora006[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora012[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora011[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora028[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora025[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora015[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora014[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora001[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora032[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora126[Extra]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[anather_system]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: ['RandomChoice4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Sido]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[CntWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo344_4() {

    call Common.AirStartUP_Player()


    call DemoInitialize()

    EventSystemActor.Demo_FlagON({'FlagName': 'KorinBox_Appear', 'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'TwnObj_Village_ZoraStatue_A_01', 'SceneName': 'C01-0', 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_ExtraPlacement'})
    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'MsterSword_TalkLv', 'Value': 1, 'IsWaitFinish': True})

    call LookL()

    Npc_Zora004[Daijin01].Demo_TurnAndLookToObjectNow({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'IsValid': True, 'IsConfront': False, 'FaceId': 0, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Fader.Demo_FadeIn({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'SceneName': 'C02-0', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_001', 'ASName': 'Talk_Joy', 'IsCloseMessageDialog': True})
    }

    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_002', 'IsCloseMessageDialog': False})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'SceneName': 'C03-0', 'StartFrame': 0.0, 'IsWaitFinish': True, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': 170.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_018', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True})
    }

    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'Npc_Zora004', 'UniqueName1': 'Daijin01', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'PosAppendMode': 1, 'AtAppendMode': 1, 'Pattern1PosX': 3334.139892578125, 'Pattern1PosY': 271.4800109863281, 'Pattern1PosZ': -540.3499755859375, 'Pattern1AtX': 3333.320068359375, 'Pattern1AtY': 271.44000244140625, 'Pattern1AtZ': -542.0700073242188, 'Pattern1Fovy': 50.0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        Npc_Zora004[Daijin01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora004_F_002', 'IsBecomingSpeaker': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': 3, 'ActorName1': 'Npc_Zora004', 'UniqueName1': 'Daijin01', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1Fovy': 50.0, 'Count': 90.0, 'PosAppendMode': 1, 'AtAppendMode': 1, 'Pattern1PosX': 3334.739990234375, 'Pattern1PosY': 271.5199890136719, 'Pattern1PosZ': -540.6699829101562, 'Pattern1AtX': 3333.68994140625, 'Pattern1AtY': 271.44000244140625, 'Pattern1AtZ': -542.260009765625, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_LookAtObject({'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Zora004', 'UniqueName': 'Daijin01', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'EndFrame': 180.0, 'StartFrame': 0.0, 'IsWaitFinish': True, 'SceneName': 'C04-0', 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    }

    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'StartFrame': 0.0, 'SceneName': 'C05-0', 'EndFrame': 10.0, 'IsWaitFinish': False, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

    fork {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_015', 'IsCloseMessageDialog': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': False, 'IsUseSlowTurn': True, 'ActorName': 'Npc_Zora003', 'UniqueName': '', 'IsTurnToLookAtPos': False})
    }

    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'SceneName': 'C06-0', 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_Zora003', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        Npc_Zora004[Daijin01].Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 3, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': -5.0})
    } {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_019'})
    }

    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_Zora003', 'SceneName': 'C07-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    Npc_Zora004[Daijin01].Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_010', 'IsCloseMessageDialog': False})
        Event69:
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_008'})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C52-3'})
        Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_016'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_ZoraB001[Prince03].Demo_TurnAndLookToObject({'ActorName': 'Npc_Zora003', 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'PosOffset': [1.0, 1.0, 0.0]})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_Zora003', 'SceneName': 'C08-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

        fork {
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_009'})
            Npc_ZoraB001[Prince03].Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'ObjectId': 2, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3340.830078125, 200.0, -549.5599975585938]})
            EventSystemActor[Sido].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_F_003', 'ASName': 'Wait', 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_Zora003', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': -1.0, 'SceneName': 'C00-0', 'StartFrame': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_LookAtObject({'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'IsUseSlowTurn': True, 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})

            call LookS()

        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'IsWaitFinish': False, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C08-0', 'StartFrame': 250.0, 'EndFrame': 260.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

        fork {
            Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_003', 'ASName': ''})
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'ASName': 'Laugh', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_020'})
        } {
            Npc_ZoraB001[Prince03].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'IsTurnToLookAtPos': False})

            call LookD()

        }


        fork {
            Npc_ZoraB001[Prince03].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_F_004', 'ASName': 'Talk_Prince_Special', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 23})
            Npc_ZoraB001[Prince03].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth', 'IsTargetDemoSLinkUser': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            Npc_ZoraB001[Prince03].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': ''})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C09-0', 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2})
        }


        fork {
            Npc_ZoraB001[Prince03].Demo_MoveToAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'ASKeyName': 'Walk', 'AnchorUniqueName': 'PrinceHandshake', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'IsWaitFinish': False, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C12-0'})
        }

        Npc_ZoraB001[Prince03].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Wait', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'IsWaitFinish': False, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C52-4', 'EndFrame': 170.0})
        GameROMPlayer.Demo_TurnAndLookToObjectNow({'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'PosOffset': [0.0, 0.0, -2.0]})
        Npc_ZoraB001[Prince03].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'PrinceHandshake'})

        fork {
            Npc_ZoraB001[Prince03].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ASName': 'Demo344_4-C01-Npc_Zora_Prince-A-0', 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C01-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False})
        } {
            EventSystemActor[CntWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
            EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
        }

        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'PosOffset': [0.0, 0.0, -2.0]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

        fork {
            Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_F_001', 'IsCloseMessageDialog': True, 'ASName': 'Demo344_4-C01-Npc_Zora_Prince-A-0', 'IsBecomingSpeaker': False})
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'ReduceOff', 'SeCtrlType': 'None', 'IsWaitFinish': True})
            SceneSoundCtrlTag.Demo_CustomDuckingStart({'TargetGroups': 'NpcFootstep', 'FadeOutSec': 0.20000000298023224, 'FadeInSec': 3.0, 'IsWaitFinish': True, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 125})
        }

        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Zora003', 'IsWaitFinish': False, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C52-4', 'EndFrame': -1.0, 'StartFrame': 170.0})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C11-0', 'StartFrame': 0.0, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        } {
            Npc_Zora003.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': 'Demo344_4_Applause', 'ELinkKey': '', 'IsTargetDemoSLinkUser': False})

            call VillagerInit()

        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C01-Link-A-2', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False, 'ClothWarpMode': -1})
        } {
            Npc_ZoraB001[Prince03].Demo_PlayASForDemo({'IsIgnoreSame': False, 'ASName': 'Demo344_4-C01-Npc_Zora_Prince-A-2', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ClothWarpMode': -1})
            Npc_ZoraB001[Prince03].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Wait', 'ClothWarpMode': -1})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
        Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'Frame': 1, 'DispMode': 'Auto'})
        Npc_Zora003.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': 'Demo344_4_Applause', 'ELinkKey': ''})

        fork {
            Npc_Zora003.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
        } {
            Npc_ZoraB001[Prince03].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
        } {
            Npc_Zora004[Daijin01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction1'})
        }

        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Water_Relic_ExtraPlacement'})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'Npc_Zora003', 'IsValid': True, 'FaceId': 2, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': '', 'QuestName': 'Water_Relic'})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        Fader.Demo_FadeIn({'Color': 1, 'IsWaitFinish': True, 'Frame': 1, 'DispMode': 'Auto'})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Wind_Relic_Finished'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Finished'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_007', 'IsCloseMessageDialog': False})
                    goto Event69
                } else {
                    Event138:
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_004', 'IsCloseMessageDialog': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_011', 'IsCloseMessageDialog': False})
                        Event146:
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_013', 'IsCloseMessageDialog': False})
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_014', 'IsCloseMessageDialog': False})
                        goto Event69
                    } else {
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_012', 'IsCloseMessageDialog': False, 'ASName': 'Talk_Surprised'})
                        goto Event146
                    }
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
                    goto Event138
                } else {
                    Event139:
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_004', 'IsCloseMessageDialog': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_011', 'IsCloseMessageDialog': False})
                        Event149:
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_013', 'IsCloseMessageDialog': False})
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_006', 'IsCloseMessageDialog': False})
                        goto Event69
                    } else {
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_012', 'IsCloseMessageDialog': False, 'ASName': 'Talk_Surprised'})
                        goto Event149
                    }
                }
            }
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_Finished'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
                    goto Event138
                } else {
                    goto Event139
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'Electric_Relic_Finished'}) {
                    goto Event139
                } else {
                    Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_004', 'IsCloseMessageDialog': False})
                    if !EventSystemActor.GeneralChoice2() {
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_011', 'IsCloseMessageDialog': False})
                        Event152:
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_013', 'IsCloseMessageDialog': False})
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_005', 'IsCloseMessageDialog': False})
                        goto Event69
                    } else {
                        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_Zora003_F_012', 'IsCloseMessageDialog': False, 'ASName': 'Talk_Surprised'})
                        goto Event152
                    }
                }
            }
        }
    }
}

void DemoInitialize() {
    Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        Event185:
        EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 3333.610107421875, 'DestinationZ': -541.2423095703125, 'DirectionY': 153.95700073242188, 'DestinationY': 270.1600036621094})
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})

        fork {
            Npc_Zora003.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
            Npc_Zora003.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
            Npc_Zora003.Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
        } {
            Npc_ZoraB001[Prince03].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
            Npc_ZoraB001[Prince03].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
            Npc_ZoraB001[Prince03].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        } {
            Npc_Zora004[Daijin01].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
            Npc_Zora004[Daijin01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction2', 'UniqueName': ''})
            Npc_Zora004[Daijin01].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
        }

        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'Npc_Zora003', 'IsUseSlowTurn': False, 'IsValid': False, 'FaceId': 1, 'IsTurnToLookAtPos': False})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    } else {
        goto Event185
    }
}

void VillagerInit() {
    Npc_Zora032[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_M-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora001[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_M-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora014[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_X-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora015[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_W-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora025[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_W-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora028[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_W-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora011[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_B-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora012[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_B-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora006[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_M-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora031[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_M-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora029[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_M-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora013[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_M-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora126[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_B-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora027[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_X-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora020[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_M-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora033[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_X-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora008[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_W-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora007[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_B-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora034[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_W-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora002[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_M-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    call RandomWait()

    Npc_Zora009[Extra].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_4-C02-UMii_Zora_W-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
}

void RandomWait() {
    switch EventSystemActor[anather_system].RandomChoice4() {
      case 0:
        EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
      case 1:
        EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
      case 2:
        EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 4})
      case 3:
        EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    }
}

void LookS() {
    Npc_Zora002[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora032[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora014[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora015[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora025[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora028[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora011[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora012[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora006[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora031[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora029[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora013[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora126[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora027[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora020[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora033[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora008[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora007[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora034[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora002[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
    Npc_Zora009[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
}

void LookD() {
    Npc_Zora032[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora001[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora014[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora015[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora025[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora028[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora011[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora012[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora006[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora031[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora029[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora013[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora126[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora027[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora020[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora033[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora008[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora007[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora034[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora002[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
    Npc_Zora009[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03'})
}

void LookL() {
    Npc_Zora002[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora032[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora014[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora015[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora025[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora028[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora011[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora012[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora006[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora031[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora029[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora013[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora126[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora027[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora020[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora033[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora008[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora007[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    Npc_Zora034[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
    Npc_Zora002[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
    Npc_Zora009[Extra].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince03', 'ObjectId': 0})
}
