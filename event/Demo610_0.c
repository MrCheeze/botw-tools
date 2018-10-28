-------- EventFlow: Demo610_0 --------

Actor: Npc_Musician_AoC_HeroGoronRelief
entrypoint: None()
actions: ['Demo_Talk', 'Demo_SetInstEventFlag', 'Demo_TurnAndLookToObject', 'Demo_LookAtObject', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialog', 'Demo_LookAtTheFront']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
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
actions: ['Demo_WarpPlayerToDestination', 'Demo_FlagON', 'Demo_WaitFrame', 'Demo_CloseMessageDialog']
queries: ['CountFlag4', 'CheckFlag', 'GeneralChoice2', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[doushi]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage', 'Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayASAdapt', 'Demo_PlayerWait', 'Demo_Unequip', 'Demo_GetOffFromHorse', 'Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_B_02
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_B_03
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMap_B_01
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_A_01[Goron]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator_DLC2nd
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'CreateMode': 1, 'IsWorld': True, 'PosX': 1406.1173095703125, 'PosY': 523.2765502929688, 'PosZ': -2282.1796875, 'RotY': -73.85399627685547}

Actor: Dm_Locator_DLC2nd[Locator_2]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'PosX': 1406.116943359375, 'PosY': 523.276611328125, 'PosZ': -2282.179931640625, 'IsWorld': True, 'CreateMode': 1, 'RotY': -73.85399627685547}

Actor: Dm_Locator_DLC2nd[Locator_3]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 1, 'IsWorld': True, 'PosX': 1406.116943359375, 'PosY': 523.276611328125, 'PosZ': -2282.179931640625, 'IsGrounding': False, 'RotX': 0.0, 'RotZ': 0.0, 'RotY': -73.85399627685547}

Actor: EventSystemActor[map]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_03[Goron]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_02[Goron]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DLC_HeroMapRelief_Mark_A_01[Goron]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['Demo_VisibleOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: EventSystemActor[forCustomDucking]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready() {

    call Demo610_Pre()


    call Demo610_0_C01()


    call Demo610_0_C01_1()


    call Demo610_0_C01_2()


    call Demo610_0_C02()

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_First'}) {

        call Demo610_0_C03()


        call Demo610_0_C04()


        call Demo610_0_C05()


        call Demo610_0_C06()

        Event211:

        call Demo610_0_C07()


        call Demo610_0_Sing()


        call Demo610_0_C11()


        call Demo610_0_C12()


        call Demo610_0_C13()


        call Demo610_0_C14()


        call Demo610_0_C15()

    } else {

        call Demo610_0_C03_First()

        goto Event211
    }
}

void Demo610_0_Sing() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_ReliefSong'}) {
        switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'BalladOfHeroGerudo_ReliefSong', 'GameDataFlagNo1': 'BalladOfHeroZora_ReliefSong', 'GameDataFlagNo2': 'BalladOfHeroGoron_ReliefSong', 'GameDataFlagNo3': 'BalladOfHeroRito_ReliefSong'}) {
          case [0, 1]:
            Event24:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad01Bgm'})

            call Demo610_0_message()

            Event168:
            Npc_Musician_AoC_HeroGoronRelief.Demo_PlayASForDemo({'IsWaitFinish': False, 'MorphingFrame': 0.0, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'Act_Accordion'})
            SceneSoundCtrlTag.Demo_Ctrl({'SeCtrlType': 'WorldMuteOff', 'IsWaitFinish': True, 'BgmCtrlType': 'None'})
          case 2:
            Event26:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad02Bgm'})

            call Demo610_0_message()

            goto Event168
          case 3:
            Event28:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad03Bgm'})

            call Demo610_0_message()

            goto Event168
          case [4, 5]:
            Event27:
            EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'AccoBallad04Bgm'})

            call Demo610_0_message()

            goto Event168
        }
    } else
    switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'BalladOfHeroGerudo_ReliefSong', 'GameDataFlagNo1': 'BalladOfHeroZora_ReliefSong', 'GameDataFlagNo2': 'BalladOfHeroGoron_ReliefSong', 'GameDataFlagNo3': 'BalladOfHeroRito_ReliefSong'}) {
      case 0:
        goto Event24
      case 1:
        goto Event26
      case 2:
        goto Event28
      case [3, 4, 5]:
        goto Event27
    }
}

void SeekDungeons() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    call Demo610_0_Sing()

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_ReturnSavePoint_1({'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': True, 'Count': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_Individual_021'})
}

void Demo610_0_C01() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'Volume': 0.0, 'TargetGroups': 'Bgm', 'FadeInSec': 0.5, 'ExceptGroups': '', 'StartDelaySec': 0.0, 'FadeOutSec': 1.2000000476837158})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'TargetActorDirReferenceMode': 1, 'BgCheck': False, 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName': 'Goron', 'SceneName': 'C01-0', 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroGoronRelief.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Wait'})

    fork {
        EventSystemActor[map].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 560})
        FldObj_DLC_HeroMap_B_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Loop', 'SLinkKey': 'ReliefMapAppear_Start', 'IsTargetDemoSLinkUser': True})
        FldObj_DLC_HeroMap_B_02.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_B_03.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'ReliefMapAppear_Loop'})
    } {
        EventSystemActor[doushi].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_1:Npc_DungeonPriest_HeroRitoRelief_001'})
        EventSystemActor[doushi].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 240})
        FldObj_DLC_HeroMapRelief_Mark_A_01[Goron].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        FldObj_DLC_HeroMapRelief_Mark_A_02[Goron].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        FldObj_DLC_HeroMapRelief_Mark_A_03[Goron].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Close', 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        fork {
            FldObj_DLC_HeroMapRelief_Mark_A_01[Goron].Demo_PlayASForDemo({'ASName': 'Open', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            FldObj_DLC_HeroMapRelief_Mark_A_01[Goron].Demo_PlayASForDemo({'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            FldObj_DLC_HeroMapRelief_Mark_A_02[Goron].Demo_PlayASForDemo({'ASName': 'Open', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            FldObj_DLC_HeroMapRelief_Mark_A_02[Goron].Demo_PlayASForDemo({'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            FldObj_DLC_HeroMapRelief_Mark_A_03[Goron].Demo_PlayASForDemo({'ASName': 'Open', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            FldObj_DLC_HeroMapRelief_Mark_A_03[Goron].Demo_PlayASForDemo({'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        } {
            FldObj_DLC_HeroMapRelief_A_01[Goron].Demo_PlayASForDemo({'ASName': 'Open', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
            FldObj_DLC_HeroMapRelief_A_01[Goron].Demo_PlayASForDemo({'ASName': 'OpenWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        }

    } {
        EventSystemActor[forCustomDucking].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
        EventSystemActor[forCustomDucking].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'Volume': 0.0, 'StartDelaySec': 0.0, 'FadeInSec': 0.10000000149011612, 'TargetGroups': 'World', 'FadeOutSec': 1.0, 'ExceptGroups': 'Npc,Effect,Env'})
    }

    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 159.28269958496094, 'DestinationX': 1390.5140380859375, 'DestinationY': 519.0225830078125, 'DestinationZ': -2283.321044921875})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 2, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [1403.800048828125, 522.5999755859375, -2275.10009765625], 'IsTurnToLookAtPos': False, 'IsValid': True, 'ObjectId': 0, 'ActorName': 'Npc_Musician_AoC_HeroGoronRelief', 'IsWaitFinish': False})
}

void Demo610_0_C02() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -0.9111329913139343, 'Pattern1PosY': 1.7351679801940918, 'Pattern1PosZ': -6.564362049102783, 'Pattern1AtX': -0.35009801387786865, 'Pattern1AtY': 2.328429937362671, 'Pattern1AtZ': -0.6209409832954407, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGoronRelief', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'ReviseModeEnd': 0})
    Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 1})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_010', 'IsCloseMessageDialog': True})
        Event159:
        Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': False})
        SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
      case 1:
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_020', 'IsCloseMessageDialog': True})
        goto Event159
      case 2:
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_030', 'IsCloseMessageDialog': True})
        goto Event159
      case 3:
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_040', 'IsCloseMessageDialog': True})
        goto Event159
    }
}

void Demo610_0_C03_First() {
    EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_First', 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.438477039337158, 'Pattern1PosY': 1.8391720056533813, 'Pattern1PosZ': -2.807555913925171, 'Pattern1AtX': -1.651366949081421, 'Pattern1AtY': 1.2785639762878418, 'Pattern1AtZ': 0.3159179985523224, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGoronRelief', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_000', 'IsCloseMessageDialog': False})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C03-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_010', 'IsCloseMessageDialog': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    Npc_Musician_AoC_HeroGoronRelief.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo610_0-C05-Npc_Rito_Musician-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_020'})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk04'})
    } else {
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk16'})
    }
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk14'})
    if EventSystemActor.GeneralChoice2() in [0, 1] {
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk05'})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_030', 'IsCloseMessageDialog': True})
        Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'SitRemainsWind', 'ObjectId': 2, 'TurnPosition': [1396.4000244140625, 525.5999755859375, -2283.199951171875]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C05-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_001'})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_050', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_060'})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_105', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_FlagON({'FlagName': 'Musician_Relief_First', 'IsWaitFinish': True})
    }
}

void Demo610_0_C03() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1390.6270751953125, 'Pattern1PosY': 520.7841186523438, 'Pattern1PosZ': -2290.264404296875, 'Pattern1AtX': 1391.6029052734375, 'Pattern1AtY': 520.23486328125, 'Pattern1AtZ': -2284.37158203125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_000', 'IsCloseMessageDialog': False})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_107', 'IsCloseMessageDialog': True})
}

void Demo610_0_C04() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 2, 'IsUseSlowTurn': False, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'TurnPosition': [1403.800048828125, 522.5999755859375, -2275.10009765625], 'IsTurnToLookAtPos': False, 'IsValid': True, 'ObjectId': 0, 'ActorName': 'Npc_Musician_AoC_HeroGoronRelief', 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroGoronRelief.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo610_0-C05-Npc_Rito_Musician-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_102', 'IsCloseMessageDialog': False})
}

void Demo610_0_C05() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    if !EventSystemActor.GeneralChoice2() {
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_104', 'IsCloseMessageDialog': False})
    } else {
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_103', 'IsCloseMessageDialog': False})
    }
}

void Demo610_0_C06() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C05-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    if EventSystemActor.CheckFlag({'FlagName': 'Musician_Relief_First'}) {
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroFirst_011', 'IsCloseMessageDialog': True})
        Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'SitRemainsWind', 'ObjectId': 2, 'TurnPosition': [1396.4000244140625, 525.5999755859375, -2283.199951171875]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C05-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
        switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
          case 1:
            Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_011', 'IsCloseMessageDialog': True})
            Event443:
            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': ''})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_105', 'IsCloseMessageDialog': False})
          case 2:
            Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_012', 'IsCloseMessageDialog': True})
            goto Event443
          case 3:
            Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_013', 'IsCloseMessageDialog': True})
            goto Event443
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Musician_Relief_First', 'IsWaitFinish': True})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroFirst_011'})
        Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'SitRemainsWind', 'ObjectId': 2, 'TurnPosition': [1396.4000244140625, 525.5999755859375, -2283.199951171875]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C05-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Relief_010'})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_050', 'IsCloseMessageDialog': True})
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C04-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'ActorName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_First_060'})
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_105', 'IsCloseMessageDialog': False})
    }
}

void Demo610_0_C07() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1386.2738037109375, 'Pattern1PosY': 520.6522827148438, 'Pattern1PosZ': -2280.52734375, 'Pattern1AtX': 1390.30810546875, 'Pattern1AtY': 520.445068359375, 'Pattern1AtZ': -2283.52880859375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1389.9603271484375, 'Pattern1PosY': 520.6387939453125, 'Pattern1PosZ': -2284.341552734375, 'Pattern1AtX': 1394.1959228515625, 'Pattern1AtY': 520.445068359375, 'Pattern1AtZ': -2287.05322265625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 120.0})
    } {
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_106', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    }


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1390.9268798828125, 'Pattern1PosY': 522.8027954101562, 'Pattern1PosZ': -2285.120361328125, 'Pattern1AtX': 1395.486083984375, 'Pattern1AtY': 524.5496826171875, 'Pattern1AtZ': -2286.36572265625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Cushion': 30.0, 'Count': 90.0})
    } {
        Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': False})
        Npc_Musician_AoC_HeroGoronRelief.Demo_PlayASForDemo({'ASName': 'Demo610_0-C07-Npc_Rito_Musician-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'FaceId': 2, 'IsValid': True, 'ActorName': 'SitRemainsFire_Far', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    }

    Npc_Musician_AoC_HeroGoronRelief.Demo_SetInstEventFlag({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}

void Demo610_0_C11() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1392.5472412109375, 'Pattern1PosY': 520.6292724609375, 'Pattern1PosZ': -2282.584228515625, 'Pattern1AtX': 1391.385986328125, 'Pattern1AtY': 520.3275146484375, 'Pattern1AtZ': -2287.279541015625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    Npc_Musician_AoC_HeroGoronRelief.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Demo610_0-C11-Npc_Rito_Musician-A-0', 'IsWaitFinish': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'IsPlayed_Demo610_0', 'GameDataFlagNo1': 'IsPlayed_Demo610_1', 'GameDataFlagNo2': 'IsPlayed_Demo610_2', 'GameDataFlagNo3': 'IsPlayed_Demo610_3', 'GameDataFlagNo4': ''}) {
      case 0:
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_001'})
      case 1:
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_002'})
      case 2:
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_003'})
      case 3:
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_HeroBallad_004', 'IsWaitFinish': True})
    }
}

void Demo610_0_C12() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.016417980194092, 'Pattern1PosY': 1.9642939567565918, 'Pattern1PosZ': -1.8166500329971313, 'Pattern1AtX': -0.8442379832267761, 'Pattern1AtY': 1.2788089513778687, 'Pattern1AtZ': 1.9946290254592896, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGoronRelief', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_201', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
    Npc_Musician_AoC_HeroGoronRelief.Demo_LookAtObject({'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'SitRemainsWind', 'ObjectId': 2, 'TurnPosition': [1396.4000244140625, 523.5999755859375, -2283.199951171875]})
}

void Demo610_0_C13() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -3.296233892440796, 'Pattern1PosY': 0.8577880263328552, 'Pattern1PosZ': 4.041259765625, 'Pattern1AtX': 1.680083990097046, 'Pattern1AtY': 1.7284549474716187, 'Pattern1AtZ': 0.8071290254592896, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGoronRelief', 'ReviseModeEnd': 0, 'StartCalcOnly': True, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_202', 'IsWaitFinish': True})
    Npc_Musician_AoC_HeroGoronRelief.Demo_TurnAndLookToObject({'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'FaceId': 2, 'IsConfront': False, 'IsValid': True, 'IsWaitFinish': False})
}

void Demo610_0_C14() {

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1388.6759033203125, 'Pattern1PosY': 678.8851928710938, 'Pattern1PosZ': -2426.41064453125, 'Pattern1AtX': 1394.583740234375, 'Pattern1AtY': 679.55859375, 'Pattern1AtZ': -2427.19140625, 'Pattern1Fovy': 50.00001907348633, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1424.79248046875, 'Pattern1PosY': 645.0106811523438, 'Pattern1PosZ': -2408.794921875, 'Pattern1AtX': 1430.6715087890625, 'Pattern1AtY': 644.228271484375, 'Pattern1AtZ': -2407.908203125, 'Pattern1Fovy': 50.00001907348633, 'Count': 240.0, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    } {
        Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'ASName': '', 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_203', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
    }

}

void Demo610_0_C15() {
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1.085602045059204, 'Pattern1PosY': 2.02764892578125, 'Pattern1PosZ': 2.831054925918579, 'Pattern1AtX': -1.4935909509658813, 'Pattern1AtY': 1.5787349939346313, 'Pattern1AtZ': -2.565674066543579, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Musician_AoC_HeroGoronRelief', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1})
    Npc_Musician_AoC_HeroGoronRelief.Demo_Talk({'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_204'})
}

void Demo610_0_message() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C06-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroGoronRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_100', 'IsBecomingSpeaker': False, 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Act_Accordion'})
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C07-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroGoronRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_101', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Act_Accordion'})
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C08-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
    Npc_Musician_AoC_HeroGoronRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_108', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Act_Accordion'})
    Npc_Musician_AoC_HeroGoronRelief.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo610_0:Npc_Musician_AoC_HeroGoronRelief_109', 'IsBecomingSpeaker': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Act_Accordion', 'IsCloseMessageDialog': True, 'CloseDialogOption': 1})
}

void Demo610_0_C01_2() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'SceneName': 'C01-2', 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'TargetActorDirReferenceMode': 1, 'BgCheck': False, 'ActorName': 'FldObj_DLC_HeroMapRelief_A_01', 'UniqueName': 'Goron'})
    } {
        FldObj_DLC_HeroMap_B_02.Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_B_02.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_2nd3rd', 'IsTargetDemoSLinkUser': True})

        fork {
            FldObj_DLC_HeroMap_B_03.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
        } {
            Dm_Locator_DLC2nd.Demo_PlayASForDemo({'ASName': 'Demo610_0-C03-Dm_Locator-D_01_Loop', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
            EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
            Dm_Locator_DLC2nd.Demo_XLinkEventCreate({'ELinkKey': 'ReliefMapAppear_Mark', 'IsWaitFinish': True, 'SLinkKey': 'ReliefMapAppear_Mark_2nd3rd', 'IsTargetDemoSLinkUser': True})
        }

        FldObj_DLC_HeroMap_B_03.Demo_XLinkEventKill({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
        FldObj_DLC_HeroMap_B_03.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_2nd3rd', 'IsTargetDemoSLinkUser': True})

        fork {
            FldObj_DLC_HeroMap_B_02.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
        } {
            Dm_Locator_DLC2nd[Locator_2].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo610_0-C03-Dm_Locator-D_02_Loop'})
            EventSystemActor[wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
            Dm_Locator_DLC2nd[Locator_2].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Mark', 'SLinkKey': 'ReliefMapAppear_Mark_2nd3rd', 'IsTargetDemoSLinkUser': True})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'Talk', 'IsWaitFinish': False})
}

void Demo610_0_C01_1() {
    FldObj_DLC_HeroMap_B_01.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'ReliefMapAppear_Loop'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.01269499957561493, 'Pattern1PosY': 2.062743902206421, 'Pattern1PosZ': -0.5175780057907104, 'Pattern1AtX': -0.03356900066137314, 'Pattern1AtY': 2.231445074081421, 'Pattern1AtZ': -5.2744140625, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'FldObj_DLC_HeroMapRelief_A_01', 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'UniqueName1': 'Goron'})
    FldObj_DLC_HeroMap_B_01.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ReliefMapAppear_Finish', 'SLinkKey': 'ReliefMapAppear_Finish_1st', 'IsTargetDemoSLinkUser': True})

    fork {
        Dm_Locator_DLC2nd[Locator_3].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo610_0-C03-Dm_Locator-D_03_Loop'})
        FldObj_DLC_HeroMap_B_01.Demo_PlayASForDemo({'ASName': 'PictureOn', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 57})
        Dm_Locator_DLC2nd[Locator_3].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'ReliefMapAppear_Mark', 'SLinkKey': 'ReliefMapAppear_Mark_1st', 'IsTargetDemoSLinkUser': True})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
}

void Demo610_Pre() {
    GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': False})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_GetOffFromHorse({'IsWaitFinish': False, 'ClearDemoMemberIfNotOwned': True})
    } else {
        LastRiddenHorse_ForEvent.Demo_VisibleOff({'IsWaitFinish': False})
    }
    OwnedHorse_ForEvent.Demo_VisibleOff({'IsWaitFinish': False})
}
