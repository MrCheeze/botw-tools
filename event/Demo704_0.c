-------- EventFlow: Demo704_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_GameCamera', 'Demo_PlayerHideOff', 'Demo_XLinkEventCreate', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_PlayerDestinationMove', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: DgnObj_WarpPoint_Remains
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_SetWind']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: FldObj_Terminal_A_01[Entrance]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_CaptionVoice
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[forSound]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void EnterRemainWind() {
    if !EventSystemActor.CheckFlag({'FlagName': 'FirstMessage_RemainsWind'}) {
        EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'DOFUse': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C06-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
            GameROMPlayer.Demo_PlayerDestinationMove({'StickValue': 0.20000000298023224, 'IsWaitFinish': False, 'DestPosX': 5.210000038146973, 'DestPosY': 3.075000047683716, 'DestPosZ': -73.19000244140625})
        } {
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        } {
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': 'FldObj_Terminal_A_01', 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': 'Entrance', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.4000000059604645, 0.0]})
        } {
            EventSystemActor[forSound].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'RemainsWindEnv', 'SoundDelay': 0, 'SLinkInst': ''})
        }

        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'DOFUse': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C07-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C01-1', 'TargetActorDirReferenceMode': 2, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouch', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouchOff', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': True, 'ClothWarpMode': -1})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'IsIgnoreSame': True, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        } {
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            call Demo041_0.Demo041({'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="Entrance")})

        }

        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo008_0:Demo008_0_Text004'})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C02-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 3.4000000953674316, -77.4000015258789], 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
            } {
                DgnObj_WarpPoint_Remains.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'On', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                DgnObj_WarpPoint_Remains.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OnWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            } {
                DgnObj_WarpPoint_Remains.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        }


        fork {
            NPC_CaptionVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo704_0:Demo704_0_Text000', 'IsBecomingSpeaker': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'CloseDialogOption': 0, 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 30.0, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'DgnObj_WarpPoint_Remains', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 5.0, 0.0]})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        WorldManagerControl.Demo_SetWind({'WindPower': 0.0, 'WindDirX': 0.0, 'WindDirY': 0.0, 'WindDirZ': 0.0, 'IsAutoWind': False, 'IsWaitFinish': False})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C03-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C04-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C05-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            GameRomCamera.Demo_XLinkEventCreate({'ELinkKey': 'Demo_GrudgeEnv_MainDungeon', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        } {
            NPC_CaptionVoice.Demo_OpenMessageDialog({'IsBecomingSpeaker': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageId': 'DemoMsg/Demo704_0:Demo704_0_Text002', 'IsWaitFinish': True, 'CloseDialogOption': 0, 'IsCloseMessageDialog': True, 'MessageOpenDelayTime': 30})
        }

        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 0, 'IsWaitFinish': False, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsUseSlowTurn': False, 'TurnPosition': [0.0, 3.0, -62.0], 'IsTurnToLookAtPos': False})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'IsBecomingSpeaker': False, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo704_0:Demo704_0_Text001', 'IsWaitFinish': True, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'CloseDialogOption': 0, 'MessageOpenDelayTime': 15})
        GameRomCamera.Demo_XLinkEventKill({'ELinkKey': 'Demo_GrudgeEnv_MainDungeon', 'IsWaitFinish': True, 'SLinkKey': ''})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Enter_RemainsWind'})
        WorldManagerControl.Demo_SetWind({'WindPower': 10.0, 'WindDirX': 0.0, 'WindDirY': 0.0, 'IsAutoWind': False, 'IsWaitFinish': False, 'WindDirZ': -1.0})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstMessage_RemainsWind'})
    }
}
