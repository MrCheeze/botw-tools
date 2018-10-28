-------- EventFlow: BalladOfHeroZora --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayASAdapt', 'Demo_StopInAir', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_ChangeScene', 'Demo_KillUIScreen', 'Demo_CurseRRematchCount', 'Demo_DeleteAllIceMakerForDemo', 'Demo_FlagOFF']
queries: ['CheckJustBeforeEventCancel', 'CountFlag4', 'CheckFlag', 'GeneralChoice2', 'GeneralChoice3', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

Actor: Enemy_SiteBoss_Spear_R[0]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora001
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora014
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora032
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[Prince03]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora003
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_HeroZoraRelief
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Ready_Npc_Musician_AoC_HeroZoraRelief_Talk() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    } else {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
    }
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'EntryPointName': 'Ready', 'DemoName': 'Demo610_2'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_ReliefSong'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_Activated'})
}

void AppearDungeon01() {

    call BalladOfHeroCommon.AppearDungeon_first()


    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

}

void AppearDungeon02() {

    call BalladOfHeroCommon.AppearDungeon_first()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Demo602_0_DungeonArrival_Water'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_Dungeon02_ForDemo602_0'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC_Water'})

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_Dungeon02_ForDemo602_0'})
}

void AppearDungeon03() {

    call BalladOfHeroCommon.AppearDungeon_first()


    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

}

void ToBattle() {
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'DemoName': 'Demo614_2', 'EntryPointName': 'Demo614_2'})
}

void AppearCurse() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'PlayerShakeNoise', 'FadeInSec': 1.0, 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_StartBossSeq', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_GenerateCurse'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo670_2'})
    if !EventSystemActor.CheckJustBeforeEventCancel() {
        Event128:
        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Water_Start_FirstHalf'})
    } else {
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        goto Event128
    }
}

void DefeatCurseGannon() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'Stop'})
    Enemy_SiteBoss_Spear_R[0].Demo_Join({'IsWaitFinish': True})

    call BalladOfHeroCommon.PlayerWait()


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': False})
    }

    EventSystemActor.Demo_CurseRRematchCount({'IsWaitFinish': True, 'RematchCount': 1, 'CurseRType': 3, 'GameDataStringCounterName': 'CurseR_Water_Challenge'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo671_2', 'EndFade': 1})
    if EventSystemActor.CheckJustBeforeEventCancel() {
        EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'EntryPointName': 'LevelUp', 'WarpDestMapName': 'MainField/H-5', 'WarpDestPosName': 'Clear_RemainsWater', 'EvflName': 'Demo622_2'})
    }
}

void Seek1stDungeon_Npc_Musician_AoC_HeroZoraRelief_Talk() {
    Event386:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Relief_Zora_Talk'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    call BalladOfHeroes.Individual_Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_HeroZoraRelief")})

    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'DemoName': 'Demo610_2', 'EntryPointName': 'SeekDungeons'})
}

void Front_ClearDungeon01() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_EventClearDungeon01'})
}

void Front_ClearDungeon02() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_EventClearDungeon02'})
}

void Front_ClearDungeon03() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_EventClearDungeon03'})
}

void AdvanceStep() {
    switch EventSystemActor.CountFlag4({'GameDataFlagNo3': '', 'GameDataFlagNo4': '', 'GameDataFlagNo0': 'Clear_Dungeon124', 'GameDataFlagNo1': 'Clear_Dungeon125', 'GameDataFlagNo2': 'Clear_Dungeon126'}) {
      case 1:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Seek2ndDungeon', 'QuestName': 'BalladOfHeroZora'})
      case 2:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Seek3rdDungeon', 'QuestName': 'BalladOfHeroZora'})
      case [3, 4, 5]:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'ToRemains', 'QuestName': 'BalladOfHeroZora'})
    }
}

void Seek2ndDungeon_Npc_Musician_AoC_HeroZoraRelief_Talk() {
    goto Event386
}

void Seek3rdDungeon_Npc_Musician_AoC_HeroZoraRelief_Talk() {
    goto Event386
}

void SeekDungeon_Npc_Zora004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_Zora004.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_004_aboutTrial2'}) {
        Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora004_SD_201'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_004_aboutTrial'}) {
        Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora004_SD_111', 'IsCloseMessageDialog': True})
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_AppearDungeon02'}) {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'TalkingL'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora004_SD_200'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_004_aboutTrial2'})
        }
    } else {
        Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora004_SD_000', 'ASName': '', 'IsCloseMessageDialog': False})
        Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora004_SD_100'})
        Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora004_SD_110', 'IsCloseMessageDialog': True})
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_AppearDungeon02'}) {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'TalkingL'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            Npc_Zora004.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora004_SD_200'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_004_aboutTrial'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_004_aboutTrial2'})
            Event331:
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_004_aboutTrial'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora004_Talk2'})
        } else {
            goto Event331
        }
    }
}

void SeekDungeon_Npc_Zora001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})


    call Npc_Zora001.TakkaHello()

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_AppearDungeon02'}) {
        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora001_SD_200'})
        Event383:
        EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroRito_Takka_Talk', 'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Takka_Talk'}) {
        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora001_SD_100'})
    } else {
        Npc_Zora001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora001_SD_000', 'ASName': '', 'IsCloseMessageDialog': False})
        goto Event383
    }
}

void SeekDungeon_Npc_Zora014_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora014_NormalFirst'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_AppearDungeon01'}) {
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_100', 'IsCloseMessageDialog': False})
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_014_aboutTrial'}) {
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_001'})
        } else {
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_002', 'IsCloseMessageDialog': True})

            call Npc_Zora014_Camera_First()

            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_003', 'IsCloseMessageDialog': True})

            call Npc_Zora014_Camera_Last()

            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_004'})
            EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroZora_014_aboutTrial', 'IsWaitFinish': True})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora014_NormalFirst'})
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora014_First'}) {
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk20', 'IsBecomingSpeaker': True})
            Event226:
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_AppearDungeon01'}) {
                Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_101'})
            } else {
                Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_000', 'ASName': '', 'IsCloseMessageDialog': True})

                call Npc_Zora014_Camera_First()

                Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_003', 'IsCloseMessageDialog': True})

                call Npc_Zora014_Camera_Last()

                Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora014_SD_004'})
                EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroZora_014_aboutTrial', 'IsWaitFinish': True})
            }
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Zora014_First', 'IsWaitFinish': True})
            Npc_Zora014.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora014:talk19', 'IsBecomingSpeaker': True})
            goto Event226
        }
    }
}

void SeekDungeon_Npc_Zora032_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_AppearDungeon01'}) {
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora032_SD_100', 'IsCloseMessageDialog': False})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_032_aboutTrial'}) {
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora032_SD_001'})
    } else {
        Npc_Zora032.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora032_SD_000', 'IsCloseMessageDialog': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroZora_032_aboutTrial'})
    }
}

void SeekDungeon_Npc_ZoraB001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    Npc_ZoraB001[Prince03].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
    if EventSystemActor.CheckFlag({'FlagName': 'Normal_PrinceTalk01'}) {
        if Npc_ZoraB001[Prince03].IsOnInstEventFlag() {
            Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_101', 'IsCloseMessageDialog': False})
        } else {
            Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_100', 'IsCloseMessageDialog': False})
        }
        Event337:
        switch EventSystemActor.GeneralChoice3() {
          case 0:
            Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_010', 'IsCloseMessageDialog': False})
            Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_012'})
            Event339:
            Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_104'})
            EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroZora_aboutTrial', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'Normal_PrinceTalk01', 'IsWaitFinish': True})
            goto Event337
          case 1:
            Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_013'})
            goto Event339
          case 2:
            Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_020', 'IsCloseMessageDialog': False})
        }
    } else {
        Npc_ZoraB001[Prince03].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_ZoraB001_SD_000', 'IsCloseMessageDialog': False})
        goto Event337
    }
}

void SeekDungeon_Npc_Zora003_Talk() {

    call InitTalk.InitTalkKingZora({'Self': ActorIdentifier(name="Npc_Zora003"), 'Arg_Turn': 2})

    EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Zora003_Talk'}) {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk08'})
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora003_SD_100'})
        Event265:
        if !EventSystemActor.GeneralChoice2() {
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora003_SD_010'})
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora003_SD_015'})
        } else {
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora003_SD_020'})
        }
    } else {
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk00', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 20, 'IsWaitFinish': True})
        Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk01', 'IsCloseMessageDialog': True})
        if !EventSystemActor.GeneralChoice2() {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk02', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_Surprised'})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkingL', 'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
            Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk04', 'ASName': 'Talk_Sad', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk05', 'ASName': 'Talk_Sad'})
                Event259:
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Zora003_Talk'})
                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroZora:Npc_Zora003_SD_000'})
                goto Event265
            } else {
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'TalkingS', 'NoErrorCheck': False})
                Npc_Zora003.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Zora003:talk06', 'ASName': 'Talk_Sad'})
                goto Event259
            }
        }
    }
}

void Npc_Zora014_Camera_First() {
    Npc_Zora014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsConfront': True, 'ObjectId': 2, 'IsValid': True, 'TurnPosition': [3324.0, 515.0, -879.0], 'FaceId': 2})
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1AtX': 3375.324951171875, 'Pattern1AtY': 507.70782470703125, 'Pattern1AtZ': -836.4136962890625, 'Pattern1Fovy': 40.00001525878906, 'Count': 30.0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'StartCalcOnly': True, 'Accept1FrameDelay': True, 'Pattern1PosX': 3383.510009765625, 'Pattern1PosY': 506.8800048828125, 'Pattern1PosZ': -828.530029296875, 'ReviseModeEnd': 0})
}

void Npc_Zora014_Camera_Last() {
    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'ReviseMode': 0, 'Count': 0.0, 'CollisionInterpolateSkip': False})
    Npc_Zora014.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'IsConfront': True, 'FaceId': 2, 'IsValid': True})
}
