-------- EventFlow: Demo612_1 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_IncreaseGameDataInt', 'Demo_FlagON']
queries: ['CountFlag4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_HeroRito
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialog', 'Demo_WarpToActor', 'Demo_LookAtObject']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'PosX': -3628.800048828125, 'PosY': 516.0, 'PosZ': -1811.5999755859375, 'IsWorld': True, 'RotY': 180.0, 'CreateMode': 2}

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
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
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

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo612_1() {
    EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroRito_DemoObj01', 'IsWaitFinish': True})

    call Demo612_1_C01()


    call Demo612_1_C02()


    call Demo612_1_C03()


    call Demo612_1_Sing()


    call Demo612_1_C04()

    Fader.Demo_FadeOut({'Frame': 0, 'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo660_0', 'EndFade': 1})

    call Demo612_1_C05()


    call Demo612_1_End()

}

void Demo612_1_Sing() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-2', 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroRito.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo612_1-Turn-Npc_Rito_Musician-A-2', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMute', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_1:Npc_Musician_AoC_HeroRito_001'})
    }

}

void Demo612_1_C01() {
    TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.0860600471496582, 'Pattern1PosZ': 2.494385004043579, 'Pattern1AtY': 0.9692379832267761, 'Pattern1AtZ': 0.8288570046424866, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'ReviseModeEnd': 0})

    fork {
        Npc_Musician_AoC_HeroRito.Demo_WarpToActor({'IsWaitFinish': False, 'DestinationX': -3628.800048828125, 'DestinationY': 516.0, 'DestinationZ': -1811.5999755859375, 'DirectionY': 180.0, 'ActorName': '', 'RotToVec3f': False, 'GameDataVec3fRotDir': ''})
        Npc_Musician_AoC_HeroRito.Demo_PlayASForDemo({'ASName': 'Act_Accordion', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'PracticePlayAccoRevali', 'SoundDelay': 0, 'SLinkInst': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    } {
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo612_1-C01-Link-A-0'})
    }

}

void Demo612_1_C02() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3623.838134765625, 'Pattern1PosY': 515.8633422851562, 'Pattern1PosZ': -1800.4884033203125, 'Pattern1AtX': -3625.968994140625, 'Pattern1AtY': 516.6741943359375, 'Pattern1AtZ': -1805.3870849609375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3624.506591796875, 'Pattern1PosY': 516.11767578125, 'Pattern1PosZ': -1802.025146484375, 'Pattern1AtX': -3625.968994140625, 'Pattern1AtY': 516.6741943359375, 'Pattern1AtZ': -1805.3870849609375, 'Pattern1Fovy': 50.00001907348633, 'Count': 180.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void Demo612_1_End() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3625.064697265625, 'Pattern1PosY': 518.6025390625, 'Pattern1PosZ': -1812.8983154296875, 'Pattern1AtX': -3628.902587890625, 'Pattern1AtY': 517.0880737304688, 'Pattern1AtZ': -1809.1270751953125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_1:Npc_Musician_AoC_HeroRito_501', 'IsCloseMessageDialog': False})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo1': 'IsPlayed_Demo612_1', 'GameDataFlagNo0': 'IsPlayed_Demo612_0', 'GameDataFlagNo2': 'IsPlayed_Demo612_2', 'GameDataFlagNo3': 'IsPlayed_Demo612_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_001'})
        Event29:
        Npc_Musician_AoC_HeroRito.Demo_SetInstEventFlag({'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'BalladOfHero_ChallengClearCount', 'Value': -1, 'IsWaitFinish': True})
      case 1:
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_002'})
        goto Event29
      case 2:
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_003'})
        goto Event29
      case 3:
        Event138:
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_004'})
        goto Event29
      case 4:
        goto Event138
      case 5:
        goto Event138
    }
}

void Demo612_1_C04() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoRevaliBgm'})
        Npc_Musician_AoC_HeroRito.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo612_1:Npc_Musician_AoC_HeroRito_100', 'CloseDialogOption': 3, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsWaitFinish': False, 'ASName': 'Act_Accordion'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3542.009033203125, 'Pattern1PosY': 547.7207641601562, 'Pattern1PosZ': -1727.00390625, 'Pattern1AtX': -3601.635986328125, 'Pattern1AtY': 580.1341552734375, 'Pattern1AtZ': -1860.55908203125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3454.916015625, 'Pattern1PosY': 546.6871337890625, 'Pattern1PosZ': -1770.46142578125, 'Pattern1AtX': -3601.635986328125, 'Pattern1AtY': 580.1341552734375, 'Pattern1AtZ': -1860.55908203125, 'Pattern1Fovy': 50.00001907348633, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 680.0})
    }

}

void Demo612_1_C03() {
    GameROMPlayer.Demo_LookAtObjectNow({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Musician_AoC_HeroRito', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C03-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 190.0, 'DestinationX': -3627.699951171875, 'DestinationY': 515.052001953125, 'DestinationZ': -1803.8800048828125})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo612_1-Walk-Link-A-0', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    Npc_Musician_AoC_HeroRito.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
    Npc_Musician_AoC_HeroRito.Demo_PlayASForDemo({'ASName': 'Demo612_1-Turn-Npc_Rito_Musician-A-0_Loop', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': 15.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 36})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo1': 'IsPlayed_Demo612_1', 'GameDataFlagNo0': 'IsPlayed_Demo612_0', 'GameDataFlagNo2': 'IsPlayed_Demo612_2', 'GameDataFlagNo3': 'IsPlayed_Demo612_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_010', 'IsCloseMessageDialog': False, 'ASName': 'Demo612_1-Turn-Npc_Rito_Musician-A-1'})
        Event143:
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C03-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_1:Npc_Musician_AoC_HeroRito_000'})
      case 1:
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_020', 'ASName': 'Demo612_1-Turn-Npc_Rito_Musician-A-1'})
        goto Event143
      case 2:
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_030', 'ASName': 'Demo612_1-Turn-Npc_Rito_Musician-A-1'})
        goto Event143
      case 3:
        Event113:
        Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_040', 'ASName': 'Demo612_1-Turn-Npc_Rito_Musician-A-1'})
        goto Event143
      case 4:
        goto Event113
      case 5:
        goto Event113
    }
}

void Demo612_1_C05() {
    Fader.Demo_FadeOut({'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': False, 'Frame': 1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Npc_Musician_AoC_HeroRito.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.1330569982528687, 'Pattern1PosY': 1.85064697265625, 'Pattern1PosZ': 3.66845703125, 'Pattern1AtX': -0.2985840141773224, 'Pattern1AtY': 1.4150999784469604, 'Pattern1AtZ': -0.7155759930610657, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroRito', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        Fader.Demo_FadeIn({'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_Musician_AoC_HeroRito.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_1:Npc_Musician_AoC_HeroRito_500', 'IsCloseMessageDialog': False})
}
