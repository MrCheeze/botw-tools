-------- EventFlow: BalladOfHeroGoron --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_AdvanceQuest', 'Demo_FlagON', 'Demo_ChangeScene', 'Demo_WaitFrame', 'Demo_KillUIScreen', 'Demo_CloseMessageDialog', 'Demo_CurseRRematchCount', 'Demo_FlagOFF']
queries: ['CheckJustBeforeEventCancel', 'CountFlag4', 'CheckFlag', 'CheckTimeType', 'GeneralChoice4', 'HasPorchItem', 'GeneralChoice3', 'CheckExistActor', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerWait', 'Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MultiTalk']
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

Actor: Enemy_SiteBoss_Lsword_R[0]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron022
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Gaman01_DLC2nd
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_SetInstEventFlag', 'Demo_TalkASync', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Gaman02_DLC2nd
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_SetInstEventFlag', 'Demo_TalkASync', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Gaman03_DLC2nd
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_SetInstEventFlag', 'Demo_TalkASync', 'Demo_ForbidSettingInstEventFlag']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron006
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['CheckActorAction13']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron020_2[YunBo_Finished]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_TurnAndLookToObject', 'Demo_TalkASync']
queries: ['CheckActorAction13', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_HeroGoronRelief
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void AppearDungeon01() {

    call BalladOfHeroCommon.AppearDungeon_first()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Dungeon01_ForDemo602_0'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})

    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Dungeon01_ForDemo602_0'})
}

void AppearDungeon02() {

    call BalladOfHeroCommon.AppearDungeon_first_forOutroBgm()


    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

}

void AppearDungeon03() {

    call BalladOfHeroCommon.AppearDungeon_first()


    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

}

void ToBattle() {
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'DemoName': 'Demo614_0', 'EntryPointName': 'Demo614_0'})
}

void AppearCurse() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'PlayerShakeNoise', 'FadeInSec': 1.0, 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_StartBossSeq', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_GenerateCurse'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo670_0'})
    if !EventSystemActor.CheckJustBeforeEventCancel() {
        Event54:
        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Fire_Start_FirstHalf'})
    } else {
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        goto Event54
    }
}

void DefeatCurseGannon() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'Stop'})
    Enemy_SiteBoss_Lsword_R[0].Demo_Join({'IsWaitFinish': True})

    call BalladOfHeroCommon.PlayerWait()


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': False})
    }

    EventSystemActor.Demo_CurseRRematchCount({'IsWaitFinish': True, 'RematchCount': 1, 'CurseRType': 2, 'GameDataStringCounterName': 'CurseR_Fire_Challenge'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo671_0', 'EndFade': 1})
    if EventSystemActor.CheckJustBeforeEventCancel() {
        EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'EntryPointName': 'LevelUp', 'WarpDestMapName': 'MainField/H-2', 'WarpDestPosName': 'Clear_RemainsFire', 'EvflName': 'Demo622_0'})
    }
}

void Front_ClearDungeon01() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_EventClearDungeon01'})
}

void Front_ClearDungeon02() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_EventClearDungeon02'})
}

void Front_ClearDungeon03() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_EventClearDungeon03'})
}

void AdvanceStep() {
    switch EventSystemActor.CountFlag4({'GameDataFlagNo3': '', 'GameDataFlagNo4': '', 'GameDataFlagNo0': 'Clear_Dungeon130', 'GameDataFlagNo1': 'Clear_Dungeon131', 'GameDataFlagNo2': 'Clear_Dungeon132'}) {
      case 1:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Seek2ndDungeon', 'QuestName': 'BalladOfHeroGoron'})
      case 2:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Seek3rdDungeon', 'QuestName': 'BalladOfHeroGoron'})
      case 3:
        Event124:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'ToRemains', 'QuestName': 'BalladOfHeroGoron'})
      case 4:
        goto Event124
      case 5:
        goto Event124
    }
}

void Ready_Npc_Musician_AoC_HeroGoronRelief_Talk() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        Event100:
        EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'EntryPointName': 'Ready', 'DemoName': 'Demo610_0'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_ReliefSong'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Activated'})
    } else {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        goto Event100
    }
}

void Seek1stDungeon_Npc_Musician_AoC_HeroGoronRelief_Talk() {
    Event411:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Relief_Goron_Talk'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    call BalladOfHeroes.Individual_Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_HeroGoronRelief")})

    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'EntryPointName': 'SeekDungeons', 'DemoName': 'Demo610_0'})
}

void Seek2ndDungeon_Npc_Musician_AoC_HeroGoronRelief_Talk() {
    goto Event411
}

void Seek3rdDungeon_Npc_Musician_AoC_HeroGoronRelief_Talk() {
    goto Event411
}

void Seek1stDungeon_Npc_Goron022_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Npc_Goron022_Talk'}) {
        Event215:

        call Goron022Hello()

        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_FirstKillGolemR'}) {
            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk06'})
        } else {
            if Npc_Goron022.IsOnInstEventFlag() {
                Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk01'})
            } else {
                Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk16'})
                Npc_Goron022.Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
            }
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Npc_Goron022_Talk'})
        goto Event215
    }
}

void Seek1stDungeon_Npc_Gaman01_DLC2nd_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Goronbrothers_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_RingOnGround'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk09'})
        } else {
            Event146:
            if Npc_Gaman01_DLC2nd.IsOnInstEventFlag() {

                call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk08'})
            } else {
                if !EventSystemActor.CheckExistActor({'ActorName': 'Npc_Gaman02_DLC2nd', 'IsCheckEquipStand': False, 'IsCheckLife': True}) {
                    if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': False, 'IsCheckLife': True, 'ActorName': 'Npc_Gaman03_DLC2nd'}) {

                        call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Gaman01_DLC2nd', 'Actor2': 'Npc_Gaman02_DLC2nd', 'Actor3': 'Npc_Gaman03_DLC2nd'})

                        Npc_Gaman02_DLC2nd.Demo_TurnAndLookToObject({'ObjectId': 0, 'IsValid': True, 'IsWaitFinish': False, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_Gaman03_DLC2nd.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

                        call GoronChallenge_Check()

                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Goronbrothers_Talk'}) {
                            Event328:
                            if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Goron_ChangeSchedule'}) {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Goron_ChangeSchedule'})
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroGoron_Goronbrothers_Talk', 'IsWaitFinish': True})
                            goto Event328
                        }
                    } else {
                        Event405:
                        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
                        Npc_Gaman01_DLC2nd.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': False})
                    }
                } else {
                    goto Event405
                }
            }
        }
    } else {
        goto Event146
    }
}

void Seek1stDungeon_Npc_Gaman02_DLC2nd_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Goronbrothers_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_RingOnGround'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Npc_Gaman02_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman02_DLC2nd_Talk03'})
        } else {
            Event147:
            if Npc_Gaman02_DLC2nd.IsOnInstEventFlag() {

                call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                Npc_Gaman02_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman02_DLC2nd_Talk02'})
            } else {
                if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': False, 'IsCheckLife': True, 'ActorName': 'Npc_Gaman01_DLC2nd'}) {
                    if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': False, 'IsCheckLife': True, 'ActorName': 'Npc_Gaman03_DLC2nd'}) {

                        call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Gaman01_DLC2nd', 'Actor2': 'Npc_Gaman02_DLC2nd', 'Actor3': 'Npc_Gaman03_DLC2nd'})

                        Npc_Gaman01_DLC2nd.Demo_TurnAndLookToObject({'IsValid': True, 'ObjectId': 0, 'IsWaitFinish': False, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_Gaman03_DLC2nd.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ObjectId': 0, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_Gaman02_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman02_DLC2nd_Talk01', 'IsCloseMessageDialog': True})

                        call GoronChallenge_Check()

                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Goronbrothers_Talk'}) {
                            Event330:
                            if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Goron_ChangeSchedule'}) {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Goron_ChangeSchedule'})
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroGoron_Goronbrothers_Talk', 'IsWaitFinish': True})
                            goto Event330
                        }
                    } else {
                        Event406:
                        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
                        Npc_Gaman02_DLC2nd.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': False})
                    }
                } else {
                    goto Event406
                }
            }
        }
    } else {
        goto Event147
    }
}

void Seek1stDungeon_Npc_Gaman03_DLC2nd_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Goronbrothers_Talk'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_RingOnGround'}) {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            Npc_Gaman03_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman03_DLC2nd_Talk03'})
        } else {
            Event148:
            if Npc_Gaman03_DLC2nd.IsOnInstEventFlag() {

                call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

                Npc_Gaman03_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman03_DLC2nd_Talk02'})
            } else {
                if !EventSystemActor.CheckExistActor({'IsCheckEquipStand': False, 'IsCheckLife': True, 'ActorName': 'Npc_Gaman01_DLC2nd'}) {
                    if !EventSystemActor.CheckExistActor({'ActorName': 'Npc_Gaman02_DLC2nd', 'IsCheckEquipStand': False, 'IsCheckLife': True}) {

                        call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule', 'Actor1': 'Npc_Gaman01_DLC2nd', 'Actor2': 'Npc_Gaman02_DLC2nd', 'Actor3': 'Npc_Gaman03_DLC2nd'})

                        Npc_Gaman01_DLC2nd.Demo_TurnAndLookToObject({'IsValid': True, 'ObjectId': 0, 'IsWaitFinish': False, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_Gaman02_DLC2nd.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'IsConfront': True, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
                        Npc_Gaman03_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman03_DLC2nd_Talk01', 'IsCloseMessageDialog': True})

                        call GoronChallenge_Check()

                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Goronbrothers_Talk'}) {
                            Event332:
                            if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Goron_ChangeSchedule'}) {
                                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroGoron_Goron_ChangeSchedule'})
                            }
                        } else {
                            EventSystemActor.Demo_FlagON({'FlagName': 'BalladOfHeroGoron_Goronbrothers_Talk', 'IsWaitFinish': True})
                            goto Event332
                        }
                    } else {
                        Event407:
                        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
                        Npc_Gaman03_DLC2nd.Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
                    }
                } else {
                    goto Event407
                }
            }
        }
    } else {
        goto Event148
    }
}

void Seek1stDungeon_Npc_Gaman01_DLC2nd_Near() {
    Npc_Gaman01_DLC2nd.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Near00', 'DispFrame': 90, 'IsChecked': False})
}

void Seek1stDungeon_Npc_Gaman02_DLC2nd_Near() {
    Npc_Gaman02_DLC2nd.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman02_DLC2nd_Near00', 'DispFrame': 90, 'IsChecked': False})
}

void Seek1stDungeon_Npc_Gaman03_DLC2nd_Near() {
    Npc_Gaman03_DLC2nd.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman03_DLC2nd_Near00', 'DispFrame': 90, 'IsChecked': False})
}

void GoronChallenge_Check() {
    if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Finish'}) {
            Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk02'})
            Event198:
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_RingOnGround'}) {
                Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk10'})
                GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 1, 'Pattern1PosX': 2315.81005859375, 'Pattern1PosY': 527.5800170898438, 'Pattern1PosZ': -2006.239990234375, 'Pattern1AtX': 2318.85009765625, 'Pattern1AtY': 524.3800048828125, 'Pattern1AtZ': -2014.199951171875, 'ReviseModeEnd': 2, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'FovyAppendMode': 1, 'Pattern1Fovy': 50.0})
                Npc_Gaman01_DLC2nd.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 1, 'TurnDirection': 165.0, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk13'})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 1, 'ReviseModeEnd': 2, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'StartCalcOnly': False, 'Count': 0.0, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1PosX': 2323.070068359375, 'Pattern1PosY': 512.7100219726562, 'Pattern1PosZ': -2031.68994140625, 'Pattern1AtX': 2322.75, 'Pattern1AtY': 510.04998779296875, 'Pattern1AtZ': -2040.3900146484375, 'Pattern1Fovy': 50.0, 'FovyAppendMode': 1})
                Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk14'})
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 0, 'Count': 0.0})
                GameRomCamera.Demo_MultiTalk({'IsWaitFinish': True, 'ActorName1': 'Npc_Gaman01_DLC2nd', 'ActorSpecify1': 3, 'ActorSpecify2': 3, 'ActorSpecify3': 3, 'ActorName2': 'Npc_Gaman02_DLC2nd', 'ActorName3': 'Npc_Gaman03_DLC2nd', 'Fovy': 40.0, 'UniqueName1': '', 'UniqueName2': '', 'UniqueName3': ''})
                Npc_Gaman02_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman02_DLC2nd_Talk04'})
                Npc_Gaman03_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman03_DLC2nd_Talk04'})
                Npc_Gaman01_DLC2nd.Demo_SetInstEventFlag({'IsWaitFinish': True})
                Npc_Gaman02_DLC2nd.Demo_SetInstEventFlag({'IsWaitFinish': True})
                Npc_Gaman03_DLC2nd.Demo_SetInstEventFlag({'IsWaitFinish': True})
            } else {
                Npc_Gaman01_DLC2nd.Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                Npc_Gaman02_DLC2nd.Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman02_DLC2nd_Talk00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                GameRomCamera.Demo_MovePosFlow({'PosAppendMode': 1, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'GameDataVec3fCameraPos': '', 'AtAppendMode': 1, 'GameDataVec3fCameraAt': '', 'StartCalcOnly': False, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'FovyAppendMode': 1, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': True, 'Count': 30.0, 'Pattern1PosX': 2317.02001953125, 'Pattern1PosY': 531.75, 'Pattern1PosZ': -2009.52001953125, 'Pattern1AtX': 2320.419921875, 'Pattern1AtY': 520.1500244140625, 'Pattern1AtZ': -2025.199951171875, 'Pattern1Fovy': 30.0, 'MotionMode': 1})
                Npc_Gaman02_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman02_DLC2nd_Talk05'})
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': True, 'ReviseMode': 0, 'Count': 0.0})
                GameRomCamera.Demo_MultiTalk({'IsWaitFinish': True, 'ActorName1': 'Npc_Gaman01_DLC2nd', 'ActorSpecify1': 3, 'ActorSpecify2': 3, 'ActorSpecify3': 3, 'ActorName2': 'Npc_Gaman02_DLC2nd', 'ActorName3': 'Npc_Gaman03_DLC2nd', 'Fovy': 40.0, 'UniqueName1': '', 'UniqueName2': '', 'UniqueName3': ''})
                Npc_Gaman03_DLC2nd.Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman03_DLC2nd_Talk00', 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True})
                Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk12'})
                Npc_Gaman01_DLC2nd.Demo_SetInstEventFlag({'IsWaitFinish': True})
                Npc_Gaman02_DLC2nd.Demo_SetInstEventFlag({'IsWaitFinish': True})
                Npc_Gaman03_DLC2nd.Demo_SetInstEventFlag({'IsWaitFinish': True})
            }
        } else {
            Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk03'})
            goto Event198
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Finish'}) {
            Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk04'})
            goto Event198
        } else {
            if EventSystemActor.CheckFlag({'FlagName': 'Gaman_Activated'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Activated'}) {
                    Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk05'})
                    goto Event198
                } else {
                    Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk06'})
                    goto Event198
                }
            } else {
                if EventSystemActor.CheckFlag({'FlagName': 'GoronCamp_Activated'}) {
                    Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk07'})
                    goto Event198
                } else {
                    Npc_Gaman01_DLC2nd.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Gaman01_DLC2nd_Talk01'})
                    goto Event198
                }
            }
        }
    }
}

void Goron022Hello() {
    if Npc_Goron022.IsOnInstEventFlag() {
        Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk02'})
    } else {
        switch EventSystemActor.CheckTimeType() {
          case 0:
            Event212:
            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk03'})
          case 1:
            goto Event212
          case 2:
            Event213:
            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk04'})
          case 3:
            goto Event213
          case 4:
            goto Event213
          case 5:
            goto Event213
          case 6:
            Event214:
            Npc_Goron022.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Talk05'})
          case 7:
            goto Event214
        }
    }
}

void Seek1stDungeon_Npc_Goron022_Near() {
    Npc_Goron022.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron022_Near00', 'DispFrame': 90, 'IsChecked': False})
}

void Seek1stDungeon_Npc_Goron006_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Get_GoronWeapon'}) {
        switch Npc_Goron006.CheckActorAction13() {
          case 0:
            Event229:

            call Npc_Goron006.BurudoHello2()

            Event245:
            if EventSystemActor.CheckFlag({'FlagName': 'Fire_Relic_BurudoThankYouGoods'}) {
                Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk06'})
                Event260:
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk01', 'IsCloseMessageDialog': False})
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk11'})
                    Event243:
                    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk07'})
                    goto Event260
                  case 1:
                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) {
                        switch Npc_Goron020_2[YunBo_Finished].CheckActorAction13() {
                          case 0:
                            Event263:
                            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk02', 'IsCloseMessageDialog': False})
                            goto Event243
                          case 1:
                            goto Event263
                          case 2:
                            goto Event263
                          case 3:
                            goto Event263
                          case 4:
                            goto Event263
                          case 5:
                            goto Event263
                          case 6:
                            goto Event263
                          case 7:
                            goto Event263
                          case 8:
                            goto Event263
                          case 9:
                            goto Event263
                          case 10:
                            Event360:
                            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk10', 'IsCloseMessageDialog': False})
                            goto Event243
                          case 11:
                            goto Event360
                          case 12:
                            goto Event263
                          case 13:
                            goto Event263
                        }
                    } else {
                        goto Event263
                    }
                  case 2:
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk08'})
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
                            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk63'})
                            goto Event243
                        } else {
                            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk64'})

                            call Npc_Goron006.Burudo_MSword()

                            goto Event243
                        }
                      case 1:
                        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk43'})
                        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk46'})
                        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk48'})
                        goto Event243
                      case 2:
                        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk61'})
                        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk62'})
                        goto Event243
                      case 3:
                        Event233:
                        Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk16'})
                    }
                  case 3:
                    goto Event233
                }
            } else {
                Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk110'})
                Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk111'})

                call Npc_Goron006.BurudoThankYouGoods()

                Event258:
                Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk04'})
                Event254:
                switch EventSystemActor.GeneralChoice3() {
                  case 0:
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk01', 'IsCloseMessageDialog': False})
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk11', 'IsCloseMessageDialog': True})
                    goto Event258
                  case 1:
                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) {
                        switch Npc_Goron020_2[YunBo_Finished].CheckActorAction13() {
                          case 0:
                            Event256:
                            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk02', 'IsCloseMessageDialog': True})
                            goto Event258
                          case 1:
                            goto Event256
                          case 2:
                            goto Event256
                          case 3:
                            goto Event256
                          case 4:
                            goto Event256
                          case 5:
                            goto Event256
                          case 6:
                            goto Event256
                          case 7:
                            goto Event256
                          case 8:
                            goto Event256
                          case 9:
                            goto Event256
                          case 10:
                            Event357:
                            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk10'})
                            goto Event258
                          case 11:
                            goto Event357
                          case 12:
                            goto Event256
                          case 13:
                            goto Event256
                        }
                    } else {
                        goto Event256
                    }
                  case 2:
                    Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk03'})
                }
            }
          case 1:
            goto Event229
          case 10:
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk47'})
            goto Event245
          case 11:
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk49'})
            goto Event245
          case 12:
            goto Event229
        }
    } else {
        switch Npc_Goron006.CheckActorAction13() {
          case 0:
            Event230:

            call Npc_Goron006.BurudoHello2()

            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk40'})
            Event244:
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk80'})
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Talk00'})
            goto Event254
          case 1:
            goto Event230
          case 10:
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk47'})
            goto Event244
          case 11:
            Npc_Goron006.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron006:talk49'})
            goto Event244
          case 12:
            goto Event230
        }
    }
}

void Seek1stDungeon_Npc_Goron006_Near() {
    switch Npc_Goron006.CheckActorAction13() {
      case 0:
        Event259:
        Npc_Goron006.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron006_Near00'})
      case 1:
        goto Event259
      case 10:
        goto Event259
      case 12:
        goto Event259
    }
}

void Seek1stDungeon_Npc_Goron020_2_Talk() {
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Goron020_First'}) {

        call Npc_Goron020_2.YunboHello()

        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        Event299:
        if EventSystemActor.CheckFlag({'FlagName': 'Npc_Goron020_Secret'}) {
            Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk04'})
            Event324:
            switch EventSystemActor.GeneralChoice4() {
              case 0:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk02', 'IsCloseMessageDialog': False})
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk10'})
                Event301:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk06'})
                goto Event324
              case 1:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk07', 'IsCloseMessageDialog': True})
                goto Event301
              case 2:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk05'})
                switch EventSystemActor.GeneralChoice4() {
                  case 0:
                    if Npc_Goron020_2[YunBo_Finished].IsOnInstEventFlag() {
                        Event305:
                        Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk24', 'IsCloseMessageDialog': True})
                        goto Event301
                    } else {
                        Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk13'})
                        goto Event305
                    }
                  case 1:
                    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1607.1854248046875, 'Pattern1PosY': 507.4464111328125, 'Pattern1PosZ': -2434.212646484375, 'Pattern1AtX': 1610.5841064453125, 'Pattern1AtY': 508.3669128417969, 'Pattern1AtZ': -2434.633056640625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk14', 'IsCloseMessageDialog': True})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
                    goto Event301
                  case 2:
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk15'})
                    Npc_Goron020_2[YunBo_Finished].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Barrier'})
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk16', 'IsCloseMessageDialog': True, 'ASName': ''})
                    Npc_Goron020_2[YunBo_Finished].Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'Barrier', 'SLinkKey': 'Barrier'})
                    goto Event301
                  case 3:
                    Event279:
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk12'})
                }
              case 3:
                goto Event279
            }
        } else {
            Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk19', 'IsCloseMessageDialog': True})
            Npc_Goron020_2[YunBo_Finished].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsConfront': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 3, 'TurnDirection': 100.0, 'FaceId': 1, 'ActorName': ''})

            fork {
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk25', 'ASName': 'Point', 'IsCloseMessageDialog': True})
            } {
                EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 2, 'TurnDirection': 100.0, 'FaceId': 1, 'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False})
            }

            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 1607.1854248046875, 'Pattern1PosY': 507.4464111328125, 'Pattern1PosZ': -2434.212646484375, 'Pattern1AtX': 1610.5841064453125, 'Pattern1AtY': 508.3669128417969, 'Pattern1AtZ': -2434.633056640625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk20', 'IsCloseMessageDialog': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            Npc_Goron020_2[YunBo_Finished].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsConfront': True, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True, 'FaceId': 2})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'IsTurnToLookAtPos': False, 'ObjectId': 0, 'FaceId': 2, 'ActorName': 'Npc_Goron020_2', 'UniqueName': 'YunBo_Finished', 'TurnDirection': 0.0})
            Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk26'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_Goron020_Secret'})
            Event320:
            Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk01'})
            Event321:
            switch EventSystemActor.GeneralChoice3() {
              case 0:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk02', 'IsCloseMessageDialog': False})
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_YunboTalk_In_Home'}) {
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk11'})
                    Event337:
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk08'})
                    goto Event321
                } else {
                    Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk10'})
                    goto Event337
                }
              case 1:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk07', 'IsCloseMessageDialog': True})
                goto Event337
              case 2:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Talk03', 'IsCloseMessageDialog': True})
            }
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

        switch Npc_Goron020_2[YunBo_Finished].CheckActorAction13() {
          case 4:
            Event311:
            if Npc_Goron020_2[YunBo_Finished].IsOnInstEventFlag() {
                Event294:
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk23'})
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Goron020_First', 'IsWaitFinish': True})
                goto Event320
            } else {
                Npc_Goron020_2[YunBo_Finished].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Goron020_2:talk27'})
                goto Event294
            }
          case 5:
            goto Event311
          case 10:
            goto Event311
        }
    }
}

void Seek1stDungeon_Npc_Goron020_2_Near() {
    Npc_Goron020_2[YunBo_Finished].Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroGoron:Npc_Goron020_2_Near00', 'DispFrame': 90, 'IsChecked': False})
}

void Yunbo_AfterTalk_Entry01() {
    goto Event311
}

void Yunbo_AfterTalk_Entry02() {
    goto Event299
}
