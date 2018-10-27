-------- EventFlow: Demo047_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_CameraAnimFlow']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[FairyEffect]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: HorseGod001
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleMiddle']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayASAdapt', 'Demo_LookAtObject']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'DisableSheikPad': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: WorldManagerControl
entrypoint: None()
actions: ['Demo_EventSetDiffuseAttenuate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[FairyEffect2]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: TwnObj_FairySpring_E_01
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void HorseGod() {
    TwnObj_FairySpring_E_01.Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'SLinkKey': '', 'ELinkKey': 'FlowerOpen'})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_HorseGodAppearOmen', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})

    fork {
        GameRomCamera.Demo_CameraAnimFlow({'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 3, 'UniqueName': '', 'DOFBlurStart': 2.0, 'DOFBlurEnd': 2.0, 'TargetActorDirReferenceMode': 2, 'StartFrame': 0.0, 'EndFrame': -1.0, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C01-0', 'IsWaitFinish': True, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'Accept1FrameDelay': False, 'ActorName': 'TwnObj_FairySpring_E_01'})
    } {
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'DispMode': 'Auto', 'Frame': 0, 'Color': 0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        TwnObj_FairySpring_E_01.Demo_XLinkEventCreate({'IsWaitFinish': False, 'ELinkKey': 'SplashOmen', 'IsTargetDemoSLinkUser': False, 'SLinkKey': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 27})

        fork {
            HorseGod001.Demo_PlayASForDemo({'ASName': 'Act_Appearance', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': -1, 'IsWaitFinish': False, 'ClothWarpMode': 1})
            EventSystemActor[FairyEffect2].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 290})
            HorseGod001.Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Wait', 'IsWaitFinish': False, 'ClothWarpMode': -1, 'MorphingFrame': -1.0, 'IsEnabledAnimeDriven': -1})
        } {
            EventSystemActor[FairyEffect].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 83})
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
            WorldManagerControl.Demo_EventSetDiffuseAttenuate({'IsWaitFinish': False, 'diameter': 0.10000000149011612})
            EventSystemActor[FairyEffect].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 28})
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 1})
            EventSystemActor[FairyEffect].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 28})
            GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'NoErrorCheck': False})
            EventSystemActor[FairyEffect].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
            EventControllerRumble.Demo_RumbleMiddle({'IsWaitFinish': False, 'Count': 5})
            GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'HorseGod001', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        }

    }

    TwnObj_FairySpring_E_01.Demo_XLinkEventFade({'IsWaitFinish': False, 'ELinkKey': 'SplashOmen', 'SLinkKey': ''})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    HorseGod001.Demo_Talk({'MessageId': 'EventFlowMsg/HorseGod001:talk_00', 'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'IsCloseMessageDialog': True})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'WorldMuteOff', 'BgmCtrlType': 'StartWithFade'})
    WorldManagerControl.Demo_EventSetDiffuseAttenuate({'IsWaitFinish': False, 'diameter': 1.0})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.459228992462158, 'Pattern1PosY': 2.645081043243408, 'Pattern1PosZ': 10.852828979492188, 'Pattern1AtX': -0.7431640028953552, 'Pattern1AtY': 8.046585083007812, 'Pattern1AtZ': 1.6323169469833374, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'Count': 60.0, 'MotionMode': 1, 'ReviseModeEnd': 1, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo047_0-C01-Link-A-1', 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'ClothWarpMode': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_00_1'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.609131097793579, 'Pattern1PosY': 3.018218994140625, 'Pattern1PosZ': 10.450798034667969, 'Pattern1AtX': -1.232666015625, 'Pattern1AtY': 8.046585083007812, 'Pattern1AtZ': 1.867614984512329, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 15.0, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_00_2', 'ASName': 'Angry_Talk'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.459228992462158, 'Pattern1PosY': 2.645081043243408, 'Pattern1PosZ': 10.852828979492188, 'Pattern1AtX': -0.7431640028953552, 'Pattern1AtY': 8.046585083007812, 'Pattern1AtZ': 1.6323169469833374, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 1, 'ReviseModeEnd': 1, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'Count': 15.0, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/HorseGod001:talk_00_3'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo047_0-C01-Link-A-1', 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'ClothWarpMode': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 3.609131097793579, 'Pattern1PosY': 3.018218994140625, 'Pattern1PosZ': 10.450798034667969, 'Pattern1AtX': -1.232666015625, 'Pattern1AtY': 8.046585083007812, 'Pattern1AtZ': 1.867614984512329, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 0, 'ReviseModeEnd': 0, 'CollisionInterpolateSkip': True, 'IsWaitFinish': False, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Count': 15.0, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'ASName': 'Angry_Talk', 'MessageId': 'EventFlowMsg/HorseGod001:talk_00_4'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'ASName': 'DemoWaitAttention', 'NoErrorCheck': False, 'ClothWarpMode': -1})
    }

    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 4.459228992462158, 'Pattern1PosY': 2.645081043243408, 'Pattern1PosZ': 10.852828979492188, 'Pattern1AtX': -0.7431640028953552, 'Pattern1AtY': 8.046585083007812, 'Pattern1AtZ': 1.6323169469833374, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'MotionMode': 1, 'ReviseModeEnd': 1, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'IsWaitFinish': False, 'Count': 15.0, 'ActorName1': 'TwnObj_FairySpring_E_01', 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})

    fork {
        HorseGod001.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/HorseGod001:talk_00_5', 'ASName': 'Wait', 'IsCloseMessageDialog': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
        GameROMPlayer.Demo_PlayASAdapt({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo047_0-C01-Link-A-1', 'IsOneTimeEndKeep': True, 'IsWaitFinish': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'DemoWait', 'ClothWarpMode': -1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'MorphingFrame': -1.0, 'NoErrorCheck': False})
    }

}
