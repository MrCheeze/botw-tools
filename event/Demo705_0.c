-------- EventFlow: Demo705_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_WaitFrame']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: NPC_GodVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_PlayerDestinationMove', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: NPC_DRCVoice
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'CreateMode': 1}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_CameraAnimFlow', 'Demo_GameCamera', 'Demo_PlayerHideOff', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_XLinkEventKill']
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

void EnterRemainFire() {
    if !EventSystemActor.CheckFlag({'FlagName': 'FirstMessage_RemainsFire'}) {
        EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_XLinkEventCreate({'ELinkKey': 'Demo705_0_FireArea', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'DOFUse': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C06-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 80})
            GameROMPlayer.Demo_PlayerDestinationMove({'DestPosX': -4.360000133514404, 'DestPosY': 16.450000762939453, 'DestPosZ': 64.94000244140625, 'IsWaitFinish': False, 'StickValue': 0.20000000298023224})
        } {
            SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'Start', 'SeCtrlType': 'None', 'IsWaitFinish': True})
        } {
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'ObjectId': 0, 'ActorName': 'FldObj_Terminal_A_01', 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': 'Entrance', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.4000000059604645, 0.0]})
        }

        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'DOFUse': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C07-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': False, 'TargetActor': 3, 'UniqueName': 'Entrance', 'ActorName': 'FldObj_Terminal_A_01', 'Accept1FrameDelay': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C01-1'})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouch', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'SheikPadTouchOff', 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        } {
            EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            call Demo041_0.Demo041({'FldObj_Terminal_A_01': ActorIdentifier(name="FldObj_Terminal_A_01", sub_name="Entrance")})

        }

        NPC_DRCVoice.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo008_0:Demo008_0_Text004'})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C02-0', 'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

            fork {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 1, 'IsValid': False, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 16.5, 69.30000305175781], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
            } {
                DgnObj_WarpPoint_Remains.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'On', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
                DgnObj_WarpPoint_Remains.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'OnWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
            } {
                DgnObj_WarpPoint_Remains.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'WarpPointActivate', 'SLinkKey': 'WarpPointActivate', 'IsTargetDemoSLinkUser': False})
            }

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        }


        fork {
            NPC_CaptionVoice.Demo_OpenMessageDialog({'IsBecomingSpeaker': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'IsWaitFinish': True, 'CloseDialogOption': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo705_0:Demo705_0_Text000', 'MessageOpenDelayTime': 0})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 200})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': 30.0, 'ASName': 'DemoWait', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnDirection': 0.0, 'ObjectId': 0, 'ActorName': 'DgnObj_WarpPoint_Remains', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 5.0, 0.0]})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_XLinkEventFade({'ELinkKey': 'Demo705_0_FireArea', 'IsWaitFinish': True, 'SLinkKey': ''})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'DOFUse': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C03-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C04-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 3, 'Accept1FrameDelay': False, 'TargetActor': 3, 'ActorName': 'FldObj_Terminal_A_01', 'UniqueName': 'Entrance', 'SceneName': 'C05-1', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        } {
            GameRomCamera.Demo_XLinkEventCreate({'ELinkKey': 'Demo_GrudgeEnv_MainDungeon', 'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
        } {
            NPC_CaptionVoice.Demo_OpenMessageDialog({'IsBecomingSpeaker': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'IsWaitFinish': True, 'CloseDialogOption': 0, 'IsCloseMessageDialog': True, 'MessageId': 'DemoMsg/Demo705_0:Demo705_0_Text002', 'MessageOpenDelayTime': 30})
        }

        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'FaceId': 0, 'IsWaitFinish': False, 'IsValid': False, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 1, 'IsUseSlowTurn': False, 'TurnPosition': [-0.4000000059604645, 16.0, 62.0], 'IsTurnToLookAtPos': False})
        NPC_CaptionVoice.Demo_OpenMessageDialog({'MessageId': 'DemoMsg/Demo705_0:Demo705_0_Text001', 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitFinish': True, 'IsBecomingSpeaker': False, 'ASName': '', 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 15})
        GameRomCamera.Demo_XLinkEventKill({'ELinkKey': 'Demo_GrudgeEnv_MainDungeon', 'IsWaitFinish': True, 'SLinkKey': ''})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Enter_RemainsFire'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FirstMessage_RemainsFire'})
    }
}
