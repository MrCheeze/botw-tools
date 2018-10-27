-------- EventFlow: Demo028_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_WarpPlayerToAnchor', 'Demo_IncreaseGameDataInt', 'Demo_CallDemo', 'Demo_CloseMessageDialog', 'Demo_AppearRupee', 'Demo_DeleteAllIceMakerForDemo']
queries: ['CheckFlag']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpring_A_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GreatFairyBeforeRevival
entrypoint: None()
actions: ['Demo_Talk', 'Demo_OpenMessageDialogTrig']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DressFairy_00
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DressFairy_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DressFairy_02
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DressFairy_03
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_1_2]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_2_3]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_3_4]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_4_5]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpringClose_A_01[Bud_Horse]
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeOut', 'Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: HorseGod001
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerHide', 'Demo_PlayerShow', 'Demo_PlayASAdapt', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleLarge', 'Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetDiffuseAttenuate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpring_C_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpring_B_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpring_D_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpring_E_01
entrypoint: None()
actions: []
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[shindou]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_SweepCollision
entrypoint: None()
actions: ['Demo_Sweep']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_DressFairy_00[Demo028_0(FairyActor)]
entrypoint: Demo028_0(FairyActor)
actions: ['Demo_PlayASForDemo', 'Demo_OpenMessageDialogTrig', 'Demo_XLinkEventCreate']
queries: []
params: None

Actor: TwnObj_FairySpringClose_A_01[Demo028_0(FairySpringClose)]
entrypoint: Demo028_0(FairySpringClose)
actions: ['Demo_PlayASForDemo']
queries: []
params: None

Actor: TwnObj_FairySpring_A_01[Demo028_0(Izumi2)]
entrypoint: Demo028_0(Izumi2)
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: None

void Demo028_0() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'StopWithFade', 'SeCtrlType': 'None'})
    GreatFairyBeforeRevival.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk08', 'IsCloseMessageDialog': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventSystemActor.Demo_AppearRupee({'IsWaitFinish': False, 'IsVisible': 1})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'IsWaitFinish': True, 'SceneName': 'C02-0', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'ActorName': 'TwnObj_FairySpringClose_A_01', 'TargetActorDirReferenceMode': 1, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'UniqueName': 'SpringCloseInstanceName', 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy5_Appear'}) {
            GreatFairyBeforeRevival.Demo_OpenMessageDialogTrig({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk09_1', 'CloseDialogOption': 1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            GreatFairyBeforeRevival.Demo_OpenMessageDialogTrig({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitFinish': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk10_1', 'CloseDialogOption': 1})
            Event199:
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 55})
            EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 2})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'None', 'SeCtrlType': 'WorldMute'})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
            EventSystemActor.Demo_DeleteAllIceMakerForDemo({'IsWaitFinish': True})
            Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 0, 'DispMode': 'Auto'})
        } else {
            GreatFairyBeforeRevival.Demo_OpenMessageDialogTrig({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk09', 'IsWaitFinish': False, 'CloseDialogOption': 1})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            GreatFairyBeforeRevival.Demo_OpenMessageDialogTrig({'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk10', 'IsWaitFinish': False, 'CloseDialogOption': 1})
            goto Event199
        }
    } {
        TwnObj_FairySpringClose_A_01[Demo028_0(FairySpringClose)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Open', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        Obj_SweepCollision.Demo_Sweep({'DynScalingTime': 90.0, 'IsWaitFinish': False})
    }

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'FailyReactive'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_WarpPlayerToAnchor({'UniqueName': 'FairyStandPos', 'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor'})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'NoErrorCheck': False})
    if EventSystemActor.CheckFlag({'FlagName': 'GreatFairy5_Appear'}) {
        EventSystemActor.Demo_CallDemo({'IsWaitFinish': True, 'EntryPointName': 'HorseGod', 'DemoName': 'Demo047_0', 'EndFade': 0})
    } else {
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': '', 'Sound': 'Demo_DressFairyAppearOmen'})

        fork {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C04-0', 'TargetActor': 3, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'TargetActorDirReferenceMode': 2, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': True, 'UniqueName': '', 'ActorName': 'Izumi'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
            TwnObj_FairySpring_A_01[Demo028_0(Izumi2)].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'SplashOmen', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
        } {
            TwnObj_FairySpring_A_01[Demo028_0(Izumi2)].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'FlowerOpen'})
            Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 0, 'DispMode': 'Auto'})
        }


        fork {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C05-0', 'IsWaitFinish': True, 'TargetActor': 3, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'TargetActorDirReferenceMode': 2, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'UniqueName': '', 'Accept1FrameDelay': False, 'ActorName': 'Izumi'})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Pattern': 4, 'Power': 0.10000000149011612, 'Count': 5})
            EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 7})
        } {
            Npc_DressFairy_00[Demo028_0(FairyActor)].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Appearance', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': 0.0})
        }


        fork {
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C06-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': True, 'TargetActor': 3, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'UniqueName': '', 'ActorName': 'Izumi'})
            GameROMPlayer.Demo_PlayerHide({'IsWaitFinish': True})
            SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_FairyAppear', 'SoundDelay': 0, 'SLinkInst': ''})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C08-0', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'TargetActorDirReferenceMode': 2, 'TargetActor': 3, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'UniqueName': '', 'ActorName': 'Izumi'})
            GameROMPlayer.Demo_PlayerShow({'IsWaitFinish': True})
            GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C09-0', 'TargetActorDirReferenceMode': 0, 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'IsWaitFinish': True, 'TargetActor': 3, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'UniqueName': '', 'ActorName': 'Izumi'})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'FaceId': 2, 'TurnDirection': 0.0, 'IsValid': True, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'UniqueName': '', 'ActorName': 'Izumi', 'PosOffset': [0.0, 1.7999999523162842, 0.0]})
        } {
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': True, 'Pattern': 1, 'Count': 1, 'Power': 0.10000000149011612})
            EventCameraRumble.Demo_Rumble({'Power': 1.0, 'Sideways': False, 'IsWaitFinish': True, 'Pattern': 1, 'Count': 1})
            EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Pattern': 4, 'Power': 0.5, 'Count': 3})
            EventSystemActor[shindou].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 4})
            EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': 1})
        } {
            Npc_DressFairy_00[Demo028_0(FairyActor)].Demo_OpenMessageDialogTrig({'IsWaitFinish': False, 'MessageId': 'EventFlowMsg/ArmorProcessingEventTag:Talk28', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 1})
            Npc_DressFairy_00[Demo028_0(FairyActor)].Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo028_0_AppearSplash', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
            TwnObj_FairySpring_A_01[Demo028_0(Izumi2)].Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'SplashOmen', 'SLinkKey': ''})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
            EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
        }


        fork {
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.8095700144767761, 'Pattern1PosY': 8.55584716796875, 'Pattern1PosZ': 18.70196533203125, 'Pattern1AtX': 0.9663090109825134, 'Pattern1AtY': 8.819915771484375, 'Pattern1AtZ': 0.42132601141929626, 'Pattern1Fovy': 13.829024314880371, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'Izumi', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.638916015625, 'Pattern1PosY': 3.350677013397217, 'Pattern1PosZ': 8.82708740234375, 'Pattern1AtX': -0.10449200123548508, 'Pattern1AtY': 5.462769031524658, 'Pattern1AtZ': 3.821197986602783, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Count': 100.0, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'UniqueName1': '', 'MotionMode': 0, 'ActorName1': 'Izumi', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            Npc_DressFairy_00[Demo028_0(FairyActor)].Demo_PlayASForDemo({'ASName': 'Act_Appearance_Ed', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'IsWaitFinish': False, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'MorphingFrame': -1.0, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        }

        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'Start', 'SeCtrlType': 'WorldMuteOff'})
    }
}

void DressFairy0() {
    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 1, 'IsWaitFinish': True})

    call Demo028_0({'FailyReactive': 'RevivalGreatFairy1', 'SpringCloseInstanceName': 'Bud_1_2', 'Izumi': 'TwnObj_FairySpring_A_01', 'FairyActor': ActorIdentifier(name="Npc_DressFairy_00"), 'FairySpringClose': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_1_2"), 'Izumi2': ActorIdentifier(name="TwnObj_FairySpring_A_01")})

}

void DressFairy1() {
    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 1, 'IsWaitFinish': True})

    call Demo028_0({'FailyReactive': 'RevivalGreatFairy2', 'SpringCloseInstanceName': 'Bud_2_3', 'Izumi': 'TwnObj_FairySpring_C_01', 'FairyActor': ActorIdentifier(name="Npc_DressFairy_01"), 'FairySpringClose': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_2_3"), 'Izumi2': ActorIdentifier(name="TwnObj_FairySpring_C_01")})

}

void DressFairy2() {
    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 1, 'IsWaitFinish': True})

    call Demo028_0({'FailyReactive': 'RevivalGreatFairy3', 'SpringCloseInstanceName': 'Bud_3_4', 'Izumi': 'TwnObj_FairySpring_B_01', 'FairyActor': ActorIdentifier(name="Npc_DressFairy_02"), 'FairySpringClose': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_3_4"), 'Izumi2': ActorIdentifier(name="TwnObj_FairySpring_B_01")})

}

void DressFairy3() {
    EventSystemActor.Demo_IncreaseGameDataInt({'GameDataIntName': 'FairyRevivalNum', 'Value': 1, 'IsWaitFinish': True})

    call Demo028_0({'FailyReactive': 'RevivalGreatFairy4', 'SpringCloseInstanceName': 'Bud_4_5', 'Izumi': 'TwnObj_FairySpring_D_01', 'FairyActor': ActorIdentifier(name="Npc_DressFairy_03"), 'FairySpringClose': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_4_5"), 'Izumi2': ActorIdentifier(name="TwnObj_FairySpring_D_01")})

}

void HorseGod() {

    call Demo028_0({'FailyReactive': 'RevivalGreatFairy5', 'SpringCloseInstanceName': 'Bud_Horse', 'Izumi': 'TwnObj_FairySpring_E_01', 'FairyActor': ActorIdentifier(name="HorseGod001"), 'FairySpringClose': ActorIdentifier(name="TwnObj_FairySpringClose_A_01", sub_name="Bud_Horse"), 'Izumi2': ActorIdentifier(name="TwnObj_FairySpring_E_01")})

}
