-------- EventFlow: Demo610_1 --------

Actor: Npc_Musician_AoC_HeroRitoRelief
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_LookAtObject', 'Demo_OpenMessageDialog', 'Demo_PlayASForDemo', 'Demo_LookAtTheFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs', 'Demo_CameraAnimFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff', 'Demo_PermitGfxNear']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStart', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_FlagON', 'Demo_CloseMessageDialog']
queries: ['CountFlag4', 'CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerShow', 'Demo_LookAtObject', 'Demo_PlayerWait', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[doushi]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage', 'Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_D_01
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: FldObj_DLC_HeroMap_D_02
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: FldObj_DLC_HeroMap_D_03
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: FldObj_DLC_HeroMapRelief_A_01[Rito]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'PosX': -3662.10302734375, 'PosY': 321.5483093261719, 'PosZ': -1314.6600341796875, 'CreateMode': 1, 'IsWorld': True}

Actor: Dm_Locator_DLC2nd[Locator_2]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsWorld': True, 'PosX': -3662.10302734375, 'PosY': 321.5483093261719, 'PosZ': -1314.6600341796875}

Actor: Dm_Locator_DLC2nd[Locator_3]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 1, 'IsWorld': True, 'PosX': -3662.10302734375, 'PosY': 321.5483093261719, 'PosZ': -1314.6600341796875, 'IsGrounding': False, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[map]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_01[Rito]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_02[Rito]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_03[Rito]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[forCustomDucking]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready() {

    call Demo610_0.Demo610_Pre()


    call Demo610_1_C01()


    call Demo610_1_C01_1()


    call Demo610_1_C01_2()


    call Demo610_1_C02()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_First'}) {

        call Demo610_1_C03()


        call Demo610_1_C04()

        Event116:

        call Demo610_1_C05()


        call Demo610_1_Sing()


        call Demo610_1_C09()


        call Demo610_1_C10()


        call Demo610_1_C11()


        call Demo610_1_C12()


        call Demo610_1_C13()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_DragonEffect'})
    } else {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

        call Demo610_1_C03_Musician_First()

        goto Event116
    }
}

void Demo610_1_Sing() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_ReliefSong'}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'BalladOfHeroGerudo_ReliefSong', 'GameDataFlagNo1': 'BalladOfHeroZora_ReliefSong', 'GameDataFlagNo2': 'BalladOfHeroGoron_ReliefSong', 'GameDataFlagNo3': 'BalladOfHeroRito_ReliefSong'}) {
          case [0, 1]:
            Event27:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad01Bgm'})

            call Demo610_1_C06()

            Event12:
            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
          case 2:
            Event29:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad02Bgm'})

            call Demo610_1_C06()

            goto Event12
          case 3:
            Event31:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad03Bgm'})

            call Demo610_1_C06()

            goto Event12
          case [4, 5]:
            Event30:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad04Bgm'})

            call Demo610_1_C06()

            goto Event12
        }
    } else
    switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'BalladOfHeroGerudo_ReliefSong', 'GameDataFlagNo1': 'BalladOfHeroZora_ReliefSong', 'GameDataFlagNo2': 'BalladOfHeroGoron_ReliefSong', 'GameDataFlagNo3': 'BalladOfHeroRito_ReliefSong'}) {
      case 0:
        goto Event27
      case 1:
        goto Event29
      case 2:
        goto Event31
      case [3, 4, 5]:
        goto Event30
    }
}

void SeekDungeons() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    call Demo610_1_Sing()

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'Count': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_Individual_021'})
}

void Demo610_1_C01() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'Volume': 0.0, 'TargetGroups': 'Bgm', 'FadeInSec': 0.5, 'ExceptGroups': '', 'StartDelaySec': 0.0, 'FadeOutSec': 1.2000000476837158})
    GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'TargetActor': 3, 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01', 'IsWaitFinish': False, 'TargetActorDirReferenceMode': 1, 'UniqueName': 'Rito', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    Npc_Musician_AoC_HeroRitoRelief.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})

    fork {
        EventSystemActor[map].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 560})
        FldObj_DLC_HeroMap_D_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Loop', 'SLinkKey': 'ReliefMapAppear_Start', 'IsTargetDemoSLinkUser': True})
        FldObj_DLC_HeroMap_D_02.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_D_03.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ReliefMapAppear_Loop'})
    } {
        EventSystemActor[doushi].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_1:Npc_DungeonPriest_HeroRitoRelief_001'})
        EventSystemActor[doushi].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 240})
        FldObj_DLC_HeroMapRelief_Mark_A_01[Rito].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        FldObj_DLC_HeroMapRelief_Mark_A_02[Rito].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        FldObj_DLC_HeroMapRelief_Mark_A_03[Rito].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            FldObj_DLC_HeroMapRelief_Mark_A_01[Rito].Demo_PlayASForDemo({'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            FldObj_DLC_HeroMapRelief_Mark_A_01[Rito].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait'})
        } {
            FldObj_DLC_HeroMapRelief_Mark_A_02[Rito].Demo_PlayASForDemo({'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            FldObj_DLC_HeroMapRelief_Mark_A_02[Rito].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait'})
        } {
            FldObj_DLC_HeroMapRelief_Mark_A_03[Rito].Demo_PlayASForDemo({'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            FldObj_DLC_HeroMapRelief_Mark_A_03[Rito].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait'})
        } {
            FldObj_DLC_HeroMapRelief_A_01[Rito].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'Open'})
            FldObj_DLC_HeroMapRelief_A_01[Rito].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait', 'IsWaitFinish': False})
        }

    } {
        EventSystemActor[forCustomDucking].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        EventSystemActor[forCustomDucking].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeInSec': 0.10000000149011612, 'TargetGroups': 'World', 'FadeOutSec': 1.0, 'ExceptGroups': 'Npc,Effect,Env'})
    }

    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': -3658.199951171875, 'DestinationY': 320.3999938964844, 'DestinationZ': -1306.0999755859375, 'DirectionY': 118.0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [-3662.60009765625, 319.70001220703125, -1301.199951171875], 'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01'})
}

void Demo610_1_C02() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C02-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk'})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_010', 'IsCloseMessageDialog': True})
        Event270:
        Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [-3662.60009765625, 319.70001220703125, -1301.199951171875], 'IsValid': True, 'ObjectId': 0, 'FaceId': 2})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C02-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_003', 'IsCloseMessageDialog': True})
      case 1:
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_020', 'IsCloseMessageDialog': True})
        goto Event270
      case 2:
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_030', 'IsCloseMessageDialog': True})
        goto Event270
      case 3:
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_040', 'IsCloseMessageDialog': True})
        goto Event270
    }
}

void Demo610_1_C03() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Musician_AoC_HeroRitoRelief', 'FaceId': 2, 'IsValid': True})
    Npc_Musician_AoC_HeroRitoRelief.Demo_PlayASForDemo({'ASName': 'Demo610_1-C05-Npc_Rito_Musician-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_004', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [-3662.0, 321.8999938964844, -1314.5]})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
}

void Demo610_1_C04() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-1', 'IsWaitFinish': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Musician_Relief_First'}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
          case 1:
            Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_011', 'IsCloseMessageDialog': True})
            Event386:
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [-3654.89990234375, 327.79998779296875, -1314.300048828125], 'ObjectId': 0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_101', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 2:
            Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_012', 'IsCloseMessageDialog': True})
            goto Event386
          case 3:
            Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_013', 'IsCloseMessageDialog': True})
            goto Event386
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Musician_Relief_First', 'IsWaitFinish': True})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_010'})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_050', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [-3654.89990234375, 327.79998779296875, -1314.300048828125], 'ObjectId': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_060'})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_101', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Demo610_1_C05() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3659.1884765625, 'Pattern1PosY': 321.34332275390625, 'Pattern1PosZ': -1303.7686767578125, 'Pattern1AtX': -3655.655029296875, 'Pattern1AtY': 322.3291931152344, 'Pattern1AtZ': -1307.389892578125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3657.4345703125, 'Pattern1PosY': 321.4721984863281, 'Pattern1PosZ': -1305.1383056640625, 'Pattern1AtX': -3653.901123046875, 'Pattern1AtY': 322.4580383300781, 'Pattern1AtZ': -1308.759521484375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Cushion': 0.0, 'Count': 120.0})
    } {
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_105', 'IsCloseMessageDialog': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3656.37060546875, 'Pattern1PosY': 322.0084533691406, 'Pattern1PosZ': -1304.694580078125, 'Pattern1AtX': -3656.119140625, 'Pattern1AtY': 324.3760986328125, 'Pattern1AtZ': -1309.9288330078125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'Count': 90.0, 'Cushion': 30.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
        Npc_Musician_AoC_HeroRitoRelief.Demo_PlayASForDemo({'ASName': 'Demo610_1-C05-Npc_Rito_Musician-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'ActorName': 'SitRemainsWind', 'IsValid': True, 'FaceId': 2})
    }

    Npc_Musician_AoC_HeroRitoRelief.Demo_SetInstEventFlag({'IsWaitFinish': True})
}

void Demo610_1_C06() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-0', 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroRitoRelief.Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_100', 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'CloseDialogOption': 0})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C07-0', 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroRitoRelief.Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_102', 'CloseDialogOption': 0})
    GameRomCamera.Demo_PermitGfxNear({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C08-0', 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroRitoRelief.Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_103', 'CloseDialogOption': 0})
    Npc_Musician_AoC_HeroRitoRelief.Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': False, 'ASName': '', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_104', 'CloseDialogOption': 0})
}

void Demo610_1_C09() {
    Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'TurnPosition': [-3659.199951171875, 320.5, -1306.4000244140625], 'ObjectId': 0, 'FaceId': 2})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3656.955810546875, 'Pattern1PosY': 321.3199768066406, 'Pattern1PosZ': -1306.1580810546875, 'Pattern1AtX': -3654.489990234375, 'Pattern1AtY': 323.3091735839844, 'Pattern1AtZ': -1310.099609375, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_001'})
      case 1:
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_002'})
      case 2:
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_003'})
      case 3:
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_004'})
    }
}

void Demo610_1_C10() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3654.171142578125, 'Pattern1PosY': 322.935302734375, 'Pattern1PosZ': -1312.28955078125, 'Pattern1AtX': -3656.1337890625, 'Pattern1AtY': 321.91845703125, 'Pattern1AtZ': -1307.2288818359375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})

    fork {
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_201', 'IsCloseMessageDialog': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [-3661.199951171875, 327.70001220703125, -1312.5999755859375]})
    }

}

void Demo610_1_C11() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3653.155029296875, 'Pattern1PosY': 320.6338195800781, 'Pattern1PosZ': -1300.1236572265625, 'Pattern1AtX': -3654.431396484375, 'Pattern1AtY': 322.17724609375, 'Pattern1AtZ': -1305.0377197265625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_202'})
}

void Demo610_1_C12() {

    fork {
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_203'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3653.155029296875, 'Pattern1PosY': 320.6338195800781, 'Pattern1PosZ': -1300.1236572265625, 'Pattern1AtX': -3654.431396484375, 'Pattern1AtY': 322.17724609375, 'Pattern1AtZ': -1305.0377197265625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo610_1_C13() {
    Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [-3654.89990234375, 327.79998779296875, -1314.300048828125], 'ObjectId': 0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3663.802734375, 'Pattern1PosY': 328.5810241699219, 'Pattern1PosZ': -1289.56201171875, 'Pattern1AtX': -3659.43701171875, 'Pattern1AtY': 325.3810119628906, 'Pattern1AtZ': -1302.4462890625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_205'})
    Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_204'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3659.858642578125, 'Pattern1PosY': 322.0629577636719, 'Pattern1PosZ': -1301.20556640625, 'Pattern1AtX': -3658.2001953125, 'Pattern1AtY': 322.21966552734375, 'Pattern1AtZ': -1306.099853515625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}

void Demo610_1_C03_Musician_First() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C03-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_First', 'IsWaitFinish': True})
    GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Musician_AoC_HeroRitoRelief', 'FaceId': 2, 'IsValid': True})
    Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_010'})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0'})
    Npc_Musician_AoC_HeroRitoRelief.Demo_PlayASForDemo({'ASName': 'Demo610_1-C05-Npc_Rito_Musician-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_020'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk04'})
    } else {
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk16'})
    }
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0'})
    Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk14'})
    if EventSystemActor.GeneralChoice2() in [0, 1] {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0'})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk05'})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_030'})
        Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'ObjectId': 2, 'TurnPosition': [-3662.0, 321.8999938964844, -1314.5]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-1', 'IsWaitFinish': False})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_001'})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_050'})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroRitoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [-3654.89990234375, 327.79998779296875, -1314.300048828125], 'ObjectId': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_060'})
        Npc_Musician_AoC_HeroRitoRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_1:Npc_Musician_AoC_HeroRitoRelief_101', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagON({'FlagName': 'Musician_Relief_First', 'IsWaitFinish': True})
    }
}

void Demo610_1_C01_2() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'UniqueName': '', 'Accept1FrameDelay': False, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C01-1', 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01'})
    } {
        FldObj_DLC_HeroMap_D_02.Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_D_02.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_2nd3rd', 'IsTargetDemoSLinkUser': True})

        fork {
            FldObj_DLC_HeroMap_D_03.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        } {
            Dm_Locator_DLC2nd.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo610_1-C03-Dm_Locator-D_01_Loop'})
            EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
            Dm_Locator_DLC2nd.Demo_XLinkEventCreate({'ELinkKey': 'ReliefMapAppear_Mark', 'IsWaitFinish': True, 'SLinkKey': 'ReliefMapAppear_Mark_2nd3rd', 'IsTargetDemoSLinkUser': True})
        }

        FldObj_DLC_HeroMap_D_03.Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_D_03.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_2nd3rd', 'IsTargetDemoSLinkUser': True})

        fork {
            FldObj_DLC_HeroMap_D_02.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        } {
            Dm_Locator_DLC2nd[Locator_2].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo610_1-C03-Dm_Locator-D_02_Loop'})
            EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
            Dm_Locator_DLC2nd[Locator_2].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Mark', 'SLinkKey': 'ReliefMapAppear_Mark_2nd3rd', 'IsTargetDemoSLinkUser': True})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void Demo610_1_C01_1() {
    FldObj_DLC_HeroMap_D_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosZ': -0.5803830027580261, 'Pattern1AtY': 2.151397943496704, 'Pattern1AtZ': -3.061583995819092, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'FldObj_DLC_HeroMap_D_01', 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'Pattern1PosY': 2.151397943496704, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Count': 0.0})
    FldObj_DLC_HeroMap_D_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'IsTargetDemoSLinkUser': True, 'SLinkKey': 'ReliefMapAppear_Finish_1st'})

    fork {
        Dm_Locator_DLC2nd[Locator_3].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo610_1-C03-Dm_Locator-D_03_Loop'})
        FldObj_DLC_HeroMap_D_01.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
        Dm_Locator_DLC2nd[Locator_3].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Mark', 'SLinkKey': 'ReliefMapAppear_Mark_1st', 'IsTargetDemoSLinkUser': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
}
