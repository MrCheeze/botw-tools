-------- EventFlow: Demo646_0 --------

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_CallDemo', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_BalladOfHeroes_Last
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerDestinationMove', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_LookAtTheFront', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlowAbs', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WarpPlayerToDestination', 'Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_CustomDuckingStart', 'Demo_CustomDuckingStop', 'Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['Demo_TerrainCalcCenter']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventCloudShadowOff', 'Demo_EventSetCloudShadowMove', 'Demo_EventSetAddFogOff', 'Demo_EventSetFocusDist']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo646_0() {
    WorldManagerControl.Demo_EventCloudShadowOff({'IsWaitFinish': False})

    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()

    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo664_0', 'EndFade': 2, 'IsWaitFinish': True, 'EntryPointName': ''})
    WorldManagerControl.Demo_EventSetCloudShadowMove({'IsWaitFinish': False, 'setSpeed_x': -0.00019999999494757503, 'setSpeed_y': 0.00019999999494757503})

    call C08()


    call C09()


    call C10()


    call C11()


    call C12()


    call C13-16()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Finish'})
}

void C01() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C01-0'})
    } {
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': -1030.0999755859375, 'DestinationY': 251.0, 'DestinationZ': 1813.699951171875, 'DirectionY': 0.0, 'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayerDestinationMove({'StickValue': 0.20000000298023224, 'DestPosX': -1025.199951171875, 'DestPosY': 252.6999969482422, 'DestPosZ': 1798.0999755859375, 'IsWaitFinish': False})
    } {
        Npc_Musician_AoC_BalladOfHeroes_Last.Demo_PlayASForDemo({'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'ASName': 'Wait', 'IsWaitFinish': False, 'MorphingFrame': 0.0})
    } {
        TerrainCalcCenterTag.Demo_TerrainCalcCenter({'IsWaitFinish': False, 'meshReso': -1, 'level': 0, 'pos': [0.0, 0.0, 0.0], 'type': 1})
        WorldManagerControl.Demo_EventSetAddFogOff({'IsWaitFinish': False})
    }

}

void C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C02-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    } {
        EventSystemActor[01].Demo_WarpPlayerToDestination({'DestinationY': 252.39999389648438, 'IsWaitFinish': False, 'DestinationZ': 1800.699951171875, 'DestinationX': -1026.800048828125, 'DirectionY': 139.0})
        GameROMPlayer.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo646_0-C02-Link-A-0', 'MorphingFrame': 5.0, 'ClothWarpMode': 1})
    }

}

void C03() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C03-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 45, 'IsWaitFinish': True})
    GameROMPlayer.Demo_TurnAndLookToObjectNow({'ObjectId': 0, 'IsValid': True, 'FaceId': 1, 'ActorName': 'Npc_Musician_AoC_BalladOfHeroes_Last', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_PlayASForDemo({'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo646_0-C02-Npc_Rito_Musician-A-0', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'BeginTalk'})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_OpenMessageDialog({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text000', 'IsWaitFinish': True, 'ASName': 'Demo646_0-C02-Npc_Rito_Musician-A-1', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0})
}

void C04() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text001'})
}

void C05() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text002'})
}

void C06() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C06-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text006', 'IsCloseMessageDialog': False})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text007', 'IsCloseMessageDialog': True})
    SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'EndTalk'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'ChampionsBalladClear00Bgm'})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_PlayASForDemo({'ASName': 'Act_Accordion', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C06-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'StartDelaySec': 0.30000001192092896, 'ExceptGroups': '', 'FadeOutSec': 3.0, 'Volume': 0.0, 'FadeInSec': 2.0})
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'BgCheck': False, 'SceneName': 'C06-1', 'InterpolateCount': 90.0, 'IsWaitFinish': False})
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Demo646_0-C06-Link-A-0', 'IsWaitFinish': True, 'MorphingFrame': 20.0})
        GameROMPlayer.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
}

void C07() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'EndFrame': 93.0, 'StartFrame': 0.0})
    WorldManagerControl.Demo_EventSetFocusDist({'IsWaitFinish': False, 'FocusDist': 33.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-1', 'EndFrame': 52.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'StartFrame': 190.0, 'EndFrame': 232.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-1', 'StartFrame': 100.0, 'EndFrame': 152.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'StartFrame': 250.0, 'EndFrame': 300.0})
    WorldManagerControl.Demo_EventSetFocusDist({'IsWaitFinish': False, 'FocusDist': 10.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-1', 'StartFrame': 180.0, 'EndFrame': 229.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'StartFrame': 310.0, 'EndFrame': 328.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-1', 'StartFrame': 240.0, 'EndFrame': 251.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'EndFrame': 355.0, 'StartFrame': 344.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-1', 'StartFrame': 260.0, 'EndFrame': 279.0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'StartFrame': 360.0, 'EndFrame': 390.0})
    WorldManagerControl.Demo_EventSetFocusDist({'IsWaitFinish': False, 'FocusDist': 2.0})

    call HerosMemoryStart()

}

void HerosMemoryStart() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'ActorName': '', 'UniqueName': '', 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'SceneName': 'C07-2'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'IsWaitFinish': False, 'ASName': 'Demo646_0-C07-Link-A-0', 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 22})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo309_Player_Remember'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 33})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 0, 'DispMode': 'Auto'})
    }

    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': False})
}

void C08() {
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo646_0_Env', 'SoundDelay': 0, 'SLinkInst': ''})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_PlayASForDemo({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'ChampionsBalladClear01Bgm'})
    } {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C08-0', 'EndFrame': 150.0})
    }

}

void C09() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C09-0'})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'IsValid': False, 'FaceId': 1, 'ActorName': 'Npc_Musician_AoC_BalladOfHeroes_Last', 'IsUseSlowTurn': True, 'IsWaitFinish': True, 'IsTurnToLookAtPos': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'Talk', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'BeginTalk'})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text003'})
}

void C10() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Musician_AoC_BalladOfHeroes_Last.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text004'})
}

void C11() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C09-0'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'DemoBgm', 'Volume': 0.10000000149011612, 'ExceptGroups': '', 'FadeInSec': 2.0, 'StartDelaySec': 0.0, 'FadeOutSec': 1.5})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Get_TwnObj_DLC_MemorialPicture_A_01'})

    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
}

void C12() {
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'NpcFootstep', 'FadeOutSec': 0.10000000149011612, 'FadeInSec': 0.20000000298023224, 'ExceptGroups': '', 'Volume': 0.0, 'StartDelaySec': 0.0})

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C12-0'})
    } {
        WorldManagerControl.Demo_EventSetFocusDist({'IsWaitFinish': False, 'FocusDist': 20.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'BgmName': 'ChampionsBalladClear01Bgm', 'FadeSec': 11.199999809265137})

        fork {
            Npc_Musician_AoC_BalladOfHeroes_Last.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo646_0-C12-Npc_Rito_Musician-A-0'})
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 330})
            Npc_Musician_AoC_BalladOfHeroes_Last.Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': '', 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text005', 'IsWaitFinish': False})
            SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'EndTalk'})
            SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 180})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo646_0-C12-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': 30.0})
            GameROMPlayer.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'DemoWait', 'IsWaitFinish': False, 'MorphingFrame': 60.0})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 1, 'TurnPosition': [0.0, 0.0, 0.0]})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False, 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text011'})
}

void C13-16() {

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C13-0'})
    } {
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'DemoBgm', 'FadeOutSec': 1.0, 'ExceptGroups': '', 'StartDelaySec': 0.0, 'FadeInSec': 2.5, 'Volume': 0.5799999833106995})
        WorldManagerControl.Demo_EventSetFocusDist({'IsWaitFinish': False, 'FocusDist': 5.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'LookAround', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'ChampionsBalladClear02Bgm'})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C14-0'})
    } {
        WorldManagerControl.Demo_EventSetFocusDist({'IsWaitFinish': False, 'FocusDist': 18.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 25.0, 'ClothWarpMode': 1})
    }


    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C15-1'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'Demo646_0-C15-Link-A-0', 'ClothWarpMode': 0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    } {
        WorldManagerControl.Demo_EventSetFocusDist({'IsWaitFinish': False, 'FocusDist': 1.0})
    }

    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C16-0', 'IsWaitFinish': False})
    WorldManagerControl.Demo_EventSetFocusDist({'IsWaitFinish': False, 'FocusDist': 7.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
    NPC_CaptionVoice.Demo_OpenMessageDialog({'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'CloseDialogOption': 1, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False, 'MessageId': 'DemoMsg/Demo646_0:Demo646_0_Text012'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 115})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}

void Demo646_0_2nd() {
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo005_1', 'EntryPointName': 'Field'})
}
