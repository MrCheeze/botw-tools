-------- EventFlow: Demo643_2 --------

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_IncreaseGameDataInt', 'Demo_FlagON', 'Demo_AutoSave', 'Demo_WaitFrame']
queries: ['CheckGameDataInt', 'CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_PlayerTurnAndLookToObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

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

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_CameraAnimFlowAbs']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_DoorParts_A_02
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 4, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_DLC_DoorParts_A_03
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: DgnObj_DLC_DoorParts_A_04
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: DgnObj_DLC_DoorParts_A_05
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 4}

Actor: FldObj_Terminal_A_01[AccessRemainsTerminal(FldObj_Terminal_A_01)]
entrypoint: AccessRemainsTerminal(FldObj_Terminal_A_01)
actions: []
queries: []
params: None

void AccessRemainsTerminal() {
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': False, 'FaceId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': True, 'ActorName': 'PlayerTargetActorName', 'UniqueName': 'PlayerTargetUniqueName', 'ObjectId': 'PlayerTargetObjectId'})

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

void Access00() {

    call AccessRemainsTerminal({'PlayerTargetObjectId': 0, 'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="RemainsTerminal00"), 'PlayerTargetActorName': 'FldObj_Terminal_A_01', 'PlayerTargetUniqueName': 'RemainsTerminal00'})


    call RemainsTerminalMainFlow()


    call DoorCamera()


    call DoorCameraUp()

    EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_Terminal_Electric', 'IsWaitFinish': True})
    DgnObj_DLC_DoorParts_A_04.Demo_XLinkEventCreate({'ELinkKey': 'DoorPartsOpen', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})

    fork {

        call DoorCameraAfter()

    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        DgnObj_DLC_DoorParts_A_04.Demo_XLinkEventCreate({'ELinkKey': 'DoorPartsKML', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    }


    call RemainsTerminalMainFlow_After()


    call EnemyAppearFlagOn()

}

void Access01() {

    call AccessRemainsTerminal({'PlayerTargetObjectId': 0, 'PlayerTargetActorName': 'FldObj_Terminal_A_01', 'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="RemainsTerminal01"), 'PlayerTargetUniqueName': 'RemainsTerminal01'})


    call RemainsTerminalMainFlow()


    call DoorCamera()


    call DoorCameraUp()

    EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_Terminal_Fire', 'IsWaitFinish': True})
    DgnObj_DLC_DoorParts_A_05.Demo_XLinkEventCreate({'ELinkKey': 'DoorPartsOpen', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})

    fork {

        call DoorCameraAfter()

    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        DgnObj_DLC_DoorParts_A_05.Demo_XLinkEventCreate({'ELinkKey': 'DoorPartsKML', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    }


    call RemainsTerminalMainFlow_After()


    call EnemyAppearFlagOn()

}

void Access03() {

    call AccessRemainsTerminal({'PlayerTargetObjectId': 0, 'PlayerTargetActorName': 'FldObj_Terminal_A_01', 'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="RemainsTerminal03"), 'PlayerTargetUniqueName': 'RemainsTerminal03'})


    call RemainsTerminalMainFlow()


    call DoorCamera()


    call DoorCameraUp()

    EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_Terminal_Wind', 'IsWaitFinish': True})
    DgnObj_DLC_DoorParts_A_03.Demo_XLinkEventCreate({'ELinkKey': 'DoorPartsOpen', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})

    fork {

        call DoorCameraAfter()

    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        DgnObj_DLC_DoorParts_A_03.Demo_XLinkEventCreate({'ELinkKey': 'DoorPartsKML', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    }


    call RemainsTerminalMainFlow_After()


    call EnemyAppearFlagOn()

}

void Access02() {

    call AccessRemainsTerminal({'PlayerTargetObjectId': 0, 'PlayerTargetActorName': 'FldObj_Terminal_A_01', 'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="RemainsTerminal02"), 'PlayerTargetUniqueName': 'RemainsTerminal02'})


    call RemainsTerminalMainFlow()


    call DoorCamera()


    call DoorCameraUp()

    EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_Terminal_Water', 'IsWaitFinish': True})
    DgnObj_DLC_DoorParts_A_02.Demo_XLinkEventCreate({'ELinkKey': 'DoorPartsOpen', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})

    fork {

        call DoorCameraAfter()

    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        DgnObj_DLC_DoorParts_A_02.Demo_XLinkEventCreate({'ELinkKey': 'DoorPartsKML', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    }


    call RemainsTerminalMainFlow_After()


    call EnemyAppearFlagOn()

}

void RemainsTerminalMainFlow() {
    EventSystemActor.Demo_IncreaseGameDataInt({'Value': -1, 'IsWaitFinish': True, 'GameDataIntName': 'Counter_TerminalFinalTrial'})
    EventSystemActor.Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_MsgOpen', 'IsWaitFinish': True})
    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo044_0:Demo044_0_Text039', 'IsCloseMessageDialog': True})
}

void DoorCamera() {
    GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C01-0'})
    NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo643_2:talk04', 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 15})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
}

void RemainsTerminalMainFlow_After() {
    if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 3, 'GameDataIntName': 'Counter_TerminalFinalTrial'}) {
        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo643_2:talk00'})
        Event73:
        SceneBgmCtrlTag.Demo_Ctrl({'CtrlType': 'Remains_MsgClose', 'IsWaitFinish': True})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    } else {
        if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 2, 'GameDataIntName': 'Counter_TerminalFinalTrial'}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo643_2:talk01'})
            goto Event73
        } else {
            if EventSystemActor.CheckGameDataInt({'Operator': 'Equal', 'Value': 1, 'GameDataIntName': 'Counter_TerminalFinalTrial'}) {
                NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo643_2:talk02'})
                goto Event73
            } else {
                NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo643_2:talk03'})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Access_AllTerminalFinalTrial'})
                goto Event73
            }
        }
    }
}

void DoorCameraAfter() {
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 72})
    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Power': 0.4000000059604645, 'Count': 3})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 18})
        GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'SceneName': 'C01-0'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 85})
    } {
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 4})
    }

    EventCameraRumble.Demo_Rumble({'IsWaitFinish': True, 'Sideways': False, 'Pattern': 4, 'Count': 1, 'Power': 0.30000001192092896})
    EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    GameRomCamera.Demo_ReturnSavePoint_1({'CollisionInterpolateSkip': True, 'ReviseMode': 1, 'IsWaitFinish': True, 'Count': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
}

void DoorCameraUp() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C02-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
}

void EnemyAppearFlagOn() {
    if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_EnemyAppear_2'}) {
        EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_EnemyAppear_3', 'IsWaitFinish': True})
    } else {
        if EventSystemActor.CheckFlag({'FlagName': 'FinalTrial_EnemyAppear_1'}) {
            EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_EnemyAppear_2', 'IsWaitFinish': True})
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'FinalTrial_EnemyAppear_1', 'IsWaitFinish': True})
        }
    }
}
