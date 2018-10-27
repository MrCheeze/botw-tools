-------- EventFlow: Demo612_2 --------

Actor: Npc_Musician_AoC_HeroZora
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialog', 'Demo_WarpToAnchor', 'Demo_LookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_IncreaseGameDataInt']
queries: ['CountFlag4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs', 'Demo_PermitGfxNear']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_TurnAndLookToObjectNow', 'Demo_LookAtObject']
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

void Demo612_2() {

    call Demo612_2_C01()


    call Demo612_2_C02()


    call Demo612_2_C03()


    call Demo612_2_Sing()


    call Demo612_2_C04()

    Fader.Demo_FadeOut({'Frame': 0, 'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo662_0', 'EndFade': 1})

    call Demo612_2_C05()


    call Demo612_2_End()

}

void Demo612_2_Sing() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-2', 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroZora.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo612_2-Turn-Npc_Rito_Musician-A-2'})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMute', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_2:Npc_Musician_AoC_HeroZora_001'})
    }

}

void Demo612_2_C01() {
    TerrainCalcCenterTag.Demo_TerrainCalcCenter({'type': 1, 'IsWaitFinish': False, 'pos': [0.0, 0.0, 0.0], 'level': 0, 'meshReso': -1})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.01196299958974123, 'Pattern1PosY': 1.1295169591903687, 'Pattern1PosZ': 2.445496082305908, 'Pattern1AtX': -0.005859000142663717, 'Pattern1AtY': 0.6278690099716187, 'Pattern1AtZ': -2.162169933319092, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        Npc_Musician_AoC_HeroZora.Demo_WarpToAnchor({'IsWaitFinish': False, 'DirectionY': 0.0, 'DestinationX': 2958.699951171875, 'DestinationY': 406.20001220703125, 'DestinationZ': 134.60000610351562})
        Npc_Musician_AoC_HeroZora.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Act_Accordion'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'PracticePlayAccoMipha'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    } {
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Demo612_2-C01-Link-A-0', 'NoErrorCheck': True})
    }

}

void Demo612_2_C02() {
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2944.7490234375, 'Pattern1PosY': 409.72930908203125, 'Pattern1PosZ': 128.05006408691406, 'Pattern1AtX': 2951.348388671875, 'Pattern1AtY': 408.7179870605469, 'Pattern1AtZ': 131.4450225830078, 'Pattern1Fovy': 50.00001907348633, 'CollisionInterpolateSkip': False, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2946.5673828125, 'Pattern1PosY': 409.4506530761719, 'Pattern1PosZ': 128.98545837402344, 'Pattern1AtX': 2951.348388671875, 'Pattern1AtY': 408.7179870605469, 'Pattern1AtZ': 131.4450225830078, 'Pattern1Fovy': 50.00001907348633, 'Count': 200.0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    }

}

void Demo612_2_C03() {
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 2, 'ActorName': 'Npc_Musician_AoC_HeroZora', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C03-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 98.0, 'DestinationY': 406.20001220703125, 'DestinationX': 2951.10009765625, 'DestinationZ': 135.3000030517578})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ASName': 'Demo612_2-Walk-Link-A-0', 'MorphingFrame': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
    Npc_Musician_AoC_HeroZora.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 270.0, 'IsValid': True, 'ObjectId': 0, 'FaceId': 2})
    Npc_Musician_AoC_HeroZora.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo612_2-Turn-Npc_Rito_Musician-A-0_Loop'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 36})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo1': 'IsPlayed_Demo612_1', 'GameDataFlagNo0': 'IsPlayed_Demo612_0', 'GameDataFlagNo2': 'IsPlayed_Demo612_2', 'GameDataFlagNo3': 'IsPlayed_Demo612_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_010', 'IsCloseMessageDialog': False, 'ASName': 'Demo612_2-Turn-Npc_Rito_Musician-A-1'})
        Event173:
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C03-1'})
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_2:Npc_Musician_AoC_HeroZora_000'})
      case 1:
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_020', 'ASName': 'Demo612_2-Turn-Npc_Rito_Musician-A-1'})
        goto Event173
      case 2:
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_030', 'ASName': 'Demo612_2-Turn-Npc_Rito_Musician-A-1'})
        goto Event173
      case 3:
        Event107:
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_040', 'ASName': 'Demo612_2-Turn-Npc_Rito_Musician-A-1'})
        goto Event173
      case 4:
        goto Event107
      case 5:
        goto Event107
    }
}

void Demo612_2_C04() {

    fork {
        EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoMiphaBgm'})
        Npc_Musician_AoC_HeroZora.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'ASName': '', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo612_2:Npc_Musician_AoC_HeroZora_100', 'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -10.145263671875, 'Pattern1PosY': 27.41876220703125, 'Pattern1PosZ': -74.09141540527344, 'Pattern1AtX': -10.144775390625, 'Pattern1AtY': 31.068572998046875, 'Pattern1AtZ': -66.05929565429688, 'Pattern1Fovy': 59.129356384277344, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWater', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -24.415771484375, 'Pattern1PosY': 47.87908935546875, 'Pattern1PosZ': -64.58255004882812, 'Pattern1AtX': -23.22265625, 'Pattern1AtY': 53.008056640625, 'Pattern1AtZ': -54.940948486328125, 'Pattern1Fovy': 59.129356384277344, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'SitRemainsWater', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': False, 'IsWaitFinish': False, 'Count': 1000.0})
    }

}

void Demo612_2_End() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.669495105743408, 'Pattern1PosY': 3.137877941131592, 'Pattern1PosZ': -2.492919921875, 'Pattern1AtX': 0.31445300579071045, 'Pattern1AtY': 1.5254520177841187, 'Pattern1AtZ': 0.8442379832267761, 'Pattern1Fovy': 40.00001525878906, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroZora', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_2:Npc_Musician_AoC_HeroZora_501', 'IsCloseMessageDialog': False})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo1': 'IsPlayed_Demo612_1', 'GameDataFlagNo0': 'IsPlayed_Demo612_0', 'GameDataFlagNo2': 'IsPlayed_Demo612_2', 'GameDataFlagNo3': 'IsPlayed_Demo612_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_001'})
        Event23:
        Npc_Musician_AoC_HeroZora.Demo_SetInstEventFlag({'IsWaitFinish': True})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'BalladOfHero_ChallengClearCount', 'Value': -1, 'IsWaitFinish': True})
      case 1:
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_002'})
        goto Event23
      case 2:
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_003'})
        goto Event23
      case 3:
        Event169:
        Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo612_Grow_004'})
        goto Event23
      case 4:
        goto Event169
      case 5:
        goto Event169
    }
}

void Demo612_2_C05() {
    Fader.Demo_FadeOut({'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': False, 'Frame': 1})
    GameROMPlayer.Demo_TurnAndLookToObjectNow({'ObjectId': 2, 'IsValid': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 80.0, 'FaceId': 2, 'ActorName': 'Npc_Musician_AoC_HeroZora', 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_Musician_AoC_HeroZora.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2954.480712890625, 'Pattern1PosY': 408.558837890625, 'Pattern1PosZ': 136.22213745117188, 'Pattern1AtX': 2957.912353515625, 'Pattern1AtY': 407.8600769042969, 'Pattern1AtZ': 134.8730010986328, 'Pattern1Fovy': 41.75957107543945, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        Fader.Demo_FadeIn({'Color': 0, 'DispMode': 'NoLogo', 'IsWaitFinish': True, 'Frame': 1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    Npc_Musician_AoC_HeroZora.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo612_2:Npc_Musician_AoC_HeroZora_500', 'IsCloseMessageDialog': False})
}
