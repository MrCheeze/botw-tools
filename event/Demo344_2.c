-------- EventFlow: Demo344_2 --------

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WarpPlayerToDestination', 'Demo_CloseMessageDialog', 'Demo_WaitFrame', 'Demo_WarpPlayerToActor']
queries: ['GeneralChoice2', 'HasPorchItem', 'CheckFlag', 'CheckPlayerRideHorse', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff', 'Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs', 'Demo_GameCamera']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Unequip', 'Demo_PlayerZoraRide', 'Demo_LookAtTheFront', 'Demo_PlayerHorseGetOff', 'Demo_LookAtObject', 'Demo_PlayASAdapt', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayerShow', 'Demo_PlayerHide']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Npc_ZoraB001[Prince01]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_Idling', 'Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialog', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_LookAtObject', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Zora030[RelicBattleZora]
entrypoint: None()
actions: ['Demo_ZoraSurfing', 'Demo_TurnAndLookToObject', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[system1]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[system2]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Area[PrinceJump01]
entrypoint: None()
actions: []
queries: ['DummyQuery']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater_WeakPoint[WeakPoint1]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater_WeakPoint[WeakPoint2]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater_WeakPoint[WeakPoint3]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: RemainsWater_WeakPoint[WeakPoint4]
entrypoint: None()
actions: ['Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventBgmCtrlTag
entrypoint: None()
actions: ['Demo_Start', 'Demo_Stop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleSmall', 'Demo_TimeSpecRumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo344_2() {

    call DemoInitialize()

    EventBgmCtrlTag.Demo_Start({'IsWaitFinish': True, 'BgmName': 'ZoraPrinceTalkBgm'})
    if EventSystemActor.CheckFlag({'FlagName': 'Retry_Check'}) {
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'UniqueName': 'Prince01', 'ActorName': 'Npc_ZoraB001', 'TargetActor': 3, 'IsWaitFinish': False, 'SceneName': 'C10-1', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Surprise', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_018'})
        Event283:
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'UniqueName': 'Prince01', 'ActorName': 'Npc_ZoraB001', 'TargetActor': 3, 'IsWaitFinish': False, 'SceneName': 'C11-0', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        Npc_ZoraB001[Prince01].Demo_PlayASForDemo({'IsWaitFinish': False, 'IsIgnoreSame': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': 0, 'ASName': 'Talk_Prince_Special', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 22})
        Npc_ZoraB001[Prince01].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Npc_ZoraB001[Prince01].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'ShiningTooth', 'SLinkKey': 'ShiningTooth'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'UniqueName': 'Prince01', 'ActorName': 'Npc_ZoraB001', 'TargetActor': 3, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'StartFrame': 30.0, 'SceneName': 'C12-0', 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_006', 'IsCloseMessageDialog': False, 'ASName': 'Talk_Prince_Normal'})
        if !EventSystemActor.GeneralChoice2() {
            if EventSystemActor.CheckFlag({'FlagName': 'Retry_Check'}) {
                if EventSystemActor.HasPorchItem({'PorchItemName': 'ElectricArrow', 'Count': 4}) {
                    Event267:
                    if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': False, 'CheckHead': False, 'CheckType': 'Zora', 'CheckUpper': True}) {
                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_002', 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Joy'})

                        fork {
                            Npc_ZoraB001[Prince01].Demo_PlayASForDemo({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_2-C01-Npc_Zora_Prince-A-1', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                            EventSystemActor[system2].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 68})
                            Npc_ZoraB001[Prince01].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_ReactionWater01', 'SLinkKey': 'Demo_Splash', 'IsTargetDemoSLinkUser': False})
                            EventSystemActor[system2].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
                            EventControllerRumble.Demo_RumbleSmall({'Count': 1, 'IsWaitFinish': True})
                        } {
                            GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C13-0', 'StartFrame': 0.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                            EventSystemActor[system1].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 73})
                        }

                        EventSystemActor[system2].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        Npc_ZoraB001[Prince01].Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': 180.0, 'DestinationY': 312.0, 'DestinationX': 3600.64990234375, 'DestinationZ': -309.010009765625})
                        Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'TurnDirection': 0.0, 'ActorName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                        Npc_ZoraB001[Prince01].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_InWater', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
                        Npc_ZoraB001[Prince01].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo_ReactionWater01', 'SLinkKey': 'Demo_Splash'})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
                        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C14-0', 'StartFrame': 0.0, 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'EndFrame': 5.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1})
                        RemainsWater_WeakPoint[WeakPoint1].Demo_PlayASForDemo({'ASName': 'Alert', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                        RemainsWater_WeakPoint[WeakPoint2].Demo_PlayASForDemo({'ASName': 'Alert', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                        RemainsWater_WeakPoint[WeakPoint3].Demo_PlayASForDemo({'ASName': 'Alert', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                        RemainsWater_WeakPoint[WeakPoint4].Demo_PlayASForDemo({'ASName': 'Alert', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                        if EventSystemActor.CheckFlag({'FlagName': 'Retry_Check'}) {
                            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_019', 'IsCloseMessageDialog': True})
                        } else {
                            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_003', 'IsCloseMessageDialog': True})
                        }

                        fork {
                            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C14-0', 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'StartFrame': 30.0, 'IsWaitFinish': False, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                        } {
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
                            Npc_ZoraB001[Prince01].Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'ActorName': 'AnchorAction10', 'UniqueName': '', 'TurnPosition': [3665.75, 363.3500061035156, -185.58999633789062], 'PosOffset': [0.0, 0.0, 0.0]})
                            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                        }

                        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'ActorName': 'RemainsWater', 'TargetActor': 3, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'UniqueName': '', 'Accept1FrameDelay': False, 'SceneName': 'C16-0', 'EndFrame': -1.0, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                        Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': 'AnchorAction10', 'TurnPosition': [3661.75, 268.1199951171875, -175.3699951171875], 'UniqueName': '', 'TurnDirection': 110.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 3, 'FaceId': 0, 'IsConfront': False})
                        Npc_ZoraB001[Prince01].Demo_LookAtObject({'ActorName': '', 'IsWaitFinish': True, 'TurnDirection': 135.0, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_004', 'IsCloseMessageDialog': True})
                        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'IsWaitFinish': False, 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'TargetActor': 3, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'SceneName': 'C17-0', 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
                        if EventSystemActor.CheckFlag({'FlagName': 'Retry_Check'}) {
                            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_020', 'IsCloseMessageDialog': True})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_ZoraB001[Prince01].Demo_LookAtObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 2, 'IsValid': True, 'FaceId': 2, 'ActorName': 'AnchorAction10', 'UniqueName': '', 'TurnPosition': [3665.75, 363.3500061035156, -185.58999633789062], 'PosOffset': [0.0, 0.0, 0.0]})
                                Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'IsValid': True, 'ActorName': 'AnchorAction10', 'TurnPosition': [3661.75, 268.1199951171875, -175.3699951171875], 'UniqueName': '', 'TurnDirection': 110.0, 'PosOffset': [0.0, 0.0, 0.0], 'ObjectId': 3, 'FaceId': 0, 'IsConfront': False})
                                Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_011'})
                                EventBgmCtrlTag.Demo_Stop({'IsWaitFinish': True, 'FadeSec': 1.0, 'BgmName': 'ZoraPrinceTalkBgm'})
                                Fader.Demo_FadeOut({'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 2})
                                Event227:
                                if EventSystemActor.CheckFlag({'FlagName': 'Retry_Check'}) {
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Demo344_2_LatterHalf'})
                                    Npc_ZoraB001[Prince01].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo_InWater', 'SLinkKey': ''})
                                    Npc_ZoraB001[Prince01].Demo_WarpToAnchor({'IsWaitFinish': False, 'DirectionY': 3465.469970703125, 'DestinationX': 324.2900085449219, 'DestinationY': -391.489990234375, 'DestinationZ': 0.0})
                                    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                                    Npc_Zora030[RelicBattleZora].Demo_TurnAndLookToObject({'ActorName': 'AnchorAction10', 'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 2, 'IsValid': True, 'FaceId': 1, 'TurnPosition': [3596.77001953125, 315.5, -250.10000610351562], 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                                    EventSystemActor.Demo_WarpPlayerToActor({'ActorName': 'Npc_Zora030', 'IsWaitFinish': True, 'DestinationY': 0.0, 'DirectionY': 0.0, 'RotToVec3f': False, 'GameDataVec3fRotDir': '', 'DestinationX': 0.0, 'DestinationZ': -0.5, 'OnGround': False, 'RelativeDist': 0.0, 'IsOffsetBaseTargetActor': False})
                                    GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
                                    GameROMPlayer.Demo_PlayerZoraRide({'IsWaitFinish': False})
                                    GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
                                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                                    Fader.Demo_FadeIn({'Color': 1, 'DispMode': 'Auto', 'Frame': 2, 'IsWaitFinish': False})
                                    EventBgmCtrlTag.Demo_Start({'BgmName': 'RemainsWaterBattleBgm', 'IsWaitFinish': True})
                                    Event261:
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Retry_Check'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Demo_Test01'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_BattleTime'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Water_Relic_Step2'})
                                    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'SaveProhibition'})
                                    EventSystemActor.Demo_FlagON({'FlagName': 'WarpProhibition', 'IsWaitFinish': True})
                                } else {

                                    call Demo344_2_LatterHalf()

                                }
                            }
                        } else {
                            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_007', 'IsCloseMessageDialog': True})
                            if !EventSystemActor.GeneralChoice2() {
                                Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_009', 'IsCloseMessageDialog': True})
                            } else {
                                Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_010', 'IsCloseMessageDialog': True})
                            }
                            goto Event227
                        }
                    } else {
                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_002', 'ASName': 'Talk_Prince_Joy'})
                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprised', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_023'})
                        Event324:
                        EventBgmCtrlTag.Demo_Stop({'FadeSec': 3.0, 'IsWaitFinish': True, 'BgmName': 'ZoraPrinceTalkBgm'})
                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Think', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_025'})
                        Event26:
                        GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'ActorName1': '', 'UniqueName1': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'TargetActor1': 1, 'TargetActor2': 3, 'ActorName2': 'Npc_ZoraB001', 'PosAppendMode': 2, 'Pattern1PosX': 0.0, 'Pattern1Fovy': 50.0, 'MotionMode': 1, 'AtAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1AtY': 1.600000023841858, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'Count': 30.0, 'Pattern1PosZ': -5.0, 'Pattern1PosY': 2.700000047683716, 'UniqueName2': '', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    }
                } else
                Event272:
                if EventSystemActor.CheckEquipArmorSeriesType({'CheckLower': False, 'CheckHead': False, 'CheckType': 'Zora', 'CheckUpper': True}) {
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_002', 'ASName': 'Talk_Prince_Joy'})
                    if EventSystemActor.CheckFlag({'FlagName': 'Retry_Check'}) {
                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_008', 'ASName': 'Talk_Surprised'})
                    } else {
                        Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprised', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_026'})
                    }
                    goto Event324
                } else {
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_002', 'ASName': 'Talk_Prince_Joy'})
                    Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Talk_Surprised', 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_024'})
                    goto Event324
                }
            } else
            if EventSystemActor.HasPorchItem({'PorchItemName': 'ElectricArrow', 'Count': 20}) {
                goto Event267
            } else
            goto Event272
        } else {
            EventBgmCtrlTag.Demo_Stop({'FadeSec': 3.0, 'IsWaitFinish': True, 'BgmName': 'ZoraPrinceTalkBgm'})
            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_005', 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Think'})
            goto Event26
        }
    } else {

        fork {
            Npc_ZoraB001[Prince01].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_001', 'IsCloseMessageDialog': True, 'ASName': 'Talk_Prince_Surprise'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'UniqueName': 'Prince01', 'ActorName': 'Npc_ZoraB001', 'TargetActor': 3, 'SceneName': 'C10-1', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'EndFrame': 60.0, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        }

        goto Event283
    }
}

void DemoInitialize() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None'})
    Fader.Demo_FadeOut({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    if EventSystemActor.CheckPlayerRideHorse() {
        GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
    }
    GameROMPlayer.Demo_Unequip({'IsWaitFinish': True})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    Npc_ZoraB001[Prince01].Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
    Npc_ZoraB001[Prince01].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction3'})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DirectionY': 0.0, 'DestinationZ': -345.1400146484375, 'DestinationY': 316.4599914550781, 'DestinationX': 3594.43994140625})
    Npc_ZoraB001[Prince01].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'TurnDirection': 0.0, 'ActorName': '', 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_ZoraB001', 'UniqueName': 'Prince01', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsOneTimeEndKeep': False, 'NoErrorCheck': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': 0.0, 'ASName': 'DemoWait'})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'UniqueName': 'Prince01', 'ActorName': 'Npc_ZoraB001', 'TargetActor': 3, 'SceneName': 'C10-0', 'TargetActorPosReferenceMode': 1, 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'IsWaitFinish': True, 'EndFrame': 30.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Fader.Demo_FadeIn({'Frame': 2, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
}

void Demo344_2_LatterHalf() {
    EventBgmCtrlTag.Demo_Stop({'FadeSec': 2.0, 'IsWaitFinish': True, 'BgmName': 'ZoraPrinceTalkBgm'})
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'ReduceOff', 'SeCtrlType': 'EnvReduceOff', 'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_NotifyTalk({'IsWaitFinish': True, 'CtrlType': 'SkipNotify'})
    GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'EndFrame': -1.0, 'SceneName': 'C40-0', 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Demo344_2_LatterHalf'})
    Npc_ZoraB001[Prince01].Demo_WarpToAnchor({'IsWaitFinish': False, 'DirectionY': 3465.469970703125, 'DestinationX': 324.2900085449219, 'DestinationY': -391.489990234375, 'DestinationZ': 0.0})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    if !Area[PrinceJump01].DummyQuery() {
        Npc_Zora030[RelicBattleZora].Demo_TurnAndLookToObject({'ActorName': 'AnchorAction10', 'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 2, 'IsValid': True, 'FaceId': 1, 'TurnPosition': [3596.77001953125, 315.5, -250.10000610351562], 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
        EventSystemActor.Demo_WarpPlayerToActor({'ActorName': 'Npc_Zora030', 'IsWaitFinish': True, 'DestinationY': 0.0, 'DirectionY': 0.0, 'RotToVec3f': False, 'GameDataVec3fRotDir': '', 'DestinationX': 0.0, 'DestinationZ': -0.5, 'OnGround': False, 'RelativeDist': 0.0, 'IsOffsetBaseTargetActor': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

        fork {
            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': False, 'IsValid': True})
            GameROMPlayer.Demo_PlayerZoraRide({'IsWaitFinish': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            Npc_Zora030[RelicBattleZora].Demo_ZoraSurfing({'IsWaitFinish': False, 'UniqueName': 'Demo344_2ZoraRail'})
            RemainsWater.Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_2-C01-DgnObj_IbutsuWaterField_A_01-A-0', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            Npc_ZoraB001[Prince01].Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_011', 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 50})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventBgmCtrlTag.Demo_Start({'BgmName': 'RemainsWaterBattleBgm', 'IsWaitFinish': True})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        }

        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C41-0', 'TargetActor': 1, 'TargetActorDirReferenceMode': 1, 'StartFrame': 0.0, 'EndFrame': 75.0, 'ActorName': '', 'UniqueName': '', 'TargetActorPosReferenceMode': 1, 'Accept1FrameDelay': False, 'IsWaitFinish': False, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        Npc_ZoraB001[Prince01].Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_012'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})

        fork {
            EventControllerRumble.Demo_TimeSpecRumbleSmall({'IsWaitFinish': False, 'Seconds': 1, 'IsWait': False})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
            Npc_ZoraB001[Prince01].Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_014', 'CloseDialogOption': 3})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 150})
        } {
            RemainsWater.Demo_PlayASForDemo({'IsWaitFinish': True, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_2-C01-DgnObj_IbutsuWaterField_A_01-A-1', 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            RemainsWater.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo344_2-C01-DgnObj_IbutsuWaterField_A_01-A-2', 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        } {
            GameRomCamera.Demo_CameraAnimFlowAbs({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'SceneName': 'C42-0', 'IsWaitFinish': False, 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0})
        }

        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        Npc_Zora030[RelicBattleZora].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo_HighSpeed', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})

        fork {

            fork {
                Npc_ZoraB001[Prince01].Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_013', 'IsWaitFinish': True, 'CloseDialogOption': 3})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
            }


            fork {
                Npc_ZoraB001[Prince01].Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True, 'CloseDialogOption': 3, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_027'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 130})
            }


            fork {
                Npc_ZoraB001[Prince01].Demo_OpenMessageDialog({'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': True, 'CloseDialogOption': 3, 'MessageId': 'EventFlowMsg/Water_Relic:Npc_ZoraB001_S2_028'})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
                Npc_Zora030[RelicBattleZora].Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'Demo_HighSpeed', 'SLinkKey': ''})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            }

        } {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'StartFrame': 0.0, 'SceneName': 'C43-0', 'TargetActor': 1, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'ActorName': '', 'UniqueName': '', 'Accept1FrameDelay': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'EndFrame': 150.0, 'IsWaitFinish': True})
            GameRomCamera.Demo_CameraAnimFlow({'TargetActorPosReferenceMode': 1, 'ActorName': 'Npc_Zora030', 'UniqueName': 'RelicBattleZora', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActorDirReferenceMode': 1, 'Accept1FrameDelay': True, 'TargetActor': 1, 'SceneName': 'C44-0', 'EndFrame': -1.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'IsWaitFinish': False})
            EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
            GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'RemainsWater', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
            EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
            GameROMPlayer.Demo_LookAtTheFront({'IsWaitFinish': True, 'IsValid': True})
        }

        EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        goto Event261
    }
}
