-------- EventFlow: BalladOfHeroGerudo --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_FlagON', 'Demo_ChangeScene', 'Demo_WaitFrame', 'Demo_KillUIScreen', 'Demo_ExitEventPlayer', 'Demo_CurseRRematchCount', 'Demo_CloseMessageDialog']
queries: ['GeneralChoice2', 'CheckFlag', 'CheckTimeType', 'CheckJustBeforeEventCancel', 'CountFlag4', 'CheckEquipArmorSeriesType', 'RandomChoice2', 'GeneralChoice3', 'CheckTime', 'GeneralChoice4', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_Unequip', 'Demo_StopInAir', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_SiteBoss_Sword_R[0]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis037
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_ChangeEquipState']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis025
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_006_DLC2nd
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Attacked_011_DLC2nd
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis007
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithograghBall_AoC
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_oasis032[BalladOfHeroGerudo]
entrypoint: None()
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_HeroGerudoRelief
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void AppearDungeon01() {

    call BalladOfHeroCommon.AppearDungeon_first()


    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

}

void AppearDungeon02() {

    call BalladOfHeroCommon.AppearDungeon_first()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_Dungeon02_ForDemo602_0'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

}

void AppearDungeon03() {
    DgnObj_RemainsLithograghBall_AoC.Demo_Join({'IsWaitFinish': True})

    call Common.AirStartUP_Player()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_Dungeon03_ForDemo602_0'})
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'DemoName': 'Demo602_1', 'EntryPointName': 'Demo602_1'})

    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

}

void ToBattle() {
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'DemoName': 'Demo614_3', 'EntryPointName': 'Demo614_3'})
}

void AppearCurse() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'PlayerShakeNoise', 'FadeInSec': 1.0, 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_StartBossSeq', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_GenerateCurse'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo670_3'})
    if !EventSystemActor.CheckJustBeforeEventCancel() {
        Event40:
        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Elec_Start_FirstHalf'})
    } else {
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        goto Event40
    }
}

void DefeatCurseGannon() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'Stop'})
    Enemy_SiteBoss_Sword_R[0].Demo_Join({'IsWaitFinish': True})

    call BalladOfHeroCommon.PlayerWait()


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': False})
    }

    EventSystemActor.Demo_CurseRRematchCount({'IsWaitFinish': True, 'RematchCount': 1, 'CurseRType': 1, 'GameDataStringCounterName': 'CurseR_Electric_Challenge'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo671_3', 'EndFade': 1})
    if EventSystemActor.CheckJustBeforeEventCancel() {
        EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'EntryPointName': 'LevelUp', 'WarpDestPosName': 'Clear_RemainsElectric', 'WarpDestMapName': 'MainField/C-7', 'EvflName': 'Demo622_3'})
    }
}

void Front_ClearDungeon01() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_EventClearDungeon01'})
}

void Front_ClearDungeon02() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_EventClearDungeon02'})
}

void Front_ClearDungeon03() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_EventClearDungeon03'})
}

void AdvanceStep() {
    switch EventSystemActor.CountFlag4({'GameDataFlagNo0': 'Clear_Dungeon121', 'GameDataFlagNo1': 'Clear_Dungeon133', 'GameDataFlagNo2': 'Clear_Dungeon134', 'GameDataFlagNo3': '', 'GameDataFlagNo4': ''}) {
      case 1:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'BalladOfHeroGerudo', 'ForceRunTelop': False, 'StepName': 'Seek2ndDungeon'})
      case 2:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'BalladOfHeroGerudo', 'ForceRunTelop': False, 'StepName': 'Seek3rdDungeon'})
      case [3, 4, 5]:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'BalladOfHeroGerudo', 'ForceRunTelop': False, 'StepName': 'ToRemains'})
    }
}

void Ready_Npc_Musician_AoC_HeroGerudoRelief_Talk() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    } else {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    }
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'EntryPointName': 'Ready', 'DemoName': 'Demo610_3'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_ReliefSong'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_Activated'})
}

void Seek1stDungeon_Npc_Musician_AoC_HeroGerudoRelief_Talk() {
    Event446:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Relief_Gerudo_Talk'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    call BalladOfHeroes.Individual_Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_HeroGerudoRelief")})

    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'EntryPointName': 'SeekDungeons', 'DemoName': 'Demo610_3'})
}

void Seek2ndDungeon_Npc_Musician_AoC_HeroGerudoRelief_Talk() {
    goto Event446
}

void Seek3rdDungeon_Npc_Musician_AoC_HeroGerudoRelief_Talk() {
    goto Event446
}

void SeekDungeon_Npc_oasis025_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call 025_RAIMEI_CK()

    if Npc_oasis025.IsOnInstEventFlag() {
        Event364:
        Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis025_SD_010', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
    } else
    switch EventSystemActor.CheckTimeType() {
      case [0, 1]:
        Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_06'})
        Event272:
        if !EventSystemActor.RandomChoice2() {
            Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_12'})
        } else {
            Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_16'})
        }
        if !EventSystemActor.GeneralChoice2() {
            Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_13'})
        } else {
            Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_14'})
        }
        Event102:
        Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis025_SD_000', 'ASName': '', 'IsCloseMessageDialog': False})
        goto Event364
      case [2, 3, 4]:
        Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_05'})
        goto Event272
      case [5, 6, 7]:
        Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Talk_04'})
        goto Event272
    }
}

void SeekDungeon_Npc_oasis037_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    switch Npc_oasis037.CheckActorAction13() {
      case [0, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Event455:
        Npc_oasis037.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_037_1stGerudoDesert'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_FirstKillSandwormR'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_037_AfterTalk'}) {
                    Event416:
                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_FirstKillSandwormR'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_037_AfterTalk'}) {
                            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_302'})
                        } else {
                            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_303'})
                            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'TalkEmbarrass'})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_301', 'IsCloseMessageDialog': False})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_037_AfterTalk'})
                        }
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_037_GotHints'}) {
                        Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_211'})
                    } else {
                        Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_200', 'IsCloseMessageDialog': False})
                        Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_210'})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_037_GotHints'})
                    }
                } else {
                    Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_300'})
                    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'TalkEmbarrass'})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                    Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_301', 'IsCloseMessageDialog': False})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_037_AfterTalk'})
                }
            } else
            if !Npc_oasis037.IsOnInstEventFlag() {
                Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_500'})
            }
            goto Event416
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis037_first'}) {
            if EventSystemActor.CheckEquipArmorSeriesType({'CheckType': 'GerudoCloth', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
                Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_001'})
            } else {
                Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_000', 'IsCloseMessageDialog': True})
            }
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkSurprise', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_010'})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'TalkEmbarrass'})
            EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroGerudo_037_aboutWomanDress', 'IsWaitFinish': True})
            Event250:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGerudo_037_1stGerudoDesert'})
            goto Event416
        } else {
            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_203', 'ASName': ''})
            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_204', 'IsCloseMessageDialog': True, 'ASName': ''})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkYes', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_401'})
            if !EventSystemActor.GeneralChoice2() {
                Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_402'})
            } else {
                Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_403'})
            }
            EventSystemActor.Demo_WaitFrame({'Frame': 50, 'IsWaitFinish': True})
            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_404'})
            EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_405'})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'TalkSurprise', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_oasis037.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis037_SD_406'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_oasis037_first', 'IsWaitFinish': True})
            goto Event250
        }
      case [1, 3]:
        Npc_oasis037.Demo_PlayASForDemo({'ASName': 'Act_Memo_Ed', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_oasis037.Demo_ChangeEquipState({'EquipState': 'Invisible', 'IsWaitFinish': True})
        goto Event455
    }
}

void SeekDungeon_Npc_Attacked_006_DLC2nd_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
        Npc_Attacked_006_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_Attacked_006_DLC2nd_SD_200', 'IsCloseMessageDialog': False})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Attacked_nearBall'}) {
        Npc_Attacked_006_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_Attacked_006_DLC2nd_SD_100', 'IsCloseMessageDialog': False})
    } else {
        Npc_Attacked_006_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_Attacked_006_DLC2nd_SD_001', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True})
        Npc_Attacked_006_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_Attacked_006_DLC2nd_SD_000', 'IsCloseMessageDialog': False})
    }
}

void SeekDungeon_Npc_Attacked_011_DLC2nd_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
        Npc_Attacked_011_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_Attacked_011_DLC2nd_SD_200', 'IsCloseMessageDialog': False})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Attacked_nearBall'}) {
        Npc_Attacked_011_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_Attacked_011_DLC2nd_SD_100', 'IsCloseMessageDialog': False})
    } else
    if Npc_Attacked_011_DLC2nd.IsOnInstEventFlag() {
        Npc_Attacked_011_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_Attacked_011_DLC2nd_SD_001'})
    } else {
        Npc_Attacked_011_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_Attacked_011_DLC2nd_SD_000', 'IsCloseMessageDialog': False})
    }
}

void SeekDungeon_Npc_oasis032_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if !Npc_oasis032[BalladOfHeroGerudo].IsOnInstEventFlag() {

        call Npc_oasis032.hello()

    }
    Npc_oasis032[BalladOfHeroGerudo].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis032_SD_000', 'IsCloseMessageDialog': False})
    if Npc_oasis032[BalladOfHeroGerudo].IsOnInstEventFlag() {
        Npc_oasis032[BalladOfHeroGerudo].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis032_SD_Talk_01'})
    } else {
        Npc_oasis032[BalladOfHeroGerudo].Demo_Talk({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis032_SD_Talk_04', 'IsWaitFinish': True})
    }
    if !EventSystemActor.GeneralChoice2() {
        Npc_oasis032[BalladOfHeroGerudo].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis032_SD_Talk_06'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis020_zarashi'}) {
        Npc_oasis032[BalladOfHeroGerudo].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_07'})
    } else {
        Npc_oasis032[BalladOfHeroGerudo].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis032:Talk_12'})
    }
}

void 025_RAIMEI_CK() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckType': 'Thunder'})
    && !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis025_Raimei_CK'}) {
        Npc_oasis025.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis025:Raimei_CK_001'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis025_Raimei_CK'})
        goto Event102
    }
}

void SeekDungeon_Npc_oasis007_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call 007_RAIMEI_CK()

    if EventSystemActor.CheckFlag({'FlagName': 'Get_GerudoWeapon'}) {
        Event332:
        if Npc_oasis007.IsOnInstEventFlag() {
            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_Talk_44'})
        } else {
            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_Talk_01'})
        }
        Event330:
        switch EventSystemActor.GeneralChoice4() {
          case 0:
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

            call Npc_oasis007.Reget_Weapons()

          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_007_aboutTheHero'}) {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_011', 'IsCloseMessageDialog': True})
                Event413:
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_450'})
                goto Event330
            } else {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_010', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroGerudo_007_aboutTheHero', 'IsWaitFinish': True})
                goto Event413
            }
          case 2:
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_007_near003'}) {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_250'})
                Event434:
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_452'})
                goto Event330
            } else
            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Minute': 0, 'Hour': 20}) {
                Event394:
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_100', 'IsCloseMessageDialog': True})
                goto Event434
            } else
            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Minute': 0, 'Hour': 11}) {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_200'})
                goto Event434
            } else
            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Minute': 0, 'Hour': 7}) {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_300', 'IsCloseMessageDialog': True})
            } else {
                goto Event394
            }
            goto Event434
          case 3:
            Event331:
            Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_43', 'IsCloseMessageDialog': True})
            Event319:
            EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
        }
    } else {
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Talk_12'})
        Event325:
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_000'})
        Event326:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_007_aboutTheHero'}) {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_011', 'IsCloseMessageDialog': True})
                Event383:
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_400', 'IsCloseMessageDialog': False})
                goto Event326
            } else {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_010', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroGerudo_007_aboutTheHero', 'IsWaitFinish': True})
                goto Event383
            }
          case 1:
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_007_near003'}) {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_250'})
                Event444:
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_AppearDungeon03'}) {
                    goto Event319
                } else {
                    goto Event383
                }
            } else
            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Minute': 0, 'Hour': 20}) {
                Event380:
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_100', 'IsCloseMessageDialog': True})
                goto Event444
            } else
            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Minute': 0, 'Hour': 11}) {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_200'})
                goto Event444
            } else
            if EventSystemActor.CheckTime({'ConditionType': 'ge', 'Minute': 0, 'Hour': 7}) {
                Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis007_DLC2nd_SD_300', 'IsCloseMessageDialog': True})
            } else {
                goto Event380
            }
            goto Event444
          case 2:
            goto Event331
        }
    }
}

void 007_RAIMEI_CK() {
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckType': 'Thunder'})
    && !EventSystemActor.CheckFlag({'FlagName': 'Npc_oasis007_Raimei_CK'}) {
        Npc_oasis007.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_oasis007:Raimei_CK_001'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_oasis007_Raimei_CK'})
        if !EventSystemActor.CheckFlag({'FlagName': 'Get_GerudoWeapon'}) {
            goto Event325
        }
    }
}

void SeekDungeon_Animal_Sunazarashi_D_DLC2nd_Talk() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_oasis032", sub_name="BalladOfHeroGerudo")})

    Npc_oasis032[BalladOfHeroGerudo].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Animal_Sunazarashi_D_DLC2nd_SD_Npc_oasis032_000'})
}

void 007_beforeGetWeapon() {
    goto Event325
}

void 007_afterGetWeapon() {
    goto Event332
}

void SeekDungeon_Npc_oasis025_Near() {
    Npc_oasis025.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGerudo:Npc_oasis025_SD_Near000', 'DispFrame': 90, 'IsChecked': False})
}
