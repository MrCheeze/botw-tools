-------- EventFlow: BalladOfHeroRito --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_AdvanceQuest', 'Demo_FlagON', 'Demo_ChangeScene', 'Demo_CallDemo', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_KillUIScreen', 'Demo_CurseRRematchCount', 'Demo_CloseMessageDialog']
queries: ['CheckJustBeforeEventCancel', 'CountFlag4', 'CheckFlag', 'GeneralChoice2', 'GeneralChoice4', 'HasPorchItem', 'GeneralChoice3', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Join', 'Demo_PlayerAirWait', 'Demo_PlayerWait', 'Demo_StopInAir']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_CustomDuckingStart', 'Demo_StopAllDemoSound', 'Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Enemy_SiteBoss_Bow_R[0]
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain011
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync', 'Demo_LookAtObject']
queries: ['CheckActorAction14_2', 'IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_HighMountain004
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_ConnectTypeSpecify']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DragonFireEffectHolder
entrypoint: None()
actions: ['Demo_Join', 'Demo_CreateDragonChallengeXLink']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 0}

Actor: Npc_Musician_AoC_HeroRitoRelief
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void ToBattle() {
    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'IsWaitFinish': True, 'DemoName': 'Demo614_1', 'EntryPointName': 'Demo614_1'})
}

void AppearDungeon01() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Mute', 'SeCtrlType': 'EnvReduce'})
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        Event331:
        EventSystemActor.Demo_FlagON({'FlagName': 'NotBack_Demo016Camera', 'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Demo602_0_DungeonArrival_Water'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Dungeon01_ForDemo602_0'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC_Water'})

    } else {
        if EventSystemActor.CheckPlayerState({'PlayerState': 5}) {
            GameROMPlayer.Demo_Join({'IsWaitFinish': True})
            goto Event331
        } else {
            GameROMPlayer.Demo_PlayerAirWait({'IsWaitFinish': True})
            goto Event331
        }
    }
}

void AppearDungeon02() {

    call BalladOfHeroCommon.AppearDungeon_first()

    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
    EventSystemActor.Demo_FlagON({'FlagName': 'NotBack_Demo016Camera', 'IsWaitFinish': True})
    DragonFireEffectHolder.Demo_Join({'IsWaitFinish': True})
    DragonFireEffectHolder.Demo_CreateDragonChallengeXLink({'XLinkHandleIndex': 2, 'IsWaitFinish': True})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -35.315673828125, 'Pattern1PosY': -1.2528690099716187, 'Pattern1PosZ': 16.6602783203125, 'Pattern1AtX': -2.281493902206421, 'Pattern1AtY': -3.319793939590454, 'Pattern1AtZ': 1.9801030158996582, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'ActorName1': 'Enemy_Dragon_Fire', 'Count': 30.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': 'BalladOfHeroRito_DragonDemoCameraPos', 'PosAppendMode': 1, 'AtAppendMode': 3, 'GameDataVec3fCameraAt': 'BalladOfHeroRito_DragonDemoCameraViewPos'})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 88})

    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_DragonEffect'})
}

void AppearDungeon03() {

    call BalladOfHeroCommon.AppearDungeon_first()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Demo602_0_DungeonArrival_Snow'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})

}

void AppearCurse() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'BgmCtrlType': 'Stop', 'SeCtrlType': 'None'})
    SceneSoundCtrlTag.Demo_CustomDuckingStart({'IsWaitFinish': True, 'TargetGroups': 'World', 'ExceptGroups': 'PlayerShakeNoise', 'FadeInSec': 1.0, 'Volume': 0.0, 'FadeOutSec': 0.0, 'StartDelaySec': 0.0})
    SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_StartBossSeq', 'IsWaitFinish': True})
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_GenerateCurse'})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'EndFade': 0, 'DemoName': 'Demo670_1'})
    if !EventSystemActor.CheckJustBeforeEventCancel() {
        GameRomCamera.Demo_ConnectTypeSpecify({'ConnectType': 0, 'IsWaitFinish': True})
        Event79:
        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Wind_Start_FirstHalf'})
    } else {
        EventSystemActor.Demo_KillUIScreen({'IsWaitFinish': True, 'ScreenName': 'MainDungeon_00'})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
        goto Event79
    }
}

void DefeatCurseGannon() {
    SceneSoundCtrlTag.Demo_SetStartProc({'IsWaitFinish': True, 'SeCtrlType': 'EnvReduce', 'BgmCtrlType': 'Stop'})
    Enemy_SiteBoss_Bow_R[0].Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'DisableDraw_ChildDevice', 'IsWaitFinish': True})

    call BalladOfHeroCommon.PlayerWait()


    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': True, 'Seconds': 1, 'IsWait': False})
    }

    EventSystemActor.Demo_CurseRRematchCount({'IsWaitFinish': True, 'CurseRType': 0, 'GameDataStringCounterName': 'CurseR_Wind_Challenge', 'RematchCount': 1})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo671_1', 'EndFade': 1})
    if EventSystemActor.CheckJustBeforeEventCancel() {
        EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 1, 'StartType': -1, 'WarpDestMapName': 'MainField/B-3', 'WarpDestPosName': 'Clear_RemainsWind', 'EntryPointName': 'LevelUp', 'EvflName': 'Demo622_1'})
    }
}

void Ready_Npc_Musician_AoC_HeroRitoRelief_Talk() {
    if EventSystemActor.CheckPlayerState({'PlayerState': 4}) {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        Event104:
        EventSystemActor.Demo_CallDemo({'EndFade': 0, 'DemoName': 'Demo610_1', 'IsWaitFinish': True, 'EntryPointName': 'Ready'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_ReliefSong'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Activated'})
    } else {
        GameROMPlayer.Demo_StopInAir({'IsWaitFinish': True, 'NoFixed': False})
        goto Event104
    }
}

void Front_ClearDungeon01() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_EventClearDungeon01'})
}

void Seek1stDungeon_Npc_Musician_AoC_HeroRitoRelief_Talk() {
    Event367:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Relief_Rito_Talk'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

    call BalladOfHeroes.Individual_Finish_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_HeroRitoRelief")})

    EventSystemActor.Demo_CallDemo({'EndFade': 0, 'DemoName': 'Demo610_1', 'IsWaitFinish': True, 'EntryPointName': 'SeekDungeons'})
}

void Front_ClearDungeon02() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_EventClearDungeon02'})
}

void Front_ClearDungeon03() {

    call AdvanceStep()

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_EventClearDungeon03'})
}

void AdvanceStep() {
    switch EventSystemActor.CountFlag4({'GameDataFlagNo3': '', 'GameDataFlagNo4': '', 'GameDataFlagNo0': 'Clear_Dungeon127', 'GameDataFlagNo1': 'Clear_Dungeon128', 'GameDataFlagNo2': 'Clear_Dungeon129'}) {
      case 1:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Seek2ndDungeon', 'QuestName': 'BalladOfHeroRito'})
      case 2:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Seek3rdDungeon', 'QuestName': 'BalladOfHeroRito'})
      case 3:
        Event165:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'ToRemains', 'QuestName': 'BalladOfHeroRito'})
      case 4:
        goto Event165
      case 5:
        goto Event165
    }
}

void Seek2ndDungeon_Npc_Musician_AoC_HeroRitoRelief_Talk() {
    goto Event367
}

void Seek3rdDungeon_Npc_Musician_AoC_HeroRitoRelief_Talk() {
    goto Event367
}

void Seek1stDungeon_Npc_HighMountain011_Talk() {
    switch Npc_HighMountain011.CheckActorAction14_2() {
      case 6:
        Event307:

        call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 0})

        Event379:
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_Talk'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_TalkCheck'}) {
                Event242:
                Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk08'})
                Event239:
                if !EventSystemActor.GeneralChoice2() {
                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_DragonSuccess'}) {
                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_TalkCheck'}) {
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk03'})
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk16'})
                        } else {
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk03'})
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk05'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_TalkCheck'})
                        }
                    } else {
                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_TalkCheck'}) {
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk03'})
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk11'})
                        } else {
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk03'})
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk10'})
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk11'})
                            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_TalkCheck'})
                        }
                    }
                } else {
                    Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk07'})
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_TalkCheck'})
                }
            } else {
                Npc_HighMountain011.Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                goto Event242
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_Talk'})
            if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC011_First'}) {
                Npc_HighMountain011.Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                Event233:
                Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk02'})
                goto Event239
            } else {
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC011_First'})
                Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk01'})
                goto Event233
            }
        }
      case 7:
        goto Event307
      case 8:
        goto Event307
      case 9:
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Dragon_Passing'}) {

            call Npc_HighMountain011_CheckTalk()


            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

            if Npc_HighMountain011.IsOnInstEventFlag() {
                Npc_HighMountain011.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0})
                Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk08'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk12'})
                    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_DragonSuccess'}) {
                        Event269:
                        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk14'})
                        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk06'})
                    } else {
                        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk14'})
                        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk13', 'IsCloseMessageDialog': True})
                        Npc_HighMountain011.Demo_LookAtObject({'IsWaitFinish': True, 'FaceId': 1, 'IsValid': True, 'TurnDirection': 0.0, 'ObjectId': 1, 'ActorName': 'Npc_HighMountain011', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0]})
                        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk15'})
                    }
                } else {
                    Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk07'})
                }
            } else {
                Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk04'})
                if !EventSystemActor.GeneralChoice2() {
                    Npc_HighMountain011.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'ObjectId': 0, 'TurnDirection': 0.0})
                    if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC011_First'}) {
                        Npc_HighMountain011.Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk00', 'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                        Event255:
                        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk12'})
                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_DragonSuccess'}) {
                            goto Event269
                        } else {
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk10'})
                            Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk13'})
                        }
                    } else {
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC011_First'})
                        Npc_HighMountain011.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Talk01'})
                        goto Event255
                    }
                }
            }
        } else {

            call InitTalk.InitTalk({'Arg_Greeting': 'FollowAISchedule', 'Arg_Turn': 2})

            goto Event379
        }
    }
}

void Seek1stDungeon_Npc_HighMountain011_Near() {
    switch Npc_HighMountain011.CheckActorAction14_2() {
      case 6:
        Npc_HighMountain011.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Near01'})
      case 7:
        Event179:
        Npc_HighMountain011.Demo_TalkASync({'IsWaitFinish': True, 'DispFrame': 90, 'IsChecked': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain011_Near00'})
      case 8:
        goto Event179
      case 9:
        goto Event179
    }
}

void Seek1stDungeon_Npc_HighMountain004_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if EventSystemActor.CheckFlag({'FlagName': 'Get_RitoWeapon'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC004_NormalFirst'}) {
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk23'})
            Event293:
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo702_0'}) {
                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk08'})
                    Event281:
                    switch EventSystemActor.GeneralChoice4() {
                      case 0:
                        Event224:
                        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk01', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk17'})
                        Event300:
                        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                            if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo702_0'}) {
                                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk09'})
                                goto Event281
                            } else {
                                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk07'})
                                Event222:
                                switch EventSystemActor.GeneralChoice3() {
                                  case 0:
                                    goto Event224
                                  case 1:
                                    Event223:
                                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk05'})
                                    switch EventSystemActor.GeneralChoice4() {
                                      case 0:
                                        Event203:
                                        if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
                                            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk36', 'IsCloseMessageDialog': True})
                                            goto Event300
                                        } else {
                                            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk44'})

                                            call Npc_HighMountain004.Karn_MSword()

                                            goto Event300
                                        }
                                      case 1:
                                        Event198:
                                        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk13', 'IsCloseMessageDialog': True})
                                        goto Event300
                                      case 2:
                                        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk37'})
                                        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk38', 'IsCloseMessageDialog': True})
                                        goto Event300
                                      case 3:
                                        Event202:
                                        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk43'})
                                    }
                                  case 2:
                                    goto Event202
                                }
                            }
                        } else {
                            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk14'})
                            Event295:
                            switch EventSystemActor.GeneralChoice4() {
                              case 0:
                                goto Event224
                              case 1:
                                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk15', 'IsCloseMessageDialog': True})
                                goto Event300
                              case 2:
                                if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo702_0'}) {
                                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk13'})
                                    switch EventSystemActor.GeneralChoice4() {
                                      case 0:
                                        Event283:
                                        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk10'})
                                        goto Event300
                                      case 1:
                                        goto Event203
                                      case 2:
                                        goto Event198
                                      case 3:
                                        goto Event202
                                    }
                                } else {
                                    goto Event223
                                }
                              case 3:
                                goto Event202
                            }
                        }
                      case 1:
                        goto Event283
                      case 2:
                        goto Event223
                      case 3:
                        goto Event202
                    }
                } else {
                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk04'})
                    goto Event222
                }
            } else {
                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk12'})
                goto Event295
            }
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Rito_NPC004_NormalFirst'})
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk23'})
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk24'})
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk19'})
            goto Event293
        }
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'Rito_NPC004_First_Clear'}) {
            Event195:
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk42'})
            if EventSystemActor.HasPorchItem({'PorchItemName': 'Weapon_Sword_070', 'Count': 1}) {
                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk27'})
                EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk21'})
                    Event322:
                    if !EventSystemActor.GeneralChoice2() {
                        Event221:
                        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk01', 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False})
                        Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk17'})
                        if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                            Event299:
                            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk16'})
                            Event219:
                            switch EventSystemActor.GeneralChoice3() {
                              case 0:
                                goto Event221
                              case 1:
                                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk15', 'IsCloseMessageDialog': True})
                                goto Event299
                              case 2:
                                Event220:
                                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk02', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                            }
                        }
                    } else {
                        goto Event220
                    }
                } else {
                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk19'})
                    goto Event219
                }
            } else {
                Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk28'})

                call Npc_HighMountain004.Karn_MSword()

                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk20'})
                    goto Event322
                } else {
                    Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Talk00', 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False})
                    goto Event219
                }
            }
        } else {
            Npc_HighMountain004.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain004:talk23'})
            EventSystemActor.Demo_FlagON({'FlagName': 'Rito_NPC004_First_Clear', 'IsWaitFinish': True})
            goto Event195
        }
    }
}

void Seek1stDungeon_Npc_HighMountain004_Near() {
    Npc_HighMountain004.Demo_TalkASync({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/BalladOfHeroRito:Npc_HighMountain004_Near00', 'DispFrame': 90, 'IsChecked': False})
}

void Npc_HighMountain011_CheckTalk() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_Talk'}) {
        Event381:
        if !EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_TalkCheck'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_TalkCheck'})
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroRito_Npc_HighMountain011_Talk'})
        goto Event381
    }
}
