-------- EventFlow: Npc_King_Common --------

Actor: EventSystemActor
entrypoint: None()
actions: ['Demo_FlagON', 'Demo_WaitFrame', 'Demo_ExitEventPlayer']
queries: ['CheckFlag', 'GeneralChoice2', 'CheckPlayerState', 'CheckEquipArmorSeriesType']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: GameROMPlayer
entrypoint: None()
actions: ['Demo_Idling', 'Demo_PlayerDestinationMove', 'Demo_PlayerTurnAndLookToObject', 'Demo_LookAtObject', 'Demo_PlayASAdapt']
queries: ['IsEquippedWithLowerBody']
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0, 'Weapon': '', 'DisableWeapon': False, 'Shield': '', 'DisableShield': False, 'Bow': '', 'DisableBow': False, 'ArmorHead': '', 'ArmorUpper': '', 'ArmorLower': '', 'DisableSheikPad': False}

Actor: GameRomCamera
entrypoint: None()
actions: ['Demo_PlayerHideOff', 'Demo_MovePosFlow', 'Demo_SavePoint1', 'Demo_ReturnSavePoint_1', 'Demo_BustUpFront', 'Demo_PlayerHideOn']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SceneSoundCtrlTag
entrypoint: None()
actions: ['Demo_NotifyTalk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Vagrant007
entrypoint: None()
actions: ['Demo_Talk', 'Demo_WarpToScheduleAnchor', 'Demo_BecomeSpeaker', 'Demo_MoveToAnchor', 'Demo_TurnAndLookToObject', 'Demo_WarpToAnchor']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: SoundTriggerTag
entrypoint: None()
actions: ['Demo_SoundTrigger']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

Actor: Npc_King_Vagrant001[FirstTalk(Self)]
entrypoint: FirstTalk(Self)
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_ChangePosture', 'Demo_ForbidSettingInstEventFlag']
queries: ['CheckActorAction']
params: None

Actor: Npc_King_Vagrant001[FirstTalk_Parasail(Self)]
entrypoint: FirstTalk_Parasail(Self)
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_ChangePosture', 'Demo_ForbidSettingInstEventFlag']
queries: ['CheckActorAction']
params: None

Actor: Npc_King_Vagrant001[Anataha(Self)]
entrypoint: Anataha(Self)
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_ChangePosture', 'Demo_ForbidSettingInstEventFlag']
queries: ['CheckActorAction']
params: None

Actor: Npc_King_Vagrant001[Kokoha(Self)]
entrypoint: Kokoha(Self)
actions: ['Demo_Talk', 'Demo_TurnAndLookToObject', 'Demo_PlayASForDemo', 'Demo_ChangePosture']
queries: ['CheckActorAction']
params: None

Actor: Npc_King_Vagrant001[BOKANGI_Get(Self)]
entrypoint: BOKANGI_Get(Self)
actions: ['Demo_Talk']
queries: []
params: None

void InitParasail() {

    fork {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        if EventSystemActor.CheckFlag({'FlagName': 'Dungeon_Clear_4'}) {
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo_Vagrant_Voice1'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        } else {
            SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo_Vagrant_Voice0'})
            EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
        }
    } {
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo318_0', 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
    GameROMPlayer.Demo_PlayASAdapt({'IsIgnoreSame': False, 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsEnabledAnimeDriven': -1, 'ASName': 'WaitAttentionUpper', 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
}

void Tennokoe() {
    GameRomCamera.Demo_MovePosFlow({'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'MotionMode': 1, 'StartCalcOnly': True, 'Count': 0.0, 'Cushion': 0.0, 'TargetActor1': -1, 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'Pattern1AtX': 0.0, 'Pattern1AtY': 0.0, 'Pattern1AtZ': 0.0, 'PosAppendMode': 0, 'AtAppendMode': 0, 'FovyAppendMode': 0, 'Pattern1Fovy': 0.0, 'ReviseModeEnd': 0, 'ActorName1': '', 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_WaitFrame({'Frame': 30, 'IsWaitFinish': True})

    fork {
        Npc_King_Vagrant007.Demo_WarpToAnchor({'IsWaitFinish': True, 'DirectionY': -10.0, 'DestinationZ': 1993.5, 'DestinationX': -808.739990234375, 'DestinationY': 251.72999572753906})
        Npc_King_Vagrant007.Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
    } {
        SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
        SoundTriggerTag.Demo_SoundTrigger({'SoundDelay': 0, 'SLinkInst': '', 'IsWaitFinish': False, 'Sound': 'Demo_Vagrant_Voice1'})
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 90})
    } {
        GameROMPlayer.Demo_Idling({'IsWaitFinish': True, 'DisablePhysics': False})
        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': -1, 'ASName': 'Demo318_0', 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    GameRomCamera.Demo_MovePosFlow({'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'MotionMode': 1, 'StartCalcOnly': False, 'Cushion': 0.30000001192092896, 'Pattern1Fovy': 40.00001907348633, 'IsWaitFinish': False, 'PosAppendMode': 0, 'Pattern1PosX': 0.0, 'Pattern1PosY': 0.0, 'Pattern1PosZ': 0.0, 'AtAppendMode': 0, 'Pattern1AtZ': 0.0, 'TargetActor1': -1, 'ActorName1': '', 'Pattern1AtY': -0.5, 'Count': 80.0, 'Pattern1AtX': -0.5, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    GameROMPlayer.Demo_PlayerDestinationMove({'IsWaitFinish': True, 'DestPosX': -822.5499877929688, 'DestPosY': 225.44000244140625, 'DestPosZ': 2026.6600341796875, 'StickValue': 0.20000000298023224})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})

    fork {
        Npc_King_Vagrant007.Demo_BecomeSpeaker({'IsWaitFinish': True})
    } {
        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
    } {
        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ActorName': 'Npc_King_Vagrant007', 'UniqueName': '', 'IsWaitFinish': True, 'ObjectId': 0, 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
        GameROMPlayer.Demo_PlayASAdapt({'ASName': 'WaitAttentionUpper', 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': -1, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'IsOneTimeEndKeep': True, 'NoErrorCheck': False})
    }

    Npc_King_Vagrant007.Demo_WarpToScheduleAnchor({'IsWaitFinish': True, 'UniqueName': '', 'AnchorName': 'AnchorAction2'})
    GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -823.7684936523438, 'Pattern1PosY': 225.54458618164062, 'Pattern1PosZ': 2028.109619140625, 'Pattern1AtX': -822.8248901367188, 'Pattern1AtY': 227.10592651367188, 'Pattern1AtZ': 2026.0128173828125, 'Pattern1Fovy': 30.000015258789062, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    SceneSoundCtrlTag.Demo_NotifyTalk({'CtrlType': 'BeginTalk', 'IsWaitFinish': True})
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_FirstColony010_King'}) {
        Npc_King_Vagrant007.Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:Tennokoe01'})
    }
    Npc_King_Vagrant007.Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:Tennokoe02', 'IsCloseMessageDialog': True, 'ASName': 'Point'})
    Npc_King_Vagrant007.Demo_MoveToAnchor({'IsWaitFinish': True, 'AnchorName': 'AnchorAction3', 'ASKeyName': 'Walk', 'AnchorUniqueName': '', 'IsTurnToAnchorDir': False, 'IsAlignmentAnchor': False})
    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
    GameRomCamera.Demo_MovePosFlow({'Pattern1Fovy': 50.00001907348633, 'TargetActor1': 3, 'AtAppendMode': 2, 'PosAppendMode': 2, 'ActorName1': 'GameROMPlayer', 'IsWaitFinish': True, 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'FovyAppendMode': 1, 'StartCalcOnly': False, 'ReviseModeEnd': 1, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'MotionMode': 1, 'Count': 20.0, 'Cushion': 0.10000000149011612, 'Pattern1PosX': 0.008759000338613987, 'Pattern1PosY': 1.8295899629592896, 'Pattern1PosZ': -3.679687976837158, 'Pattern1AtX': 0.0, 'Pattern1AtZ': 0.0, 'Pattern1AtY': 1.7011719942092896, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Npc_King_Tennokoe'})
    Npc_King_Vagrant007.Demo_WarpToScheduleAnchor({'AnchorName': 'AnchorAction1', 'IsWaitFinish': True, 'UniqueName': ''})
}

void FirstTalk() {
    Npc_King_Vagrant001[FirstTalk(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:FirstTalk00'})
    Event150:
    if !EventSystemActor.GeneralChoice2() {
        Event153:
        EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Common_Anataha', 'IsWaitFinish': True})
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_BustUpFront({'Count': 0.0, 'IsWaitFinish': True, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'StartCalcOnly': True, 'UseImaginaryLineAngle': True, 'Lat': 0.0, 'NearSide': True, 'Offset': [0.0, 0.0, 0.20000000298023224], 'Lng': 20.0})
        Npc_King_Vagrant001[Anataha(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:Anataha00'})
        Npc_King_Vagrant001[Anataha(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:Anataha01'})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
        GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
        Event162:
        EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'King_Vagrant_FirstTalk'})
        if EventSystemActor.CheckPlayerState({'PlayerState': 0}) {
            Event238:
            Npc_King_Vagrant001[Anataha(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:FirstTalk03'})
            Event244:
            if !EventSystemActor.GeneralChoice2() {
                Npc_King_Vagrant001[Anataha(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:FirstTalk05'})
                Event154:
                EventSystemActor.Demo_FlagON({'FlagName': 'Npc_King_Common_Kokoha', 'IsWaitFinish': True})
                Npc_King_Vagrant001[Kokoha(Self)].Demo_Talk({'IsWaitFinish': True, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:Kokoha00', 'IsCloseMessageDialog': True, 'ASName': ''})
                if Npc_King_Vagrant001[Kokoha(Self)].CheckActorAction({'ActionName': 'Root/Terror'}) {
                    Event201:
                    Npc_King_Vagrant001[Kokoha(Self)].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 5, 'IsValid': True, 'FaceId': 2, 'ActorName': 'AnchorAction3', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})

                    fork {
                        Npc_King_Vagrant001[Kokoha(Self)].Demo_PlayASForDemo({'ASName': 'Point', 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsWaitFinish': False, 'IsEnabledAnimeDriven': 1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 45})
                        GameROMPlayer.Demo_PlayASAdapt({'IsWaitFinish': False, 'IsIgnoreSame': True, 'IsEnabledAnimeDriven': -1, 'IsOneTimeEndKeep': False, 'TargetIndex': -1, 'SeqBank': 0, 'ClothWarpMode': -2, 'MorphingFrame': -1.0, 'ASName': 'DemoWait', 'NoErrorCheck': False})
                        GameROMPlayer.Demo_LookAtObject({'IsWaitFinish': True, 'ObjectId': 1, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [-712.0, 263.0, 1968.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'FaceId': 2})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
                        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -944.5894165039062, 'Pattern1PosZ': 1869.0400390625, 'Pattern1AtX': -942.1934204101562, 'Pattern1AtY': 227.71820068359375, 'Pattern1AtZ': 1872.527587890625, 'Pattern1Fovy': 50.00001907348633, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'MotionMode': 0, 'Count': 0.0, 'Cushion': 0.0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'StartCalcOnly': True, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Pattern1PosY': 229.4217987060547, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 15})
                        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 1, 'FaceId': 0, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [-712.0, 263.0, 1968.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsValid': True, 'IsWaitFinish': False, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                        GameRomCamera.Demo_MovePosFlow({'Pattern1PosX': -933.8137817382812, 'Pattern1PosZ': 1866.2750244140625, 'Pattern1AtX': -926.8899536132812, 'Pattern1AtZ': 1872.0992431640625, 'IsWaitFinish': True, 'TargetActor1': -1, 'ActorName1': '', 'UniqueName1': '', 'TargetActor2': -1, 'ActorName2': '', 'UniqueName2': '', 'PosAppendMode': 1, 'AtAppendMode': 1, 'FovyAppendMode': 1, 'StartCalcOnly': False, 'MotionMode': 0, 'LatShiftRange': 0.0, 'LngShiftRange': 0.0, 'CollisionInterpolateSkip': False, 'ReviseModeEnd': 0, 'Count': 150.0, 'Pattern1Fovy': 50.0, 'Pattern1PosY': 229.4217987060547, 'Pattern1AtY': 229.9217987060547, 'Cushion': 0.20000000298023224, 'ActorIgnoringCollision': -1, 'Accept1FrameDelay': True, 'GameDataVec3fCameraPos': '', 'GameDataVec3fCameraAt': ''})
                    }

                    Npc_King_Vagrant001[Kokoha(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:Kokoha01', 'IsCloseMessageDialog': True})
                    EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 8})
                    GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'CollisionInterpolateSkip': True, 'ReviseMode': 0})
                    GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})

                    fork {
                        Npc_King_Vagrant001[Kokoha(Self)].Demo_TurnAndLookToObject({'IsWaitFinish': True, 'ObjectId': 0, 'IsValid': True, 'FaceId': 2, 'ActorName': '', 'UniqueName': '', 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': False})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 30})
                        GameROMPlayer.Demo_PlayerTurnAndLookToObject({'ObjectId': 0, 'FaceId': 2, 'IsValid': True, 'ActorName': 'Npc_King_Vagrant001', 'IsWaitFinish': True, 'UniqueName': '', 'PosOffset': [0.0, 0.0, 0.0], 'TurnPosition': [0.0, 0.0, 0.0], 'TurnDirection': 0.0, 'IsUseSlowTurn': False, 'IsTurnToLookAtPos': False})
                    }

                    Npc_King_Vagrant001[Kokoha(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:Kokoha02', 'IsCloseMessageDialog': False})
                } else {

                    fork {
                        Npc_King_Vagrant001[Kokoha(Self)].Demo_PlayASForDemo({'ASName': 'Wait', 'IsWaitFinish': False, 'TargetIndex': -1, 'SeqBank': 0, 'IsIgnoreSame': False, 'IsEnabledAnimeDriven': 1, 'MorphingFrame': -1.0, 'ClothWarpMode': -2})
                    } {
                        EventSystemActor.Demo_WaitFrame({'IsWaitFinish': True, 'Frame': 60})
                    }

                    Npc_King_Vagrant001[Kokoha(Self)].Demo_ChangePosture({'IsWaitFinish': True, 'Posture': 'Stand'})
                    goto Event201
                }
            } else {
                Npc_King_Vagrant001[Anataha(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Common:FirstGoodBye02'})
                Npc_King_Vagrant001[Anataha(Self)].Demo_ForbidSettingInstEventFlag({'IsWaitFinish': True})
                EventSystemActor.Demo_ExitEventPlayer({'IsWaitFinish': True})
            }
        } else
        if !GameROMPlayer.IsEquippedWithLowerBody() {
            Npc_King_Vagrant001[Anataha(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:FirstTalk02'})
        } else {
            goto Event238
        }
        goto Event244
    } else {
        GameRomCamera.Demo_PlayerHideOff({'IsWaitFinish': True})
        GameRomCamera.Demo_SavePoint1({'IsWaitFinish': True})
        GameRomCamera.Demo_BustUpFront({'Count': 0.0, 'IsWaitFinish': True, 'PlayerRelative': False, 'CancelDrawOther': False, 'LatReverse': False, 'LngReverse': False, 'StartCalcOnly': True, 'UseImaginaryLineAngle': True, 'Lat': 0.0, 'NearSide': True, 'Offset': [0.0, 0.0, 0.20000000298023224], 'Lng': 20.0})
        Npc_King_Vagrant001[FirstTalk_Parasail(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:FirstGoodBye00'})
        GameRomCamera.Demo_ReturnSavePoint_1({'IsWaitFinish': True, 'Count': 0.0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False})
        GameRomCamera.Demo_PlayerHideOn({'IsWaitFinish': True})
        Npc_King_Vagrant001[FirstTalk_Parasail(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:FirstGoodBye01'})
        goto Event162
    }
}

void FirstTalk_Parasail() {
    Npc_King_Vagrant001[FirstTalk_Parasail(Self)].Demo_Talk({'IsWaitFinish': True, 'IsCloseMessageDialog': False, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:FirstTalk01'})
    goto Event150
}

void Anataha() {
    goto Event153
}

void Kokoha() {
    goto Event154
}

void BOKANGI_Get() {

    call GetDemo.GetItemByName({'IsInvalidOpenPouch': False, 'CheckTargetActorName': 'Armor_044_Upper'})

    EventSystemActor.Demo_FlagON({'IsWaitFinish': True, 'FlagName': 'Get_Vagrant_BOKANGI'})
    if EventSystemActor.CheckEquipArmorSeriesType({'CheckHead': False, 'CheckLower': False, 'CheckType': 'Winter', 'CheckUpper': True}) {
        Npc_King_Vagrant001[BOKANGI_Get(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/Npc_King_Common:Bokangi10', 'IsCloseMessageDialog': True})
    } else
    if EventSystemActor.CheckFlag({'FlagName': 'Npc_King_Vagrant003_BOKANGI'}) {
        Npc_King_Vagrant001[BOKANGI_Get(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Common:Bokangi11'})
    } else {
        Npc_King_Vagrant001[BOKANGI_Get(Self)].Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'IsCloseMessageDialog': True, 'MessageId': 'EventFlowMsg/Npc_King_Common:Bokangi13'})
    }
}
