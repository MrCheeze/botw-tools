-------- EventFlow: Demo610_2 --------

Actor: Npc_Musician_AoC_HeroZoraRelief
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_LookAtObject', 'Demo_OpenMessageDialog', 'Demo_WarpToAnchor', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_CameraAnimFlow', 'Demo_PlayerHideOff']
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
actions: ['Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['CountFlag4', 'CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayerWait', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_C_01
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_C_02
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_C_03
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_A_01[Zora]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd[Locator_2]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'PosX': 3739.800048828125, 'PosY': 401.5, 'PosZ': 53.400001525878906, 'CreateMode': 1, 'IsWorld': True, 'RotY': -18.0}

Actor: Dm_Locator_DLC2nd[Locator_3]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'IsWorld': True, 'CreateMode': 1, 'PosZ': 53.400001525878906, 'PosY': 401.5, 'PosX': 3739.800048828125, 'RotY': -18.0}

Actor: Dm_Locator_DLC2nd
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsWorld': True, 'PosX': 3739.800048828125, 'PosY': 401.5, 'PosZ': 53.400001525878906, 'RotY': -18.0}

Actor: EventSystemActor[doshi]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[relief]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd[Camera]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsWorld': True, 'PosX': 3739.800048828125, 'PosY': 401.5, 'PosZ': 53.400001525878906, 'CreateMode': 1, 'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'RotY': 102.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_02[Zora]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_03[Zora]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_01[Zora]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[2nd]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[second]
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


    call Demo610_2_C01()


    call Demo610_2_C01_1()


    call Demo610_2_C01_2()


    call Demo610_2_C02()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_First'}) {

        call Demo610_2_C03()


        call Demo610_2_C04()

        Event134:

        call Demo610_2_C05()


        call Demo610_2_Sing()


        call Demo610_2_C09()


        call Demo610_2_C10()


        call Demo610_2_C11()


        call Demo610_2_C12()


        call Demo610_2_C13()

    } else {

        call Demo610_2_C03_Musician_First()

        goto Event134
    }
}

void Demo610_2_Sing() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_ReliefSong'}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'BalladOfHeroGerudo_ReliefSong', 'GameDataFlagNo1': 'BalladOfHeroZora_ReliefSong', 'GameDataFlagNo2': 'BalladOfHeroGoron_ReliefSong', 'GameDataFlagNo3': 'BalladOfHeroRito_ReliefSong'}) {
          case [0, 1]:
            Event29:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad01Bgm'})

            call Demo610_2_C06()

            Event9:
            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
          case 2:
            Event31:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad02Bgm'})

            call Demo610_2_C06()

            goto Event9
          case 3:
            Event33:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad03Bgm'})

            call Demo610_2_C06()

            goto Event9
          case [4, 5]:
            Event32:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad04Bgm'})

            call Demo610_2_C06()

            goto Event9
        }
    } else
    switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'BalladOfHeroGerudo_ReliefSong', 'GameDataFlagNo1': 'BalladOfHeroZora_ReliefSong', 'GameDataFlagNo2': 'BalladOfHeroGoron_ReliefSong', 'GameDataFlagNo3': 'BalladOfHeroRito_ReliefSong'}) {
      case 0:
        goto Event29
      case 1:
        goto Event31
      case 2:
        goto Event33
      case [3, 4, 5]:
        goto Event32
    }
}

void SeekDungeons() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    call Demo610_2_Sing()

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'Count': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_Individual_021'})
}

void Demo610_2_C01() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'Volume': 0.0, 'TargetGroups': 'Bgm', 'FadeInSec': 0.5, 'ExceptGroups': '', 'StartDelaySec': 0.0, 'FadeOutSec': 1.2000000476837158})
    GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C01-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Dm_Locator_DLC2nd', 'UniqueName': 'Camera'})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    Npc_Musician_AoC_HeroZoraRelief.Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 47.0, 'DestinationX': 3744.300048828125, 'DestinationZ': 41.5, 'DestinationY': 400.20001220703125})
    Npc_Musician_AoC_HeroZoraRelief.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Wait'})
    Dm_Locator_DLC2nd[Camera].Demo_Join({'IsWaitFinish': False})

    fork {
        EventSystemActor[2nd].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 560})
        FldObj_DLC_HeroMap_C_02.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Loop', 'SLinkKey': 'ReliefMapAppear_Start', 'IsTargetDemoSLinkUser': True})
        FldObj_DLC_HeroMap_C_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_C_03.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ReliefMapAppear_Loop'})
    } {
        EventSystemActor[doshi].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        EventSystemActor[doshi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_2:Npc_DungeonPriest_HeroZoraRelief_001'})
        EventSystemActor[doshi].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventSystemActor[relief].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 240})
        FldObj_DLC_HeroMapRelief_Mark_A_01[Zora].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor[relief].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        FldObj_DLC_HeroMapRelief_Mark_A_02[Zora].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor[relief].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        FldObj_DLC_HeroMapRelief_Mark_A_03[Zora].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor[relief].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            FldObj_DLC_HeroMapRelief_Mark_A_01[Zora].Demo_PlayASForDemo({'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            FldObj_DLC_HeroMapRelief_Mark_A_01[Zora].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait'})
        } {
            FldObj_DLC_HeroMapRelief_Mark_A_02[Zora].Demo_PlayASForDemo({'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            FldObj_DLC_HeroMapRelief_Mark_A_02[Zora].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait'})
        } {
            FldObj_DLC_HeroMapRelief_Mark_A_03[Zora].Demo_PlayASForDemo({'ASName': 'Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            FldObj_DLC_HeroMapRelief_Mark_A_03[Zora].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait'})
        } {
            FldObj_DLC_HeroMapRelief_A_01[Zora].Demo_PlayASForDemo({'ASName': 'Open', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            FldObj_DLC_HeroMapRelief_A_01[Zora].Demo_PlayASForDemo({'ASName': 'OpenWait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        }

    } {
        EventSystemActor[forCustomDucking].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        EventSystemActor[forCustomDucking].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeInSec': 0.10000000149011612, 'TargetGroups': 'World', 'FadeOutSec': 1.0, 'ExceptGroups': 'Npc,Effect,Env'})
    }

    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 300.0, 'DestinationY': 399.29998779296875, 'DestinationX': 3739.199951171875, 'DestinationZ': 42.900001525878906})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': 0.0, 'ASName': 'Talk'})
}

void Demo610_2_C02() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-1'})
    Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName': 'Zora'})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_010', 'IsCloseMessageDialog': True})
        Event78:
        Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-2'})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_001', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
      case 1:
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_020', 'IsCloseMessageDialog': True})
        goto Event78
      case 2:
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_030', 'IsCloseMessageDialog': True})
        goto Event78
      case 3:
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_040', 'IsCloseMessageDialog': True})
        goto Event78
    }
}

void Demo610_2_C03() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0'})
    Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True})
    Npc_Musician_AoC_HeroZoraRelief.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo610_2-C05-Npc_Rito_Musician-A-0', 'MorphingFrame': -1.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2})
    Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_002', 'IsCloseMessageDialog': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'IsWaitFinish': True, 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName': 'Zora'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
}

void Demo610_2_C03_Musician_First() {
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_First', 'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0'})
    Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_010', 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0'})
    Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True})
    Npc_Musician_AoC_HeroZoraRelief.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo610_2-C05-Npc_Rito_Musician-A-0', 'MorphingFrame': -1.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2})
    Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_020'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk04'})
    } else {
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk16'})
    }
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0'})
    Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk14'})
    if EventSystemActor.GeneralChoice2() in [0, 1] {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0'})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk05'})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_030'})
        Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'IsWaitFinish': True, 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName': 'Zora'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-1', 'IsWaitFinish': False})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_001'})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_050'})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': ''})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_060'})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_004', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
        EventSystemActor.Demo_FlagON({'FlagName': 'Musician_Relief_First', 'IsWaitFinish': True})
    }
}

void Demo610_2_C04() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-1', 'IsWaitFinish': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Musician_Relief_First'}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
          case 1:
            Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_011', 'IsCloseMessageDialog': True})
            Event374:
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': ''})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_004', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
          case 2:
            Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_012', 'IsCloseMessageDialog': True})
            goto Event374
          case 3:
            Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_013', 'IsCloseMessageDialog': True})
            goto Event374
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Musician_Relief_First', 'IsWaitFinish': True})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_010'})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_050', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_060'})
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_004', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }
}

void Demo610_2_C05() {
    SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMute', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3742.293212890625, 'Pattern1PosY': 399.97161865234375, 'Pattern1PosZ': 40.3153076171875, 'Pattern1AtX': 3740.2158203125, 'Pattern1AtY': 400.47998046875, 'Pattern1AtZ': 41.803043365478516, 'Pattern1Fovy': 50.00001907348633, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3737.777099609375, 'Pattern1PosY': 401.0068664550781, 'Pattern1PosZ': 42.30271530151367, 'Pattern1AtX': 3735.606201171875, 'Pattern1AtY': 401.0987243652344, 'Pattern1AtZ': 43.74000930786133, 'Pattern1Fovy': 50.00001907348633, 'Count': 120.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_005', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsWaitFinish': True})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3733.36865234375, 'Pattern1PosY': 405.47760009765625, 'Pattern1PosZ': 49.494834899902344, 'Pattern1AtX': 3730.821044921875, 'Pattern1AtY': 405.6900329589844, 'Pattern1AtZ': 49.99744415283203, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 90.0, 'Cushion': 30.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    } {
        Npc_Musician_AoC_HeroZoraRelief.Demo_PlayASForDemo({'ASName': 'Demo610_2-C05-Npc_Rito_Musician-A-1', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    Npc_Musician_AoC_HeroZoraRelief.Demo_SetInstEventFlag({'IsWaitFinish': True})
}

void Demo610_2_C06() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-0', 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroZoraRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_100', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'ASName': 'Act_Accordion', 'CloseDialogOption': 1})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C07-0'})
    Npc_Musician_AoC_HeroZoraRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_101', 'IsBecomingSpeaker': False, 'ASName': 'Act_Accordion', 'CloseDialogOption': 1})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C08-0'})
    Npc_Musician_AoC_HeroZoraRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_102', 'IsBecomingSpeaker': False, 'ASName': 'Act_Accordion', 'CloseDialogOption': 1})
    Npc_Musician_AoC_HeroZoraRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_103', 'IsBecomingSpeaker': False, 'ASName': 'Act_Accordion', 'IsCloseMessageDialog': True, 'CloseDialogOption': 1})
}

void Demo610_2_C09() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3738.5185546875, 'Pattern1PosY': 401.0187683105469, 'Pattern1PosZ': 41.92778778076172, 'Pattern1AtX': 3734.0283203125, 'Pattern1AtY': 401.1933288574219, 'Pattern1AtZ': 44.48755645751953, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True})
    Npc_Musician_AoC_HeroZoraRelief.Demo_PlayASForDemo({'ASName': 'Demo610_2-C09-Npc_Rito_Musician-A-0', 'MorphingFrame': -1.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_001'})
      case 1:
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_002'})
      case 2:
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_003'})
      case 3:
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_004'})
    }
}

void Demo610_2_C10() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -5.715576171875, 'Pattern1PosY': 3.462280035018921, 'Pattern1PosZ': 1.818114995956421, 'Pattern1AtX': -0.6862789988517761, 'Pattern1AtY': 1.8165889978408813, 'Pattern1AtZ': 1.4172359704971313, 'Pattern1Fovy': 34.99998474121094, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroZoraRelief', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_201', 'IsCloseMessageDialog': False})
    Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ObjectId': 2, 'TurnPosition': [3746.39990234375, 419.1000061035156, 77.0]})
    Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_202', 'IsCloseMessageDialog': False})
}

void Demo610_2_C11() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3747.01953125, 'Pattern1PosY': 402.5538635253906, 'Pattern1PosZ': 39.08827590942383, 'Pattern1AtX': 3743.620361328125, 'Pattern1AtY': 402.1857604980469, 'Pattern1AtZ': 43.11804962158203, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_203', 'IsCloseMessageDialog': False})
}

void Demo610_2_C12() {

    fork {
        Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_204', 'IsCloseMessageDialog': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3766.86279296875, 'Pattern1PosY': 421.7777099609375, 'Pattern1PosZ': 70.36392211914062, 'Pattern1AtX': 3739.616943359375, 'Pattern1AtY': 401.4314880371094, 'Pattern1AtZ': 29.165340423583984, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3768.109130859375, 'Pattern1PosY': 460.6719970703125, 'Pattern1PosZ': 72.39030456542969, 'Pattern1AtX': 3739.616943359375, 'Pattern1AtY': 447.5056457519531, 'Pattern1AtZ': 29.165340423583984, 'Pattern1Fovy': 50.00001907348633, 'Count': 240.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0})
    }

}

void Demo610_2_C13() {
    Npc_Musician_AoC_HeroZoraRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'TurnPosition': [3739.89990234375, 408.0, 51.900001525878906], 'ObjectId': 0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.820557117462158, 'Pattern1PosY': 1.642029047012329, 'Pattern1PosZ': 1.2666020393371582, 'Pattern1AtX': -1.0966800451278687, 'Pattern1AtY': 1.8165889978408813, 'Pattern1AtZ': -0.3251950144767761, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroZoraRelief', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'DemoWait', 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroZoraRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo610_2:Npc_Musician_AoC_HeroZoraRelief_205'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.0039059999398887157, 'Pattern1PosY': 1.694000005722046, 'Pattern1PosZ': -5.211669921875, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.799988031387329, 'Pattern1AtZ': 0.0, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
}

void Demo610_2_C01_1() {
    FldObj_DLC_HeroMap_C_02.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.3276369869709015, 'Pattern1PosY': 1.91314697265625, 'Pattern1PosZ': 0.24706999957561493, 'Pattern1AtX': -4.384033203125, 'Pattern1AtY': 2.368743896484375, 'Pattern1AtZ': 2.473328113555908, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'FldObj_DLC_HeroMapRelief_A_01', 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    FldObj_DLC_HeroMap_C_02.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_1st', 'IsTargetDemoSLinkUser': True})

    fork {
        FldObj_DLC_HeroMap_C_03.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
    } {
        Dm_Locator_DLC2nd.Demo_PlayASForDemo({'ASName': 'Demo610_2-C03-Dm_Locator-C_01_Loop', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
        Dm_Locator_DLC2nd.Demo_XLinkEventCreate({'ELinkKey': 'ReliefMapAppear_Mark', 'IsWaitFinish': True, 'SLinkKey': 'ReliefMapAppear_Mark_1st', 'IsTargetDemoSLinkUser': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
}

void Demo610_2_C01_2() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'TargetActor': 3, 'SceneName': 'C02-0', 'Accept1FrameDelay': False, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 2, 'ActorName': 'Dm_Locator_DLC2nd', 'UniqueName': 'Camera'})
    } {
        FldObj_DLC_HeroMap_C_03.Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_C_03.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_2nd3rd', 'IsTargetDemoSLinkUser': True})

        fork {
            FldObj_DLC_HeroMap_C_02.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        } {
            Dm_Locator_DLC2nd[Locator_2].Demo_PlayASForDemo({'ASName': 'Demo610_2-C03-Dm_Locator-C_02_Loop', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            EventSystemActor[second].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
            Dm_Locator_DLC2nd[Locator_2].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Mark', 'SLinkKey': 'ReliefMapAppear_Mark_2nd3rd', 'IsTargetDemoSLinkUser': True})
        }

        FldObj_DLC_HeroMap_C_01.Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_C_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_2nd3rd', 'IsTargetDemoSLinkUser': True})

        fork {
            FldObj_DLC_HeroMap_C_01.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        } {
            Dm_Locator_DLC2nd[Locator_3].Demo_PlayASForDemo({'ASName': 'Demo610_2-C03-Dm_Locator-C_03_Loop', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
            Dm_Locator_DLC2nd[Locator_3].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Mark', 'SLinkKey': 'ReliefMapAppear_Mark_2nd3rd', 'IsTargetDemoSLinkUser': True})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    Npc_Musician_AoC_HeroZoraRelief.Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 47.0, 'DestinationX': 3735.0, 'DestinationY': 399.3999938964844, 'DestinationZ': 43.900001525878906})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
}
