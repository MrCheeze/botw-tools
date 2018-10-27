-------- EventFlow: Demo032_0 --------

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_WarpPlayer', 'Demo_FlagOFF', 'Demo_OpenItemDownloadDemo', 'Demo_DownloadAlbum', 'Demo_DownloadPictureBook', 'Demo_ShiekSensorPlusDownload', 'Demo_CloseItemMenu', 'Demo_DownloadShiekSensor', 'Demo_PowerupRune', 'Demo_DownloadSensorMoveIcon', 'Demo_CloseMessageDialog']
queries: ['CheckFlag', 'CheckPictureBookVacancy']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_Idling', 'Demo_LookAtTheFront', 'Demo_HoldUpDRC', 'Demo_PlayASAdapt', 'Demo_LookAtObject']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_AncientDoctor
entrypoint: None()
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_ChangeEmotion']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_AncientAssistant001
entrypoint: None()
actions: ['Demo_SellPictureBookUI', 'Demo_TurnAndLookToObject', 'Demo_WarpToScheduleAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminalBody_A_01[HatenoYuuDouSeki]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_DownloadTerminal_A_01[HatenoTanmatsu]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_TrigNullASPlay']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Starter
entrypoint: None()
actions: ['Demo_SendSignal']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void C01() {
    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'SceneName': 'C01-0', 'UniqueName': 'HatenoTanmatsu', 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_HoldUpDRC({'ASName': 'SheikPadSet', 'IsWaitFinish': False, 'IsContinued': True})
    } {

        call Demo041_0.DownloadTermial_Activate({'ActorName': 'FldObj_DownloadTerminal_A_01', 'SheikerStoneTarget_UniqueName': 'HatenoTanmatsu', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="HatenoTanmatsu")})

    } {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Color': 1, 'Frame': 2})
    }

    if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_ChoiceA'}) {
        NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text004'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_SheikSensorLv2_Choice'}) {
        NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text001'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_StopTimerLv2_Choice'}) {
        NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text002'})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_RemoteBombLv2_Choice'}) {
        NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text003'})
    } else {
        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text000', 'IsCloseMessageDialog': False})
        if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_SheikSensor'}) {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text014', 'IsCloseMessageDialog': False})
            Event252:
            NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text016'})
        } else {
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text015', 'IsCloseMessageDialog': False})
            goto Event252
        }
    }
}

void C02() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C02-0', 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'TargetActorDirReferenceMode': 2, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'HatenoTanmatsu', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'SheikPadDownLoadReady', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        EventBgmCtrlTag.Demo_Start({'BgmName': 'DownloadDemoBgm', 'IsWaitFinish': True})
    } {
        FldObj_DownloadTerminalBody_A_01[HatenoYuuDouSeki].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Start', 'SLinkKey': 'Start', 'IsTargetDemoSLinkUser': False})
        FldObj_DownloadTerminalBody_A_01[HatenoYuuDouSeki].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Start', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

}

void C03() {
    GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C03-0', 'TargetActor': 3, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'TargetActorDirReferenceMode': 2, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'HatenoTanmatsu', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
}

void Demo032_0() {
    if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_ChoiceA'}) {
        Npc_AncientDoctor.Demo_ChangeEmotion({'IsWaitFinish': True, 'EmotionType': 'Normal', 'IsOnlyFace': False})

        fork {

            call Npc_AncientAssistant001.PuruaCamera()

        } {
            Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 3, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 20.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        }

        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_Special', 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text005'})
        Event246:
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'WorldMute'})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
        GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
        FldObj_DownloadTerminalBody_A_01[HatenoYuuDouSeki].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'OffWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': False})
        EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestPosName': 'HatenoLaboDemo', 'WarpDestMapName': 'I-7'})
        FldObj_DownloadTerminal_A_01[HatenoTanmatsu].Demo_TrigNullASPlay({'IsWaitFinish': True, 'IsIgnoreSame': False, 'ASSlot': 0, 'SequenceBank': 0, 'ASName': 'PlayerCloseInWait'})
        FldObj_DownloadTerminal_A_01[HatenoTanmatsu].Demo_PlayASForDemo({'ASName': 'OffWait_Skl', 'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventSystemActor.Demo_FlagON({'FlagName': 'IsDownloadDemo', 'IsWaitFinish': True})

        call C01()


        call C02()


        call C03()


        call C04()


        call C05()

        Starter.Demo_SendSignal({'SignalType': 0, 'Value': True, 'IsWaitFinish': False})
        if EventSystemActor.CheckFlag({'FlagName': 'HatenoMini_CameraBoy_ChoiceA'}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'HatenoMini_CameraBoy_ChoiceA'})

            call C04Camera_Return()

            if EventSystemActor.CheckPictureBookVacancy({'Category': 'Material', 'VacancyNum': 1}) {
                Npc_AncientAssistant001.Demo_SellPictureBookUI({'IsWaitFinish': True, 'SellPicturePack': 2})
                Event227:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant001:talk83'})
                EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})

                call Demo041_0.SheikPadSetOff({'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_01', 'ShiekerStoneBindTargetUniqueName': 'HatenoTanmatsu', 'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="HatenoTanmatsu")})

                Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'Auto', 'Frame': 0})
                EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'I-7', 'WarpDestPosName': 'SimonDemoFinished'})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
                Npc_AncientAssistant001.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction3'})

                call Npc_AncientAssistant001.SimonCamera()

                Npc_AncientAssistant001.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'FaceId': 1, 'IsValid': False, 'IsConfront': True})
                GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_AncientAssistant001'})
                Event77:
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'Auto'})
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff'})
            } else
            if EventSystemActor.CheckPictureBookVacancy({'Category': 'Weapon', 'VacancyNum': 1}) {
                Npc_AncientAssistant001.Demo_SellPictureBookUI({'IsWaitFinish': True, 'SellPicturePack': 3})
                goto Event227
            } else
            if EventSystemActor.CheckPictureBookVacancy({'Category': 'Creature', 'VacancyNum': 1}) {
                Npc_AncientAssistant001.Demo_SellPictureBookUI({'IsWaitFinish': True, 'SellPicturePack': 0})
                goto Event227
            } else
            if EventSystemActor.CheckPictureBookVacancy({'Category': 'Enemy', 'VacancyNum': 1}) {
                Npc_AncientAssistant001.Demo_SellPictureBookUI({'IsWaitFinish': True, 'SellPicturePack': 1})
                goto Event227
            } else
            if EventSystemActor.CheckPictureBookVacancy({'Category': 'Others', 'VacancyNum': 1}) {
                Npc_AncientAssistant001.Demo_SellPictureBookUI({'IsWaitFinish': True, 'SellPicturePack': 4})
                goto Event227
            } else
            if EventSystemActor.CheckPictureBookVacancy({'VacancyNum': 1, 'Category': 'Boss'}) {
                Npc_AncientAssistant001.Demo_SellPictureBookUI({'IsWaitFinish': True, 'SellPicturePack': 5})
                goto Event227
            }
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Hateno_SheikSensorLv2_Choice'}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Hateno_SheikSensorLv2_Choice'})

            fork {
                EventSystemActor.Demo_ShiekSensorPlusDownload({'IsPlayerClose': False, 'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text024', 'MessageOpenDelayTime': 0})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                EventSystemActor.Demo_DownloadSensorMoveIcon({'IsWaitFinish': True})
            } {

                call C04Camera_Return()

            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
            NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text018', 'MessageOpenDelayTime': 0})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_SheikSensorLv2'})
            Event258:
            EventSystemActor.Demo_CloseItemMenu({'IsWaitFinish': True})

            call Demo041_0.SheikPadSetOff({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="HatenoTanmatsu"), 'ShiekerStoneBindTargetUniqueName': 'HatenoTanmatsu', 'ShiekerStoneBindTargetActorName': 'FldObj_DownloadTerminal_A_01'})

            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'Auto'})
            EventSystemActor.Demo_WarpPlayer({'IsWaitFinish': True, 'WarpDestMapName': 'I-7', 'WarpDestPosName': 'PuruaDemoFinished'})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Talk', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': True})
            GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 1})
            EventSystemActor.Demo_WaitFrame({'Frame': 15, 'IsWaitFinish': True})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            } {
                Npc_AncientDoctor.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'FaceId': 1, 'IsValid': False})
            } {
                GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
            }

            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_AncientDoctor', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            goto Event77
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Hateno_StopTimerLv2_Choice'}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Hateno_StopTimerLv2_Choice'})

            fork {
                EventSystemActor.Demo_OpenItemDownloadDemo({'IsWaitFinish': True, 'IsEquip': True, 'IsPowerUp': True, 'IsPlayerClose': False, 'ItemType': 2})
            } {

                call C04Camera_Return()

            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
            NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text019', 'MessageOpenDelayTime': 0})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_StopTimerLv2'})
            EventSystemActor.Demo_PowerupRune({'RuneType': 2, 'IsWaitFinish': True})
            goto Event258
        } else
        if EventSystemActor.CheckFlag({'FlagName': 'Hateno_RemoteBombLv2_Choice'}) {
            EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'Hateno_RemoteBombLv2_Choice'})

            fork {
                EventSystemActor.Demo_OpenItemDownloadDemo({'IsWaitFinish': True, 'IsEquip': True, 'IsPowerUp': True, 'IsPlayerClose': False, 'ItemType': 0})
            } {

                call C04Camera_Return()

            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
            NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text020', 'MessageOpenDelayTime': 0})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_RemoteBombLv2'})
            goto Event258
        } else {
            EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_Obj_Camera', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_Obj_PictureBook', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_Obj_Album', 'IsWaitFinish': True})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_000'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_001'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_002'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_003'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_004'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_005'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_006'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_007'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_008'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_009'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_010'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_MemoryPhoto_011'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_SheikPadLv2'})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_Camera'})

            fork {
                EventSystemActor.Demo_OpenItemDownloadDemo({'IsWaitFinish': True, 'IsPowerUp': False, 'IsPlayerClose': False, 'ItemType': 4, 'IsEquip': True})
            } {

                call C04Camera_Return()

            }

            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
            NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text023', 'IsCloseMessageDialog': False, 'MessageOpenDelayTime': 0})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_Album'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_DownloadAlbum({'IsWaitFinish': True})
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_PictureBook'})
            EventSystemActor.Demo_DownloadPictureBook({'IsWaitFinish': True})
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
            if EventSystemActor.CheckFlag({'FlagName': 'IsGet_Obj_SheikSensor'}) {
                Event321:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
                NPC_DRCVoice.Demo_Talk({'IsCloseMessageDialog': True, 'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text017', 'MessageOpenDelayTime': 0})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsGet_Obj_SheikPadLv2'})
                goto Event258
            } else {
                EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_Obj_SheikSensor', 'IsWaitFinish': True})
                EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                EventSystemActor.Demo_DownloadShiekSensor({'IsWaitFinish': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text022', 'IsCloseMessageDialog': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                EventSystemActor.Demo_DownloadSensorMoveIcon({'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'AncientLabo_AncientDoctor001_GetSSLv1'})
                EventSystemActor.Demo_FlagON({'FlagName': 'IsGet_Obj_SheikSensor', 'IsWaitFinish': True})
                EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'IsStart_Obj_SheikSensor'})
                goto Event321
            }
        }
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_SheikSensorLv2_Choice'}) {

        call PuruaItemGo({'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text011'})

        Event138:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text008', 'IsCloseMessageDialog': False})
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text009', 'ASName': 'Talk_Checkit2'})
        goto Event246
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_RemoteBombLv2_Choice'}) {

        call PuruaItemGo({'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text012'})

        goto Event138
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_StopTimerLv2_Choice'}) {

        call PuruaItemGo({'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text013'})

        goto Event138
    } else {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text010', 'IsCloseMessageDialog': False})
        goto Event138
    }
}

void C04() {

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0', 'ActorName': 'FldObj_DownloadTerminal_A_01', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': 'HatenoTanmatsu', 'IsWaitFinish': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        FldObj_DownloadTerminalBody_A_01[HatenoYuuDouSeki].Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Start'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'SheikPadDownLoad', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': True, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {

        call Demo041_0.DripCatch({'FldObj_DownloadTerminal_A_01': ActorIdentifier(name="FldObj_DownloadTerminal_A_01", sub_name="HatenoTanmatsu")})

    } {
        FldObj_DownloadTerminalBody_A_01[HatenoYuuDouSeki].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'ActivatedWait', 'IsWaitFinish': False})
    }

}

void C05() {

    fork {
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': False, 'ASName': 'SheikPadLookPad', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': True, 'ActorName': 'FldObj_DownloadTerminal_A_01', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': 'HatenoTanmatsu', 'SceneName': 'C04-1', 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False})
    }

}

void PuruaItemGo() {
    if EventSystemActor.CheckFlag({'FlagName': 'Hateno_SheikPad_PowerUp_Huh'}) {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text006'})
        Event232:
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'MessageId', 'IsCloseMessageDialog': False})
    } else {
        Npc_AncientDoctor.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'DemoMsg/Demo032_0:Demo032_0_Text007', 'ASName': '', 'IsCloseMessageDialog': False})
        goto Event232
    }
}

void C04Camera_Return() {
    EventSystemActor[01].Demo_WaitFrame({'Frame': 1, 'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0', 'ActorName': 'FldObj_DownloadTerminal_A_01', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'UniqueName': 'HatenoTanmatsu', 'IsWaitFinish': False, 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
}
