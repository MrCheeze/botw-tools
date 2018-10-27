-------- EventFlow: Demo327_0 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_WaitFrame', 'Demo_FlagON', 'Demo_CloseMessageDialog', 'Demo_WarpPlayerToAnchor', 'Demo_WaitMessageDialogEnd', 'Demo_WarpPlayerToDestination']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Fader
entrypoint: None()
actions: ['Demo_FadeIn', 'Demo_FadeOut']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron009[Son_GoronsRock]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_MoveToAnchor', 'Demo_Idling', 'Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialog', 'Demo_ChangeEquipState', 'Demo_PlayASForDemo', 'Demo_ChangeEmotion', 'Demo_OpenMessageDialogTrig', 'Demo_XLinkEventCreate', 'Demo_XLinkEventFade', 'Demo_XLinkEventKill']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_MovePosFlow', 'Demo_XLinkEventCreate', 'Demo_GameCamera', 'Demo_CameraAnimFlow', 'Demo_CameraAnimFlowAbs', 'Demo_PlayerHideOff']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_LookAtObject', 'Demo_PlayerTurnAndLookToObject', 'Demo_PlayASAdapt', 'Demo_PlayerWait']
queries: []
params: {'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'DisableSheikPad': False}

Actor: Item_CookSet
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_PlayASForDemo']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_MeatRock
entrypoint: None()
actions: ['Demo_WarpToPos']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: BreakableRock
entrypoint: None()
actions: ['Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_GrilledMeatRock[EatTargetGrilledMeatRock]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_EventBind', 'Demo_XLinkEventFade', 'Demo_WarpToPos']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_GrilledMeatRock[GrilledMeatRockOnPan]
entrypoint: None()
actions: ['Demo_XLinkEventCreate', 'Demo_WarpToPos']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_Goron010[Father_join_Demo327_0]
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_OpenMessageDialog', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_Idling', 'Demo_WarpToAnchor', 'Demo_XLinkEventCreate']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_Ctrl']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventCameraRumble
entrypoint: None()
actions: ['Demo_RumbleLoop', 'Demo_RumbleLoopStop', 'Demo_RotRumble']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventControllerRumble
entrypoint: None()
actions: ['Demo_RumbleLarge', 'Demo_RumbleSmall']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventMessageTransmitter1
entrypoint: None()
actions: ['Demo_Msg2CameraResetNoConnect', 'Demo_Msg2CameraKeepState']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[DemoWait]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Obj_MeatRock[MeatRockOnPan]
entrypoint: None()
actions: ['Demo_PlayASForDemo', 'Demo_WarpToPos']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: EventSystemActor[forHumming]
entrypoint: None()
actions: ['Demo_WaitFrame']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Demo327_0() {
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Mute'})
    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    Npc_Goron009[Son_GoronsRock].Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    Npc_Goron009[Son_GoronsRock].Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})
    Fader.Demo_FadeOut({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})

    fork {
        GameRomCamera.Demo_CameraAnimFlowAbs({'SceneName': 'C00-0', 'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    } {
        Npc_Goron010[Father_join_Demo327_0].Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo327_0_GoronFather_Start'})
    } {
        Npc_Goron009[Son_GoronsRock].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo327_0-C01-UMii_Goron_M-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Cooking'})
    } {
        EventSystemActor.Demo_WarpPlayerToAnchor({'UniqueName': 'Demo327_0_Player_Start', 'IsWaitFinish': True, 'AnchorName': 'DestinationAnchor'})
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Item_CookSet', 'UniqueName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': False, 'FaceId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'IsIgnoreSame': True, 'ASName': 'Talk'})
    } {
        Obj_MeatRock[MeatRockOnPan].Demo_WarpToPos({'IsWaitFinish': True, 'TargetPos': [2035.1409912109375, 524.0, -2035.6800537109375], 'TargetRot': [0.0, 0.0, 0.0]})
        Obj_GrilledMeatRock[GrilledMeatRockOnPan].Demo_WarpToPos({'IsWaitFinish': True, 'TargetPos': [2035.1409912109375, 524.0, -2035.6800537109375], 'TargetRot': [0.0, 0.0, 0.0]})
    }

    Fader.Demo_FadeIn({'Frame': 0, 'Color': 1, 'IsWaitFinish': True, 'DispMode': 'Auto'})
    Npc_Goron010[Father_join_Demo327_0].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk06', 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'ASName': ''})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2028.4844970703125, 'Pattern1PosY': 525.1979370117188, 'Pattern1PosZ': -2037.7818603515625, 'Pattern1AtX': 2034.9404296875, 'Pattern1AtY': 524.4174194335938, 'Pattern1AtZ': -2035.818359375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'ASName': 'Demo327_0-C02-Link_M-A-0', 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 2})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2032.074462890625, 'Pattern1PosY': 524.8551025390625, 'Pattern1PosZ': -2041.961181640625, 'Pattern1AtX': 2034.9404296875, 'Pattern1AtY': 524.4174194335938, 'Pattern1AtZ': -2035.818359375, 'Pattern1Fovy': 50.00001907348633, 'Count': 210.0, 'MotionMode': 0, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'Cushion': 0.0, 'CollisionInterpolateSkip': True, 'Accept1FrameDelay': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo327_0-C02-UMii_Goron_M-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor[forHumming].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 70})
        Npc_Goron010[Father_join_Demo327_0].Demo_XLinkEventCreate({'IsWaitFinish': False, 'IsTargetDemoSLinkUser': False, 'SLinkKey': 'Humming', 'ELinkKey': ''})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

        fork {
            SoundTriggerTag.Demo_SoundTrigger({'Sound': 'Demo_Bgm_CookingSuccess', 'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False})
        } {
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})

            fork {
                Item_CookSet.Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Cooking', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
                Item_CookSet.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Demo_Success', 'SLinkKey': 'Success', 'IsTargetDemoSLinkUser': False})
            } {
                EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
                GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'ASName': 'GetCookingGood', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'MorphingFrame': -1.0})
            } {
                Obj_MeatRock[MeatRockOnPan].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo327_0-C02-Obj_MeatRock-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
            }

        }

    }


    fork {
        EventSystemActor.Demo_FlagON({'FlagName': 'GoronsRock_Dish', 'IsWaitFinish': True})
        Obj_GrilledMeatRock[EatTargetGrilledMeatRock].Demo_WarpToPos({'IsWaitFinish': True, 'TargetRot': [0.0, 90.0, 0.0], 'TargetPos': [2042.449951171875, 522.5999755859375, -2042.22998046875]})
    } {
        Obj_GrilledMeatRock[GrilledMeatRockOnPan].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Steam', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 5})
    Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Victory', 'IsWaitFinish': True, 'ClothWarpMode': -1})
    Npc_Goron010[Father_join_Demo327_0].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk06_2', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 15, 'ASName': 'Demo327_0-C02-UMii_Goron_M-B-1'})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_Goron009', 'SceneName': 'C04-0', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Wait', 'ClothWarpMode': -1})
    GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False, 'IsIgnoreSame': True, 'ASName': 'Talk'})
    GameROMPlayer.Demo_LookAtObject({'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Goron009', 'UniqueName': 'Son_GoronsRock', 'IsWaitFinish': True, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ObjectId': 0, 'PosOffset': [0.0, 0.0, 0.0]})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'MuteOff'})
    EventSystemActor.Demo_WarpPlayerToDestination({'DirectionY': 90.0, 'IsWaitFinish': True, 'DestinationX': 2034.550048828125, 'DestinationY': 523.1699829101562, 'DestinationZ': -2039.47998046875})
    Npc_Goron010[Father_join_Demo327_0].Demo_WarpToAnchor({'IsWaitFinish': True, 'DestinationX': 2034.6500244140625, 'DestinationY': 523.02001953125, 'DestinationZ': -2037.4599609375, 'DirectionY': 90.0})
    Npc_Goron010[Father_join_Demo327_0].Demo_TurnAndLookToObject({'IsValid': True, 'FaceId': 2, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'UniqueName': 'Son_GoronsRock', 'ActorName': 'Npc_Goron009', 'ObjectId': 1, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'IsWaitFinish': False})
    EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    Npc_Goron009[Son_GoronsRock].Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
    Npc_Goron009[Son_GoronsRock].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo327_0-C05-UMii_Goron_M-A-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    Npc_Goron009[Son_GoronsRock].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk04_1', 'IsBecomingSpeaker': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'ASName': 'Demo327_0-C05-UMii_Goron_M-A-0_Loop', 'MessageOpenDelayTime': 14})
    Npc_Goron009[Son_GoronsRock].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Demo327_0-C05-UMii_Goron_M-A-1', 'IsWaitFinish': False, 'ClothWarpMode': -1})
    EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Npc_Goron010', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'SceneName': 'C05-0', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'EndFrame': 40.0})
    EventSystemActor.Demo_WarpPlayerToDestination({'IsWaitFinish': True, 'DestinationX': 2033.52001953125, 'DestinationY': 523.3800048828125, 'DestinationZ': -2039.030029296875, 'DirectionY': 86.0})
    Npc_Goron010[Father_join_Demo327_0].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk07', 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'ASName': 'Demo327_0-C02-UMii_Goron_M-B-1', 'IsCloseMessageDialog': False})

    fork {
        Npc_Goron009[Son_GoronsRock].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk04_2', 'IsBecomingSpeaker': False, 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': ''})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_Goron009', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C09-0', 'EndFrame': -1.0})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 75})
    }

    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Npc_Goron010', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C14-0', 'StartFrame': 0.0, 'EndFrame': 5.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Npc_Goron010', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'CameraName': '', 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'EndFrame': -1.0, 'SceneName': 'C14-0', 'StartFrame': 0.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'IsWaitFinish': False, 'TargetActor': 3, 'ActorName': 'Npc_Goron009', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C13-0'})
    EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'Demo327_0_Player_Finish', 'AnchorName': 'DestinationAnchor'})
    Obj_GrilledMeatRock[EatTargetGrilledMeatRock].Demo_WarpToPos({'IsWaitFinish': True, 'TargetPos': [2043.677001953125, 522.4963989257812, -2037.873046875], 'TargetRot': [5.031300067901611, 6.305200099945068, -124.99009704589844]})
    Obj_GrilledMeatRock[EatTargetGrilledMeatRock].Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'Steam', 'SLinkKey': '', 'IsTargetDemoSLinkUser': False})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Carry'})
    Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo327_0-C06-UMii_Goron_M-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})

    fork {
        Npc_Goron009[Son_GoronsRock].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo327_0-C05-UMii_Goron_M-A-2', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        Npc_Goron009[Son_GoronsRock].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk04', 'CloseDialogOption': 0, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'ASName': 'Demo327_0-C05-UMii_Goron_M-A-2_Loop'})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        Obj_GrilledMeatRock[EatTargetGrilledMeatRock].Demo_EventBind({'ActorName': 'Npc_Goron009', 'RotOffsetX': 0.0, 'RotOffsetY': 0.0, 'RotOffsetZ': 0.0, 'TransOffsetX': 0.0, 'TransOffsetY': 0.0, 'TransOffsetZ': 0.0, 'NodeName': 'Weapon_R', 'IsContinueBind': True, 'IsWaitFinish': False, 'UniqueName': 'Son_GoronsRock'})
    }

    Obj_GrilledMeatRock[EatTargetGrilledMeatRock].Demo_XLinkEventFade({'IsWaitFinish': True, 'ELinkKey': 'Steam', 'SLinkKey': ''})

    fork {
        EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': 'Npc_Goron010', 'UniqueName': 'Father_join_Demo327_0', 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0})
        Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'IsWaitFinish': True, 'ASName': 'Demo327_0-C06-UMii_Goron_M-B-1', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        GameROMPlayer.Demo_LookAtObject({'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'IsWaitFinish': True, 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'ActorName': 'Npc_Goron009', 'UniqueName': 'Son_GoronsRock'})
        Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo327_0-C06-UMii_Goron_M-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor[DemoWait].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Npc_Goron010', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C12-0'})
        Npc_Goron009[Son_GoronsRock].Demo_OpenMessageDialogTrig({'IsWaitFinish': True, 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk04_3', 'CloseDialogOption': 3})
        EventSystemActor.Demo_WaitMessageDialogEnd({'IsWaitFinish': True})
    }

    Npc_Goron009[Son_GoronsRock].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    Npc_Goron009[Son_GoronsRock].Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Hold'})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Step020'})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'StopWithFade'})
    Npc_Goron009[Son_GoronsRock].Demo_ChangeEmotion({'IsWaitFinish': False, 'EmotionType': 'Normal', 'IsOnlyFace': False})
    Npc_Goron009[Son_GoronsRock].Demo_XLinkEventKill({'IsWaitFinish': True, 'ELinkKey': 'Demo327_0_Eat', 'SLinkKey': ''})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 3})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Npc_Goron009', 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': False, 'SceneName': 'C06-0', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    } {
        Npc_Goron009[Son_GoronsRock].Demo_OpenMessageDialog({'IsWaitFinish': True, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'IsOverWriteLabelActorName': False, 'MessageOpenDelayTime': 60, 'CloseDialogOption': 0, 'IsWaitAS': False, 'ASName': 'Demo327_0-C07-UMii_Goron_M-A-0', 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk04_4'})
        Npc_Goron009[Son_GoronsRock].Demo_MoveToAnchor({'ASKeyName': 'Walk', 'AnchorName': 'DestinationAnchor', 'IsTurnToAnchorDir': True, 'AnchorUniqueName': 'Demo327_0_GoronSon_Dig', 'IsWaitFinish': False, 'IsAlignmentAnchor': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

    fork {
        Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ASName': 'Victory', 'ClothWarpMode': -1, 'IsWaitFinish': True})
        Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Wait', 'ClothWarpMode': -1})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
        GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActorPosReferenceMode': 2, 'TargetActorDirReferenceMode': 2, 'IsWaitFinish': False, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'TargetActor': 1, 'ActorName': 'GameROMPlayer', 'SceneName': 'C15-0'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': False, 'ASName': 'TalkYes', 'NoErrorCheck': True, 'ClothWarpMode': -1})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    }


    fork {
        Npc_Goron009[Son_GoronsRock].Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'IsWaitFinish': False, 'UniqueName': 'Demo327_0_GoronSon_DigCenter'})
    } {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'SceneName': 'C07-0', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False})
    }

    Npc_Goron009[Son_GoronsRock].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    Npc_Goron009[Son_GoronsRock].Demo_OpenMessageDialog({'IsWaitFinish': False, 'ASName': 'Demo327_0-C08-UMii_Goron_M-A-0', 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk05', 'CloseDialogOption': 3, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 30, 'IsCloseMessageDialog': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'IsWaitFinish': False, 'TargetActorPosReferenceMode': 1, 'TargetActorDirReferenceMode': 1, 'SceneName': 'C08-0', 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'ActorName': 'Npc_Goron009'})
    Npc_Goron009[Son_GoronsRock].Demo_OpenMessageDialog({'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk05_2', 'ASName': 'Demo327_0-C08-UMii_Goron_M-A-0', 'CloseDialogOption': 3, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsWaitAS': False, 'MessageOpenDelayTime': 0, 'IsWaitFinish': False, 'IsCloseMessageDialog': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 105})
    } {
        EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'IsWaitFinish': False, 'Power': 0.5, 'Pattern': 3})
    } {

        call Clash()

    }

    EventSystemActor.Demo_CloseMessageDialog({'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C10-0'})

    fork {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
        BreakableRock.Demo_XLinkEventCreate({'IsWaitFinish': True, 'ELinkKey': 'RockBreak', 'SLinkKey': 'RockBreak', 'IsTargetDemoSLinkUser': False})
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Break'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    } {
        EventCameraRumble.Demo_RumbleLoop({'Sideways': False, 'IsWaitFinish': False, 'Pattern': 3, 'Power': 1.2000000476837158})
    } {

        call Clash_S()

    } {
        Npc_Goron009[Son_GoronsRock].Demo_PlayASForDemo({'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ASName': 'Demo327_0-C08-UMii_Goron_M-A-1', 'ClothWarpMode': -1})
    } {
        GameRomCamera.Demo_CameraAnimFlowAbs({'IsWaitFinish': False, 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'SceneName': 'C10-0'})
    } {
        GameROMPlayer.Demo_PlayASAdapt({'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'ClothWarpMode': -1, 'NoErrorCheck': False, 'ASName': 'Talk'})
    } {
        Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo327_0-C06-UMii_Goron_M-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    }

    EventCameraRumble.Demo_RumbleLoopStop({'IsWaitFinish': False})
    Npc_Goron009[Son_GoronsRock].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'TargetIndex': -1, 'SeqBank': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.Demo_WarpPlayerToDestination({'DestinationX': 2033.3699951171875, 'DestinationY': 523.3400268554688, 'DestinationZ': -2038.77001953125, 'DirectionY': 90.0, 'IsWaitFinish': True})
    GameRomCamera.Demo_CameraAnimFlow({'Accept1FrameDelay': True, 'TargetActor': 3, 'ActorName': 'Npc_Goron010', 'TargetActorDirReferenceMode': 1, 'TargetActorPosReferenceMode': 1, 'UniqueName': '', 'CameraName': '', 'StartFrame': 0.0, 'EndFrame': -1.0, 'DOFUse': False, 'DOFStartFrame': 0.0, 'FocalLength': 0.0, 'Aperture': 0.0, 'DOFBlurStart': 2.0, 'DOFEndFrame': 0.0, 'FocalLengthEnd': 0.0, 'ApertureEnd': 0.0, 'DOFBlurEnd': 2.0, 'OverwriteAt': False, 'OverwriteAtDist': 1.0, 'InterpolateCount': 0.0, 'BgCheck': False, 'IsWaitFinish': False, 'SceneName': 'C12-0'})
    EventCameraRumble.Demo_RotRumble({'IsWaitFinish': False, 'Pattern': 4, 'Power': 1.5, 'Count': 2})
    GameRomCamera.Demo_XLinkEventCreate({'IsWaitFinish': True, 'SLinkKey': '', 'ELinkKey': 'Demo327_Smoke', 'IsTargetDemoSLinkUser': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})
    GameROMPlayer.Demo_PlayASAdapt({'ASName': 'TalkSurprise', 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0, 'IsWaitFinish': False, 'NoErrorCheck': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
    Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Demo327_0-C10-UMii_Goron_M-B-0', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

    fork {
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2056.2958984375, 'Pattern1PosY': 522.3164672851562, 'Pattern1PosZ': -2039.5523681640625, 'Pattern1AtX': 2067.748779296875, 'Pattern1AtY': 521.7157592773438, 'Pattern1AtZ': -2039.50146484375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Count': 0.0, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': 2054.091064453125, 'Pattern1PosY': 522.43212890625, 'Pattern1PosZ': -2039.5621337890625, 'Pattern1AtX': 2067.748779296875, 'Pattern1AtY': 521.7157592773438, 'Pattern1AtZ': -2039.50146484375, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': False, 'Count': 120.0, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'AtAppendMode': 1, 'PosAppendMode': 1, 'FovyAppendMode': 1, 'Cushion': 0.0, 'StartCalcOnly': False, 'CollisionInterpolateSkip': True, 'MotionMode': 0, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    } {
        Npc_Goron009[Son_GoronsRock].Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo327_0_GoronSon_Escape', 'IsWaitFinish': True})
        Npc_Goron009[Son_GoronsRock].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
        Npc_Goron009[Son_GoronsRock].Demo_ChangeEquipState({'IsWaitFinish': True, 'EquipState': 'Invisible'})
    } {
        Npc_Goron010[Father_join_Demo327_0].Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo327_0_GoronFather_Escape', 'IsWaitFinish': True})
        Npc_Goron010[Father_join_Demo327_0].Demo_Idling({'IsWaitFinish': False, 'DisablePhysics': False})
    }

    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 25})

    call Common.Play_ReadRiddle()

    Npc_Goron009[Son_GoronsRock].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Son_Talk06', 'IsOverWriteLabelActorName': False, 'IsBecomingSpeaker': False, 'ASName': 'Wait'})
    Npc_Goron010[Father_join_Demo327_0].Demo_Talk({'IsWaitFinish': True, 'MessageId': 'EventFlowMsg/GoronsRock:Goron_Father_Talk08', 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'IsBecomingSpeaker': False, 'ASName': 'Wait'})
    SceneSoundCtrlTag.Demo_Ctrl({'IsWaitFinish': True, 'SeCtrlType': 'None', 'BgmCtrlType': 'Start'})
    EventMessageTransmitter1.Demo_Msg2CameraResetNoConnect({'IsWaitFinish': True})

    fork {
        GameRomCamera.Demo_GameCamera({'IsWaitFinish': True})
    } {
        Npc_Goron009[Son_GoronsRock].Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo327_0_GoronSon_Happy', 'IsWaitFinish': True})
        Npc_Goron009[Son_GoronsRock].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Happy_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'MorphingFrame': -1.0, 'ClothWarpMode': 1})
    } {
        Npc_Goron010[Father_join_Demo327_0].Demo_WarpToScheduleAnchor({'AnchorName': 'DestinationAnchor', 'UniqueName': 'Demo327_0_GoronFather_Happy', 'IsWaitFinish': True})
        Npc_Goron010[Father_join_Demo327_0].Demo_PlayASForDemo({'IsWaitFinish': False, 'ASName': 'Act_Happy_Wait', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 0, 'ClothWarpMode': 1, 'MorphingFrame': -1.0})
    }

    EventSystemActor.Demo_WarpPlayerToAnchor({'IsWaitFinish': True, 'UniqueName': 'Demo327_0_Player_Finish', 'AnchorName': 'DestinationAnchor'})
    GameROMPlayer.Demo_PlayerWait({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 120})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Step030'})
    EventMessageTransmitter1.Demo_Msg2CameraKeepState({'IsWaitFinish': True})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Step040'})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 1})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'GoronsRock_Finish'})
}

void Clash() {
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 10})
    EventControllerRumble.Demo_RumbleSmall({'IsWaitFinish': False, 'Count': 1})
}

void Clash_S() {
    EventSystemActor[01].Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 20})
    EventControllerRumble.Demo_RumbleLarge({'IsWaitFinish': False, 'Count': 1})
}
