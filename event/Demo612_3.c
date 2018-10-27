-------- EventFlow: Demo612_3 --------

Actor: Npc_Musician_AoC_HeroGerudo
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialog', 'Demo_WarpToActor', 'Demo_LookAtObject']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'IsWorld': True, 'RotY': 50.0, 'PosX': -2145.10009765625, 'PosY': 471.5, 'PosZ': 2561.199951171875, 'CreateMode': 2}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_IncreaseGameDataInt']
queries: ['CountFlag4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObjectNow', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
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

void Demo612_3() {

    call Demo612_3_C01()


    call Demo612_3_C02()


    call Demo612_3_C03()


    call Demo612_3_Sing()


    call Demo612_3_C04()

    Fader.Demo_FadeOut({'Frame': 0, 'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo663_0', 'EndFade': 1})

    call Demo612_3_C05()


    call Demo612_3_End()

}

void Demo612_3_Sing() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C03-2', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroGerudo.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo612_3-Turn-Npc_Rito_Musician-A-2', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMute', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_3:Npc_Musician_AoC_HeroGerudo_001', 'IsBecomingSpeaker': False})
    }

}

void Demo612_3_C01() {
    TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.0860600471496582, 'Pattern1PosZ': 2.494385004043579, 'Pattern1AtY': 0.9692379832267761, 'Pattern1AtZ': 0.8288570046424866, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'ReviseModeEnd': 0})

    fork {
        Npc_Musician_AoC_HeroGerudo.Demo_WarpToActor({'IsWaitFinish': False, 'DestinationY': 471.5, 'RotToVec3f': False, 'ActorName': '', 'GameDataVec3fRotDir': '', 'DestinationZ': 2561.10009765625, 'DestinationX': -2145.10009765625, 'DirectionY': 60.0})
        Npc_Musician_AoC_HeroGerudo.Demo_PlayASForDemo({'ASName': 'Act_Accordion', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'PracticePlayAccoUrbosa'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    } {
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo612_3-C01-Link-A-0', 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2})
    }

}

void Demo612_3_C02() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 5.373778820037842, 'Pattern1PosY': 0.00030499999411404133, 'Pattern1PosZ': -6.958632946014404, 'Pattern1AtX': 4.76025390625, 'Pattern1AtY': 0.154449000954628, 'Pattern1AtZ': -5.413133144378662, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGerudo', 'StartCalcOnly': True, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.786865234375, 'Pattern1PosY': 0.21035799384117126, 'Pattern1PosZ': -6.163096904754639, 'Pattern1AtX': 4.176514148712158, 'Pattern1AtY': 0.36050400137901306, 'Pattern1AtZ': -4.6159749031066895, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGerudo', 'ReviseModeEnd': 0, 'StartCalcOnly': True, 'Count': 60.0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void Demo612_3_End() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2141.014892578125, 'Pattern1PosY': 473.7008361816406, 'Pattern1PosZ': 2562.39404296875, 'Pattern1AtX': -2146.031005859375, 'Pattern1AtY': 472.423828125, 'Pattern1AtZ': 2558.65625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_3:Npc_Musician_AoC_HeroGerudo_501', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': False})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo1': 'IsPlayed_Demo612_1', 'GameDataFlagNo0': 'IsPlayed_Demo612_0', 'GameDataFlagNo2': 'IsPlayed_Demo612_2', 'GameDataFlagNo3': 'IsPlayed_Demo612_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_001'})
        Event29:
        Npc_Musician_AoC_HeroGerudo.Demo_SetInstEventFlag({'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'BalladOfHero_ChallengClearCount', 'Value': -1, 'IsWaitFinish': True})
      case 1:
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_002'})
        goto Event29
      case 2:
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_003'})
        goto Event29
      case [3, 4, 5]:
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_004'})
        goto Event29
    }
}

void Demo612_3_C04() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoUrbosaBgm'})
        Npc_Musician_AoC_HeroGerudo.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'ASName': '', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo612_3:Npc_Musician_AoC_HeroGerudo_100'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2153.381103515625, 'Pattern1PosY': 585.0996704101562, 'Pattern1PosZ': 2508.164306640625, 'Pattern1AtX': -2150.31787109375, 'Pattern1AtY': 583.1380615234375, 'Pattern1AtZ': 2511.283203125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -2121.816162109375, 'Pattern1PosY': 584.8184204101562, 'Pattern1PosZ': 2480.008056640625, 'Pattern1AtX': -2120.653564453125, 'Pattern1AtY': 583.1380615234375, 'Pattern1AtZ': 2484.342041015625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'Count': 800.0, 'IsWaitFinish': False})
    }

}

void Demo612_3_C03() {
    GameROMPlayer.Demo_LookAtObjectNow({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Musician_AoC_HeroGerudo'})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C03-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 25.0, 'DestinationX': -2146.699951171875, 'DestinationY': 470.20001220703125, 'DestinationZ': 2553.60009765625})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo612_3-Walk-Link-A-0', 'IsEnabledAnimeDriven': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 73})
    Npc_Musician_AoC_HeroGerudo.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
    Npc_Musician_AoC_HeroGerudo.Demo_PlayASForDemo({'ASName': 'Demo612_3-Turn-Npc_Rito_Musician-A-0_Loop', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': 15.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 36})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo1': 'IsPlayed_Demo612_1', 'GameDataFlagNo0': 'IsPlayed_Demo612_0', 'GameDataFlagNo2': 'IsPlayed_Demo612_2', 'GameDataFlagNo3': 'IsPlayed_Demo612_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_010', 'IsCloseMessageDialog': False, 'ASName': 'Demo612_3-Turn-Npc_Rito_Musician-A-1', 'IsBecomingSpeaker': True})
        Event156:
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C03-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_3:Npc_Musician_AoC_HeroGerudo_000', 'IsBecomingSpeaker': True, 'ASName': ''})
      case 1:
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_020', 'ASName': 'Demo612_3-Turn-Npc_Rito_Musician-A-1', 'IsBecomingSpeaker': True})
        goto Event156
      case 2:
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_030', 'ASName': 'Demo612_3-Turn-Npc_Rito_Musician-A-1', 'IsBecomingSpeaker': True})
        goto Event156
      case [3, 4, 5]:
        Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_040', 'ASName': 'Demo612_3-Turn-Npc_Rito_Musician-A-1', 'IsBecomingSpeaker': True})
        goto Event156
    }
}

void Demo612_3_C05() {
    Fader.Demo_FadeOut({'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': False, 'Frame': 1})
    GameROMPlayer.Demo_TurnAndLookToObjectNow({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Musician_AoC_HeroGerudo'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_Musician_AoC_HeroGerudo.Demo_PlayASForDemo({'ASName': 'Wait', 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.2001949548721313, 'Pattern1PosY': 1.998595952987671, 'Pattern1PosZ': 3.764647960662842, 'Pattern1AtX': -0.40039101243019104, 'Pattern1AtY': 1.4750059843063354, 'Pattern1AtZ': -0.7209470272064209, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGerudo', 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        Fader.Demo_FadeIn({'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_Musician_AoC_HeroGerudo.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_3:Npc_Musician_AoC_HeroGerudo_500', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False})
}
