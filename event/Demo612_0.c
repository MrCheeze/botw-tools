-------- EventFlow: Demo612_0 --------

Actor: Npc_Musician_AoC_HeroGoron
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialog', 'Demo_WarpToActor', 'Demo_LookAtObject']
queries: []
params: {'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'IsGrounding': True, 'PosX': 2460.0, 'PosY': 997.0, 'PosZ': -2536.0, 'IsWorld': True, 'CreateMode': 2}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_IncreaseGameDataInt']
queries: ['CountFlag4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_TurnAndLookToObjectNow', 'Demo_LookAtObjectNow']
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

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
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

void Demo612_0() {

    call Demo612_0_C01()


    call Demo612_0_C02()


    call Demo612_0_C03()


    call Demo612_0_Sing()


    call Demo612_0_C04()

    Fader.Demo_FadeOut({'Frame': 0, 'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo661_0', 'EndFade': 1})

    call Demo612_0_C05()


    call Demo612_0_End()

}

void Demo612_0_Sing() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C03-2', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroGoron.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo612_0-Turn-Npc_Rito_Musician-A-2', 'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMute', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo612_0:Npc_Musician_AoC_HeroGoron_001', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    }

}

void Demo612_0_C01() {
    TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 1.0860600471496582, 'Pattern1PosZ': 2.494385004043579, 'Pattern1AtY': 0.9692379832267761, 'Pattern1AtZ': 0.8288570046424866, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'ReviseModeEnd': 0})

    fork {
        Npc_Musician_AoC_HeroGoron.Demo_WarpToActor({'IsWaitFinish': False, 'ActorName': '', 'RotToVec3f': False, 'GameDataVec3fRotDir': '', 'DestinationX': 2460.300048828125, 'DestinationY': 997.0, 'DestinationZ': -2535.89990234375, 'DirectionY': -90.0})
        Npc_Musician_AoC_HeroGoron.Demo_PlayASForDemo({'ASName': 'Act_Accordion', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'PracticePlayAccoDaruk', 'SoundDelay': 0, 'SLinkInst': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    } {
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Demo612_0-C01-Link-A-0', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': True})
    }

}

void Demo612_0_C02() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.866942882537842, 'Pattern1PosY': -3.602051019668579, 'Pattern1PosZ': -10.161376953125, 'Pattern1AtX': -3.90966796875, 'Pattern1AtY': -2.4305419921875, 'Pattern1AtZ': -6.787598133087158, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGoron', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.227783203125, 'Pattern1PosY': -3.219849109649658, 'Pattern1PosZ': -9.059326171875, 'Pattern1AtX': -3.90966796875, 'Pattern1AtY': -2.4305419921875, 'Pattern1AtZ': -6.787598133087158, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGoron', 'Count': 60.0, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void Demo612_0_End() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2456.8935546875, 'Pattern1PosY': 1001.4644775390625, 'Pattern1PosZ': -2539.278564453125, 'Pattern1AtX': 2458.4951171875, 'Pattern1AtY': 1000.349853515625, 'Pattern1AtZ': -2538.204833984375, 'Pattern1Fovy': 30.000015258789062, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_0:Npc_Musician_AoC_HeroGoron_501', 'IsCloseMessageDialog': False})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo1': 'IsPlayed_Demo612_1', 'GameDataFlagNo0': 'IsPlayed_Demo612_0', 'GameDataFlagNo2': 'IsPlayed_Demo612_2', 'GameDataFlagNo3': 'IsPlayed_Demo612_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_001'})
        Event6:
        Npc_Musician_AoC_HeroGoron.Demo_SetInstEventFlag({'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'BalladOfHero_ChallengClearCount', 'Value': -1, 'IsWaitFinish': True})
      case 1:
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_002'})
        goto Event6
      case 2:
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_003'})
        goto Event6
      case [3, 4, 5]:
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_004'})
        goto Event6
    }
}

void Demo612_0_C04() {

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoDarukBgm'})
        Npc_Musician_AoC_HeroGoron.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_0:Npc_Musician_AoC_HeroGoron_100', 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Act_Accordion'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2451.615966796875, 'Pattern1PosY': 1023.74609375, 'Pattern1PosZ': -2509.319091796875, 'Pattern1AtX': 2431.69287109375, 'Pattern1AtY': 1003.3458251953125, 'Pattern1AtZ': -2534.807373046875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2389.92822265625, 'Pattern1PosY': 1010.081298828125, 'Pattern1PosZ': -2486.810546875, 'Pattern1AtX': 2416.306396484375, 'Pattern1AtY': 987.5139770507812, 'Pattern1AtZ': -2535.238525390625, 'Pattern1Fovy': 50.00001907348633, 'Count': 800.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': False})
    }

}

void Demo612_0_C03() {
    GameROMPlayer.Demo_LookAtObjectNow({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Musician_AoC_HeroGoron'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2464.92578125, 'Pattern1PosY': 995.9013671875, 'Pattern1PosZ': -2539.5087890625, 'Pattern1AtX': 2461.466552734375, 'Pattern1AtY': 997.7393188476562, 'Pattern1AtZ': -2534.82666015625, 'Pattern1Fovy': 40.00001525878906, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 2467.0, 'DestinationY': 994.4000244140625, 'DestinationZ': -2538.0, 'DirectionY': -63.35200119018555})
    GameROMPlayer.Demo_PlayASAdapt({'ClothWarpMode': 1, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': 0.0, 'ASName': 'Demo612_0-Walk-Link-A-0', 'IsEnabledAnimeDriven': 1, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 73})
    Npc_Musician_AoC_HeroGoron.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2})
    Npc_Musician_AoC_HeroGoron.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'ASName': 'Demo612_0-Turn-Npc_Rito_Musician-A-0_Loop', 'MorphingFrame': 15.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 36})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo1': 'IsPlayed_Demo612_1', 'GameDataFlagNo0': 'IsPlayed_Demo612_0', 'GameDataFlagNo2': 'IsPlayed_Demo612_2', 'GameDataFlagNo3': 'IsPlayed_Demo612_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_010', 'IsCloseMessageDialog': False, 'ASName': 'Demo612_0-Turn-Npc_Rito_Musician-A-1'})
        Event164:
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2462.021240234375, 'Pattern1PosY': 998.2425537109375, 'Pattern1PosZ': -2538.30126953125, 'Pattern1AtX': 2459.1689453125, 'Pattern1AtY': 999.1500854492188, 'Pattern1AtZ': -2534.55810546875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_0:Npc_Musician_AoC_HeroGoron_000'})
      case 1:
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_020', 'ASName': 'Demo612_0-Turn-Npc_Rito_Musician-A-1'})
        goto Event164
      case 2:
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_030', 'ASName': 'Demo612_0-Turn-Npc_Rito_Musician-A-1'})
        goto Event164
      case [3, 4, 5]:
        Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_040', 'ASName': 'Demo612_0-Turn-Npc_Rito_Musician-A-1'})
        goto Event164
    }
}

void Demo612_0_C05() {
    Fader.Demo_FadeOut({'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': False, 'Frame': 1})
    GameROMPlayer.Demo_TurnAndLookToObjectNow({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Musician_AoC_HeroGoron'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_Musician_AoC_HeroGoron.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2463.814208984375, 'Pattern1PosY': 998.9185180664062, 'Pattern1PosZ': -2537.593017578125, 'Pattern1AtX': 2459.57666015625, 'Pattern1AtY': 998.3713989257812, 'Pattern1AtZ': -2535.423095703125, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        Fader.Demo_FadeIn({'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_Musician_AoC_HeroGoron.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_0:Npc_Musician_AoC_HeroGoron_500', 'IsCloseMessageDialog': False})
}
