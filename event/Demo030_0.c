-------- EventFlow: Demo030_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_HorseResurrect', 'Demo_WaitFrame', 'Demo_FlagOFF', 'Demo_SetOwnedHorseAS', 'Demo_WaitWhileCreatingHorse']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: HorseGod001
entrypoint: None()
actions: ['Demo_Talk', 'Demo_DeliverHorse', 'Demo_PlayASForDemo', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Dm_Locator[Demo030_0]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[abc]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetDiffuseAttenuate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl', 'Demo_CustomDuckingStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void HorseGodRevival() {
    EventSystemActor.Demo_HorseResurrect({'IsWaitFinish': True})
    HorseGod001.Demo_DeliverHorse({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'TargetActorDirReferenceMode': 2, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C01-0', 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'ActorName': 'TwnObj_FairySpring_E_01'})
    } {
        HorseGod001.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ASName': 'Act_Give_Refuge', 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
    } {
        HorseGod001.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'Demo030_HorseRevival', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
    } {
        SoundTriggerTag.Demo_SoundTrigger({'Sound': 'HorseRevivalBgm', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 193})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'IsWaitFinish': False, 'NoErrorCheck': False})
    } {
        WorldManagerControl.Demo_EventSetDiffuseAttenuate({'IsWaitFinish': False, 'diameter': 0.10000000149011612})
    }

    Dm_Locator[Demo030_0].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_030_0_HorseRevival', 'SLinkKey': 'Demo_030_0_HorseRevival', 'IsTargetDemoSLinkUser': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 6.771728992462158, 'Pattern1PosY': 3.8236539363861084, 'Pattern1PosZ': 10.554862976074219, 'Pattern1AtX': 1.8054200410842896, 'Pattern1AtY': 7.3673858642578125, 'Pattern1AtZ': 15.552421569824219, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ReviseModeEnd': 1, 'Accept1FrameDelay': False, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 6.837646007537842, 'Pattern1PosY': 3.3162078857421875, 'Pattern1PosZ': 10.480308532714844, 'Pattern1AtX': 1.233154058456421, 'Pattern1AtY': 1.5998079776763916, 'Pattern1AtZ': 16.010330200195312, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 100.0, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
    Dm_Locator[Demo030_0].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_030_0_HorseRevival_Omen', 'SLinkKey': 'Demo_030_0_HorseRevival_Omen', 'IsTargetDemoSLinkUser': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
    Dm_Locator[Demo030_0].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo_030_0_HorseRevival', 'SLinkKey': 'Demo_030_0_HorseRevival'})
    EventSystemActor[abc].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_WaitWhileCreatingHorse({'IsWaitFinish': True})
    Dm_Locator[Demo030_0].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Demo_030_0_HorseRevival_Omen', 'SLinkKey': 'Demo_030_0_HorseRevival_Omen'})
    WorldManagerControl.Demo_EventSetDiffuseAttenuate({'IsWaitFinish': False, 'diameter': 1.0})
    Dm_Locator[Demo030_0].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_030_0_HorseRevival_End', 'SLinkKey': 'Demo_030_0_HorseRevival_End', 'IsTargetDemoSLinkUser': True})
    EventSystemActor.Demo_SetOwnedHorseAS({'IsWaitFinish': True, 'ASName': 'Appear_Epona'})
    HorseGod001.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsWaitFinish': False, 'ASName': 'Wait', 'MorphingFrame': -1.0})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'MorphingFrame': 0.0, 'IsWaitFinish': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    SceneSoundCtrlTag.Demo_CustomDuckingStop({'IsWaitFinish': True})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'BgmCtrlType': 'MuteOff', 'SeCtrlType': 'None'})

    fork {
        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/HorseGod001:talk_16_01', 'ASName': 'Wait'})
    } {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 4.496094226837158, 'Pattern1PosZ': 11.800895690917969, 'Pattern1AtY': 6.680527210235596, 'Pattern1AtZ': 5.561943054199219, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.05932600051164627, 'Pattern1PosY': 2.9158170223236084, 'Pattern1PosZ': 9.8955078125, 'Pattern1AtX': 0.02294900082051754, 'Pattern1AtY': 6.75701904296875, 'Pattern1AtZ': 2.5738070011138916, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'Accept1FrameDelay': True, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'ClothWarpMode': -1, 'IsWaitFinish': False, 'NoErrorCheck': False})
    } {
        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/HorseGod001:talk_16_02', 'ASName': 'Angry_Talk'})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosY': 4.496094226837158, 'Pattern1PosZ': 11.800895690917969, 'Pattern1AtY': 6.680527210235596, 'Pattern1AtZ': 5.561943054199219, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Pattern1PosX': 0.0, 'Pattern1AtX': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_16_03'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'ASName': 'Demo030_0-C01-Link-A-1', 'ClothWarpMode': -1, 'NoErrorCheck': False})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWait', 'ClothWarpMode': -1, 'IsWaitFinish': False, 'NoErrorCheck': False})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.234131097793579, 'Pattern1PosY': 17.248992919921875, 'Pattern1PosZ': 9.805740356445312, 'Pattern1AtX': 1.2158199548721313, 'Pattern1AtY': 8.046585083007812, 'Pattern1AtZ': 3.435944080352783, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': True, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        HorseGod001.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Act_Spring_Back', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 33})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'IsWaitFinish': False, 'Pattern': 4, 'Count': 3, 'Power': 0.30000001192092896})
        EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': True, 'Count': 1})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 40})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.471436023712158, 'Pattern1PosY': 6.14385986328125, 'Pattern1PosZ': 3.9896390438079834, 'Pattern1AtX': 1.74658203125, 'Pattern1AtY': 3.239959955215454, 'Pattern1AtZ': 9.62384033203125, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    GameROMPlayer.Demo_PlayerTurnAndLookToObject({'IsWaitFinish': True, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'TurnDirection': -71.0, 'IsValid': True, 'ObjectId': 2, 'FaceId': 1, 'ActorName': '', 'IsUseSlowTurn': True, 'IsTurnToLookAtPos': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    EventSystemActor.Demo_FlagOFF({'IsWaitFinish': True, 'FlagName': 'GreatFairy5_Appear'})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
}
