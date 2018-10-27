-------- EventFlow: 100enemy --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_ChangeScene', 'Demo_WaitFrame', 'Demo_AdvanceQuest', 'Demo_RollbackQuest', 'Demo_FlagOFF', 'Demo_RestorePouchForQuest', 'Demo_InitPouchForQuest', 'Demo_IncreaseGameDataInt', 'Demo_CallDemo', 'Demo_SetGameDataInt']
queries: ['CheckFlag', 'CheckGameDataInt']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_UpdateEquip', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameDataCalcMachine
entrypoint: None()
actions: ['Demo_GameDataCopyInt']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_Village_Korok_DekuTree_A_01
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_MovePosFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Start() {

    call SetFlag()

    if EventSystemActor.CheckFlag({'FlagName': '100enemy_Finish'}) {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Battle', 'QuestName': 'MiniGame100enemy'})
        Event286:
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 2}) {
            EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 0, 'StartType': -1, 'WarpDestMapName': 'AocField/B-2', 'WarpDestPosName': 'Night_1', 'EvflName': 'Demo202_3', 'EntryPointName': 'Demo202_3'})
        } else
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 1}) {
            EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'FadeType': 0, 'StartType': -1, 'WarpDestMapName': 'AocField/A-1', 'WarpDestPosName': 'Air_2', 'EvflName': 'Demo202_2', 'EntryPointName': 'Demo202_2'})
        } else {
            EventSystemActor.Demo_ChangeScene({'WarpDestPosName': 'Entrance_1', 'IsWaitFinish': True, 'FadeType': 0, 'StartType': -1, 'EvflName': 'Demo202_1', 'EntryPointName': 'Demo202_1', 'WarpDestMapName': 'AocField/A-1'})
        }
    } else {
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'ForceRunTelop': False, 'StepName': 'Battle', 'QuestName': '100enemy'})
        goto Event286
    }
}

void Active_Talk() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    } {
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': False})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 426.755859375, 'Pattern1PosY': 263.6904296875, 'Pattern1PosZ': -2128.235595703125, 'Pattern1AtX': 426.8063049316406, 'Pattern1AtY': 266.3531494140625, 'Pattern1AtZ': -2132.51220703125, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': '', 'StartCalcOnly': True, 'ReviseModeEnd': 2})
    if EventSystemActor.CheckFlag({'FlagName': '100enemy_Clear_Junior'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Open_MasterSword_FullPower'}) {
            if EventSystemActor.CheckGameDataInt({'Operator': 'GreaterThanOrEqualTo', 'GameDataIntName': 'MsterSword_TalkLv', 'Value': 4}) {
                TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwnObj_Village_Korok_DekuTree_A_01:DekuTree_A_01_Talk030', 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True})
                Event258:
                GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'CollisionInterpolateSkip': False, 'Count': 0.0, 'ReviseMode': 1})
            } else {
                TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/TwnObj_Village_Korok_DekuTree_A_01:DekuTree_A_01_Talk020', 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True})
                goto Event258
            }
        } else {
            TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/100enemy:talk14'})
            goto Event258
        }
    } else {
        TwnObj_Village_Korok_DekuTree_A_01.Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Face_C_Talk', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/100enemy:talk13'})
        goto Event258
    }
}

void RetireBattle() {

    call ResetFlag()

    if EventSystemActor.CheckFlag({'FlagName': '100enemy_Finish'}) {
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'MiniGame100enemy', 'StepName': 'Ready'})
        Event189:
        EventSystemActor.Demo_ChangeScene({'WarpDestMapName': 'MainField/F-2', 'WarpDestPosName': 'MasterSword', 'IsWaitFinish': True, 'FadeType': 0, 'StartType': -1, 'EvflName': 'Demo205_1', 'EntryPointName': 'Demo205_1'})
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 2}) {
        Event331:
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': '100enemy', 'StepName': 'Active3'})
        goto Event189
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 1}) {
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_SwordPower_StartTmp', 'Operator': 'GreaterThan', 'Value': 10}) {
            goto Event331
        } else {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '100enemy_Clear_Middle'})
            EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'MasterSword_Add_Power', 'IsWaitFinish': True, 'Value': 20})
            EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': '100enemy', 'StepName': 'Active2'})
            goto Event189
        }
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_SwordPower_StartTmp', 'Operator': 'GreaterThan', 'Value': 0}) {
        if EventSystemActor.CheckFlag({'FlagName': '100enemy_Clear_Middle'}) {
            goto Event331
        } else {
            EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': '100enemy', 'StepName': 'Active2'})
            goto Event189
        }
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '100enemy_Clear_Junior'})
        EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': 'MasterSword_Add_Power', 'IsWaitFinish': True, 'Value': 10})
        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'StepName': 'Active', 'QuestName': '100enemy'})
        goto Event189
    }
}

void Clear() {

    call ResetFlag()

    if EventSystemActor.CheckFlag({'FlagName': '100enemy_Finish'}) {

        call MiniGame100enemy.End_MiniGame()

        EventSystemActor.Demo_RollbackQuest({'IsWaitFinish': True, 'QuestName': 'MiniGame100enemy', 'StepName': 'Ready'})
        EventSystemActor.Demo_ChangeScene({'WarpDestMapName': 'MainField/F-2', 'WarpDestPosName': 'MasterSword', 'IsWaitFinish': True, 'FadeType': 0, 'StartType': -1, 'EvflName': '', 'EntryPointName': ''})
    } else {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': '100enemy_Clear_Senior'})
        EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'MasterSword_Add_Power', 'IsWaitFinish': True, 'Value': 10})
        EventSystemActor.Demo_FlagON({'FlagName': 'Open_MasterSword_FullPower', 'IsWaitFinish': True})
        EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '100enemy', 'StepName': 'Finish', 'ForceRunTelop': False})
        EventSystemActor.Demo_ChangeScene({'WarpDestMapName': 'MainField/F-2', 'WarpDestPosName': 'MasterSword', 'IsWaitFinish': True, 'EvflName': 'Demo210_0', 'EntryPointName': 'Demo210_0', 'StartType': -1, 'FadeType': 1})
    }
}

void SetFlag() {
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Guide_Pause'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    EventSystemActor.Demo_InitPouchForQuest({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
}

void ResetFlag() {
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AutoSaveOnOff'})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'KillTimeProhibition'})
    EventSystemActor.Demo_RestorePouchForQuest({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    GameROMPlayer.Demo_UpdateEquip({'IsWaitFinish': True})
}

void WarpIn() {
    EventSystemActor.Demo_SetGameDataInt({'GameDataIntName': '100enemy_Now_Floor_Number', 'Value': 1, 'IsWaitFinish': True})
    GameDataCalcMachine.Demo_GameDataCopyInt({'GameDataIntSrcName': 'MasterSword_Add_Power', 'GameDataIntDstName': '100enemy_SwordPower_StartTmp', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': '100enemy_Finish'}) {

        call MiniGame100enemy.Start_MiniGame()

    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 2}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'FirstTry_100enemy_Senior', 'IsWaitFinish': True})
    } else
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': '100enemy_CurrentCourse', 'Operator': 'Equal', 'Value': 1}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'FirstTry_100enemy_Middle', 'IsWaitFinish': True})
    }
}

void Demo_Talk() {
    EventSystemActor.Demo_CallDemo({'DemoName': 'Demo209_0', 'EntryPointName': 'Demo209_0', 'IsWaitFinish': True, 'EndFade': 0})
}

void EndDekuTalk() {
    EventSystemActor.Demo_FlagON({'FlagName': '100enemy_ToDeku', 'IsWaitFinish': True})
}

void ClearJuniorMiddle() {
    if !EventSystemActor.CheckFlag({'FlagName': '100enemy_Finish'}) {
        if EventSystemActor.CheckFlag({'FlagName': '100enemy_Clear_Middle'}) {
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '100enemy', 'ForceRunTelop': False, 'StepName': 'Active3'})
        } else
        if EventSystemActor.CheckFlag({'FlagName': '100enemy_Clear_Junior'}) in [1, 0] {
            EventSystemActor.Demo_AdvanceQuest({'IsWaitFinish': True, 'QuestName': '100enemy', 'ForceRunTelop': False, 'StepName': 'Active2'})
        }
    }
}
