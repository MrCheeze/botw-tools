-------- EventFlow: Demo401_1 --------

Actor: Npc_ZoraB001[FirstPrince01]
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_WarpToAnchor', 'Demo_OpenMessageDialogTrig']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayerToDestination', 'Demo_CloseMessageDialog', 'Demo_AutoSave']
queries: ['CheckFlag', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayerWait', 'Demo_PlayerGoStraightAhead', 'Demo_LookAtObject', 'Demo_LookAtTheFront', 'Demo_PlayerHorseGetOff', 'Demo_ResetBoneCtrl', 'Demo_PlayASAdapt', 'Demo_TurnAndLookToObjectNow']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[FirstPrince02]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_XLinkEventCreate', 'Demo_WarpToAnchor', 'Demo_OpenMessageDialogTrig', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[FirstPrince03]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_ZoraB001[FirstPrince04]
entrypoint: None()
actions: ['Demo_OpenMessageDialog', 'Demo_Talk', 'Demo_PlayASForDemo', 'Demo_LookAtObject', 'Demo_XLinkEventCreate', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[anather_system]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_SetStartProc']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[forEventBgmCtrlTag]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[Prince_Wait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[PlayerWait]
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt0]
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble[Cnt1]
entrypoint: None()
actions: ['Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void ZoraPrinceCheer01() {
    if !EventSystemActor.CheckFlag({'FlagName': 'PrinceCheer01'}) {
        SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        }
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})

        fork {
            GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
            if EventSystemActor.CheckFlag({'FlagName': 'PrinceCheer01Reverse'}) {
                EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 2636.506591796875, 'DestinationY': 139.37831115722656, 'DestinationZ': -336.46942138671875, 'DirectionY': -94.08100128173828})
            } else {
                EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 2630.1962890625, 'DestinationY': 138.5236358642578, 'DestinationZ': -336.7577209472656, 'DirectionY': 100.63700103759766, 'IsWaitFinish': True})
            }
        } {
            Npc_ZoraB001[FirstPrince01].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-3', 'MorphingFrame': -1.0})
            GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C10-0', 'StartFrame': 0.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': -1.0, 'IsWaitFinish': False})
        }


        fork {
            Npc_ZoraB001[FirstPrince01].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationX': 2632.008056640625, 'DirectionY': 18.334699630737305, 'DestinationZ': -354.4093933105469, 'DestinationY': 129.96029663085938})
            Npc_ZoraB001[FirstPrince01].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 1, 'IsWaitFinish': True, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-5', 'MorphingFrame': -1.0})
            Npc_ZoraB001[FirstPrince01].Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            Npc_ZoraB001[FirstPrince01].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_InWater', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            Npc_ZoraB001[FirstPrince01].Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_M_001', 'CloseDialogOption': 3})
        } {
            GameROMPlayer.Demo_PlayerGoStraightAhead({'IsWaitFinish': True, 'DestPosX': 2633.056884765625, 'DestPosY': 138.7943115234375, 'DestPosZ': -337.43511962890625, 'StickValue': 0.4000000059604645})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [2635.68994140625, 140.75, -329.239990234375], 'ObjectId': 0, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince01', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        fork {
            EventBgmCtrlTag.Demo_Start({'BgmName': 'ZoraPrinceCheerBgm', 'IsWaitFinish': True})
        } {
            Npc_ZoraB001[FirstPrince01].Demo_PlayASForDemo({'ASName': 'Act_Swim_Hello', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1, 'IsEnabledAnimeDriven': 0})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'StartFrame': 20.0, 'EndFrame': -1.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C10-1', 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince01', 'IsWaitFinish': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        }


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'StartFrame': 20.0, 'EndFrame': -1.0, 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince01', 'TargetActorDirReferenceMode': 2, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C10-2', 'IsWaitFinish': False})
            EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        } {
            Npc_ZoraB001[FirstPrince01].Demo_Talk({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_M_002', 'ASName': 'Act_Swim_Hello', 'IsWaitFinish': True, 'IsCloseMessageDialog': True})
        } {
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince01', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        }

        EventBgmCtrlTag.Demo_Stop({'BgmName': 'ZoraPrinceCheerBgm', 'IsWaitFinish': True, 'FadeSec': 3.0})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'StartFrame': 20.0, 'EndFrame': -1.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C10-1', 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince01', 'IsWaitFinish': False})
        EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

        fork {
            EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            GameRomCamera.Demo_CameraAnimFlowAbs({'EndFrame': -1.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'SceneName': 'C10-3', 'IsWaitFinish': False})
            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        } {

            call Prince01_Splash()

        }


        fork {
            GameRomCamera.Demo_CameraAnimFlow({'EndFrame': -1.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'SceneName': 'C10-4', 'IsWaitFinish': False, 'TargetActor': 1, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'ActorName': '', 'UniqueName': '', 'Accept1FrameDelay': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        }

        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer01'})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    }
}

void ZoraPrinceCheer04() {
    GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C40-1', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
    if !EventSystemActor.CheckFlag({'FlagName': 'PrinceCheer04'}) {
        SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 262.9599914550781, 'DirectionY': 72.0, 'IsWaitFinish': True, 'DestinationX': 3131.06005859375, 'DestinationZ': 29.829999923706055})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        }
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            Npc_ZoraB001[FirstPrince04].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_M_007', 'ASName': '', 'IsCloseMessageDialog': True})
        } {
            GameROMPlayer.Demo_PlayerGoStraightAhead({'StickValue': 0.4000000059604645, 'DestPosX': 3133.930908203125, 'DestPosY': 262.9584655761719, 'DestPosZ': 31.024070739746094, 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }

        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince04', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1, 'TurnPosition': [3158.0, 262.9100036621094, -21.350000381469727]})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'ASName': 'DemoWait', 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

        fork {
            GameROMPlayer.Demo_PlayerGoStraightAhead({'StickValue': 0.4000000059604645, 'DestPosY': 262.9584655761719, 'IsWaitFinish': True, 'DestPosX': 3136.860107421875, 'DestPosZ': 27.610000610351562})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince04', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3158.0, 262.9100036621094, -21.350000381469727], 'ObjectId': 0})
        } {
            Npc_ZoraB001[FirstPrince04].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationZ': -13.97655963897705, 'DestinationX': 3164.554931640625, 'DirectionY': -40.106998443603516, 'DestinationY': 177.49560546875})
            Npc_ZoraB001[FirstPrince04].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 1, 'IsWaitFinish': False, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-5', 'MorphingFrame': -1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 9})
            Npc_ZoraB001[FirstPrince04].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo_ReactionWater02', 'IsTargetDemoSLinkUser': False})
            Npc_ZoraB001[FirstPrince04].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_InWater', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 24})
            Npc_ZoraB001[FirstPrince04].Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
            Npc_ZoraB001[FirstPrince04].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'ASName': 'Act_Swim_Hello', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        } {

            fork {
                EventSystemActor[forEventBgmCtrlTag].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 145})
                EventBgmCtrlTag.Demo_Start({'BgmName': 'ZoraPrinceCheerBgm', 'IsWaitFinish': True})
            } {
                GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': True, 'SceneName': 'C40-2', 'StartFrame': 0.0, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': 133.0})
                GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C40-3', 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': False, 'UniqueName': 'FirstPrince04', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': 90.0, 'IsWaitFinish': True})
            }

        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C40-0', 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince04', 'IsWaitFinish': False, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        Npc_ZoraB001[FirstPrince04].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_M_008', 'IsCloseMessageDialog': True, 'ASName': 'Act_Swim_Hello'})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 2, 'SceneName': 'C40-4', 'TargetActorDirReferenceMode': 3, 'EndFrame': 10.0})
        Npc_ZoraB001[FirstPrince04].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_M_009'})
        EventBgmCtrlTag.Demo_Stop({'BgmName': 'ZoraPrinceCheerBgm', 'IsWaitFinish': True, 'FadeSec': 1.5})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 2, 'SceneName': 'C40-4', 'TargetActorDirReferenceMode': 3, 'EndFrame': -1.0, 'StartFrame': 20.0})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince04', 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 1, 'TurnPosition': [3127.739990234375, 264.42999267578125, 27.860000610351562]})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

            fork {
                GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': False, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 2, 'SceneName': 'C40-5', 'TargetActorDirReferenceMode': 3})
                EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
            } {
                GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince04', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [3127.739990234375, 264.42999267578125, 27.860000610351562], 'ObjectId': 2, 'FaceId': 0, 'TurnDirection': 225.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WaitAttention', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            }

        } {
            EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer04'})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C40-6', 'IsWaitFinish': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer03'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer02'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer01'})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    }
}

void Prince01_Splash() {
    Npc_ZoraB001[FirstPrince01].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-4', 'IsEnabledAnimeDriven': 1, 'MorphingFrame': -1.0})
    EventSystemActor[Prince_Wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_ZoraB001[FirstPrince01].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo_ReactionWater02'})
    EventControllerRumble[Cnt0].Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    Npc_ZoraB001[FirstPrince01].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo_InWater', 'SLinkKey': ''})
    EventSystemActor[Prince_Wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventControllerRumble[Cnt1].Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    Npc_ZoraB001[FirstPrince01].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo_ReactionWater02'})
}

void Prince02_Splash() {
    Npc_ZoraB001[FirstPrince02].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-4', 'IsEnabledAnimeDriven': 1, 'MorphingFrame': -1.0})
    EventSystemActor[Prince_Wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_ZoraB001[FirstPrince02].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo_ReactionWater02'})
    EventControllerRumble[Cnt0].Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    Npc_ZoraB001[FirstPrince02].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo_InWater', 'SLinkKey': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2770.137451171875, 'Pattern1PosY': 184.2412872314453, 'Pattern1PosZ': -105.5302963256836, 'Pattern1AtX': 2772.39892578125, 'Pattern1AtY': 185.06112670898438, 'Pattern1AtZ': -101.71813201904297, 'Pattern1Fovy': 28.88973617553711, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor[Prince_Wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventControllerRumble[Cnt0].Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    Npc_ZoraB001[FirstPrince02].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo_ReactionWater02', 'SLinkKey': ''})
}

void Prince03_Splash() {
    Npc_ZoraB001[FirstPrince03].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-4', 'IsEnabledAnimeDriven': 1, 'MorphingFrame': -1.0})
    EventSystemActor[Prince_Wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_ZoraB001[FirstPrince03].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'Demo_ReactionWater02'})
    EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    Npc_ZoraB001[FirstPrince03].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo_InWater', 'SLinkKey': ''})
    EventSystemActor[Prince_Wait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventControllerRumble[Cnt1].Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
    Npc_ZoraB001[FirstPrince03].Demo_XLinkEventCreate({'IsWaitFinish': True, 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo_ReactionWater02', 'SLinkKey': ''})
}

void ZoraPrinceCheer03() {
    if !EventSystemActor.CheckFlag({'FlagName': 'PrinceCheer03'}) {
        SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        }
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_ResetBoneCtrl({'IsWaitFinish': True, 'ResetTarget': 0})

        fork {
            EventSystemActor[PlayerWait].Demo_WarpPlayerToDestination({'DestinationY': 187.70779418945312, 'DestinationX': 2876.139892578125, 'DestinationZ': 37.52000045776367, 'DirectionY': 185.0, 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerGoStraightAhead({'DestPosY': 187.7078399658203, 'DestPosX': 2876.5, 'DestPosZ': 31.450000762939453, 'StickValue': 0.10000000149011612, 'IsWaitFinish': False})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': -90.0})
            EventSystemActor[PlayerWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 90.0})
        } {
            GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C30-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
            Npc_ZoraB001[FirstPrince03].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': -51.566200256347656, 'DestinationY': 177.48399353027344, 'DestinationX': 2891.659912109375, 'DestinationZ': 27.229999542236328})
            Npc_ZoraB001[FirstPrince03].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-3', 'MorphingFrame': -1.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            Npc_ZoraB001[FirstPrince03].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-5', 'IsEnabledAnimeDriven': 1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 9})
            EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': False})
            Npc_ZoraB001[FirstPrince03].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'IsTargetDemoSLinkUser': False, 'ELinkKey': 'Demo_ReactionWater03'})
            Npc_ZoraB001[FirstPrince03].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_InWater', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            Npc_ZoraB001[FirstPrince03].Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
        } {
            EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        }


        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince03', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
            EventBgmCtrlTag.Demo_Start({'BgmName': 'ZoraPrinceCheerBgm', 'IsWaitFinish': True})
        } {
            Npc_ZoraB001[FirstPrince03].Demo_Talk({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_M_005', 'IsCloseMessageDialog': True, 'ASName': 'Act_Swim_Hello'})
        }

        GameRomCamera.Demo_CameraAnimFlow({'SceneName': 'C30-1', 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince03', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False})
        EventSystemActor.Demo_WarpPlayerToDestination({'DestinationY': 187.7899932861328, 'DirectionY': 90.0, 'IsWaitFinish': True, 'DestinationX': 2878.929931640625, 'DestinationZ': 31.670000076293945})
        GameROMPlayer.Demo_TurnAndLookToObjectNow({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince03', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitFinish': True})

        fork {
            Npc_ZoraB001[FirstPrince03].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_M_006', 'IsCloseMessageDialog': True, 'ASName': 'Act_Swim_Hello'})
        } {
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'ASName': 'Talk'})
            EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            GameRomCamera.Demo_CameraAnimFlow({'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'ActorName': 'GameROMPlayer', 'TargetActor': 1, 'UniqueName': '', 'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C30-3'})
            EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsOneTimeEndKeep': False, 'IsWaitFinish': False, 'ASName': 'TalkYes'})
            EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'UniqueName': '', 'ActorName': 'GameROMPlayer', 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C30-2'})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsWaitFinish': False, 'ASName': 'Talk', 'IsOneTimeEndKeep': False})
            EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        }

        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHello', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsWaitFinish': True, 'IsOneTimeEndKeep': False})
        EventBgmCtrlTag.Demo_Stop({'BgmName': 'ZoraPrinceCheerBgm', 'IsWaitFinish': True, 'FadeSec': 3.0})
        EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        fork {

            call Prince03_Splash()

        } {
            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
            GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C30-4'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 42})
        }

        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsWaitFinish': True, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait'})
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'Accept1FrameDelay': False, 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C30-5', 'ActorName': '', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer01'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer02'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer03'})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    }
}

void ZoraPrinceCheer02() {
    if !EventSystemActor.CheckFlag({'FlagName': 'PrinceCheer02'}) {
        SceneSoundCtrlTag.Demo_SetStartProc({'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'EnvReduce', 'IsWaitFinish': True})
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
        }
        GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 1, 'TargetActor2': 3, 'ActorName2': 'Npc_ZoraB001', 'Pattern1Fovy': 50.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'MotionMode': 0, 'UniqueName2': 'FirstPrince02', 'Count': 0.0, 'AtAppendMode': 0, 'PosAppendMode': 0, 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'LookAround', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': -90.0, 'ObjectId': 0, 'ActorName': 'GameROMPlayer', 'UniqueName': '', 'PosOffset': [3.0, -2.0, 3.0]})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince02', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C20-0', 'CameraName': '', 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'StartFrame': 30.0})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince02', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 35})
        } {
            Npc_ZoraB001[FirstPrince02].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-3', 'MorphingFrame': -1.0})
            EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 9})
            Npc_ZoraB001[FirstPrince02].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationX': 2774.98876953125, 'DestinationZ': -93.27008056640625, 'DirectionY': -100.8405990600586, 'DestinationY': 177.51150512695312})
            Npc_ZoraB001[FirstPrince02].Demo_PlayASForDemo({'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'ASName': 'Demo401_1-C01-Npc_Zora_Prince-A-5', 'IsWaitFinish': False, 'MorphingFrame': -1.0})
            EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 9})
            Npc_ZoraB001[FirstPrince02].Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo_ReactionWater02', 'IsTargetDemoSLinkUser': False})
            Npc_ZoraB001[FirstPrince02].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_InWater', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            Npc_ZoraB001[FirstPrince02].Demo_OpenMessageDialogTrig({'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_M_003', 'IsWaitFinish': False, 'CloseDialogOption': 3})
            EventSystemActor[anather_system].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 21})
            Npc_ZoraB001[FirstPrince02].Demo_LookAtObject({'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
            Npc_ZoraB001[FirstPrince02].Demo_PlayASForDemo({'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ASName': 'Wait'})
        }

        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince02', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        GameROMPlayer.Demo_PlayerGoStraightAhead({'IsWaitFinish': True, 'DestPosX': 2741.815673828125, 'DestPosY': 191.05995178222656, 'StickValue': 1.0, 'DestPosZ': -100.27999877929688})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        Npc_ZoraB001[FirstPrince02].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'ASName': 'Act_Swim_Hello', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        EventBgmCtrlTag.Demo_Start({'BgmName': 'ZoraPrinceCheerBgm', 'IsWaitFinish': True})
        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince02', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince02', 'SceneName': 'C20-1', 'Accept1FrameDelay': False, 'TargetActorDirReferenceMode': 2, 'TargetActorPosReferenceMode': 2})

        fork {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
            Npc_ZoraB001[FirstPrince02].Demo_Talk({'IsBecomingSpeaker': True, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GotoZoraVillage:Npc_ZoraB001_M_004', 'IsCloseMessageDialog': True, 'ASName': 'Act_Swim_Hello'})
        } {
            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
            GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'FirstPrince02', 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsWaitFinish': True, 'IsTurnToLookAtPos': False})
            GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'ASName': 'Talk'})
        }

        EventBgmCtrlTag.Demo_Stop({'BgmName': 'ZoraPrinceCheerBgm', 'IsWaitFinish': True, 'FadeSec': 3.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        fork {
            GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkHello', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'IsWaitFinish': True, 'ClothWarpMode': -1})

            call Prince02_Splash()

            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        } {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C20-2', 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'Accept1FrameDelay': False, 'UniqueName': ''})
        }

        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.822327136993408, 'Pattern1PosY': 2.081084966659546, 'Pattern1PosZ': 1.6313480138778687, 'Pattern1AtX': -1.0509029626846313, 'Pattern1AtY': 1.1863399744033813, 'Pattern1AtZ': -0.6552730202674866, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer01'})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'PrinceCheer02'})
        EventSystemActor.Demo_AutoSave({'IsWaitFinish': True})
    }
}
