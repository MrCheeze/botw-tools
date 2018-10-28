-------- EventFlow: Demo610_3 --------

Actor: Npc_Musician_AoC_HeroGerudoRelief
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_PlayASForDemo', 'Demo_TurnAndLookToObjectNow', 'Demo_WarpToAnchor', 'Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlowAbs', 'Demo_GameCamera', 'Demo_CameraAnimFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
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
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_CloseMessageDialog', 'Demo_OpenDungeonMessage']
queries: ['CountFlag4', 'CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerShow', 'Demo_TurnAndLookToObjectNow', 'Demo_PlayerWait', 'Demo_Unequip']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_A_02
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_A_01
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_A_03
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_A_01[Gerudo]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[relief]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsWorld': True, 'PosX': -1536.5, 'PosY': 426.0, 'PosZ': 2919.0, 'RotY': -60.0}

Actor: Dm_Locator_DLC2nd[Locator_2]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'PosX': -1536.5, 'PosY': 426.0, 'PosZ': 2919.0, 'CreateMode': 1, 'IsWorld': True, 'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'RotY': -60.0}

Actor: Dm_Locator_DLC2nd[Locator_3]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'PosZ': 2919.0, 'PosY': 426.0, 'PosX': -1536.5, 'IsWorld': True, 'CreateMode': 1, 'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'RotY': -60.0}

Actor: Dm_Locator_DLC2nd[camera]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'PosX': -1536.5, 'PosY': 426.0, 'PosZ': 2919.0, 'RotY': 60.0, 'CreateMode': 1, 'IsWorld': True}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_01[Gerudo]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_02[Gerudo]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_03[Gerudo]
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


    call Demo610_3_C01()


    call Demo610_3_C01_1()


    call Demo610_3_C01-2()


    call Demo610_3_C02()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_First'}) {

        call Demo610_3_C03()


        call Demo610_3_C04()

        Event317:

        call Demo610_3_C05()


        call Demo610_3_Sing()


        call Demo610_3_C09()


        call Demo610_3_C10()


        call Demo610_3_C11()


        call Demo610_3_C12()

    } else {

        call Demo610_3_C03_Musician_First()

        goto Event317
    }
}

void Demo610_3_Sing() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_ReliefSong'}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'BalladOfHeroGerudo_ReliefSong', 'GameDataFlagNo1': 'BalladOfHeroZora_ReliefSong', 'GameDataFlagNo2': 'BalladOfHeroGoron_ReliefSong', 'GameDataFlagNo3': 'BalladOfHeroRito_ReliefSong'}) {
          case [0, 1]:
            Event29:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad01Bgm'})

            call Demo610_3_C06()

            Event9:
            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
          case 2:
            Event31:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad02Bgm'})

            call Demo610_3_C06()

            goto Event9
          case 3:
            Event33:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad03Bgm'})

            call Demo610_3_C06()

            goto Event9
          case [4, 5]:
            Event32:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad04Bgm'})

            call Demo610_3_C06()

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

    call Demo610_3_Sing()

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'Count': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_Individual_021'})
}

void Demo610_3_C02() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C02-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk'})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ObjectId': 1, 'ActorName': 'FldObj_DLC_HeroMap_A_01'})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_010', 'IsCloseMessageDialog': True})
        Event162:
        Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C02-2', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_000', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
      case 1:
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_020', 'IsCloseMessageDialog': True})
        goto Event162
      case 2:
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_030', 'IsCloseMessageDialog': True})
        goto Event162
      case 3:
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_040', 'IsCloseMessageDialog': True})
        goto Event162
    }
}

void Demo610_3_C01() {
    Dm_Locator_DLC2nd[camera].Demo_Join({'IsWaitFinish': False})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'Volume': 0.0, 'TargetGroups': 'Bgm', 'FadeInSec': 0.5, 'ExceptGroups': '', 'StartDelaySec': 0.0, 'FadeOutSec': 1.2000000476837158})
    GameRomCamera.Demo_CameraAnimFlow({'TargetActor': 3, 'SceneName': 'C01-0', 'ActorName': 'Dm_Locator_DLC2nd', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'camera', 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationY': 425.29998779296875, 'DestinationZ': 2915.699951171875, 'DestinationX': -1527.0999755859375})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_TurnAndLookToObjectNow({'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsWaitFinish': True, 'ActorName': 'FldObj_DLC_HeroMap_A_01'})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_PlayASForDemo({'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 0, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ASName': 'Wait'})

    fork {
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 560})
        FldObj_DLC_HeroMap_A_02.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Loop', 'SLinkKey': 'ReliefMapAppear_Start', 'IsTargetDemoSLinkUser': True})
        FldObj_DLC_HeroMap_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_A_03.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ReliefMapAppear_Loop'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_3:Npc_DungeonPriest_HeroGerudoRelief_001'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventSystemActor[relief].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 240})
        FldObj_DLC_HeroMapRelief_Mark_A_01[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor[relief].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        FldObj_DLC_HeroMapRelief_Mark_A_02[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor[relief].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        FldObj_DLC_HeroMapRelief_Mark_A_03[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor[relief].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            FldObj_DLC_HeroMapRelief_Mark_A_01[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'Open'})
            FldObj_DLC_HeroMapRelief_Mark_A_01[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait', 'IsWaitFinish': False})
        } {
            FldObj_DLC_HeroMapRelief_Mark_A_02[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'Open'})
            FldObj_DLC_HeroMapRelief_Mark_A_02[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait', 'IsWaitFinish': False})
        } {
            FldObj_DLC_HeroMapRelief_Mark_A_03[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'Open'})
            FldObj_DLC_HeroMapRelief_Mark_A_03[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait', 'IsWaitFinish': False})
        } {
            FldObj_DLC_HeroMapRelief_A_01[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True, 'ASName': 'Open'})
            FldObj_DLC_HeroMapRelief_A_01[Gerudo].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'OpenWait', 'IsWaitFinish': False})
        }

    } {
        EventSystemActor[forCustomDucking].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        EventSystemActor[forCustomDucking].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeInSec': 0.10000000149011612, 'TargetGroups': 'World', 'FadeOutSec': 1.0, 'ExceptGroups': 'Npc,Effect,Env'})
    }

    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 175.802001953125, 'DestinationX': -1522.699951171875, 'DestinationY': 425.1000061035156, 'DestinationZ': 2918.60009765625})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_TurnAndLookToObjectNow({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Musician_AoC_HeroGerudoRelief', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
}

void Demo610_3_C03() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0'})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsWaitFinish': True})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo610_3-C05-Npc_Rito_Musician-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_002', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 3, 'FaceId': 2, 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName': 'Gerudo', 'IsWaitFinish': False, 'TurnDirection': -45.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
}

void Demo610_3_C03_Musician_First() {
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_First', 'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C03-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_010', 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsWaitFinish': True})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo610_3-C05-Npc_Rito_Musician-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_020'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk04'})
    } else {
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk16'})
    }
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk14'})
    if EventSystemActor.GeneralChoice2() in [0, 1] {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk05'})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_030', 'IsCloseMessageDialog': True})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsValid': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 3, 'FaceId': 2, 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName': 'Gerudo', 'IsWaitFinish': False, 'TurnDirection': -45.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C05-1', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_010'})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_050', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsWaitFinish': True})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_060'})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_004'})
        EventSystemActor.Demo_FlagON({'FlagName': 'Musician_Relief_First', 'IsWaitFinish': True})
    }
}

void Demo610_3_C04() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-1', 'IsWaitFinish': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Musician_Relief_First'}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
          case 1:
            Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_011', 'IsCloseMessageDialog': True})
            Event578:
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_004'})
          case 2:
            Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_012', 'IsCloseMessageDialog': True})
            goto Event578
          case 3:
            Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_013', 'IsCloseMessageDialog': True})
            goto Event578
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Musician_Relief_First', 'IsWaitFinish': True})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_010'})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_050', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_060'})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_004'})
    }
}

void Demo610_3_C05() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 10.476806640625, 'Pattern1PosY': -0.03457599878311157, 'Pattern1PosZ': -12.50537109375, 'Pattern1AtX': 1.9442139863967896, 'Pattern1AtY': 1.0031739473342896, 'Pattern1AtZ': -9.83837890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName1': 'Gerudo'})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 5.208983898162842, 'Pattern1PosY': 1.106323003768921, 'Pattern1PosZ': -10.732177734375, 'Pattern1AtX': 1.9442139863967896, 'Pattern1AtY': 1.0031739473342896, 'Pattern1AtZ': -9.83837890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName1': 'Gerudo', 'Count': 120.0})
    } {
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_005', 'IsCloseMessageDialog': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.774779796600342, 'Pattern1PosY': 10.33856201171875, 'Pattern1PosZ': -11.670166015625, 'Pattern1AtX': 1.9443360567092896, 'Pattern1AtY': 10.653778076171875, 'Pattern1AtZ': -9.83837890625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName1': 'Gerudo', 'Count': 90.0, 'Cushion': 30.0})
    } {
        Npc_Musician_AoC_HeroGerudoRelief.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo610_3-C05-Npc_Rito_Musician-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    }

    Npc_Musician_AoC_HeroGerudoRelief.Demo_SetInstEventFlag({'IsWaitFinish': True})
}

void Demo610_3_C06() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C06-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_100', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Act_Accordion'})
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C07-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_101', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Act_Accordion'})
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C08-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_102', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Act_Accordion'})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_103', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Act_Accordion'})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}

void Demo610_3_C09() {

    fork {
        Npc_Musician_AoC_HeroGerudoRelief.Demo_PlayASForDemo({'ASName': 'Demo610_3-C09-Npc_Rito_Musician-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 0.0, 'ClothWarpMode': 1, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'Frame': 50, 'IsWaitFinish': True})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 8.796142578125, 'Pattern1PosY': 0.3302919864654541, 'Pattern1PosZ': -12.029296875, 'Pattern1AtX': 1.9490970373153687, 'Pattern1AtY': 0.6104429960250854, 'Pattern1AtZ': -10.72412109375, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName1': 'Gerudo'})
        Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsWaitFinish': True})
    }

    switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_001'})
      case 1:
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_002'})
      case 2:
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_003'})
      case 3:
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_004'})
    }
}

void Demo610_3_C10() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1530.446044921875, 'Pattern1PosY': 427.7581787109375, 'Pattern1PosZ': 2917.996337890625, 'Pattern1AtX': -1524.5155029296875, 'Pattern1AtY': 426.6104431152344, 'Pattern1AtZ': 2915.98486328125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_201', 'IsCloseMessageDialog': True})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsWaitFinish': True, 'ActorName': 'FldObj_DLC_HeroMap_A_01'})
}

void Demo610_3_C11() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1515.8607177734375, 'Pattern1PosY': 427.5244445800781, 'Pattern1PosZ': 2919.16845703125, 'Pattern1AtX': -1524.8240966796875, 'Pattern1AtY': 427.32525634765625, 'Pattern1AtZ': 2917.260009765625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_206'})

    fork {
        Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_204', 'IsCloseMessageDialog': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1500.91845703125, 'Pattern1PosY': 470.3865661621094, 'Pattern1PosZ': 2901.51953125, 'Pattern1AtX': -1593.3787841796875, 'Pattern1AtY': 458.4345703125, 'Pattern1AtZ': 2902.6640625, 'Pattern1Fovy': 50.00001907348633, 'Count': 200.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    }

}

void Demo610_3_C12() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -1527.0469970703125, 'Pattern1PosY': 427.6446533203125, 'Pattern1PosZ': 2918.869384765625, 'Pattern1AtX': -1527.161376953125, 'Pattern1AtY': 427.1152648925781, 'Pattern1AtZ': 2915.84619140625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ObjectId': 1, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -2, 'ASName': 'DemoWait', 'NoErrorCheck': False})
    Npc_Musician_AoC_HeroGerudoRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_3:Npc_Musician_AoC_HeroGerudoRelief_205'})
    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
}

void Demo610_3_C01-2() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'SceneName': 'C02-0', 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Dm_Locator_DLC2nd', 'UniqueName': 'camera'})
    } {
        FldObj_DLC_HeroMap_A_03.Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_A_03.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_2nd3rd', 'IsTargetDemoSLinkUser': True})

        fork {
            FldObj_DLC_HeroMap_A_02.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        } {
            Dm_Locator_DLC2nd[Locator_2].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo610_3-C03-Dm_Locator-D_02_Loop', 'IsWaitFinish': False})
            EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
            Dm_Locator_DLC2nd[Locator_2].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Mark', 'SLinkKey': 'ReliefMapAppear_Mark_2nd3rd', 'IsTargetDemoSLinkUser': True})
        }

        FldObj_DLC_HeroMap_A_01.Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_A_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_2nd3rd', 'IsTargetDemoSLinkUser': True})

        fork {
            FldObj_DLC_HeroMap_A_01.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        } {
            Dm_Locator_DLC2nd[Locator_3].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo610_3-C03-Dm_Locator-D_03_Loop', 'IsWaitFinish': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
            Dm_Locator_DLC2nd[Locator_3].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Mark', 'SLinkKey': 'ReliefMapAppear_Mark_2nd3rd', 'IsTargetDemoSLinkUser': True})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
}

void Demo610_3_C01_1() {
    FldObj_DLC_HeroMap_A_02.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.5820310115814209, 'Pattern1PosY': 1.874480962753296, 'Pattern1PosZ': 0.2438959926366806, 'Pattern1AtX': -10.55224609375, 'Pattern1AtY': 3.0711669921875, 'Pattern1AtZ': 6.424561023712158, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'FldObj_DLC_HeroMapRelief_A_01', 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'UniqueName1': 'Gerudo'})
    FldObj_DLC_HeroMap_A_02.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_1st', 'IsTargetDemoSLinkUser': True})

    fork {
        FldObj_DLC_HeroMap_A_03.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
    } {
        Dm_Locator_DLC2nd.Demo_PlayASForDemo({'ASName': 'Demo610_3-C03-Dm_Locator-D_01_Loop', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
        Dm_Locator_DLC2nd.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Mark', 'SLinkKey': 'ReliefMapAppear_Mark_1st', 'IsTargetDemoSLinkUser': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
}
