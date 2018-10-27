-------- EventFlow: Demo609_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_DeletePorchItemInEquip', 'Demo_WaitFrame', 'Demo_OpenMap', 'Demo_CloseItemMenu', 'Demo_WarpPlayerToDestination', 'Demo_CallDemo', 'Demo_RecoverPlayerLife', 'Demo_StartHeartDemo', 'Demo_SetChallengeIcon', 'Demo_OpenDungeonMessage', 'Demo_FlagOFF', 'Demo_OkAutoPlacementEnemyDeadLy']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerGoStraightAhead']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff', 'Demo_PlayerHideOn', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd[Electric]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_XLinkEventKill']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'PosZ': 1.2000000476837158}

Actor: Dm_Locator_DLC2nd[Water]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_XLinkEventKill']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'PosZ': 1.2000000476837158}

Actor: Dm_Locator_DLC2nd[Wind]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_XLinkEventKill']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'PosZ': 1.2000000476837158}

Actor: Dm_Locator_DLC2nd[Fire]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_XLinkEventKill']
queries: []
params: {'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsGrounding': False, 'PosZ': 1.2000000476837158}

Actor: Dm_Locator_DLC2nd[Main]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosY': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'PosX': 0.0, 'PosZ': 1.2000000476837158}

Actor: Weapon_Sword_503
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventKill', 'Demo_PlayASForDemo', 'Demo_VisibleOff', 'Demo_TrigNullASPlay']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetPaletteType']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd[Sword]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'PosZ': 1.2000000476837158}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['Demo_TerrainCalcCenter']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo609_0_C02() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': 1, 'ASName': 'Demo609_0-C02-Link-A-0_Loop', 'MorphingFrame': 0.0})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0'})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo609_0:Talk02'})
}

void Demo609_0_C03() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1.4971920251846313, 'Pattern1PosY': 1.0777130126953125, 'Pattern1PosZ': 2.853148937225342, 'Pattern1AtX': 0.06762699782848358, 'Pattern1AtY': 1.523864984512329, 'Pattern1AtZ': -0.11621099710464478, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo609_0:Talk03'})
    } {
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ASName': 'Demo609_0-C03-Link-A-0', 'ClothWarpMode': -2})
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    }

    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ASName': 'Demo609_0-C03-Link-A-1', 'ClothWarpMode': -2})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 52})
}

void Demo609_0_C04() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.2528380155563354, 'Pattern1PosZ': 2.165221929550171, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.3749690055847168, 'Pattern1AtZ': -0.1059269979596138, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1PosX': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 118})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMute', 'BgmCtrlType': 'None'})
    Weapon_Sword_503.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'DLC2_Demo609_0_SwordShine', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'Demo_DeadlyBlowWeaponBreak_01'})
    Weapon_Sword_503.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'ChemCharge'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': 1, 'ASName': 'Demo609_0-C04-Link-A-0', 'MorphingFrame': 10.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
}

void Demo609_0_AfterTimeline_C11() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': 1, 'ASName': 'Demo609_0-C02-Link-A-0_Loop'})
    GameRomCamera.Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': True, 'ELinkKey': 'DLC2_Demo609_0_FallLight', 'SLinkKey': ''})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 110})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo609_0:Talk04'})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'SceneName': 'C11-0', 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 0, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    }

    GameRomCamera.Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'DLC2_Demo609_0_FallLight', 'SLinkKey': ''})
}

void Demo609_0_AfterTimeline_C12() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'FovyAppendMode': 1, 'Pattern1Fovy': 50.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'Count': 0.0, 'Cushion': 0.0, 'MotionMode': 0, 'LatShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'StartCalcOnly': True, 'LngShiftRange': 180.0, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1AtX': 0.10899999737739563, 'Pattern1AtZ': 0.16500000655651093, 'Pattern1AtY': 1.2091000080108643, 'Pattern1PosX': 1.5152000188827515, 'Pattern1PosY': 2.363800048828125, 'Pattern1PosZ': -0.929099977016449, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'TargetActor1': 3, 'ActorName1': 'GameROMPlayer', 'ReviseModeEnd': 0, 'Accept1FrameDelay': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'DOFUse': False, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'SceneName': 'C12-0'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'ASName': 'Demo609_0-C12-Link-A-0', 'ClothWarpMode': -2})
    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step03'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_SetChallengeIcon({'IsWaitFinish': True, 'ChallengeName': 'BalladOfHeroes'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_OpenMap({'IsWaitFinish': True, 'ScaleLevel': 0, 'WorldPos': [0.0, 0.0, 346.989990234375]})
}

void Demo609_0_AfterTimeline_C14() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.422729015350342, 'Pattern1PosY': 2.041472911834717, 'Pattern1PosZ': 3.224853992462158, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'ClothWarpMode': 1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo609_0-C14-Link-A-0', 'IsWaitFinish': True, 'NoErrorCheck': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ASName': 'DemoWait', 'ClothWarpMode': -2})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
    EventSystemActor.Demo_StartHeartDemo({'IsWaitFinish': True})
}

void Demo609_0_AfterTimeline_C13() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Ready'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_Ready'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Ready'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_Ready'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Enemy_Appear'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HeroSoulProhibition'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BloodyMoonProhibition'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    } {
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    }

}

void Demo609_0_C05() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2.0035400390625, 'Pattern1PosY': 1.854552984237671, 'Pattern1PosZ': -1.239197015762329, 'Pattern1AtX': 0.10302700102329254, 'Pattern1AtY': 1.4112240076065063, 'Pattern1AtZ': 0.5823360085487366, 'Pattern1Fovy': 26.99146842956543, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': 1, 'ASName': 'Demo609_0-C05-Link-A-0', 'IsWaitFinish': False})
    EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': 1})
    Dm_Locator_DLC2nd[Sword].Demo_PlayASForDemo({'ASName': 'Demo609_0-C05-Dm_Locator-Sword', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    Dm_Locator_DLC2nd[Sword].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC2_Demo609_0_Flash', 'IsTargetDemoSLinkUser': True})
    Dm_Locator_DLC2nd[Sword].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': True, 'ELinkKey': 'DLC2_Demo609_0_WeaponBreak', 'SLinkKey': 'Demo_DeadlyBlowWeaponBreak_02'})
    EventSystemActor.Demo_DeletePorchItemInEquip({'IsWaitFinish': True, 'DeleteNum': 1, 'PorchItemName': 'Weapon_Sword_503'})
    Weapon_Sword_503.Demo_XLinkEventKill({'IsWaitFinish': False, 'ELinkKey': 'DLC2_Demo609_0_SwordShine', 'SLinkKey': ''})
    Weapon_Sword_503.Demo_VisibleOff({'IsWaitFinish': False})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFUse': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C05-0', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': True})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFUse': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'TargetActor': 3, 'ActorName': 'GameROMPlayer', 'SceneName': 'C06-0', 'IsWaitFinish': True, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False})
    } {

        fork {

            fork {
                Dm_Locator_DLC2nd[Fire].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo609_0-C05-Dm_Locator-RaySubFire', 'IsWaitFinish': False})
                Dm_Locator_DLC2nd[Fire].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_FireLight_01'})
            } {
                Dm_Locator_DLC2nd[Electric].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo609_0-C05-Dm_Locator-RaySubElectric', 'IsWaitFinish': False})
                Dm_Locator_DLC2nd[Electric].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_ElectricLight_01'})
            } {
                Dm_Locator_DLC2nd[Water].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo609_0-C05-Dm_Locator-RaySubWater', 'IsWaitFinish': False})
                Dm_Locator_DLC2nd[Water].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_WaterLight_01'})
            } {
                Dm_Locator_DLC2nd[Wind].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo609_0-C05-Dm_Locator-RaySubWind', 'IsWaitFinish': False})
                Dm_Locator_DLC2nd[Wind].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_WindLight_01'})
            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})

            fork {
                Dm_Locator_DLC2nd[Fire].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_FireLight_00'})
                Dm_Locator_DLC2nd[Fire].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC2_Demo609_0_FireLight_01'})
            } {
                Dm_Locator_DLC2nd[Electric].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_ElectricLight_00'})
                Dm_Locator_DLC2nd[Electric].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC2_Demo609_0_ElectricLight_01'})
            } {
                Dm_Locator_DLC2nd[Water].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_WaterLight_00'})
                Dm_Locator_DLC2nd[Water].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC2_Demo609_0_WaterLight_01'})
            } {
                Dm_Locator_DLC2nd[Wind].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_WindLight_00'})
                Dm_Locator_DLC2nd[Wind].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC2_Demo609_0_WindLight_01'})
            } {
                SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_DeadlyBlowWeaponBreak_03', 'SoundDelay': 0, 'SLinkInst': ''})
            }

        } {
            Dm_Locator_DLC2nd[Main].Demo_PlayASForDemo({'ASName': 'Demo609_0-C05-Dm_Locator-RayMain', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 33})
        Dm_Locator_DLC2nd[Fire].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC2_Demo609_0_FireLight_00'})
        Dm_Locator_DLC2nd[Electric].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC2_Demo609_0_ElectricLight_00'})
        Dm_Locator_DLC2nd[Water].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC2_Demo609_0_WaterLight_00'})
        Dm_Locator_DLC2nd[Wind].Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'DLC2_Demo609_0_WindLight_00'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Dm_Locator_DLC2nd[Main].Demo_XLinkEventCreate({'ELinkKey': 'DLC2_Demo609_0_BreakLight', 'IsWaitFinish': True, 'SLinkKey': 'Demo_DeadlyBlowWeaponBreak_04', 'IsTargetDemoSLinkUser': True})

        fork {
            Dm_Locator_DLC2nd[Fire].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_FireLast'})
            Dm_Locator_DLC2nd[Fire].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo609_0-C05-Dm_Locator-RaySubFire_2'})
        } {
            Dm_Locator_DLC2nd[Electric].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_ElectricLast'})
            Dm_Locator_DLC2nd[Electric].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo609_0-C05-Dm_Locator-RaySubElectric_2'})
        } {
            Dm_Locator_DLC2nd[Water].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_WaterLast'})
            Dm_Locator_DLC2nd[Water].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo609_0-C05-Dm_Locator-RaySubWind_2'})
        } {
            Dm_Locator_DLC2nd[Wind].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Demo609_0_WindLast'})
            Dm_Locator_DLC2nd[Wind].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo609_0-C05-Dm_Locator-RaySubWater_2'})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
}

void Demo609_0() {

    call Demo609_0-0_C01()

    Event284:

    call Demo609_0_C01-2()


    call Demo609_0_C02()


    call Demo609_0_C03()


    call Demo609_0_C04()


    call Demo609_0_C05()

    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo655_0', 'EndFade': 1})
    WorldManagerControl.Demo_SetPaletteType({'ChangeFrame': 1, 'PaletteType': 0, 'Speed': 1.0, 'EndFrame': 0, 'IsWaitFinish': False})

    call Demo609_0_AfterTimeline_C11()


    call Demo609_0_AfterTimeline_C12()


    call Demo609_0_AfterTimeline_C13()


    call Demo609_0_AfterTimeline_C14()

}

void Demo609_0-0_C01() {

    call Demo609_0_Pre()

    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -942.7000122070312, 'DestinationY': 187.6999969482422, 'DestinationZ': 1670.949951171875, 'DirectionY': -135.31700134277344})
    GameROMPlayer.Demo_PlayerGoStraightAhead({'StickValue': 0.009999999776482582, 'IsWaitFinish': False, 'DestPosX': -947.5999755859375, 'DestPosY': 187.6999969482422, 'DestPosZ': 1666.0})
    Event626:
    TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'Pattern1PosX': 0.0, 'Pattern1PosZ': -0.982666015625, 'Pattern1PosY': 1.5860600471496582, 'Pattern1AtY': 1.5651249885559082, 'Pattern1AtZ': 0.025635000318288803, 'Pattern1AtX': 0.0, 'StartCalcOnly': True, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
}

void Demo609_0_C01-2() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': 1, 'ASName': 'Demo609_0-C02-Link-A-0', 'MorphingFrame': 0.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.008057000115513802, 'Pattern1PosY': 1.453521966934204, 'Pattern1PosZ': 3.989013910293579, 'Pattern1AtX': 0.0030519999563694, 'Pattern1AtY': 1.6506500244140625, 'Pattern1AtZ': 1.93914794921875, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'StartCalcOnly': True, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo609_0:Talk01'})
    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
}

void Demo609_0-1() {

    call Demo609_0-1_C01()

    goto Event284
}

void Demo609_0-2() {

    call Demo609_0-2_C01()

    goto Event284
}

void Demo609_0-3() {

    call Demo609_0-3_C01()

    goto Event284
}

void Demo609_0-3_C01() {

    call Demo609_0_Pre()

    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationY': 189.8004150390625, 'DestinationX': -832.508544921875, 'DestinationZ': 2144.47509765625, 'DirectionY': 105.08000183105469})
    GameROMPlayer.Demo_PlayerGoStraightAhead({'StickValue': 0.009999999776482582, 'IsWaitFinish': False, 'DestPosX': -825.7026977539062, 'DestPosY': 189.81295776367188, 'DestPosZ': 2142.640625})
    goto Event626
}

void Demo609_0-1_C01() {

    call Demo609_0_Pre()

    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationY': 340.5, 'DestinationX': -1215.699951171875, 'DestinationZ': 2111.89990234375, 'DirectionY': 7.526000022888184})
    GameROMPlayer.Demo_PlayerGoStraightAhead({'StickValue': 0.009999999776482582, 'IsWaitFinish': False, 'DestPosY': 340.5, 'DestPosZ': 2119.0400390625, 'DestPosX': -1214.760009765625})
    goto Event626
}

void Demo609_0-2_C01() {

    call Demo609_0_Pre()

    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -518.7780151367188, 'DestinationY': 173.8000030517578, 'DestinationZ': 1799.696044921875, 'DirectionY': -51.29999923706055})
    GameROMPlayer.Demo_PlayerGoStraightAhead({'StickValue': 0.009999999776482582, 'IsWaitFinish': False, 'DestPosX': -524.385009765625, 'DestPosY': 173.8000030517578, 'DestPosZ': 1804.1839599609375})
    goto Event626
}

void Demo609_0_Pre() {
    Weapon_Sword_503.Demo_TrigNullASPlay({'ASName': 'ChemLoop', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASSlot': 0, 'SequenceBank': 0})
    Weapon_Sword_503.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'DLC2_Max_Base'})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1})
}
