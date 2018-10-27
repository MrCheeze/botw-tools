-------- EventFlow: BalladOfHeroes --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_CallDemo', 'Demo_FlagON', 'Demo_ChangeScene', 'Demo_ExitEventPlayer', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_AdvanceQuest', 'Demo_NoAutoPlacementEnemyDeadly']
queries: ['GeneralChoice2', 'CheckFlag', 'CountFlag4', 'CheckWeaponVacancyItem']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk', 'Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TalkASync']
queries: ['IsOnInstEventFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Musician_005[Individual_Ready_Talk(Self)]
entrypoint: Individual_Ready_Talk(Self)
actions: ['Demo_TurnAndLookToObject']
queries: []
params: None

Actor: Npc_Musician_005[Individual_Finish_Talk(Self)]
entrypoint: Individual_Finish_Talk(Self)
actions: ['Demo_Talk']
queries: ['IsOnInstEventFlag']
params: None

Actor: Npc_Musician_005[Individual_Ready_Second_Talk(Self)]
entrypoint: Individual_Ready_Second_Talk(Self)
actions: ['Demo_Talk']
queries: []
params: None

Actor: Npc_Musician_005[Ready_Talk(Self)]
entrypoint: Ready_Talk(Self)
actions: ['Demo_TurnAndLookToObject', 'Demo_Talk']
queries: []
params: None

Actor: Npc_Musician_005[Ready_Second_Talk(Self)]
entrypoint: Ready_Second_Talk(Self)
actions: ['Demo_Talk']
queries: []
params: None

void Test01() {
    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo680_0:Demo680_0_Text000'})
    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo680_0:Demo680_0_Text001'})
}

void Test02() {
    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo681_0:Demo681_0_Text000'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step06'})
}

void Test03() {
    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo645_0:Demo645_0_Text000'})
    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo645_0:Demo645_0_Text001'})
    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo645_0:Demo645_0_Text002'})
    EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'WarpDestPosName': 'BalladOfHeroes_ending', 'WarpDestMapName': 'MainField/D-6', 'EvflName': 'Demo646_0', 'EntryPointName': 'Demo646_0', 'FadeType': 1, 'StartType': 2})
}

void Srep02_Obj_Weapon_Sword_502_Check01() {
    if EventSystemActor.CheckWeaponVacancyItem({'Count': 1}) {
        if EventSystemActor.CheckFlag({'FlagName': 'IsPlayed_Demo601_1'}) {
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo606_0', 'EntryPointName': 'Demo606_0'})
        } else {
            EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo601_1', 'EntryPointName': 'Demo601_1'})
        }
    } else {
        GameROMPlayer.Demo_LookAtObject({'ActorName': 'FldObj_DLC_BlowSwordBase_A', 'UniqueName': 'BlowSwordBase_01', 'ObjectId': 4, 'FaceId': 2, 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsValid': True})
        NPC_GodVoice.Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/BalladOfHeroes:Obj_BlowSword_010', 'MessageOpenDelayTime': 15, 'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False})
    }
}

void Dungeon01_Appear() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {

        call BalladOfHeroCommon.AppearDungeon_first_forOutroBgm()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'OneHitDungeon000_ForDemo602_0'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})


        call Srep02_Encampment_Check()

    }
}

void Dungeon02_Appear() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {

        call BalladOfHeroCommon.AppearDungeon_first_forOutroBgm()

        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Demo602_0_DungeonArrival_Snow'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})

        call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})


        call Srep02_Encampment_Check()

    }
}

void Dungeon03_Appear() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {

        call BalladOfHeroCommon.AppearDungeon_first_forOutroBgm()


        call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})


        call Srep02_Encampment_Check()

    }
}

void Dungeon04_Appear() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {

        call BalladOfHeroCommon.AppearDungeon_first_forOutroBgm()


        call BalladOfHeroCommon.AppearDungeon_last({'Demo602_EPName': 'DungeonArrival_DLC'})


        call Srep02_Encampment_Check()

    }
}

void Srep02_Encampment_Check() {
    switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'Lock_OneHitDungeon001', 'GameDataFlagNo1': 'Lock_OneHitDungeon002', 'GameDataFlagNo2': 'Lock_OneHitDungeon003', 'GameDataFlagNo3': 'Lock_OneHitDungeon004'}) {
      case 0:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': 'Step02_Dungeon01', 'QuestName': 'BalladOfHeroes'})
      case 1:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'QuestName': 'BalladOfHeroes', 'StepName': 'Step02_Dungeon02'})
      case 2:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'StepName': 'Step02_Dungeon03', 'QuestName': 'BalladOfHeroes'})
      case 3:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'QuestName': 'BalladOfHeroes', 'StepName': 'Step2_Dungeon4'})
      case 4:
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': True, 'QuestName': 'BalladOfHeroes', 'StepName': 'Step03'})
    }
}

void Step04_Doushi_Event() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
    EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EndFade': 0, 'DemoName': 'Demo640_0', 'EntryPointName': 'Demo640_0'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsPlayed_Demo640_0'})
}

void Step02_Dungeon_Npc_Musician_AoC_BalladOfHeroes_Talk01() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01].IsOnInstEventFlag() {

        call Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_BalladOfHeroes", sub_name="BalladOfHeroes01")})

        Event217:
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo607_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'Demo607_0_1'})
    } else {
        Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01].Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_000', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})

        call Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_BalladOfHeroes", sub_name="BalladOfHeroes01")})

        goto Event217
    }
}

void Step02_Dungeon_Npc_Musician_AoC_BalladOfHeroes_Talk02() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02].IsOnInstEventFlag() {

        call Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_BalladOfHeroes", sub_name="BalladOfHeroes02")})

        Event216:
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo607_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'Demo607_0_2'})
    } else {
        Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02].Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_000', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})

        call Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_BalladOfHeroes", sub_name="BalladOfHeroes02")})

        goto Event216
    }
}

void Step02_Dungeon_Npc_Musician_AoC_BalladOfHeroes_Talk03() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03].IsOnInstEventFlag() {

        call Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_BalladOfHeroes", sub_name="BalladOfHeroes03")})

        Event214:
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo607_0', 'EntryPointName': 'Demo607_0_3', 'IsWaitFinish': True, 'EndFade': 0})
    } else {
        Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03].Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_000', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})

        call Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_BalladOfHeroes", sub_name="BalladOfHeroes03")})

        goto Event214
    }
}

void Step02_Dungeon_Npc_Musician_AoC_BalladOfHeroes_Talk04() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    if Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04].IsOnInstEventFlag() {

        call Ready_Second_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_BalladOfHeroes", sub_name="BalladOfHeroes04")})

        Event215:
        EventSystemActor.Demo_CallDemo({'DemoName': 'Demo607_0', 'IsWaitFinish': True, 'EndFade': 0, 'EntryPointName': 'Demo607_0_4'})
    } else {
        Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04].Demo_Talk({'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_000', 'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})

        call Ready_Talk({'Self': ActorIdentifier(name="Npc_Musician_AoC_BalladOfHeroes", sub_name="BalladOfHeroes04")})

        goto Event215
    }
}

void Individual_Ready_Talk() {
    Npc_Musician_005[Individual_Ready_Talk(Self)].Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
}

void Individual_Finish_Talk() {
    if Npc_Musician_005[Individual_Finish_Talk(Self)].IsOnInstEventFlag() {
        Event110:
        Npc_Musician_005[Individual_Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_Individual_020'})
        if !EventSystemActor.GeneralChoice2() {
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
            Npc_Musician_005[Individual_Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk01'})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Relief_Rito_Talk', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Relief_Goron_Talk', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Relief_Gerudo_Talk', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagOFF({'FlagName': 'Relief_Zora_Talk', 'IsWaitFinish': True})
        } else {
            Npc_Musician_005[Individual_Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk03'})
            if EventSystemActor.CheckFlag({'FlagName': 'Relief_Rito_Talk'}) {
                Npc_Musician_005[Individual_Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Town_004'})
                Event281:
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Relief_Rito_Talk', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Relief_Goron_Talk', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Relief_Gerudo_Talk', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagOFF({'FlagName': 'Relief_Zora_Talk', 'IsWaitFinish': True})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Relief_Goron_Talk'}) {
                Npc_Musician_005[Individual_Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Town_002'})
                goto Event281
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Relief_Gerudo_Talk'}) {
                Npc_Musician_005[Individual_Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Town_001'})
                goto Event281
            } else
            if EventSystemActor.CheckFlag({'FlagName': 'Relief_Zora_Talk'}) {
                Npc_Musician_005[Individual_Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_HeroXxxx_Demo610_Town_003'})
                goto Event281
            }
        }
    } else {
        Npc_Musician_005[Individual_Finish_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk12'})
        goto Event110
    }
}

void Individual_Ready_Second_Talk() {
    goto Event110
}

void Check_4ChampComp() {
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGoron_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroRito_Finish'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroZora_Finish'}) {
                if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroGerudo_Finish'}) {
                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_FourRemains_Clear'})
                    EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': 'BalladOfHeroes', 'StepName': 'Step05', 'ForceRunTelop': False})
                } else {
                    Event251:
                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
                }
            } else {
                goto Event251
            }
        } else {
            goto Event251
        }
    } else {
        goto Event251
    }
}

void Ready_Talk() {
    Npc_Musician_005[Ready_Talk(Self)].Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'IsConfront': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_Musician_First'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
                Event198:
                Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': True, 'MessageId': 'EventFlowMsg/Npc_Musician_012:Challenge000'})
                Event208:
                Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_010'})
                Event209:
                Npc_Musician_005[Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_020'})
                if !EventSystemActor.GeneralChoice2() {
                    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'WorldMute', 'IsWaitFinish': True})
                } else {
                    Npc_Musician_005[Ready_Second_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk03'})
                    EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
                }
            } else {
                Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_012'})
                Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_011'})
                goto Event209
            }
        } else {
            goto Event198
        }
    } else {
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_Musician_First', 'IsWaitFinish': True})
        Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk15'})
        if !EventSystemActor.GeneralChoice2() {
            Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk04'})
            Event204:
            Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk14'})
            if EventSystemActor.GeneralChoice2() in [0, 1] {
                Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk05'})
                goto Event208
            }
        } else {
            Npc_Musician_005[Ready_Talk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_Musician_008:Talk16'})
            goto Event204
        }
    }
}

void Ready_Second_Talk() {
    goto Event209
}

void Step02_Dungeon01_Npc_Musician_AoC_BalladOfHeroes_Near01() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
            Event235:
            Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_Near_01'})
        } else {
            Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes01].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_Near_02'})
        }
    } else {
        goto Event235
    }
}

void Step02_Dungeon01_Npc_Musician_AoC_BalladOfHeroes_Near02() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
            Event309:
            Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_Near_01'})
        } else {
            Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes02].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_Near_02'})
        }
    } else {
        goto Event309
    }
}

void Step02_Dungeon01_Npc_Musician_AoC_BalladOfHeroes_Near03() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
            Event310:
            Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_Near_01'})
        } else {
            Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes03].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_Near_02'})
        }
    } else {
        goto Event310
    }
}

void Step02_Dungeon01_Npc_Musician_AoC_BalladOfHeroes_Near04() {
    if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step02'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'BalladOfHeroes_Step03'}) {
            Event311:
            Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_Near_01'})
        } else {
            Npc_Musician_AoC_BalladOfHeroes[BalladOfHeroes04].Demo_TalkASync({'IsWaitFinish': True, 'IsChecked': False, 'DispFrame': 90, 'MessageId': 'EventFlowMsg/BalladOfHeroes:Npc_Musician_AoC_One_Near_02'})
        }
    } else {
        goto Event311
    }
}

void SetFlagsForStartIchigeki() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'HeroSoulProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Enemy_Delete'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'BloodyMoonProhibition'})

    call Srep02_Encampment_Check()

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
}
