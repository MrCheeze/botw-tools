-------- EventFlow: NakedIsland --------

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_FlagOFF', 'Demo_LoopEnd', 'Demo_WarpPlayer', 'Demo_AdvanceQuest', 'Demo_InitPouchForQuest', 'Demo_RestorePouchForQuest', 'Demo_WaitFrame', 'Demo_OpenDungeonMessage', 'Demo_CallDemo', 'Demo_ResetGimmick', 'Demo_ChangeScene', 'Demo_ForceSetPlayerRestartPosAn', 'Demo_RollbackQuest']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckPlayerState']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerTurnAndLookToObject', 'Demo_Join', 'Demo_UpdateEquip', 'Demo_PlayerHorseGetOffInDemo']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc', 'Demo_Ctrl', 'Demo_SetEndProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_RemainsLithogragh_A_02
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_OnWaitRevival', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_NakedIslandBall_02
entrypoint: None()
actions: ['Demo_Delete']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_NakedIslandBall_01
entrypoint: None()
actions: ['Demo_Delete']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_NakedIslandBall_03
entrypoint: None()
actions: ['Demo_Delete']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void StartNaked() {
    if !EventSystemActor.CheckFlag({'FlagName': 'NakedIsland_OnceRetire'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'NakedIsland_Finish'}) {
            SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'ASName': 'LookAround', 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NakedIsland:talk00'})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'WarpProhibition'})
            EventSystemActor.Demo_InitPouchForQuest({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
            GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            EventSystemActor.Demo_ForceSetPlayerRestartPosAn({'UniqueName': 'Restart', 'AnchorName': 'ForceSetPosDirAutoSaveAnchor', 'IsWaitFinish': True})
            EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NakedIsland:talk05'})
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'NakedIsland', 'StepName': 'Naked'})
        }
    }
}

void Naked_Npc_NakedIslandPriest_EachFrame() {
    Event41:
    if EventSystemActor.CheckFlag({'FlagName': 'NakedIsland_ReachTop'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'NakedIsland', 'StepName': 'Finish'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'NakedIsland_InIsland'}) {
        EventSystemActor.Demo_LoopEnd({'IsWaitFinish': True})
        goto Event41
    } else {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'NakedIsland', 'StepName': 'Warning'})
    }
}

void Finish_Npc_NakedIslandPriest_StepStart() {
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'NoErrorCheck': False})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NakedIsland:talk01'})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'EnvReduce'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'WarpProhibition'})
    EventSystemActor.Demo_RestorePouchForQuest({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMuteOff'})
    EventSystemActor.Demo_OpenDungeonMessage({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/NakedIsland:talk06'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NakedIsland_Finish'})
}

void Warning_Npc_NakedIslandPriest_StepStart() {

    call Common.AirStartUP_Player()

    NPC_GodVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/NakedIsland:talk02', 'IsCloseMessageDialog': True})
    if !EventSystemActor.GeneralChoice2() {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        EventSystemActor.Demo_OpenDungeonMessage({'MessageId': 'EventFlowMsg/NakedIsland:talk03', 'IsWaitFinish': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'WarpProhibition'})
        EventSystemActor.Demo_RestorePouchForQuest({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
        EventSystemActor.Demo_RollbackQuest({'QuestName': 'NakedIsland', 'StepName': 'OnceRetire', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 5, 'IsWaitFinish': True})
        EventSystemActor.Demo_ChangeScene({'WarpDestPosName': 'NakedRetire', 'WarpDestMapName': 'MainField/I-8', 'IsWaitFinish': True, 'StartType': -1, 'EvflName': '', 'EntryPointName': '', 'FadeType': 0})
    } else {
        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
        EventSystemActor.Demo_OpenDungeonMessage({'MessageId': 'EventFlowMsg/NakedIsland:talk04', 'IsWaitFinish': True})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'J-8', 'WarpDestPosName': 'NakedRestart'})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WallOff', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'ASName': 'DemoWait'})
        EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'NakedIsland_Warning'})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'QuestName': 'NakedIsland', 'StepName': 'Naked'})
    }
}

void SetBall1() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    DgnObj_RemainsLithogragh_A_02.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': 'RemainsLithogragh_Hole', 'ELinkKey': 'Actiove', 'IsTargetDemoSLinkUser': False})
    DgnObj_RemainsLithogragh_A_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Clear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    DgnObj_RemainsLithogragh_A_02.Demo_OnWaitRevival({'IsWaitFinish': False})
    FldObj_NakedIslandBall_01.Demo_Delete({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'NakedIsland_EraseBall_1', 'IsWaitFinish': True})
    Event70:
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    if EventSystemActor.CheckFlag({'FlagName': 'NakedIsland_SetBall_1'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'NakedIsland_SetBall_2'}) {
            if EventSystemActor.CheckFlag({'FlagName': 'NakedIsland_SetBall_3'}) {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.0, 'StartCalcOnly': False, 'MotionMode': 1, 'ReviseModeEnd': 2, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosX': 4569.0, 'Pattern1PosY': 217.0, 'Pattern1PosZ': 3663.0, 'Pattern1AtX': 4574.0, 'Pattern1AtY': 216.0, 'Pattern1AtZ': 3666.0, 'Count': 0.0, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'NakedIsland_DemoAppearDungeon'})
            }
        }
    }
}

void SetBall2() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    DgnObj_RemainsLithogragh_A_02.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': 'RemainsLithogragh_Hole', 'ELinkKey': 'Actiove', 'IsTargetDemoSLinkUser': False})
    DgnObj_RemainsLithogragh_A_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Clear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    DgnObj_RemainsLithogragh_A_02.Demo_OnWaitRevival({'IsWaitFinish': False})
    FldObj_NakedIslandBall_02.Demo_Delete({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'NakedIsland_EraseBall_2', 'IsWaitFinish': True})
    goto Event70
}

void SetBall3() {
    GameROMPlayer.Demo_Join({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    DgnObj_RemainsLithogragh_A_02.Demo_XLinkEventCreate({'IsWaitFinish': False, 'SLinkKey': 'RemainsLithogragh_Hole', 'ELinkKey': 'Actiove', 'IsTargetDemoSLinkUser': False})
    DgnObj_RemainsLithogragh_A_02.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo_Clear', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': -2, 'MorphingFrame': -1.0})
    DgnObj_RemainsLithogragh_A_02.Demo_OnWaitRevival({'IsWaitFinish': False})
    FldObj_NakedIslandBall_03.Demo_Delete({'IsWaitFinish': True})
    EventSystemActor.Demo_FlagON({'FlagName': 'NakedIsland_EraseBall_3', 'IsWaitFinish': True})
    goto Event70
}

void AppearDungeon() {
    SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'Mute', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMute'})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 3, 'IsValid': True, 'FaceId': 1, 'IsWaitFinish': True, 'IsUseSlowTurn': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo016_0', 'EntryPointName': 'DungeonArrival', 'IsWaitFinish': False, 'EndFade': 0})
    EventSystemActor.Demo_FlagON({'FlagName': 'NakedIsland_ReachTop', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_SetEndProc({'IsWaitFinish': True, 'CtrlType': 'SkipAll'})
}
