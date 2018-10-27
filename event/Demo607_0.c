-------- EventFlow: Demo607_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_EnableCameraInput', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_OpenMessageDialog', 'Demo_TalkNoCloseDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_OpenMessageDialog', 'Demo_TalkNoCloseDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_OpenMessageDialog', 'Demo_TalkNoCloseDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_OpenMessageDialog', 'Demo_TalkNoCloseDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['Demo_TerrainCalcCenter']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsWorld': True, 'PosY': 368.3999938964844, 'PosZ': 1866.9000244140625, 'PosX': -1152.4000244140625, 'IsGrounding': False}

void Demo607_0_1() {
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01].Demo_TalkNoCloseDialog({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo607_0:Talk07', 'IsCloseMessageDialog': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    } {
        TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.055114999413490295, 'Pattern1PosY': 12.074783325195312, 'Pattern1PosZ': -13.188353538513184, 'Pattern1AtX': 0.012817000038921833, 'Pattern1AtY': 2.033478021621704, 'Pattern1AtZ': 0.6789550185203552, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'Count': 95.0})
    }

    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoSwordHeroBgm'})

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
                Event304:
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Musician_AoC_BalladOfHeroes', 'UniqueName': 'BalladOfHeroes01', 'SceneName': 'C02-0'})
            } else {
                Dm_Locator_DLC2nd.Demo_Join({'IsWaitFinish': True})
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'Dm_Locator_DLC2nd', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'SceneName': 'C01-1', 'TargetActorDirReferenceMode': 1})
            }
        } else {
            goto Event304
        }
    } {
        Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo607_0:Talk05', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'ASName': 'Act_Accordion'})
    }

    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 0.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo607_0:Talk06'})
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01].Demo_SetInstEventFlag({'IsWaitFinish': True})
    Event90:
    EventSystemActor.Demo_FlagON({'FlagName': 'IsPlayed_Demo607_0', 'IsWaitFinish': True})
}

void Demo607_0_2() {
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02].Demo_TalkNoCloseDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo607_0:Talk07', 'IsCloseMessageDialog': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    } {
        TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.055114999413490295, 'Pattern1PosY': 12.074783325195312, 'Pattern1PosZ': -13.188353538513184, 'Pattern1AtX': 0.012817000038921833, 'Pattern1AtY': 2.033478021621704, 'Pattern1AtZ': 0.6789550185203552, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 95.0, 'IsWaitFinish': True})
    }

    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoSwordHeroBgm'})

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
                Event298:
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_Musician_AoC_BalladOfHeroes', 'UniqueName': 'BalladOfHeroes02', 'SceneName': 'C02-0'})
            } else {
                Dm_Locator_DLC2nd.Demo_Join({'IsWaitFinish': True})
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'Dm_Locator_DLC2nd', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'SceneName': 'C01-1', 'TargetActorDirReferenceMode': 1})
            }
        } else {
            goto Event298
        }
    } {
        Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo607_0:Talk05', 'IsWaitFinish': True, 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'ASName': 'Act_Accordion'})
    }

    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 0.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo607_0:Talk06'})
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02].Demo_SetInstEventFlag({'IsWaitFinish': True})
    goto Event90
}

void Demo607_0_4() {
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04].Demo_TalkNoCloseDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo607_0:Talk07', 'IsCloseMessageDialog': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    } {
        TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.055114999413490295, 'Pattern1PosY': 12.074783325195312, 'Pattern1PosZ': -13.188353538513184, 'Pattern1AtX': 0.012817000038921833, 'Pattern1AtY': 2.033478021621704, 'Pattern1AtZ': 0.6789550185203552, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'Count': 95.0})
    }

    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoSwordHeroBgm'})

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
                Event288:
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C02-0', 'ActorName': 'Npc_Musician_AoC_BalladOfHeroes', 'UniqueName': 'BalladOfHeroes04'})
            } else {
                Dm_Locator_DLC2nd.Demo_Join({'IsWaitFinish': True})
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'Dm_Locator_DLC2nd', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'SceneName': 'C01-1', 'TargetActorDirReferenceMode': 1})
            }
        } else {
            goto Event288
        }
    } {
        Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo607_0:Talk05', 'IsWaitFinish': True, 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'ASName': 'Act_Accordion'})
    }

    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 0.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo607_0:Talk06'})
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04].Demo_SetInstEventFlag({'IsWaitFinish': True})
    goto Event90
}

void Demo607_0_3() {
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03].Demo_TalkNoCloseDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo607_0:Talk07', 'IsCloseMessageDialog': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 100})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    } {
        TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.055114999413490295, 'Pattern1PosY': 12.074783325195312, 'Pattern1PosZ': -13.188353538513184, 'Pattern1AtX': 0.012817000038921833, 'Pattern1AtY': 2.033478021621704, 'Pattern1AtZ': 0.6789550185203552, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'Count': 95.0})
    }

    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoSwordHeroBgm'})

    fork {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
                Event292:
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C02-0', 'UniqueName': 'BalladOfHeroes03', 'ActorName': 'Npc_Musician_AoC_BalladOfHeroes'})
            } else {
                Dm_Locator_DLC2nd.Demo_Join({'IsWaitFinish': True})
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'Dm_Locator_DLC2nd', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'SceneName': 'C01-1', 'TargetActorDirReferenceMode': 1})
            }
        } else {
            goto Event292
        }
    } {
        Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03].Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo607_0:Talk05', 'IsWaitFinish': True, 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'ASName': 'Act_Accordion'})
    }

    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'Count': 0.0})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo607_0:Talk06'})
    Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03].Demo_SetInstEventFlag({'IsWaitFinish': True})
    goto Event90
}
