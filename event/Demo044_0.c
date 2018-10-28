-------- EventFlow: Demo044_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseGameDataInt', 'Demo_FlagON', 'Demo_AutoSave', 'Demo_ChangeScene', 'Demo_CallDemo', 'Demo_WaitFrame', 'Demo_DeleteAllIceMakerForDemo', 'Demo_ResetGimmick', 'Demo_ResetRemainsMapState']
queries: ['CheckCurrentMap', 'CheckGameDataInt', 'CheckFlag', 'GeneralChoice2']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneBgmCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Terminal_A_01[RemainsTerminal00]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Terminal_A_01[RemainsTerminal03]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Terminal_A_01[RemainsTerminal02]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Terminal_A_01[RemainsTerminal01]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Terminal_A_01[RemainsTerminal04]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_ConnectTypeSpecify']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Terminal_A_01[AccessRemainsTerminal(FldObj_Terminal_A_01)]
entrypoint: AccessRemainsTerminal(FldObj_Terminal_A_01)
actions: []
queries: []
params: None

void AccessRemainsTerminal() {
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'PlayerTargetActorName', 'UniqueName': 'PlayerTargetUniqueName', 'ObjectId': 'PlayerTargetObjectId', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': True})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouch', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouchOff', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': True, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'IsWaitFinish': False, 'ASName': 'DemoWait', 'ClothWarpMode': -1})
    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})

        call Demo041_0.Demo041({'FldObj_Terminal_A_01': 'FldObj_Terminal_A_01'})

    }

}

void PGanonAppearAgain() {
    SceneSoundCtrlTag.Demo_SetStartProc({'SeCtrlType': 'None', 'IsWaitFinish': True, 'BgmCtrlType': 'StopWithShortFade'})
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWind'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWind'})
        && EventSystemActor.CheckFlag({'FlagName': 'Appear_PGanonWind'})
        Event184:
        && !EventSystemActor.CheckFlag({'FlagName': 'Appear_PGanonAgain'}) {
            SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_StartBossSeq', 'IsWaitFinish': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Appear_PGanonAgain'})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        }
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsElectric'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonElectric'})
        && EventSystemActor.CheckFlag({'FlagName': 'Appear_PGanonElectric'}) {
            goto Event184
        }
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsFire'}) {
        if !EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonFire'})
        && EventSystemActor.CheckFlag({'FlagName': 'Appear_PGanonFire'}) {
            goto Event184
        }
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWater'})
    && !EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWater'})
    && EventSystemActor.CheckFlag({'FlagName': 'Appear_PGanonWater'}) {
        goto Event184
    }
}

void Access00() {

    call AccessRemainsTerminal({'PlayerTargetObjectId': 0, 'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="RemainsTerminal00"), 'PlayerTargetActorName': 'FldObj_Terminal_A_01', 'PlayerTargetUniqueName': 'RemainsTerminal00'})

    Event216:

    call RemainsTerminalMainFlow()

}

void Access01() {

    call AccessRemainsTerminal({'PlayerTargetObjectId': 0, 'PlayerTargetActorName': 'FldObj_Terminal_A_01', 'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="RemainsTerminal01"), 'PlayerTargetUniqueName': 'RemainsTerminal01'})

    goto Event216
}

void Access03() {

    call AccessRemainsTerminal({'PlayerTargetObjectId': 0, 'PlayerTargetActorName': 'FldObj_Terminal_A_01', 'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="RemainsTerminal03"), 'PlayerTargetUniqueName': 'RemainsTerminal03'})

    goto Event216
}

void Access02() {

    call AccessRemainsTerminal({'PlayerTargetObjectId': 0, 'PlayerTargetActorName': 'FldObj_Terminal_A_01', 'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="RemainsTerminal02"), 'PlayerTargetUniqueName': 'RemainsTerminal02'})

    goto Event216
}

void Access04() {

    call AccessRemainsTerminal({'PlayerTargetObjectId': 0, 'PlayerTargetActorName': 'FldObj_Terminal_A_01', 'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="RemainsTerminal04"), 'PlayerTargetUniqueName': 'RemainsTerminal04'})

    goto Event216
}

void RemainsTerminalMainFlow() {
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWind'}) {
        EventSystemActor.Demo_IncreaseGameDataInt({'Value': -1, 'IsWaitFinish': True, 'GameDataIntName': 'Counter_TerminalWind'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_MsgOpen', 'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Counter_TerminalWind', 'Operator': 'LessThanOrEqualTo', 'Value': 0}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text039'})
            Event262:

            fork {
                NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text007'})
            } {

                call PlayerLookAround()

            }

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Access_AllTerminalWind'})
            Event156:
            SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_MsgClose', 'IsWaitFinish': True})
            EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
        } else {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text039'})

            fork {

                call PlayerLookAround()

            } {
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Counter_TerminalWind', 'Operator': 'Equal', 'Value': 4}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text004', 'IsBecomingSpeaker': True})
                } else
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Counter_TerminalWind', 'Operator': 'Equal', 'Value': 3}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text003'})
                } else
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Counter_TerminalWind', 'Operator': 'Equal', 'Value': 2}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text002'})
                } else
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Counter_TerminalWind', 'Operator': 'Equal', 'Value': 1}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text001'})
                } else {
                    goto Event262
                }
            }

            goto Event156
        }
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsWater'}) {
        EventSystemActor.Demo_IncreaseGameDataInt({'Value': -1, 'IsWaitFinish': True, 'GameDataIntName': 'Counter_TerminalWater'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_MsgOpen', 'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'Counter_TerminalWater', 'Value': 0}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text039'})
            Event265:

            fork {
                NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text043'})
            } {

                call PlayerLookAround()

            }

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Access_AllTerminalWater'})
            goto Event156
        } else {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text039'})

            fork {

                call PlayerLookAround()

            } {
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 4, 'GameDataIntName': 'Counter_TerminalWater'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text034'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 3, 'GameDataIntName': 'Counter_TerminalWater'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text033'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'Counter_TerminalWater'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text032'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Counter_TerminalWater'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text031'})
                } else {
                    goto Event265
                }
            }

            goto Event156
        }
    } else
    if EventSystemActor.CheckCurrentMap({'MapName': 'RemainsElectric'}) {
        EventSystemActor.Demo_IncreaseGameDataInt({'Value': -1, 'IsWaitFinish': True, 'GameDataIntName': 'Counter_TerminalElectric'})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_MsgOpen', 'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'Counter_TerminalElectric', 'Value': 0}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text039'})
            Event268:

            fork {
                NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text027'})
            } {

                call PlayerLookAround()

            }

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Access_AllTerminalElectric'})
            goto Event156
        } else {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text039'})

            fork {

                call PlayerLookAround()

            } {
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 5, 'GameDataIntName': 'Counter_TerminalElectric'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text025'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 4, 'GameDataIntName': 'Counter_TerminalElectric'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text024'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 3, 'GameDataIntName': 'Counter_TerminalElectric'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text023'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'Counter_TerminalElectric'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text022'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Counter_TerminalElectric'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text021'})
                } else {
                    goto Event268
                }
            }

            goto Event156
        }
    } else {
        EventSystemActor.Demo_IncreaseGameDataInt({'Value': -1, 'GameDataIntName': 'Counter_TerminalFire', 'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_MsgOpen', 'IsWaitFinish': True})
        if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'GameDataIntName': 'Counter_TerminalFire', 'Value': 0}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text039'})
            Event274:

            fork {
                NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text017'})
            } {

                call PlayerLookAround()

            }

            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Access_AllTerminalFire'})
            goto Event156
        } else {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text039'})

            fork {

                call PlayerLookAround()

            } {
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 5, 'GameDataIntName': 'Counter_TerminalFire'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text015'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 4, 'GameDataIntName': 'Counter_TerminalFire'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text014'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 3, 'GameDataIntName': 'Counter_TerminalFire'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text013'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'Counter_TerminalFire'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text012'})
                } else
                if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Counter_TerminalFire'}) {
                    NPC_CaptionVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text011'})
                } else {
                    goto Event274
                }
            }

            goto Event156
        }
    }
}

void ClearRemainsWind() {
    if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Counter_TerminalWind', 'Operator': 'LessThanOrEqualTo', 'Value': 0}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWind'}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text040', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                Event67:
                if EventSystemActor.CheckGameDataInt({'GameDataIntName': 'Counter_TerminalWind', 'Operator': 'LessThanOrEqualTo', 'Value': 0}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWind'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Clear_RemainsWind', 'IsWaitFinish': True})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo156_0', 'EndFade': 1})
                        EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'StartType': -1, 'EvflName': 'ClearRemains', 'WarpDestMapName': 'MainField/B-3', 'WarpDestPosName': 'RemainsWind', 'EntryPointName': 'Rito', 'FadeType': 1})
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Appear_PGanonWind'}) {
                        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text037'})
                    } else {
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
                        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_StartBossSeq', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Appear_PGanonWind', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Appear_PGanonAgain'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo155_0', 'EndFade': 0})
                        GameRomCamera.Demo_ConnectTypeSpecify({'IsWaitFinish': True, 'ConnectType': 0})
                        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Wind_Start_FirstHalf'})
                        Event101:
                        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
                    }
                } else {
                    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text038'})
                }
            }
        } else
        goto Event67
    } else {

        call TurnToTerminal()

        goto Event67
    }
}

void TurnToTerminal() {
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 0, 'ActorName': 'RemainsClearTerminal', 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': True})

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouch', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouchOff', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': True})
        GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': False, 'IsWaitFinish': False})
    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
    }

}

void ClearRemainsWater() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'Counter_TerminalWater'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWater'}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text040', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                Event71:
                if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'Counter_TerminalWater'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonWater'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Clear_RemainsWater', 'IsWaitFinish': True})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo163_0', 'EndFade': 1})
                        EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'StartType': -1, 'EvflName': 'ClearRemains', 'WarpDestPosName': 'RemainsWater', 'EntryPointName': 'Zora', 'WarpDestMapName': 'MainField/I-4', 'FadeType': 1})
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Appear_PGanonWater'}) {
                        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text037'})
                    } else {
                        EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
                        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_StartBossSeq', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Appear_PGanonWater', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Appear_PGanonAgain'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo162_0', 'EndFade': 0})
                        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Water_Start_FirstHalf'})
                        goto Event101
                    }
                } else {
                    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text038'})
                }
            }
        } else
        goto Event71
    } else {

        call TurnToTerminal()

        goto Event71
    }
}

void ClearRemainsElectric() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'Counter_TerminalElectric'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonElectric'}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text040', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                Event75:
                if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'Counter_TerminalElectric'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonElectric'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Clear_RemainsElectric', 'IsWaitFinish': True})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo159_0', 'EndFade': 1})
                        EventSystemActor.Demo_ChangeScene({'IsWaitFinish': True, 'StartType': -1, 'EvflName': 'ClearRemains', 'WarpDestPosName': 'RemainsElectric', 'EntryPointName': 'Gerudo', 'WarpDestMapName': 'MainField/B-7', 'FadeType': 1})
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Appear_PGanonElectric'}) {
                        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text037'})
                    } else {
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
                        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
                        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'AdditionalResetActor': '', 'SystemResetOption': 2, 'IsResetCamera': False})
                        EventSystemActor.Demo_ResetRemainsMapState({'IsWaitFinish': True})
                        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_StartBossSeq', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Appear_PGanonElectric', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Appear_PGanonAgain'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo158_0', 'EndFade': 0})
                        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Elec_Start_FirstHalf'})
                        goto Event101
                    }
                } else {
                    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text038'})
                }
            }
        } else
        goto Event75
    } else {

        call TurnToTerminal()

        goto Event75
    }
}

void ClearRemainsFire() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'Counter_TerminalFire'}) {
        if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonFire'}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text040', 'IsCloseMessageDialog': True})
            if !EventSystemActor.GeneralChoice2() {
                Event79:
                if EventSystemActor.CheckGameDataInt({'Operator': 'LessThanOrEqualTo', 'Value': 0, 'GameDataIntName': 'Counter_TerminalFire'}) {
                    if EventSystemActor.CheckFlag({'FlagName': 'Die_PGanonFire'}) {
                        EventSystemActor.Demo_FlagON({'FlagName': 'Clear_RemainsFire', 'IsWaitFinish': True})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo161_0', 'EndFade': 1})
                        EventSystemActor.Demo_ChangeScene({'WarpDestPosName': 'RemainsFire', 'IsWaitFinish': True, 'StartType': -1, 'WarpDestMapName': 'MainField/G-2', 'EvflName': 'ClearRemains', 'EntryPointName': 'Goron', 'FadeType': 1})
                    } else
                    if EventSystemActor.CheckFlag({'FlagName': 'Appear_PGanonFire'}) {
                        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text037'})
                    } else {
                        SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
                        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_StartBossSeq', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'FlagName': 'Appear_PGanonFire', 'IsWaitFinish': True})
                        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Appear_PGanonAgain'})
                        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': '', 'DemoName': 'Demo160_0', 'EndFade': 0})
                        SceneBgmCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'CtrlType': 'CurseGanon_Fire_Start_FirstHalf'})
                        goto Event101
                    }
                } else {
                    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text038'})
                }
            }
        } else
        goto Event79
    } else {

        call TurnToTerminal()

        goto Event79
    }
}

void PlayerLookAround() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsOneTimeEndKeep': False, 'IsIgnoreSame': True})
}
