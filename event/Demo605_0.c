-------- EventFlow: Demo605_0 --------

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_PlayASAdapt', 'Demo_PlayerReleaseMasterSword', 'Demo_LookAtTheFront']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_Join']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitForCloseFade', 'Demo_WaitFrame', 'Demo_ForceOpenMainScreen', 'Demo_FlagON', 'Demo_AutoSave', 'Demo_DisableAutoSavePausing', 'Demo_FlagOFF', 'Demo_EnableCameraInput', 'Demo_RecoverPlayerLife', 'Demo_StartHeartDemo', 'Demo_OkAutoPlacementEnemyDeadLy', 'Demo_EventCancelStart', 'Demo_EventCancelEnd', 'Demo_KillUIScreen', 'Demo_KillSelectActor', 'Demo_CloseMessageDialog', 'Demo_WarpPLAndResetGimmick']
queries: ['CheckPlayerRideHorse', 'CheckEventCancel', 'CheckFlag', 'CountFlag4']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_StopAllDemoSound']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[doushi]
entrypoint: None()
actions: ['Demo_OpenDungeonMessage']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Weapon_Sword_502
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_WarpEffectValueSetter', 'Demo_XLinkEventKill', 'Demo_WarpToPos']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 2}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo605_0() {

    call Demo605_0_C01()


    call Demo605_0_Message()


    call Demo605_0_ChallengeON()

    EventSystemActor.Demo_DisableAutoSavePausing({'IsWaitFinish': True})
    EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
}

void Demo605_0_C01() {
    GameRomCamera.Demo_Join({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    EventSystemActor.Demo_WaitForCloseFade({'IsWaitFinish': True, 'OrClosing': False})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    EventSystemActor.Demo_EnableCameraInput({'IsWaitFinish': True})
}

void Demo605_0_ChallengeON() {
    EventSystemActor.Demo_ForceOpenMainScreen({'IsWaitFinish': True})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'HorseWait'})
    } else {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait'})
    }
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '100enemy_Sheath_BindUpdateSkip'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo605_0-C02-Link-A-0', 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'MorphingFrame': 15.0})
    GameROMPlayer.Demo_PlayerReleaseMasterSword({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Weapon_Sword_502.Demo_XLinkEventCreate({'ELinkKey': 'DLC2_Demo605_0_Warp_Out', 'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'DLC2_Demo605_0_Warp_Out'})
    Weapon_Sword_502.Demo_WarpEffectValueSetter({'ChangeType': 1, 'SetFrame': 60.0, 'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeOut({'DispMode': 'Auto', 'Color': 0, 'Frame': 2, 'IsWaitFinish': True})
    EventSystemActor.Demo_KillSelectActor({'IsWaitFinish': True, 'ActorName': 'GameRomHorseBone_AllDay', 'UniqueName': ''})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': '100enemy_Sheath_BindUpdateSkip'})
    Weapon_Sword_502.Demo_XLinkEventKill({'ELinkKey': 'DLC2_Demo605_0_Warp_Out', 'IsWaitFinish': True, 'SLinkKey': ''})
    switch EventSystemActor.CountFlag4({'GameDataFlagNo4': '', 'GameDataFlagNo0': 'Lock_OneHitDungeon001', 'GameDataFlagNo1': 'Lock_OneHitDungeon002', 'GameDataFlagNo2': 'Lock_OneHitDungeon003', 'GameDataFlagNo3': 'Lock_OneHitDungeon004'}) {
      case [0, 1, 2, 3]:
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Retire_Dungeon04'})
        Event56:
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step02'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step02_Dungeon01'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step02_Dungeon02'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step02_Dungeon03'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BalladOfHeroes_Step2_Dungeon4'})
        if EventSystemActor.CheckFlag({'FlagName': 'Defeat_OneHitDungeon001'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Lock_OneHitDungeon001'})
        }
        if EventSystemActor.CheckFlag({'FlagName': 'Defeat_OneHitDungeon002'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Lock_OneHitDungeon002'})
        }
        if EventSystemActor.CheckFlag({'FlagName': 'Defeat_OneHitDungeon003'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Lock_OneHitDungeon003'})
        }
        if EventSystemActor.CheckFlag({'FlagName': 'Defeat_OneHitDungeon004'}) {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Lock_OneHitDungeon004'})
        }
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Ichigeki_Sword_Appear'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HeroSoulProhibition'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'BloodyMoonProhibition'})
        Weapon_Sword_502.Demo_WarpToPos({'IsWaitFinish': False, 'TargetPos': [0.0, 0.0, 0.0], 'TargetRot': [0.0, 0.0, 0.0]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 0, 'Frame': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventSystemActor.Demo_EventCancelStart({'ShowLogo': False, 'IsWaitFinish': True})

        fork {
            EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo605_0:Talk02'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'Demo605_0-C03-Link-A-0_Loop', 'MorphingFrame': 20.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 180})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'DemoWait', 'MorphingFrame': 20.0})
        }

        EventSystemActor.Demo_EventCancelEnd({'NoFadeIn': False, 'IsWaitFinish': True})
        if !EventSystemActor.CheckEventCancel() {
            Event43:
            EventSystemActor.Demo_RecoverPlayerLife({'IsWaitFinish': True})
            EventSystemActor.Demo_StartHeartDemo({'IsWaitFinish': True})
        } else {
            EventSystemActor.Demo_KillUIScreen({'ScreenName': 'MainDungeon_00', 'IsWaitFinish': True})
            SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
            goto Event43
        }
      case [4, 5]:
        goto Event56
    }
}

void Demo605_0_Message() {
    EventSystemActor.Demo_EventCancelStart({'ShowLogo': False, 'IsWaitFinish': True})

    fork {
        EventSystemActor[doushi].Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'DemoMsg/Demo605_0:Talk01'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True, 'ClothWarpMode': -2, 'ASName': 'LookAround'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'IsWaitFinish': False, 'NoErrorCheck': False, 'ASName': 'Demo605_0-C01-Link-A-0_Loop', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True})
    }

    EventSystemActor.Demo_EventCancelEnd({'NoFadeIn': False, 'IsWaitFinish': True})
    if EventSystemActor.CheckEventCancel() {
        EventSystemActor.Demo_KillUIScreen({'ScreenName': 'MainDungeon_00', 'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_StopAllDemoSound({'IsWaitFinish': True})
    }
}

void Demo605_1() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None'})

    call Common.AirStartUP_Player()


    fork {
        NPC_GodVoice.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'CloseDialogOption': 3, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Common:Ichigeki_Escape_Air_001'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 135})
    }

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    Fader.Demo_FadeOut({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WarpPLAndResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'SystemResetOption': 2, 'StartPosName': 'BalladOfHeroes_ending'})
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'IsWaitFinish': True, 'Frame': 0})

    call Demo605_0()

}
