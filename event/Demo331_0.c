-------- EventFlow: Demo331_0 --------

Actor: Npc_Challenge093Lady
entrypoint: None()
actions: ['Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialog', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_OpenMessageDialogTrig']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WarpPlayerToDestination', 'Demo_WaitFrame', 'Demo_WarpPlayer', 'Demo_ResetGimmick', 'Demo_WarpPlayerToAnchor', 'Demo_OpenMessageDialog', 'Demo_CloseMessageDialog', 'Demo_WaitMessageDialogEnd', 'Demo_WaitForASTriggerEvent', 'Demo_SetDispHeartGauge']
queries: ['ComparePlayerHeart', 'CheckPlayerRideHorse']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_PlayerWait', 'Demo_ApplyDamage', 'Demo_LookAtObject', 'Demo_PlayASAdapt', 'Demo_PlayerHorseGetOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RumbleLoopStop', 'Demo_RumbleLoop', 'Demo_Rumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[MsText01]
entrypoint: None()
actions: ['Demo_OpenMessageDialog']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble[CameraShakStop]
entrypoint: None()
actions: ['Demo_RumbleLoopStop']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleLarge']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: LastRiddenHorse_ForEvent
entrypoint: None()
actions: ['Demo_WarpToAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'HorseManeName': '', 'HorseReinsName': '', 'HorseSaddleName': '', 'CreateMode': 2}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[03]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo331_0() {
    SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StopWithFade', 'IsWaitFinish': True, 'SeCtrlType': 'None'})
    SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_BGM_01', 'IsWaitFinish': False, 'SoundDelay': 0, 'SLinkInst': ''})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 820.5174560546875, 'Pattern1PosZ': 839.3463134765625, 'Pattern1AtX': 816.8643798828125, 'Pattern1AtZ': 834.97998046875, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'Pattern1PosY': 116.4542007446289, 'Pattern1AtY': 116.44969940185547, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        if EventSystemActor.CheckPlayerRideHorse() {
            GameROMPlayer.Demo_PlayerHorseGetOff({'IsWaitFinish': True})
            LastRiddenHorse_ForEvent.Demo_WarpToAnchor({'UniqueName': 'DontDamageFlower_RestartHorse', 'AnchorName': 'TargetPosMarker', 'IsWaitFinish': True})
            Event78:
            EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'Demo331_0-C01-Link-A-0', 'AnchorName': 'DestinationAnchor'})
            Npc_Challenge093Lady.Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'WarpPointNpcCh093Lady', 'IsWaitFinish': True})
            GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
            Npc_Challenge093Lady.Demo_TurnAndLookToObject({'ActorName': 'GameROMPlayer', 'IsWaitFinish': True, 'TurnDirection': 0.0, 'ObjectId': 1, 'IsValid': False, 'FaceId': 0, 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
            Npc_Challenge093Lady.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo331_0-C01-UMii_Hylia_W-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': 0.0})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        } else {
            goto Event78
        }
    }

    Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 0, 'Color': 1, 'DispMode': 'NoLogo'})
    Npc_Challenge093Lady.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'IsWaitAS': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/DontDamageFlower:Fail_Run_St11', 'MessageOpenDelayTime': 45, 'CloseDialogOption': 0})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'NoLogo', 'Frame': 2})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'NoLogo', 'Frame': 2})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_BGM_02', 'SoundDelay': 0, 'SLinkInst': ''})
    } {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'Pattern1PosX': 819.3200073242188, 'Pattern1PosZ': 838.9099731445312, 'Pattern1AtX': 815.6699829101562, 'Pattern1AtZ': 834.5399780273438, 'ReviseModeEnd': 0, 'Pattern1Fovy': 50.0, 'Accept1FrameDelay': False, 'Count': 10.0, 'Pattern1PosY': 116.4530029296875, 'Pattern1AtY': 116.4530029296875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    Npc_Challenge093Lady.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/DontDamageFlower:Fail_Run_St12', 'MessageOpenDelayTime': 45})
    Fader.Demo_FadeOut({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'NoLogo', 'Frame': 2})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
        Fader.Demo_FadeIn({'IsWaitFinish': True, 'Color': 1, 'DispMode': 'NoLogo', 'Frame': 2})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_BGM_03', 'SoundDelay': 0, 'SLinkInst': ''})
    } {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'ActorIgnoringCollision': -1, 'ReviseModeEnd': 0, 'Pattern1Fovy': 50.0, 'Pattern1PosX': 818.5900268554688, 'Pattern1PosZ': 838.22998046875, 'Pattern1AtX': 814.9400024414062, 'Pattern1AtZ': 833.8699951171875, 'Accept1FrameDelay': False, 'Count': 10.0, 'Pattern1PosY': 116.4530029296875, 'Pattern1AtY': 116.4530029296875, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }

    Npc_Challenge093Lady.Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'ASName': '', 'IsCloseMessageDialog': True, 'CloseDialogOption': 0, 'IsWaitAS': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/DontDamageFlower:Fail_Run_St13', 'MessageOpenDelayTime': 45})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_BGM_04', 'SoundDelay': 0, 'SLinkInst': ''})
    Npc_Challenge093Lady.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo331_0-C02-UMii_Hylia_W-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 16})
    EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'Demo331_0-C02-Link-A-0', 'AnchorName': 'DestinationAnchor'})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 4})
        Npc_Challenge093Lady.Demo_OpenMessageDialogTrig({'MessageId': 'EventFlowMsg/DontDamageFlower:Fail_Run_St2', 'IsBecomingSpeaker': False, 'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 2})
    } {

        fork {
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'Pattern1Fovy': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'MotionMode': 1, 'Count': 0.0, 'Pattern1PosX': 817.8099975585938, 'Pattern1PosZ': 837.4600219726562, 'Pattern1AtX': 817.3699951171875, 'Pattern1AtZ': 837.0399780273438, 'Pattern1PosY': 118.38300323486328, 'Pattern1AtY': 116.77300262451172, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
            GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'IsWaitFinish': True, 'Pattern1Fovy': 30.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'ReviseModeEnd': 0, 'MotionMode': 1, 'Pattern1PosX': 817.9199829101562, 'Pattern1PosZ': 837.530029296875, 'Pattern1AtX': 817.47998046875, 'Pattern1AtZ': 837.1199951171875, 'Count': 5.0, 'Pattern1PosY': 118.90299987792969, 'Pattern1AtY': 117.28299713134766, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        } {
            EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 0.10000000149011612, 'Pattern': 3, 'IsWaitFinish': False})
        } {
            EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 5})
        }

    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 38})
    SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_BGM_05', 'SoundDelay': 0, 'SLinkInst': ''})
    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1AtX': 819.5, 'Pattern1AtZ': 837.7999877929688, 'Pattern1PosX': 823.7999877929688, 'Pattern1PosZ': 841.5999755859375, 'Pattern1Fovy': 50.0, 'IsWaitFinish': False, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'Pattern1PosY': 116.56300354003906, 'Pattern1AtY': 116.56300354003906, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_Challenge093Lady.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo331_0-C03-UMii_Hylia_W-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    } {
        EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 8})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo331_0-C03-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
        EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Power': 0.10000000149011612, 'Pattern': 3, 'IsWaitFinish': False})
    } {
        Npc_Challenge093Lady.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Run', 'IsTargetDemoSLinkUser': False})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 823.7999877929688, 'Pattern1PosZ': 841.5999145507812, 'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'ActorName1': 'Npc_Challenge093Lady', 'AtAppendMode': 2, 'Pattern1AtX': 0.0, 'Pattern1AtY': 1.0, 'Pattern1AtZ': 0.0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'Pattern1PosY': 116.5, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        EventSystemActor.Demo_OpenMessageDialog({'Mstxt': 'EventFlowMsg/DontDamageFlower', 'Label': 'Fail_Run', 'IsWaitFinish': True})
    } {
        EventCameraRumble[CameraShakStop].Demo_RumbleLoopStop({'IsWaitFinish': False})
        EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'Pattern': 3, 'Power': 0.05000000074505806, 'IsWaitFinish': False})
    } {
        Npc_Challenge093Lady.Demo_WarpToScheduleAnchor({'UniqueName': 'Demo331_0-C04-UMii_Hylia_W-A-0', 'AnchorName': 'DestinationAnchor', 'IsWaitFinish': True})
        Npc_Challenge093Lady.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo331_0-C04-UMii_Hylia_W-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': False, 'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_Challenge093Lady', 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 0.09368900209665298, 'Pattern1PosY': 1.1570210456848145, 'Pattern1PosZ': 3.100403070449829, 'Pattern1AtX': 4.388062000274658, 'Pattern1AtY': -0.4154820144176483, 'Pattern1AtZ': -14.07080078125, 'Pattern1Fovy': 30.000015258789062, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': False, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_Challenge093Lady.Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'IsWaitFinish': True, 'UniqueName': 'Demo331_0-C04-UMii_Hylia_W-A-1'})
        Npc_Challenge093Lady.Demo_XLinkEventFade({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Run'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_Challenge093Lady.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo331_0-C04-UMii_Hylia_W-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
        EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 18})
        EventCameraRumble.Demo_Rumble({'Sideways': False, 'Pattern': 3, 'IsWaitFinish': False, 'Count': 1, 'Power': 0.30000001192092896})
        Npc_Challenge093Lady.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'FallDown', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_WaitFrame({'Frame': 90, 'IsWaitFinish': True})
    }


    fork {
        Npc_Challenge093Lady.Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo331_0-C05-UMii_Hylia_W-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': 1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        Npc_Challenge093Lady.Demo_OpenMessageDialog({'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/DontDamageFlower:Fail_3', 'IsWaitAS': False, 'CloseDialogOption': 0, 'IsWaitFinish': True, 'MessageOpenDelayTime': 100, 'IsBecomingSpeaker': False, 'ASName': ''})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 48})
    } {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.980468988418579, 'Pattern1PosY': 0.5279620289802551, 'Pattern1PosZ': -0.8588560223579407, 'Pattern1AtX': -5.61279296875, 'Pattern1AtY': -0.021591000258922577, 'Pattern1AtZ': 2.0174560546875, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Challenge093Lady', 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 18.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2.965941905975342, 'Pattern1PosY': 1.0943150520324707, 'Pattern1PosZ': -0.7940670251846313, 'Pattern1AtX': -5.627318859100342, 'Pattern1AtY': 0.544776976108551, 'Pattern1AtZ': 2.082123041152954, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'Npc_Challenge093Lady', 'Pattern1Fovy': 18.0, 'StartCalcOnly': True, 'Count': 90.0, 'ReviseModeEnd': 0, 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'MotionMode': 0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    }


    fork {
        EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
        EventCameraRumble.Demo_RumbleLoop({'Pattern': 3, 'IsWaitFinish': False, 'Sideways': True, 'Power': 0.5})
        EventSystemActor[02].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 37})
        EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
    } {
        EventSystemActor[03].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 6})
        EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': True, 'Count': 3})
    } {
        Npc_Challenge093Lady.Demo_PlayASForDemo({'ASName': 'Demo331_0-C05-UMii_Hylia_W-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ClothWarpMode': 1, 'IsEnabledAnimeDriven': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False})
        EventSystemActor.Demo_WaitForASTriggerEvent({'EventType': 0, 'ActorName': 'Npc_Challenge093Lady', 'IsWaitFinish': True, 'UniqueName': ''})
        SoundTriggerTag.Demo_SoundTrigger({'IsWaitFinish': False, 'Sound': 'Demo_BGM_06', 'SoundDelay': 0, 'SLinkInst': ''})
        Npc_Challenge093Lady.Demo_OpenMessageDialogTrig({'IsWaitFinish': False, 'MessageId': 'EventFlowMsg/DontDamageFlower:Fail_5', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'CloseDialogOption': 3})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 37})
        Fader.Demo_FadeOut({'IsWaitFinish': True, 'Frame': 2, 'Color': 1, 'DispMode': 'NoLogo'})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'Pattern1Fovy': 50.0, 'IsWaitFinish': False, 'Pattern1AtX': 819.5999755859375, 'Pattern1AtY': 118.3499984741211, 'Pattern1AtZ': 837.5, 'Pattern1PosX': 823.9299926757812, 'Pattern1PosY': 118.8499984741211, 'Pattern1PosZ': 840.5700073242188, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 105})
        EventControllerRumble.Demo_RumbleLarge({'Count': 1, 'IsWaitFinish': True})
    }


    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 819.37451171875, 'Pattern1PosY': 119.53842163085938, 'Pattern1PosZ': 850.0944213867188, 'Pattern1AtX': 817.9790649414062, 'Pattern1AtY': 118.03046417236328, 'Pattern1AtZ': 843.02685546875, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        EventSystemActor.Demo_WarpPlayer({'WarpDestPosName': 'DontDamageFlower_Restart', 'IsWaitFinish': True, 'WarpDestMapName': 'F-5'})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo331_0-C05-Link-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'IsWaitFinish': False, 'NoErrorCheck': False})
        EventSystemActor.Demo_ResetGimmick({'IsWaitFinish': True, 'SystemResetOption': 0, 'AdditionalResetActor': '', 'IsResetCamera': False})
    } {
        Npc_Challenge093Lady.Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'IsWaitFinish': False, 'UniqueName': 'Demo331_0-C05-UMii_Hylia_W-A-0'})
        Npc_Challenge093Lady.Demo_PlayASForDemo({'IsEnabledAnimeDriven': 1, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'ASName': 'Wait', 'IsWaitFinish': False, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

    Npc_Challenge093Lady.Demo_MoveToAnchor({'AnchorUniqueName': '', 'AnchorName': 'AnchorAction1', 'ASKeyName': 'Walk', 'IsWaitFinish': False, 'IsTurnToAnchorDir': True, 'IsAlignmentAnchor': False})
    if !EventSystemActor.ComparePlayerHeart({'Threshold': 12}) {
        if !EventSystemActor.ComparePlayerHeart({'Threshold': 8}) {
            if !EventSystemActor.ComparePlayerHeart({'Threshold': 4}) {
                Event91:
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                EventSystemActor.Demo_SetDispHeartGauge({'IsDisplay': True, 'IsWaitFinish': True, 'IsGetDemo': False, 'IsDisplayEx': True})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                Fader.Demo_FadeIn({'IsWaitFinish': True, 'Frame': 1, 'Color': 1, 'DispMode': 'NoLogo'})
                SceneSoundCtrlTag.Demo_Ctrl({'BgmCtrlType': 'StartWithFade', 'SeCtrlType': 'None', 'IsWaitFinish': True})
                GameROMPlayer.Demo_PlayASAdapt({'ASName': 'Demo331_0-C05-Link-A-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': True, 'ASName': 'Demo331_0-C05-Link-A-2', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'ClothWarpMode': -1})
            } else
            if EventSystemActor.ComparePlayerHeart({'Threshold': 5}) {
                GameROMPlayer.Demo_ApplyDamage({'IsWaitFinish': True, 'Value': 4})
            }
            goto Event91
        } else
        if !EventSystemActor.ComparePlayerHeart({'Threshold': 9}) {
            GameROMPlayer.Demo_ApplyDamage({'IsWaitFinish': True, 'Value': 7})
        } else {
            GameROMPlayer.Demo_ApplyDamage({'IsWaitFinish': True, 'Value': 8})
        }
        goto Event91
    } else
    if !EventSystemActor.ComparePlayerHeart({'Threshold': 13}) {
        GameROMPlayer.Demo_ApplyDamage({'IsWaitFinish': True, 'Value': 11})
    } else {
        GameROMPlayer.Demo_ApplyDamage({'IsWaitFinish': True, 'Value': 12})
    }
    goto Event91
}
